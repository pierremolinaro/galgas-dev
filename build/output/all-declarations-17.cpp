#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 121)) ;
  GGS_lstring var_optionComponentName_4620 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)) ;
  GGS_commandLineOptionListAST var_options_4682 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_4682, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 129)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_4620, var_options_4682, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 130)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 129)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 129)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_5143 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 140)) ;
  GGS_lstring var_mOptionInternalName_5190 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 142)) ;
  GGS_lchar var_mOptionInvocationLetter_5243 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 144)) ;
  GGS_lstring var_mOptionInvocationString_5304 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 146)) ;
  GGS_lstring var_mOptionComment_5366 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 147)) ;
  GGS_lstring var_defaultValue_5389 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 148)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_5470 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_5470 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 151)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 153)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_5389 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 155)) ;
      var_optionDefaultValueKind_5470 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 156)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_5763 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 158)) ;
      var_defaultValue_5389 = GGS_lstring::init_21__21_ (var_v_5763.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 159)), var_v_5763.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_5470 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 160)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_5143, var_mOptionInternalName_5190, var_mOptionInvocationLetter_5243, var_mOptionInvocationString_5304, var_mOptionComment_5366, var_defaultValue_5389, var_optionDefaultValueKind_5470  COMMA_SOURCE_FILE ("optionCompilation.galgas", 163)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 147)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 153)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 155)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 158)) ;
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

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 147)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 153)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 155)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 158)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 256)) ;
  GGS_lstring var_mGUIName_8725 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  GGS_lstringlist var_importedOptionList_8763 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleGlobalAttributes_8823 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_withLexiqueListAST var_withLexiqueList_8880 = GGS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GGS_projectIndexingDescriptorList var_projectExtensionList_8941 = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 265)) ;
      GGS_lstring var_fileExtension_9027 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      GGS_lstring var_indexingPathSuffix_9091 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
      var_projectExtensionList_8941.addAssignOperation (var_fileExtension_9027, var_indexingPathSuffix_9091  COMMA_SOURCE_FILE ("guiCompilation.galgas", 270)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_8823, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_8763, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_8880, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 279)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssignOperation (var_mGUIName_8725, var_importedOptionList_8763, var_simpleGlobalAttributes_8823, var_withLexiqueList_8880, var_projectExtensionList_8941  COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 256)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 265)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 279)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 256)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 265)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 279)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 291)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  GGS_lstring var_lexiqueReference_9795 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  GGS_guiLabelListAST var_labels_9837 = GGS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleAttributes_9885 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiCompoundAttributeListAST var_compoundAttributes_9945 = GGS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 297)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 300)) ;
      GGS_uint var_displayStyle_10029 ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_10029 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)) ;
        var_displayStyle_10029 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS_terminalLabelListAST var_terminalList_10168 = GGS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_10238 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)) ;
        GGS_uint var_displayFlags_10265 ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_10265 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 315)) ;
          var_displayFlags_10265 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 318)) ;
          GGS_lbigint var_leadingStrip_10458 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_10458.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 320)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_10458.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 323)) ;
          GGS_lbigint var_endingStrip_10633 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_10633.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 325)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_10633.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 326)) ;
            }
          }
          var_displayFlags_10265 = var_leadingStrip_10458.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 328)).operator_or (var_endingStrip_10633.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 328)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 328)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_10168.addAssignOperation (var_terminal_10238, var_displayFlags_10265  COMMA_SOURCE_FILE ("guiCompilation.galgas", 331)) ;
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 333)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_9837.addAssignOperation (var_displayStyle_10029, var_terminalList_10168, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 335))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 335)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_11036 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
      GGS_lstring var_name_11071 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      GGS_lstring var_value_11096 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_11181 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
        var_value_11096 = GGS_lstring::init_21__21_ (var_value_11096.readProperty_string ().add_operation (var_v_11181.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 343)), var_v_11181.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_9945.addAssignOperation (var_key_11036, var_name_11071, var_value_11096  COMMA_SOURCE_FILE ("guiCompilation.galgas", 346)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_11358 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 348)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      GGS_lstring var_value_11404 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
      var_simpleAttributes_9885.addAssignOperation (var_name_11358, var_value_11404  COMMA_SOURCE_FILE ("guiCompilation.galgas", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 353)) ;
  ioArgument_ioWithLexiqueList.addAssignOperation (var_lexiqueReference_9795, var_labels_9837, var_simpleAttributes_9885, var_compoundAttributes_9945  COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 291)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 297)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 300)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 315)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 318)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 323)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 333)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 348)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 353)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 291)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 297)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 300)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 315)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 318)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 323)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 333)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 348)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 353)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 360)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  GGS_lstring var_optionReference_11792 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  ioArgument_ioImportedOptionList.addAssignOperation (var_optionReference_11792  COMMA_SOURCE_FILE ("guiCompilation.galgas", 363)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 360)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 360)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mKey_12071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 369)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  GGS_lstring var_mValue_12092 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_12165 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 373)) ;
    var_mValue_12092 = GGS_lstring::init_21__21_ (var_mValue_12092.readProperty_string ().add_operation (var_value_12165.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 374)), var_value_12165.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssignOperation (var_mKey_12071, var_mValue_12092  COMMA_SOURCE_FILE ("guiCompilation.galgas", 377)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 369)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 373)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 369)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 373)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 248)) ;
  GGS_lstring var_syntaxComponentName_10302 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
  GGS_lstring var_importedLexiqueReference_10364 ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_10364 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 253)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 255)) ;
    var_importedLexiqueReference_10364 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 256)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 257)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasTranslateFeature_10568 ;
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_10568 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 264)) ;
    var_hasTranslateFeature_10568 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 267)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_10745 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_10816 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_10745, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_10816, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssignOperation (var_syntaxComponentName_10302, var_importedLexiqueReference_10364, var_nonterminalDeclarationList_10745, var_ruleList_10816, var_hasTranslateFeature_10568  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 279)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 255)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 256)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 257)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 264)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 255)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 256)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 257)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 264)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 267)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 293)) ;
  GGS_lstring var_syntaxComponentName_11600 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 295)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_11665 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_11736 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_11665, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_11736, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_11600.readProperty_string (), var_syntaxComponentName_11600, var_nonterminalDeclarationList_11665, var_ruleList_11736, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 307)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 295)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 295)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 326)) ;
  GGS_lstring var_mNonterminalName_12776 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 327)) ;
  GGS_nonTerminalLabelListAST var_labels_12850 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_firstBranchFormalParameters_12937 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_12937, inCompiler) ;
  var_labels_12850.addAssignOperation (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_12937, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 333)) ;
      GGS_lstring var_labelName_13098 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 334)) ;
      GGS_formalParameterListAST var_formalParameters_13184 ;
      nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameters_13184, inCompiler) ;
      var_labels_12850.addAssignOperation (var_labelName_13098, var_formalParameters_13184, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 336))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 336)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssignOperation (var_mNonterminalName_12776, var_labels_12850  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 338)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 326)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 327)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 333)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 334)) ;
      nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 326)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 327)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 333)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 334)) ;
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
  GGS_formalParameterListAST var_mFormalParameters_13798 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameters_13798, inCompiler) ;
  GGS_location var_endOfArguments_13824 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 348)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 349)) ;
  GGS_syntaxInstructionList var_mSyntaxInstructionList_13939 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_13939, inCompiler) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_mFormalParameters_13798, var_endOfArguments_13824, var_mSyntaxInstructionList_13939, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 356))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 351)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 357)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 349)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 357)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 349)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 357)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 364)) ;
  GGS_lstring var_mNonterminalName_14399 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 365)) ;
  GGS_lstring var_labelName_14448 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 366)), inCompiler COMMA_HERE) ;
  GGS_syntaxRuleLabelListAST var_mLabelList_14499 = GGS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_14448, var_mLabelList_14499, inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 371)) ;
      var_labelName_14448 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 372)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssignOperation (var_mNonterminalName_14399, var_mLabelList_14499  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 374)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 364)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 365)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 371)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 372)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 364)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 365)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 371)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 372)) ;
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
        GGS_semanticInstructionAST var_instruction_15318 ;
        nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15318, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15318  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 391)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_15445 ;
        nt_syntax_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15445, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15445  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 394)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 398)) ;
        } break ;
        case 2: {
          GGS_string var_separator_15586 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 400)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_15586.getter_containsCharacter (GGS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 401)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 401)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 402)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 402)) ;
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        nt_semantic_5F_instruction_parse (inCompiler) ;
      } break ;
      case 2: {
        nt_syntax_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 398)) ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 398)) ;
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
  GGS_lstring var_mLabelName_3078 ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_mLabelName_3078 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 69)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
    var_mLabelName_3078 = GGS_lstring::init_21__21_ (GGS_string ("parse"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 72)), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 74)) ;
    var_mLabelName_3078 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mNonterminalName_3349 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 77)) ;
  GGS_actualParameterListAST var_mActualParameterList_3482 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_mActualParameterList_3482, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_3624 ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_3624 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 84)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_3624, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_nonterminalCallInstruction::init_21__21__21__21__21_ (var_mNonterminalName_3349.readProperty_location (), var_mNonterminalName_3349, var_mLabelName_3078, var_mActualParameterList_3482, var_grammarInstructionSyntaxDirectedTranslationResult_3624, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 74)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 77)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 84)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 74)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 77)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 84)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 73)) ;
  GGS_location var_mRepeatInstructionLocation_3365 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 74)) ;
  GGS_syntaxInstructionList var_mRepeatedInstructionList_3483 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_3483, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_3516 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 76)) ;
  GGS_listOfSyntaxInstructionList var_mRepeatBranchList_3569 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    GGS_syntaxInstructionList var_mInstructionList_3723 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_3723, inCompiler) ;
    var_mRepeatBranchList_3569.addAssignOperation (var_mInstructionList_3723, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 81))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 81)) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 84)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_3838 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 85)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_3365, var_mRepeatedInstructionList_3483, var_endOf_5F_repeated_5F_instructions_3516, var_mRepeatBranchList_3569, var_endOf_5F_repeat_5F_instruction_3838, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 73)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 84)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 73)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 84)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 69)) ;
  GGS_location var_mSelectInstructionLocation_3138 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 70)) ;
  GGS_listOfSyntaxInstructionList var_mSelectBranchList_3190 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_3317 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_3317, inCompiler) ;
  var_mSelectBranchList_3190.addAssignOperation (var_il_3317, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 73))  COMMA_SOURCE_FILE ("instruction-select.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
    GGS_syntaxInstructionList var_instructionList_3464 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3464, inCompiler) ;
    var_mSelectBranchList_3190.addAssignOperation (var_instructionList_3464, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 77))  COMMA_SOURCE_FILE ("instruction-select.galgas", 77)) ;
    if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 80)) ;
  GGS_location var_endOf_5F_select_5F_instruction_3576 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 81)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_3138, var_mSelectBranchList_3190, var_endOf_5F_select_5F_instruction_3576, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 69)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 69)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_terminalName_4022 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 85)) ;
  GGS_actualInputParameterListAST var_actualInputParameterList_4118 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_actualInputParameterList_4118, inCompiler) ;
  GGS__32_lstringlist var_indexNameList_4184 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_4184, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4319 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4449 ;
  switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4319 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4449 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 95)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4319, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4449, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_4022.readProperty_location (), var_terminalName_4022, var_actualInputParameterList_4118, var_indexNameList_4184, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4319, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4449, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 85)) ;
  nt_actual_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 95)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 85)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 95)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GGS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_5639 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 118)) ;
      GGS_lstring var_postfixName_5701 ;
      switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
        var_postfixName_5701 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 121)) ;
      } break ;
      case 2: {
        var_postfixName_5701 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssignOperation (var_indexName_5639, var_postfixName_5701  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 125)) ;
      if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 118)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 118)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  GGS_location var_instructionLocation_3425 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 78)) ;
  GGS_semanticExpressionAST var_variantExpression_3535 ;
  nt_expression_ (ioArgument_ioDeclarations, var_variantExpression_3535, inCompiler) ;
  GGS_location var_endOfVariantExpression_3561 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 81)) ;
  GGS_semanticExpressionAST var_whileExpression_3675 ;
  nt_expression_ (ioArgument_ioDeclarations, var_whileExpression_3675, inCompiler) ;
  GGS_location var_endOfWhileExpression_3699 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 84)) ;
  GGS_syntaxInstructionList var_instructionList_3821 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3821, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 86)) ;
  GGS_location var_endOfInstructionList_3855 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 87)) ;
  outArgument_outInstruction = GGS_parseLoopInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_3425, var_variantExpression_3535, var_endOfVariantExpression_3561, var_whileExpression_3675, var_endOfWhileExpression_3699, var_instructionList_3821, var_endOfInstructionList_3855, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 78)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 81)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 84)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 86)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 78)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 81)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 84)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 71)) ;
  GGS_location var_instructionLocation_3140 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 73)) ;
  GGS_listOfSyntaxInstructionList var_mParseDoBranchList_3194 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_3322 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_3322, inCompiler) ;
  var_mParseDoBranchList_3194.addAssignOperation (var_il_3322, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 76))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 76)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 78)) ;
    GGS_syntaxInstructionList var_instructionList_3474 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3474, inCompiler) ;
    var_mParseDoBranchList_3194.addAssignOperation (var_instructionList_3474, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 80))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 80)) ;
    if (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 83)) ;
  GGS_location var_endOfInstruction_3587 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 84)) ;
  outArgument_outInstruction = GGS_parseRewindInstruction::init_21__21__21_ (var_instructionLocation_3140, var_mParseDoBranchList_3194, var_endOfInstruction_3587, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 73)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 78)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 73)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 78)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, outArgument_outElseInstructionList, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
  GGS_location var_instructionLocation_5196 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 119)) ;
  GGS_semanticExpressionAST var_whenExpression_5272 ;
  nt_expression_ (ioArgument_ioDeclarations, var_whenExpression_5272, inCompiler) ;
  GGS_location var_endOfWhenExpression_5295 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 122)) ;
  GGS_syntaxInstructionList var_whenInstructionList_5392 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_whenInstructionList_5392, inCompiler) ;
  GGS_location var_endOfWhenInstructions_5420 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 124)) ;
  GGS_syntaxInstructionList var_elseInstructionList_5535 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_5535, inCompiler) ;
  GGS_location var_endOfElseInstructions_5563 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 127)) ;
  outArgument_outElseInstructionList = GGS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  outArgument_outElseInstructionList.addAssignOperation (GGS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_5196, var_whenExpression_5272, var_endOfWhenExpression_5295, var_whenInstructionList_5392, var_endOfWhenInstructions_5420, var_elseInstructionList_5535, var_endOfElseInstructions_5563, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 129)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 122)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 122)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 144)) ;
  GGS_location var_instructionLocation_6146 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 146)) ;
  GGS_semanticExpressionAST var_whenExpression_6256 ;
  nt_expression_ (ioArgument_ioDeclarations, var_whenExpression_6256, inCompiler) ;
  GGS_location var_endOfWhenExpression_6279 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 149)) ;
  GGS_syntaxInstructionList var_whenInstructionList_6399 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_whenInstructionList_6399, inCompiler) ;
  GGS_location var_endOfWhenInstructions_6427 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 151)) ;
  GGS_syntaxInstructionList var_elseInstructionList_6565 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_6565, inCompiler) ;
  GGS_location var_endOfElseInstructions_6593 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 155)) ;
  outArgument_outInstruction = GGS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_6146, var_whenExpression_6256, var_endOfWhenExpression_6279, var_whenInstructionList_6399, var_endOfWhenInstructions_6427, var_elseInstructionList_6565, var_endOfElseInstructions_6593, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 146)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 149)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 155)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 146)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 149)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 155)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  GGS_location var_instructionLocation_2242 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 48)) ;
  GGS_semanticExpressionAST var_sentExpression_2341 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sentExpression_2341, inCompiler) ;
  outArgument_outInstruction = GGS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_2242, var_sentExpression_2341, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  nt_expression_indexing (inCompiler) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbool var_hasIndexing_8300 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_8300 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 238)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_8300 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 240)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 243)) ;
  GGS_lstring var_mGrammarName_8503 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 244)) ;
  GGS_lstring var_mGrammarClass_8581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 245)) ;
  GGS_bool var_hasTranslateFeature_8635 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_8635 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 251)) ;
    var_hasTranslateFeature_8635 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
  GGS_lstringlist var_syntaxComponents_8812 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 258)) ;
    GGS_lstring var_syntaxComponent_8894 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
    var_syntaxComponents_8812.addAssignOperation (var_syntaxComponent_8894  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 260)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_startSymbol_9026 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 264)) ;
  GGS_nonTerminalLabelListAST var_mLabelList_9069 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 266)), inCompiler COMMA_HERE), var_mLabelList_9069, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      GGS_lstring var_labelName_9273 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 270)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, var_labelName_9273, var_mLabelList_9069, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstringlist var_mUnusedNonterminalList_9412 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 277)) ;
      GGS_lstring var_nonterminalSymbolName_9526 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
      var_mUnusedNonterminalList_9412.addAssignOperation (var_nonterminalSymbolName_9526  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 279)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 282)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_8300, var_mGrammarName_8503, var_mGrammarClass_8581, var_syntaxComponents_8812, var_startSymbol_9026, var_mLabelList_9069, var_mUnusedNonterminalList_9412, var_hasTranslateFeature_8635, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 283)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 243)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 245)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 258)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 264)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 270)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 277)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 282)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 243)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 245)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 258)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 264)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 270)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 277)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 282)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              const GGS_lstring constinArgument_inLabelName,
                                                                                                                              GGS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GGS_stringset var_argumentNameSet_10265 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_formalParameterList_10319 = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 302)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_argumentName_10439 ;
      nt_label_5F_formal_5F_parameter_ (ioArgument_ioDeclarations, var_argumentName_10439, var_formalParameterList_10319, inCompiler) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_argumentNameSet_10265.getter_hasKey (var_argumentName_10439.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 307)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_10439.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_10439.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)) ;
        }
      }
      var_argumentNameSet_10265.plusPlusAssignOperation (var_argumentName_10439.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 310)) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 312)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 315)) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_formalParameterList_10319, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 316))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 316)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 302)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_parse (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 312)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 315)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 302)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 312)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 315)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_11152 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
  GGS_lstring var_mTypeName_11224 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11224, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 329)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 331)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11152, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 334)), var_mTypeName_11224, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 332)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 329)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 331)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 329)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 331)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 345)) ;
  GGS_lstring var_selector_11795 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 346)) ;
  GGS_lstring var_mTypeName_11869 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11869, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 350)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 352)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11795, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 355)), var_mTypeName_11869, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 353)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 345)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 350)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 352)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 345)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 350)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 352)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_12450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 367)) ;
  GGS_lstring var_mTypeName_12522 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_12522, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 371)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 373)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_12450, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 376)), var_mTypeName_12522, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 374)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 367)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 371)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 373)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 367)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 371)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 373)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 387)) ;
  GGS_lstring var_selector_13097 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 388)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 389)) ;
  GGS_lstring var_mTypeName_13181 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13181, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 393)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 395)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13097, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 398)), var_mTypeName_13181, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 396)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 387)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 389)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 393)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 395)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 387)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 389)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 393)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 395)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_13793 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 409)) ;
  GGS_lstring var_mTypeName_13855 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13855, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 413)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 415)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13793, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 418)), var_mTypeName_13855, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 416)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 409)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 413)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 415)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 409)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 413)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 415)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 429)) ;
  GGS_lstring var_selector_14456 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 430)) ;
  GGS_lstring var_mTypeName_14530 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_14530, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 434)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 436)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_14456, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 439)), var_mTypeName_14530, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 437)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 429)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 434)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 436)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 429)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 434)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 436)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_15136 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 450)) ;
  GGS_lstring var_mTypeName_15198 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15198, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 452)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15136, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 455)), var_mTypeName_15198, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 453)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 450)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 452)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 450)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 452)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 466)) ;
  GGS_lstring var_selector_15756 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 467)) ;
  GGS_lstring var_mTypeName_15830 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15830, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 469)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15756, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 472)), var_mTypeName_15830, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 470)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 466)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 469)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 466)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 469)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 135)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_5346 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5346, inCompiler) ;
  GGS_location var_endOfPrologue_5378 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 138)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssignOperation (var_prologueInstructionList_5346, var_endOfPrologue_5378  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 139)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 135)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 138)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 135)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 150)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_5911 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5911, inCompiler) ;
  GGS_location var_endOfPrologue_5943 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 153)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssignOperation (var_prologueInstructionList_5911, var_endOfPrologue_5943  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 154)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 150)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 153)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 150)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 165)) ;
  GGS_lstring var_mSourceFileExtension_6429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 167)) ;
  GGS_lstring var_mSourceFileHelp_6499 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  GGS_lstring var_referenceGrammar_6558 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_6558 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 172)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
    var_referenceGrammar_6558 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_6734 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 178)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_6734.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_6734.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_6940 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 184)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_6940.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_6940.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 186)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_bool var_isUnused_7092 ;
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_7092 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 193)) ;
    var_isUnused_7092 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mSourceFileVariableName_7218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
  GGS_semanticInstructionListAST var_mInstructionList_7340 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_7340, inCompiler) ;
  GGS_location var_endOfInstructionList_7365 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 201)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssignOperation (var_mSourceFileExtension_6429, var_mSourceFileHelp_6499, var_mSourceFileVariableName_7218, var_isUnused_7092, var_referenceGrammar_6558, var_mInstructionList_7340, var_endOfInstructionList_7365  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 202)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 165)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 167)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 178)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 184)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 193)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 201)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 165)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 167)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 178)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 184)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 193)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 201)) ;
}

//--------------------------------------------------------------------------------------------------
//  Predeclarations
//--------------------------------------------------------------------------------------------------

class MapRootFor_headerCompositionMap ;
class MapFor_headerCompositionMap ;

//--------------------------------------------------------------------------------------------------
//  MapNodeFor_headerCompositionMap
//--------------------------------------------------------------------------------------------------

class MapNodeFor_headerCompositionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_headerCompositionMap> mInfPtr ;
  private: OptionalSharedRef <MapNodeFor_headerCompositionMap> mSupPtr ;
  public:  SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> mSharedInfo ;
  private: String mKey ;
  private: int32_t mBalance ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_headerCompositionMap (const String & inKey,
                              const GGS_headerCompositionMap_2E_element & inInfo
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (),
  mKey (inKey),
  mBalance (0) {
    mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>::make (inInfo COMMA_THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~MapNodeFor_headerCompositionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_headerCompositionMap (const OptionalSharedRef <MapNodeFor_headerCompositionMap> & inNodePtr
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (inNodePtr->mSharedInfo),
  mKey (inNodePtr->mKey),
  mBalance (inNodePtr->mBalance) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <MapNodeFor_headerCompositionMap>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <MapNodeFor_headerCompositionMap>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapNodeFor_headerCompositionMap (const MapNodeFor_headerCompositionMap &) = delete ;
  private: MapNodeFor_headerCompositionMap & operator = (const MapNodeFor_headerCompositionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateInfoArray (const OptionalSharedRef <MapNodeFor_headerCompositionMap> & inNode,
                                          TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateInfoArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mSharedInfo) ;
      populateInfoArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeyList (const OptionalSharedRef <MapNodeFor_headerCompositionMap> & inNode,
                                        GGS_lstringlist & ioList) {
    if (inNode.isNotNil ()) {
      populateKeyList (inNode->mInfPtr, ioList) ;
      ioList.addAssignOperation (inNode->mSharedInfo->mProperty_lkey COMMA_HERE) ;
      populateKeyList (inNode->mSupPtr, ioList) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeySetFromNode (const OptionalSharedRef <MapNodeFor_headerCompositionMap> & inNode,
                                               Compiler * inCompiler,
                                               GGS_stringset & ioSet) {
    if (inNode.isNotNil ()) {
      populateKeySetFromNode (inNode->mInfPtr, inCompiler, ioSet) ;
      ioSet.setter_insert (inNode->mSharedInfo->mProperty_lkey.mProperty_string, inCompiler COMMA_HERE) ;
      populateKeySetFromNode (inNode->mSupPtr, inCompiler, ioSet) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapRootFor_headerCompositionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  MapRootFor_headerCompositionMap
//--------------------------------------------------------------------------------------------------

class MapRootFor_headerCompositionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_headerCompositionMap> mOverriddenRoot ;
  private: OptionalSharedRef <MapNodeFor_headerCompositionMap> mRootNode ;
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> mCacheSortedArray ;
  private: int32_t mCount ;
  private: bool mCacheSortedArrayIsValid ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_headerCompositionMap (LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_headerCompositionMap (const OptionalSharedRef <MapRootFor_headerCompositionMap> & inOverridenMapRoot
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inOverridenMapRoot),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapRootFor_headerCompositionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapRootFor_headerCompositionMap (const MapRootFor_headerCompositionMap &) = delete ;
  private: MapRootFor_headerCompositionMap & operator = (const MapRootFor_headerCompositionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void duplicateTo (OptionalSharedRef <MapRootFor_headerCompositionMap> & outNewRoot
                             COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) { // Do not duplicate mCacheSortedArray
      outNewRoot->mRootNode = OptionalSharedRef <MapNodeFor_headerCompositionMap>::make (mRootNode COMMA_HERE) ;
      outNewRoot->mCount = mCount ;
    }
    outNewRoot->mOverriddenRoot = mOverriddenRoot ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void invalidateCacheSortedArray (void) {
    if (mCacheSortedArrayIsValid) { // Do not duplicate mCacheSortedArray
      mCacheSortedArrayIsValid = false ;
      mCacheSortedArray.removeAllKeepingCapacity () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> sortedInfoArray (void) {
    if (mCacheSortedArrayIsValid) {
      return mCacheSortedArray ;
    }else{
      TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> array (mCount COMMA_HERE) ;
      MapNodeFor_headerCompositionMap::populateInfoArray (mRootNode, array) ;
      mCacheSortedArray = array ;
      mCacheSortedArrayIsValid = true ;
      return array ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void populateKeyList (GGS_lstringlist & ioList) const {
    MapNodeFor_headerCompositionMap::populateKeyList (mRootNode, ioList) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void populateKeySet (GGS_stringset & ioSet,
                                  Compiler * inCompiler) const {
    MapNodeFor_headerCompositionMap::populateKeySetFromNode (mRootNode, inCompiler, ioSet) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_headerCompositionMap> searchNode (const String & inKey) const {
    OptionalSharedRef <MapNodeFor_headerCompositionMap> result ;
    internalSearchNode (inKey, mRootNode, result) ;
    if (result.isNil () && mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->searchNode (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   levels
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: uint32_t levels (void) const {
    uint32_t result = 1 ;
    if (mOverriddenRoot.isNotNil ()) {
      result += mOverriddenRoot->levels () ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void insertOrReplaceInfo (const GGS_headerCompositionMap_2E_element & inInfo,
                                     const bool inAllowReplacing,
                                     OptionalSharedRef <MapNodeFor_headerCompositionMap> & outExistingNode
                                     COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    const String key = inInfo.mProperty_lkey.mProperty_string.stringValue () ;
    internalRecursiveInsert (mRootNode, key, inInfo, inAllowReplacing, outExistingNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <MapNodeFor_headerCompositionMap> & ioRootPtr) {
    if (ioRootPtr->mSupPtr->mBalance >= 0) {
      ioRootPtr->mBalance += 1 ;
    }else{
      ioRootPtr->mBalance += 1 - ioRootPtr->mSupPtr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ioRootPtr->mSupPtr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mSupPtr->mBalance += 1 ;
    }

    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mSupPtr, ioRootPtr->mSupPtr->mInfPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <MapNodeFor_headerCompositionMap> & ioRootPtr) {
    if (ioRootPtr->mInfPtr->mBalance > 0) {
      ioRootPtr->mBalance -= ioRootPtr->mInfPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mBalance -= 1 ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ioRootPtr->mInfPtr->mBalance -= 1 ;
    }else{
      ioRootPtr->mInfPtr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mInfPtr, ioRootPtr->mInfPtr->mSupPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <MapNodeFor_headerCompositionMap> & ioRootPtr,
                                         const String & inKey,
                                         const GGS_headerCompositionMap_2E_element & inInfo,
                                         const bool inAllowReplacing,
                                         OptionalSharedRef <MapNodeFor_headerCompositionMap> & outExistingNode) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <MapNodeFor_headerCompositionMap>::make (inKey, inInfo COMMA_HERE) ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
      }else if (comparaison < 0) { // <
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
      }else{
        extension = false ;
        outExistingNode = ioRootPtr ;
        if (inAllowReplacing) {
          ioRootPtr->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>::make (inInfo COMMA_HERE) ;
        }
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> removeAndReturnRemovedInfo (const String & inKey) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    auto removedEntry = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> result ;
    if (removedEntry.isNotNil ()) {
      result = removedEntry->mSharedInfo ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <MapNodeFor_headerCompositionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance += 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void infBranchDecreased (OptionalSharedRef <MapNodeFor_headerCompositionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -= 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false ;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <MapNodeFor_headerCompositionMap> & ioRoot,
                                           OptionalSharedRef <MapNodeFor_headerCompositionMap> & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr.isNil ()) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_headerCompositionMap> internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <MapNodeFor_headerCompositionMap> & ioRoot,
                                     bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <MapNodeFor_headerCompositionMap> removedNode ;
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) { // <
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        mCount -= 1 ;
        removedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          removedNode = ioRoot ;
          OptionalSharedRef <MapNodeFor_headerCompositionMap> p = ioRoot ;
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool hasKey (const String & inKey, const uint32_t inLevel) const {
    bool result = false ;
    if (inLevel == 0) {
     OptionalSharedRef <MapNodeFor_headerCompositionMap> node ;
     internalSearchNode (inKey, mRootNode, node) ;
     result = node.isNotNil () ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->hasKey (inKey, inLevel - 1) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void internalSearchNode (const String & inKey,
                            const OptionalSharedRef <MapNodeFor_headerCompositionMap> & inNodePtr,
                            OptionalSharedRef <MapNodeFor_headerCompositionMap> & outInfoPtr) {
    outInfoPtr.setToNil () ;
    OptionalSharedRef <MapNodeFor_headerCompositionMap> currentNode = inNodePtr ;
    while (outInfoPtr.isNil () && currentNode.isNotNil ()) {
      const int32_t comparaison = currentNode->mKey.compare (inKey) ;
      if (comparaison > 0) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison < 0) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        outInfoPtr = currentNode ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
    uint32_t bestDistance = UINT32_MAX ;
    findNearestKeyForNode (inKey, mRootNode, bestDistance, outNearestKeyArray) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void findNearestKeyForNode (const String & inKey,
                                              const OptionalSharedRef <MapNodeFor_headerCompositionMap> & inCurrentNode,
                                              uint32_t & ioBestDistance,
                                              TC_UniqueArray <String> & ioNearestKeyArray) {
    if (inCurrentNode.isNotNil ()) {
      const uint32_t distance = inCurrentNode->mKey.LevenshteinDistanceFromString (inKey) ;
      if (ioBestDistance > distance) {
        ioBestDistance = distance ;
        ioNearestKeyArray.removeAllKeepingCapacity () ;
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }else if (ioBestDistance == distance) {
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }
      findNearestKeyForNode (inKey, inCurrentNode->mInfPtr, ioBestDistance, ioNearestKeyArray) ;
      findNearestKeyForNode (inKey, inCurrentNode->mSupPtr, ioBestDistance, ioNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapFor_headerCompositionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  MapFor_headerCompositionMap
//--------------------------------------------------------------------------------------------------

MapFor_headerCompositionMap::MapFor_headerCompositionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

MapFor_headerCompositionMap::~ MapFor_headerCompositionMap (void) {
}

//--------------------------------------------------------------------------------------------------

MapFor_headerCompositionMap::MapFor_headerCompositionMap (const MapFor_headerCompositionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

MapFor_headerCompositionMap & MapFor_headerCompositionMap::operator = (const MapFor_headerCompositionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_headerCompositionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerCompositionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerCompositionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_headerCompositionMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerCompositionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_headerCompositionMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerCompositionMap::insertOrReplace (const GGS_headerCompositionMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_headerCompositionMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerCompositionMap::performInsert (const GGS_headerCompositionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_headerCompositionMap> existingNode ;
    const bool allowReplacing = false ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>
MapFor_headerCompositionMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool MapFor_headerCompositionMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_headerCompositionMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>
MapFor_headerCompositionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_headerCompositionMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_headerCompositionMap>
MapFor_headerCompositionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_headerCompositionMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t MapFor_headerCompositionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>>
MapFor_headerCompositionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist MapFor_headerCompositionMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerCompositionMap::makeNewEmptyMapWithMapToOverride (const MapFor_headerCompositionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_headerCompositionMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerCompositionMap::getOverridenMap (MapFor_headerCompositionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t MapFor_headerCompositionMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset MapFor_headerCompositionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerCompositionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @headerCompositionMap
//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap::GGS_headerCompositionMap (void) :
MapFor_headerCompositionMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_headerCompositionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerCompositionMap::getter_hasKey (const GGS_string & inKey
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (contains (inKey.stringValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerCompositionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (containsAtLevel (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerCompositionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerCompositionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_headerCompositionMap::getter_locationForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_headerCompositionMap::getter_keyList (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = keyList (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_ GGS_headerCompositionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerCompositionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_headerCompositionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_headerCompositionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInclusion = info->mProperty_mInclusion ;
      element.mProperty_mHeaderString = info->mProperty_mHeaderString ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::class_func_mapWithMapToOverride (const GGS_headerCompositionMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_headerCompositionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::setter_insertKey (GGS_lstring inLKey,
                                                 GGS_stringset inArgument0,
                                                 GGS_string inArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_headerCompositionMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::method_searchKey (GGS_lstring inLKey,
                                                 GGS_stringset & outArgument0,
                                                 GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' key" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mInclusion ;
    outArgument1 = info->mProperty_mHeaderString ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_headerCompositionMap::getter_mInclusionForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInclusion ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_headerCompositionMap::getter_mHeaderStringForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHeaderString ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::setter_setMInclusionForKey (GGS_stringset inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_headerCompositionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInclusion = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::setter_setMHeaderStringForKey (GGS_string inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_headerCompositionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHeaderString = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    ioString.appendString (" ") ;
    ioString.appendSigned (count ()) ;
    ioString.appendString (" element(s)") ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @headerCompositionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_headerCompositionMap::DownEnumerator_headerCompositionMap (const GGS_headerCompositionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element DownEnumerator_headerCompositionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_headerCompositionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset DownEnumerator_headerCompositionMap::current_mInclusion (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInclusion ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_headerCompositionMap::current_mHeaderString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHeaderString ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @headerCompositionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_headerCompositionMap::UpEnumerator_headerCompositionMap (const GGS_headerCompositionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element UpEnumerator_headerCompositionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_headerCompositionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset UpEnumerator_headerCompositionMap::current_mInclusion (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInclusion ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_headerCompositionMap::current_mHeaderString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHeaderString ;
}


//--------------------------------------------------------------------------------------------------
//     @headerCompositionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap ("headerCompositionMap",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_headerCompositionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerCompositionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerCompositionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap result ;
  const GGS_headerCompositionMap * p = (const GGS_headerCompositionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerCompositionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Predeclarations
//--------------------------------------------------------------------------------------------------

class MapRootFor_headerRepartitionMap ;
class MapFor_headerRepartitionMap ;

//--------------------------------------------------------------------------------------------------
//  MapNodeFor_headerRepartitionMap
//--------------------------------------------------------------------------------------------------

class MapNodeFor_headerRepartitionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_headerRepartitionMap> mInfPtr ;
  private: OptionalSharedRef <MapNodeFor_headerRepartitionMap> mSupPtr ;
  public:  SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> mSharedInfo ;
  private: String mKey ;
  private: int32_t mBalance ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_headerRepartitionMap (const String & inKey,
                              const GGS_headerRepartitionMap_2E_element & inInfo
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (),
  mKey (inKey),
  mBalance (0) {
    mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>::make (inInfo COMMA_THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~MapNodeFor_headerRepartitionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_headerRepartitionMap (const OptionalSharedRef <MapNodeFor_headerRepartitionMap> & inNodePtr
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (inNodePtr->mSharedInfo),
  mKey (inNodePtr->mKey),
  mBalance (inNodePtr->mBalance) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <MapNodeFor_headerRepartitionMap>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <MapNodeFor_headerRepartitionMap>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapNodeFor_headerRepartitionMap (const MapNodeFor_headerRepartitionMap &) = delete ;
  private: MapNodeFor_headerRepartitionMap & operator = (const MapNodeFor_headerRepartitionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateInfoArray (const OptionalSharedRef <MapNodeFor_headerRepartitionMap> & inNode,
                                          TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateInfoArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mSharedInfo) ;
      populateInfoArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeyList (const OptionalSharedRef <MapNodeFor_headerRepartitionMap> & inNode,
                                        GGS_lstringlist & ioList) {
    if (inNode.isNotNil ()) {
      populateKeyList (inNode->mInfPtr, ioList) ;
      ioList.addAssignOperation (inNode->mSharedInfo->mProperty_lkey COMMA_HERE) ;
      populateKeyList (inNode->mSupPtr, ioList) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeySetFromNode (const OptionalSharedRef <MapNodeFor_headerRepartitionMap> & inNode,
                                               Compiler * inCompiler,
                                               GGS_stringset & ioSet) {
    if (inNode.isNotNil ()) {
      populateKeySetFromNode (inNode->mInfPtr, inCompiler, ioSet) ;
      ioSet.setter_insert (inNode->mSharedInfo->mProperty_lkey.mProperty_string, inCompiler COMMA_HERE) ;
      populateKeySetFromNode (inNode->mSupPtr, inCompiler, ioSet) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapRootFor_headerRepartitionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  MapRootFor_headerRepartitionMap
//--------------------------------------------------------------------------------------------------

class MapRootFor_headerRepartitionMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_headerRepartitionMap> mOverriddenRoot ;
  private: OptionalSharedRef <MapNodeFor_headerRepartitionMap> mRootNode ;
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> mCacheSortedArray ;
  private: int32_t mCount ;
  private: bool mCacheSortedArrayIsValid ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_headerRepartitionMap (LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_headerRepartitionMap (const OptionalSharedRef <MapRootFor_headerRepartitionMap> & inOverridenMapRoot
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inOverridenMapRoot),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapRootFor_headerRepartitionMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapRootFor_headerRepartitionMap (const MapRootFor_headerRepartitionMap &) = delete ;
  private: MapRootFor_headerRepartitionMap & operator = (const MapRootFor_headerRepartitionMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void duplicateTo (OptionalSharedRef <MapRootFor_headerRepartitionMap> & outNewRoot
                             COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) { // Do not duplicate mCacheSortedArray
      outNewRoot->mRootNode = OptionalSharedRef <MapNodeFor_headerRepartitionMap>::make (mRootNode COMMA_HERE) ;
      outNewRoot->mCount = mCount ;
    }
    outNewRoot->mOverriddenRoot = mOverriddenRoot ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void invalidateCacheSortedArray (void) {
    if (mCacheSortedArrayIsValid) { // Do not duplicate mCacheSortedArray
      mCacheSortedArrayIsValid = false ;
      mCacheSortedArray.removeAllKeepingCapacity () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> sortedInfoArray (void) {
    if (mCacheSortedArrayIsValid) {
      return mCacheSortedArray ;
    }else{
      TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> array (mCount COMMA_HERE) ;
      MapNodeFor_headerRepartitionMap::populateInfoArray (mRootNode, array) ;
      mCacheSortedArray = array ;
      mCacheSortedArrayIsValid = true ;
      return array ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void populateKeyList (GGS_lstringlist & ioList) const {
    MapNodeFor_headerRepartitionMap::populateKeyList (mRootNode, ioList) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void populateKeySet (GGS_stringset & ioSet,
                                  Compiler * inCompiler) const {
    MapNodeFor_headerRepartitionMap::populateKeySetFromNode (mRootNode, inCompiler, ioSet) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_headerRepartitionMap> searchNode (const String & inKey) const {
    OptionalSharedRef <MapNodeFor_headerRepartitionMap> result ;
    internalSearchNode (inKey, mRootNode, result) ;
    if (result.isNil () && mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->searchNode (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   levels
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: uint32_t levels (void) const {
    uint32_t result = 1 ;
    if (mOverriddenRoot.isNotNil ()) {
      result += mOverriddenRoot->levels () ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void insertOrReplaceInfo (const GGS_headerRepartitionMap_2E_element & inInfo,
                                     const bool inAllowReplacing,
                                     OptionalSharedRef <MapNodeFor_headerRepartitionMap> & outExistingNode
                                     COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    const String key = inInfo.mProperty_lkey.mProperty_string.stringValue () ;
    internalRecursiveInsert (mRootNode, key, inInfo, inAllowReplacing, outExistingNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <MapNodeFor_headerRepartitionMap> & ioRootPtr) {
    if (ioRootPtr->mSupPtr->mBalance >= 0) {
      ioRootPtr->mBalance += 1 ;
    }else{
      ioRootPtr->mBalance += 1 - ioRootPtr->mSupPtr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ioRootPtr->mSupPtr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mSupPtr->mBalance += 1 ;
    }

    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mSupPtr, ioRootPtr->mSupPtr->mInfPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <MapNodeFor_headerRepartitionMap> & ioRootPtr) {
    if (ioRootPtr->mInfPtr->mBalance > 0) {
      ioRootPtr->mBalance -= ioRootPtr->mInfPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mBalance -= 1 ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ioRootPtr->mInfPtr->mBalance -= 1 ;
    }else{
      ioRootPtr->mInfPtr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mInfPtr, ioRootPtr->mInfPtr->mSupPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <MapNodeFor_headerRepartitionMap> & ioRootPtr,
                                         const String & inKey,
                                         const GGS_headerRepartitionMap_2E_element & inInfo,
                                         const bool inAllowReplacing,
                                         OptionalSharedRef <MapNodeFor_headerRepartitionMap> & outExistingNode) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <MapNodeFor_headerRepartitionMap>::make (inKey, inInfo COMMA_HERE) ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
      }else if (comparaison < 0) { // <
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
      }else{
        extension = false ;
        outExistingNode = ioRootPtr ;
        if (inAllowReplacing) {
          ioRootPtr->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>::make (inInfo COMMA_HERE) ;
        }
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> removeAndReturnRemovedInfo (const String & inKey) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    auto removedEntry = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> result ;
    if (removedEntry.isNotNil ()) {
      result = removedEntry->mSharedInfo ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <MapNodeFor_headerRepartitionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance += 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void infBranchDecreased (OptionalSharedRef <MapNodeFor_headerRepartitionMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -= 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false ;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <MapNodeFor_headerRepartitionMap> & ioRoot,
                                           OptionalSharedRef <MapNodeFor_headerRepartitionMap> & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr.isNil ()) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_headerRepartitionMap> internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <MapNodeFor_headerRepartitionMap> & ioRoot,
                                     bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <MapNodeFor_headerRepartitionMap> removedNode ;
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) { // <
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        mCount -= 1 ;
        removedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          removedNode = ioRoot ;
          OptionalSharedRef <MapNodeFor_headerRepartitionMap> p = ioRoot ;
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool hasKey (const String & inKey, const uint32_t inLevel) const {
    bool result = false ;
    if (inLevel == 0) {
     OptionalSharedRef <MapNodeFor_headerRepartitionMap> node ;
     internalSearchNode (inKey, mRootNode, node) ;
     result = node.isNotNil () ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->hasKey (inKey, inLevel - 1) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void internalSearchNode (const String & inKey,
                            const OptionalSharedRef <MapNodeFor_headerRepartitionMap> & inNodePtr,
                            OptionalSharedRef <MapNodeFor_headerRepartitionMap> & outInfoPtr) {
    outInfoPtr.setToNil () ;
    OptionalSharedRef <MapNodeFor_headerRepartitionMap> currentNode = inNodePtr ;
    while (outInfoPtr.isNil () && currentNode.isNotNil ()) {
      const int32_t comparaison = currentNode->mKey.compare (inKey) ;
      if (comparaison > 0) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison < 0) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        outInfoPtr = currentNode ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
    uint32_t bestDistance = UINT32_MAX ;
    findNearestKeyForNode (inKey, mRootNode, bestDistance, outNearestKeyArray) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void findNearestKeyForNode (const String & inKey,
                                              const OptionalSharedRef <MapNodeFor_headerRepartitionMap> & inCurrentNode,
                                              uint32_t & ioBestDistance,
                                              TC_UniqueArray <String> & ioNearestKeyArray) {
    if (inCurrentNode.isNotNil ()) {
      const uint32_t distance = inCurrentNode->mKey.LevenshteinDistanceFromString (inKey) ;
      if (ioBestDistance > distance) {
        ioBestDistance = distance ;
        ioNearestKeyArray.removeAllKeepingCapacity () ;
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }else if (ioBestDistance == distance) {
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }
      findNearestKeyForNode (inKey, inCurrentNode->mInfPtr, ioBestDistance, ioNearestKeyArray) ;
      findNearestKeyForNode (inKey, inCurrentNode->mSupPtr, ioBestDistance, ioNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapFor_headerRepartitionMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  MapFor_headerRepartitionMap
//--------------------------------------------------------------------------------------------------

MapFor_headerRepartitionMap::MapFor_headerRepartitionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

MapFor_headerRepartitionMap::~ MapFor_headerRepartitionMap (void) {
}

//--------------------------------------------------------------------------------------------------

MapFor_headerRepartitionMap::MapFor_headerRepartitionMap (const MapFor_headerRepartitionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

MapFor_headerRepartitionMap & MapFor_headerRepartitionMap::operator = (const MapFor_headerRepartitionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_headerRepartitionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerRepartitionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerRepartitionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_headerRepartitionMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerRepartitionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_headerRepartitionMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerRepartitionMap::insertOrReplace (const GGS_headerRepartitionMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_headerRepartitionMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerRepartitionMap::performInsert (const GGS_headerRepartitionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_headerRepartitionMap> existingNode ;
    const bool allowReplacing = false ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>
MapFor_headerRepartitionMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool MapFor_headerRepartitionMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_headerRepartitionMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>
MapFor_headerRepartitionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_headerRepartitionMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_headerRepartitionMap>
MapFor_headerRepartitionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_headerRepartitionMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t MapFor_headerRepartitionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>>
MapFor_headerRepartitionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist MapFor_headerRepartitionMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerRepartitionMap::makeNewEmptyMapWithMapToOverride (const MapFor_headerRepartitionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_headerRepartitionMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerRepartitionMap::getOverridenMap (MapFor_headerRepartitionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t MapFor_headerRepartitionMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset MapFor_headerRepartitionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_headerRepartitionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @headerRepartitionMap
//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap::GGS_headerRepartitionMap (void) :
MapFor_headerRepartitionMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_headerRepartitionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerRepartitionMap::getter_hasKey (const GGS_string & inKey
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (contains (inKey.stringValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerRepartitionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (containsAtLevel (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerRepartitionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerRepartitionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_headerRepartitionMap::getter_locationForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_headerRepartitionMap::getter_keyList (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = keyList (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_ GGS_headerRepartitionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerRepartitionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_headerRepartitionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_headerRepartitionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mHeaderFileName = info->mProperty_mHeaderFileName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::class_func_mapWithMapToOverride (const GGS_headerRepartitionMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_headerRepartitionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::setter_insertKey (GGS_lstring inLKey,
                                                 GGS_string inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_headerRepartitionMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::method_searchKey (GGS_lstring inLKey,
                                                 GGS_string & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' key" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mHeaderFileName ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_headerRepartitionMap::getter_mHeaderFileNameForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHeaderFileName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::setter_setMHeaderFileNameForKey (GGS_string inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_headerRepartitionMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHeaderFileName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    ioString.appendString (" ") ;
    ioString.appendSigned (count ()) ;
    ioString.appendString (" element(s)") ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @headerRepartitionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_headerRepartitionMap::DownEnumerator_headerRepartitionMap (const GGS_headerRepartitionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element DownEnumerator_headerRepartitionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_headerRepartitionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_headerRepartitionMap::current_mHeaderFileName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHeaderFileName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @headerRepartitionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_headerRepartitionMap::UpEnumerator_headerRepartitionMap (const GGS_headerRepartitionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element UpEnumerator_headerRepartitionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_headerRepartitionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_headerRepartitionMap::current_mHeaderFileName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHeaderFileName ;
}


//--------------------------------------------------------------------------------------------------
//     @headerRepartitionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap ("headerRepartitionMap",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_headerRepartitionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerRepartitionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerRepartitionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap result ;
  const GGS_headerRepartitionMap * p = (const GGS_headerRepartitionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerRepartitionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Predeclarations
//--------------------------------------------------------------------------------------------------

class MapRootFor_projectQualifiedFeatureMap ;
class MapFor_projectQualifiedFeatureMap ;

//--------------------------------------------------------------------------------------------------
//  MapNodeFor_projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

class MapNodeFor_projectQualifiedFeatureMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> mInfPtr ;
  private: OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> mSupPtr ;
  public:  SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> mSharedInfo ;
  private: String mKey ;
  private: int32_t mBalance ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_projectQualifiedFeatureMap (const String & inKey,
                              const GGS_projectQualifiedFeatureMap_2E_element & inInfo
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (),
  mKey (inKey),
  mBalance (0) {
    mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>::make (inInfo COMMA_THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~MapNodeFor_projectQualifiedFeatureMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapNodeFor_projectQualifiedFeatureMap (const OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & inNodePtr
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (inNodePtr->mSharedInfo),
  mKey (inNodePtr->mKey),
  mBalance (inNodePtr->mBalance) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapNodeFor_projectQualifiedFeatureMap (const MapNodeFor_projectQualifiedFeatureMap &) = delete ;
  private: MapNodeFor_projectQualifiedFeatureMap & operator = (const MapNodeFor_projectQualifiedFeatureMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateInfoArray (const OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & inNode,
                                          TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateInfoArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mSharedInfo) ;
      populateInfoArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeyList (const OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & inNode,
                                        GGS_lstringlist & ioList) {
    if (inNode.isNotNil ()) {
      populateKeyList (inNode->mInfPtr, ioList) ;
      ioList.addAssignOperation (inNode->mSharedInfo->mProperty_lkey COMMA_HERE) ;
      populateKeyList (inNode->mSupPtr, ioList) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeySetFromNode (const OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & inNode,
                                               Compiler * inCompiler,
                                               GGS_stringset & ioSet) {
    if (inNode.isNotNil ()) {
      populateKeySetFromNode (inNode->mInfPtr, inCompiler, ioSet) ;
      ioSet.setter_insert (inNode->mSharedInfo->mProperty_lkey.mProperty_string, inCompiler COMMA_HERE) ;
      populateKeySetFromNode (inNode->mSupPtr, inCompiler, ioSet) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapRootFor_projectQualifiedFeatureMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  MapRootFor_projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

class MapRootFor_projectQualifiedFeatureMap final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_projectQualifiedFeatureMap> mOverriddenRoot ;
  private: OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> mRootNode ;
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> mCacheSortedArray ;
  private: int32_t mCount ;
  private: bool mCacheSortedArrayIsValid ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_projectQualifiedFeatureMap (LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapRootFor_projectQualifiedFeatureMap (const OptionalSharedRef <MapRootFor_projectQualifiedFeatureMap> & inOverridenMapRoot
                              COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inOverridenMapRoot),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapRootFor_projectQualifiedFeatureMap (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: MapRootFor_projectQualifiedFeatureMap (const MapRootFor_projectQualifiedFeatureMap &) = delete ;
  private: MapRootFor_projectQualifiedFeatureMap & operator = (const MapRootFor_projectQualifiedFeatureMap &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void duplicateTo (OptionalSharedRef <MapRootFor_projectQualifiedFeatureMap> & outNewRoot
                             COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) { // Do not duplicate mCacheSortedArray
      outNewRoot->mRootNode = OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap>::make (mRootNode COMMA_HERE) ;
      outNewRoot->mCount = mCount ;
    }
    outNewRoot->mOverriddenRoot = mOverriddenRoot ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void invalidateCacheSortedArray (void) {
    if (mCacheSortedArrayIsValid) { // Do not duplicate mCacheSortedArray
      mCacheSortedArrayIsValid = false ;
      mCacheSortedArray.removeAllKeepingCapacity () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> sortedInfoArray (void) {
    if (mCacheSortedArrayIsValid) {
      return mCacheSortedArray ;
    }else{
      TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> array (mCount COMMA_HERE) ;
      MapNodeFor_projectQualifiedFeatureMap::populateInfoArray (mRootNode, array) ;
      mCacheSortedArray = array ;
      mCacheSortedArrayIsValid = true ;
      return array ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void populateKeyList (GGS_lstringlist & ioList) const {
    MapNodeFor_projectQualifiedFeatureMap::populateKeyList (mRootNode, ioList) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void populateKeySet (GGS_stringset & ioSet,
                                  Compiler * inCompiler) const {
    MapNodeFor_projectQualifiedFeatureMap::populateKeySetFromNode (mRootNode, inCompiler, ioSet) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> searchNode (const String & inKey) const {
    OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> result ;
    internalSearchNode (inKey, mRootNode, result) ;
    if (result.isNil () && mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->searchNode (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   levels
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: uint32_t levels (void) const {
    uint32_t result = 1 ;
    if (mOverriddenRoot.isNotNil ()) {
      result += mOverriddenRoot->levels () ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void insertOrReplaceInfo (const GGS_projectQualifiedFeatureMap_2E_element & inInfo,
                                     const bool inAllowReplacing,
                                     OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & outExistingNode
                                     COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    const String key = inInfo.mProperty_lkey.mProperty_string.stringValue () ;
    internalRecursiveInsert (mRootNode, key, inInfo, inAllowReplacing, outExistingNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & ioRootPtr) {
    if (ioRootPtr->mSupPtr->mBalance >= 0) {
      ioRootPtr->mBalance += 1 ;
    }else{
      ioRootPtr->mBalance += 1 - ioRootPtr->mSupPtr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ioRootPtr->mSupPtr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mSupPtr->mBalance += 1 ;
    }

    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mSupPtr, ioRootPtr->mSupPtr->mInfPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & ioRootPtr) {
    if (ioRootPtr->mInfPtr->mBalance > 0) {
      ioRootPtr->mBalance -= ioRootPtr->mInfPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mBalance -= 1 ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ioRootPtr->mInfPtr->mBalance -= 1 ;
    }else{
      ioRootPtr->mInfPtr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mInfPtr, ioRootPtr->mInfPtr->mSupPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & ioRootPtr,
                                         const String & inKey,
                                         const GGS_projectQualifiedFeatureMap_2E_element & inInfo,
                                         const bool inAllowReplacing,
                                         OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & outExistingNode) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap>::make (inKey, inInfo COMMA_HERE) ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
      }else if (comparaison < 0) { // <
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
      }else{
        extension = false ;
        outExistingNode = ioRootPtr ;
        if (inAllowReplacing) {
          ioRootPtr->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>::make (inInfo COMMA_HERE) ;
        }
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> removeAndReturnRemovedInfo (const String & inKey) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    auto removedEntry = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> result ;
    if (removedEntry.isNotNil ()) {
      result = removedEntry->mSharedInfo ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance += 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void infBranchDecreased (OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -= 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false ;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & ioRoot,
                                           OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr.isNil ()) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & ioRoot,
                                     bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> removedNode ;
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) { // <
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        mCount -= 1 ;
        removedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          removedNode = ioRoot ;
          OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> p = ioRoot ;
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool hasKey (const String & inKey, const uint32_t inLevel) const {
    bool result = false ;
    if (inLevel == 0) {
     OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> node ;
     internalSearchNode (inKey, mRootNode, node) ;
     result = node.isNotNil () ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->hasKey (inKey, inLevel - 1) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void internalSearchNode (const String & inKey,
                            const OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & inNodePtr,
                            OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & outInfoPtr) {
    outInfoPtr.setToNil () ;
    OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> currentNode = inNodePtr ;
    while (outInfoPtr.isNil () && currentNode.isNotNil ()) {
      const int32_t comparaison = currentNode->mKey.compare (inKey) ;
      if (comparaison > 0) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison < 0) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        outInfoPtr = currentNode ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
    uint32_t bestDistance = UINT32_MAX ;
    findNearestKeyForNode (inKey, mRootNode, bestDistance, outNearestKeyArray) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void findNearestKeyForNode (const String & inKey,
                                              const OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> & inCurrentNode,
                                              uint32_t & ioBestDistance,
                                              TC_UniqueArray <String> & ioNearestKeyArray) {
    if (inCurrentNode.isNotNil ()) {
      const uint32_t distance = inCurrentNode->mKey.LevenshteinDistanceFromString (inKey) ;
      if (ioBestDistance > distance) {
        ioBestDistance = distance ;
        ioNearestKeyArray.removeAllKeepingCapacity () ;
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }else if (ioBestDistance == distance) {
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }
      findNearestKeyForNode (inKey, inCurrentNode->mInfPtr, ioBestDistance, ioNearestKeyArray) ;
      findNearestKeyForNode (inKey, inCurrentNode->mSupPtr, ioBestDistance, ioNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class MapFor_projectQualifiedFeatureMap ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  MapFor_projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

MapFor_projectQualifiedFeatureMap::MapFor_projectQualifiedFeatureMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

MapFor_projectQualifiedFeatureMap::~ MapFor_projectQualifiedFeatureMap (void) {
}

//--------------------------------------------------------------------------------------------------

MapFor_projectQualifiedFeatureMap::MapFor_projectQualifiedFeatureMap (const MapFor_projectQualifiedFeatureMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

MapFor_projectQualifiedFeatureMap & MapFor_projectQualifiedFeatureMap::operator = (const MapFor_projectQualifiedFeatureMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_projectQualifiedFeatureMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_projectQualifiedFeatureMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_projectQualifiedFeatureMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <MapRootFor_projectQualifiedFeatureMap>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_projectQualifiedFeatureMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <MapRootFor_projectQualifiedFeatureMap>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_projectQualifiedFeatureMap::insertOrReplace (const GGS_projectQualifiedFeatureMap_2E_element & inElement
                                                 COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> unusedExistingNode ;
    const bool allowReplacing = true ;
    mSharedRoot->insertOrReplaceInfo (inElement, allowReplacing, unusedExistingNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_projectQualifiedFeatureMap::performInsert (const GGS_projectQualifiedFeatureMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> existingNode ;
    const bool allowReplacing = false ;
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
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->mOverriddenRoot.isNotNil ())) {
      existingNode = mSharedRoot->mOverriddenRoot->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>
MapFor_projectQualifiedFeatureMap::removeAndReturnRemovedInfo (const String & inKey
                                                       COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    return mSharedRoot->removeAndReturnRemovedInfo (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool MapFor_projectQualifiedFeatureMap::contains (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool MapFor_projectQualifiedFeatureMap::containsAtLevel (const String & inKey, const uint32_t inLevel) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey, inLevel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>
MapFor_projectQualifiedFeatureMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap>
MapFor_projectQualifiedFeatureMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t MapFor_projectQualifiedFeatureMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>>
MapFor_projectQualifiedFeatureMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist MapFor_projectQualifiedFeatureMap::keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_projectQualifiedFeatureMap::makeNewEmptyMapWithMapToOverride (const MapFor_projectQualifiedFeatureMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) {
  if (inOverridenMap.isValid ()) {
    mSharedRoot = OptionalSharedRef <MapRootFor_projectQualifiedFeatureMap>::make (inOverridenMap.mSharedRoot COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void MapFor_projectQualifiedFeatureMap::getOverridenMap (MapFor_projectQualifiedFeatureMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    ioResult.mSharedRoot = mSharedRoot->mOverriddenRoot ;
    if (ioResult.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t MapFor_projectQualifiedFeatureMap::levels (void) const {
  uint32_t result = 0 ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->levels () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset MapFor_projectQualifiedFeatureMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void MapFor_projectQualifiedFeatureMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap::GGS_projectQualifiedFeatureMap (void) :
MapFor_projectQualifiedFeatureMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_projectQualifiedFeatureMap::getter_hasKey (const GGS_string & inKey
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (contains (inKey.stringValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_projectQualifiedFeatureMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                               const GGS_uint & inLevel
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (containsAtLevel (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_projectQualifiedFeatureMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_projectQualifiedFeatureMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_projectQualifiedFeatureMap::getter_locationForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_projectQualifiedFeatureMap::getter_keyList (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = keyList (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_ GGS_projectQualifiedFeatureMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_projectQualifiedFeatureMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_projectQualifiedFeatureMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_projectQualifiedFeatureMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFeatureValue = info->mProperty_mFeatureValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::class_func_mapWithMapToOverride (const GGS_projectQualifiedFeatureMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_projectQualifiedFeatureMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::setter_insertKey (GGS_lstring inLKey,
                                                       GGS_lstring inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_projectQualifiedFeatureMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::method_searchKey (GGS_lstring inLKey,
                                                       GGS_lstring & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' attribute is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mFeatureValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_projectQualifiedFeatureMap::getter_mFeatureValueForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFeatureValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::setter_setMFeatureValueForKey (GGS_lstring inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <MapNodeFor_projectQualifiedFeatureMap> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFeatureValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    ioString.appendString (" ") ;
    ioString.appendSigned (count ()) ;
    ioString.appendString (" element(s)") ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_projectQualifiedFeatureMap::DownEnumerator_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element DownEnumerator_projectQualifiedFeatureMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_projectQualifiedFeatureMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_projectQualifiedFeatureMap::current_mFeatureValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFeatureValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_projectQualifiedFeatureMap::UpEnumerator_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element UpEnumerator_projectQualifiedFeatureMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_projectQualifiedFeatureMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_projectQualifiedFeatureMap::current_mFeatureValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFeatureValue ;
}


//--------------------------------------------------------------------------------------------------
//     @projectQualifiedFeatureMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ("projectQualifiedFeatureMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_projectQualifiedFeatureMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectQualifiedFeatureMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectQualifiedFeatureMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap result ;
  const GGS_projectQualifiedFeatureMap * p = (const GGS_projectQualifiedFeatureMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectQualifiedFeatureMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeGroupList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public: GGS_XCodeGroupList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeGroupList (const GGS_string & in_mGroupReference,
                                             const GGS_string & in_mGroupName,
                                             const GGS_string & in_mGroupPath,
                                             const GGS_stringlist & in_mChildrenRefs
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GGS_string & in_mGroupReference,
                                                                      const GGS_string & in_mGroupName,
                                                                      const GGS_string & in_mGroupPath,
                                                                      const GGS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeGroupList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupReference" ":") ;
  mObject.mProperty_mGroupReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupName" ":") ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupPath" ":") ;
  mObject.mProperty_mGroupPath.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mChildrenRefs" ":") ;
  mObject.mProperty_mChildrenRefs.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_XCodeGroupList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_XCodeGroupList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusPlusAssignOperation (const GGS_XCodeGroupList_2E_element & inValue
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                 const GGS_string & inOperand1,
                                                                 const GGS_string & inOperand2,
                                                                 const GGS_stringlist & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_XCodeGroupList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_XCodeGroupList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GGS_string & in_mGroupReference,
                                                    const GGS_string & in_mGroupName,
                                                    const GGS_string & in_mGroupPath,
                                                    const GGS_stringlist & in_mChildrenRefs
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (in_mGroupReference,
                                                    in_mGroupName,
                                                    in_mGroupPath,
                                                    in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::addAssignOperation (const GGS_string & inOperand0,
                                             const GGS_string & inOperand1,
                                             const GGS_string & inOperand2,
                                             const GGS_stringlist & inOperand3
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_append (const GGS_string inOperand0,
                                        const GGS_string inOperand1,
                                        const GGS_string inOperand2,
                                        const GGS_stringlist inOperand3,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_insertAtIndex (const GGS_string inOperand0,
                                               const GGS_string inOperand1,
                                               const GGS_string inOperand2,
                                               const GGS_stringlist inOperand3,
                                               const GGS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_removeAtIndex (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               const GGS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
      outOperand0 = p->mObject.mProperty_mGroupReference ;
      outOperand1 = p->mObject.mProperty_mGroupName ;
      outOperand2 = p->mObject.mProperty_mGroupPath ;
      outOperand3 = p->mObject.mProperty_mChildrenRefs ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_popFirst (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_stringlist & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_popLast (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         GGS_stringlist & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::method_first (GGS_string & outOperand0,
                                       GGS_string & outOperand1,
                                       GGS_string & outOperand2,
                                       GGS_stringlist & outOperand3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::method_last (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      GGS_stringlist & outOperand3,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::add_operation (const GGS_XCodeGroupList & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListWithRange (const GGS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result = GGS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result = GGS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListToIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result = GGS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusAssignOperation (const GGS_XCodeGroupList inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupNameAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeGroupList::getter_mGroupNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupPathAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupPath = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeGroupList::getter_mGroupPathAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupPath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GGS_stringlist inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mChildrenRefs = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mChildrenRefs ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeGroupList::DownEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element DownEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeGroupList::UpEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element UpEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeGroupList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  const GGS_XCodeGroupList * p = (const GGS_XCodeGroupList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeGroupList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeToolTargetList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeToolTargetList : public cCollectionElement {
  public: GGS_XCodeToolTargetList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeToolTargetList (const GGS_string & in_mTargetRef,
                                                  const GGS_string & in_mTargetName,
                                                  const GGS_string & in_mProductFileReference,
                                                  const GGS_string & in_mProductFileName,
                                                  const GGS_stringlist & in_mBuildPhaseRefList,
                                                  const GGS_string & in_mBuildPhaseRef,
                                                  const GGS_string & in_mBuildConfigurationListRef,
                                                  const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                  const GGS_string & in_mBuildConfigurationRef,
                                                  const GGS_stringlist & in_mFrameworksFileRefList,
                                                  const GGS_string & in_mFrameworkBuildPhaseRef
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeToolTargetList (const GGS_XCodeToolTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GGS_string & in_mTargetRef,
                                                                                const GGS_string & in_mTargetName,
                                                                                const GGS_string & in_mProductFileReference,
                                                                                const GGS_string & in_mProductFileName,
                                                                                const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                const GGS_string & in_mBuildPhaseRef,
                                                                                const GGS_string & in_mBuildConfigurationListRef,
                                                                                const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                const GGS_string & in_mBuildConfigurationRef,
                                                                                const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                const GGS_string & in_mFrameworkBuildPhaseRef
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GGS_XCodeToolTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeToolTargetList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetRef" ":") ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetName" ":") ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileReference" ":") ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileName" ":") ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRefList" ":") ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRef" ":") ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationListRef" ":") ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationSettingList" ":") ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationRef" ":") ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworksFileRefList" ":") ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworkBuildPhaseRef" ":") ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_XCodeToolTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_XCodeToolTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::plusPlusAssignOperation (const GGS_XCodeToolTargetList_2E_element & inValue
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeToolTargetList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                           const GGS_string & inOperand1,
                                                                           const GGS_string & inOperand2,
                                                                           const GGS_string & inOperand3,
                                                                           const GGS_stringlist & inOperand4,
                                                                           const GGS_string & inOperand5,
                                                                           const GGS_string & inOperand6,
                                                                           const GGS_stringlist & inOperand7,
                                                                           const GGS_string & inOperand8,
                                                                           const GGS_stringlist & inOperand9,
                                                                           const GGS_string & inOperand10
                                                                           COMMA_LOCATION_ARGS) {
  GGS_XCodeToolTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GGS_XCodeToolTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_XCodeToolTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GGS_string & in_mTargetRef,
                                                         const GGS_string & in_mTargetName,
                                                         const GGS_string & in_mProductFileReference,
                                                         const GGS_string & in_mProductFileName,
                                                         const GGS_stringlist & in_mBuildPhaseRefList,
                                                         const GGS_string & in_mBuildPhaseRef,
                                                         const GGS_string & in_mBuildConfigurationListRef,
                                                         const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                         const GGS_string & in_mBuildConfigurationRef,
                                                         const GGS_stringlist & in_mFrameworksFileRefList,
                                                         const GGS_string & in_mFrameworkBuildPhaseRef
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeToolTargetList (in_mTargetRef,
                                                         in_mTargetName,
                                                         in_mProductFileReference,
                                                         in_mProductFileName,
                                                         in_mBuildPhaseRefList,
                                                         in_mBuildPhaseRef,
                                                         in_mBuildConfigurationListRef,
                                                         in_mBuildConfigurationSettingList,
                                                         in_mBuildConfigurationRef,
                                                         in_mFrameworksFileRefList,
                                                         in_mFrameworkBuildPhaseRef COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::addAssignOperation (const GGS_string & inOperand0,
                                                  const GGS_string & inOperand1,
                                                  const GGS_string & inOperand2,
                                                  const GGS_string & inOperand3,
                                                  const GGS_stringlist & inOperand4,
                                                  const GGS_string & inOperand5,
                                                  const GGS_string & inOperand6,
                                                  const GGS_stringlist & inOperand7,
                                                  const GGS_string & inOperand8,
                                                  const GGS_stringlist & inOperand9,
                                                  const GGS_string & inOperand10
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_append (const GGS_string inOperand0,
                                             const GGS_string inOperand1,
                                             const GGS_string inOperand2,
                                             const GGS_string inOperand3,
                                             const GGS_stringlist inOperand4,
                                             const GGS_string inOperand5,
                                             const GGS_string inOperand6,
                                             const GGS_stringlist inOperand7,
                                             const GGS_string inOperand8,
                                             const GGS_stringlist inOperand9,
                                             const GGS_string inOperand10,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_insertAtIndex (const GGS_string inOperand0,
                                                    const GGS_string inOperand1,
                                                    const GGS_string inOperand2,
                                                    const GGS_string inOperand3,
                                                    const GGS_stringlist inOperand4,
                                                    const GGS_string inOperand5,
                                                    const GGS_string inOperand6,
                                                    const GGS_stringlist inOperand7,
                                                    const GGS_string inOperand8,
                                                    const GGS_stringlist inOperand9,
                                                    const GGS_string inOperand10,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_removeAtIndex (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    GGS_string & outOperand3,
                                                    GGS_stringlist & outOperand4,
                                                    GGS_string & outOperand5,
                                                    GGS_string & outOperand6,
                                                    GGS_stringlist & outOperand7,
                                                    GGS_string & outOperand8,
                                                    GGS_stringlist & outOperand9,
                                                    GGS_string & outOperand10,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;
  outOperand7.drop () ;
  outOperand8.drop () ;
  outOperand9.drop () ;
  outOperand10.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
      outOperand0 = p->mObject.mProperty_mTargetRef ;
      outOperand1 = p->mObject.mProperty_mTargetName ;
      outOperand2 = p->mObject.mProperty_mProductFileReference ;
      outOperand3 = p->mObject.mProperty_mProductFileName ;
      outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
      outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
      outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
      outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
      outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
      outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
      outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_popFirst (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_string & outOperand3,
                                               GGS_stringlist & outOperand4,
                                               GGS_string & outOperand5,
                                               GGS_string & outOperand6,
                                               GGS_stringlist & outOperand7,
                                               GGS_string & outOperand8,
                                               GGS_stringlist & outOperand9,
                                               GGS_string & outOperand10,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_popLast (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              GGS_string & outOperand3,
                                              GGS_stringlist & outOperand4,
                                              GGS_string & outOperand5,
                                              GGS_string & outOperand6,
                                              GGS_stringlist & outOperand7,
                                              GGS_string & outOperand8,
                                              GGS_stringlist & outOperand9,
                                              GGS_string & outOperand10,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::method_first (GGS_string & outOperand0,
                                            GGS_string & outOperand1,
                                            GGS_string & outOperand2,
                                            GGS_string & outOperand3,
                                            GGS_stringlist & outOperand4,
                                            GGS_string & outOperand5,
                                            GGS_string & outOperand6,
                                            GGS_stringlist & outOperand7,
                                            GGS_string & outOperand8,
                                            GGS_stringlist & outOperand9,
                                            GGS_string & outOperand10,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::method_last (GGS_string & outOperand0,
                                           GGS_string & outOperand1,
                                           GGS_string & outOperand2,
                                           GGS_string & outOperand3,
                                           GGS_stringlist & outOperand4,
                                           GGS_string & outOperand5,
                                           GGS_string & outOperand6,
                                           GGS_stringlist & outOperand7,
                                           GGS_string & outOperand8,
                                           GGS_stringlist & outOperand9,
                                           GGS_string & outOperand10,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::add_operation (const GGS_XCodeToolTargetList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result = GGS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result = GGS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result = GGS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::plusAssignOperation (const GGS_XCodeToolTargetList inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeToolTargetList::DownEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element DownEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeToolTargetList::UpEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element UpEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeToolTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_XCodeToolTargetList result ;
  const GGS_XCodeToolTargetList * p = (const GGS_XCodeToolTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeToolTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeAppTargetList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public: GGS_XCodeAppTargetList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeAppTargetList (const GGS_string & in_mTargetRef,
                                                 const GGS_string & in_mTargetName,
                                                 const GGS_string & in_mProductFileReference,
                                                 const GGS_string & in_mProductFileName,
                                                 const GGS_stringlist & in_mBuildPhaseRefList,
                                                 const GGS_string & in_mBuildPhaseRef,
                                                 const GGS_string & in_mBuildConfigurationListRef,
                                                 const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                 const GGS_string & in_mBuildConfigurationRef,
                                                 const GGS_stringlist & in_mFrameworksFileRefList,
                                                 const GGS_string & in_mFrameworkBuildPhaseRef,
                                                 const GGS__32_stringlist & in_mDependentTargets,
                                                 const GGS_string & in_mResourceBuildRef,
                                                 const GGS_stringlist & in_mResourceFileBuildRefs
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GGS_string & in_mTargetRef,
                                                                              const GGS_string & in_mTargetName,
                                                                              const GGS_string & in_mProductFileReference,
                                                                              const GGS_string & in_mProductFileName,
                                                                              const GGS_stringlist & in_mBuildPhaseRefList,
                                                                              const GGS_string & in_mBuildPhaseRef,
                                                                              const GGS_string & in_mBuildConfigurationListRef,
                                                                              const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                              const GGS_string & in_mBuildConfigurationRef,
                                                                              const GGS_stringlist & in_mFrameworksFileRefList,
                                                                              const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                              const GGS__32_stringlist & in_mDependentTargets,
                                                                              const GGS_string & in_mResourceBuildRef,
                                                                              const GGS_stringlist & in_mResourceFileBuildRefs
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeAppTargetList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetRef" ":") ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetName" ":") ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileReference" ":") ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileName" ":") ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRefList" ":") ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRef" ":") ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationListRef" ":") ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationSettingList" ":") ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationRef" ":") ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworksFileRefList" ":") ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworkBuildPhaseRef" ":") ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDependentTargets" ":") ;
  mObject.mProperty_mDependentTargets.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResourceBuildRef" ":") ;
  mObject.mProperty_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResourceFileBuildRefs" ":") ;
  mObject.mProperty_mResourceFileBuildRefs.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_XCodeAppTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_XCodeAppTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::plusPlusAssignOperation (const GGS_XCodeAppTargetList_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                         const GGS_string & inOperand1,
                                                                         const GGS_string & inOperand2,
                                                                         const GGS_string & inOperand3,
                                                                         const GGS_stringlist & inOperand4,
                                                                         const GGS_string & inOperand5,
                                                                         const GGS_string & inOperand6,
                                                                         const GGS_stringlist & inOperand7,
                                                                         const GGS_string & inOperand8,
                                                                         const GGS_stringlist & inOperand9,
                                                                         const GGS_string & inOperand10,
                                                                         const GGS__32_stringlist & inOperand11,
                                                                         const GGS_string & inOperand12,
                                                                         const GGS_stringlist & inOperand13
                                                                         COMMA_LOCATION_ARGS) {
  GGS_XCodeAppTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GGS_XCodeAppTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_string & in_mTargetRef,
                                                        const GGS_string & in_mTargetName,
                                                        const GGS_string & in_mProductFileReference,
                                                        const GGS_string & in_mProductFileName,
                                                        const GGS_stringlist & in_mBuildPhaseRefList,
                                                        const GGS_string & in_mBuildPhaseRef,
                                                        const GGS_string & in_mBuildConfigurationListRef,
                                                        const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                        const GGS_string & in_mBuildConfigurationRef,
                                                        const GGS_stringlist & in_mFrameworksFileRefList,
                                                        const GGS_string & in_mFrameworkBuildPhaseRef,
                                                        const GGS__32_stringlist & in_mDependentTargets,
                                                        const GGS_string & in_mResourceBuildRef,
                                                        const GGS_stringlist & in_mResourceFileBuildRefs
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (in_mTargetRef,
                                                        in_mTargetName,
                                                        in_mProductFileReference,
                                                        in_mProductFileName,
                                                        in_mBuildPhaseRefList,
                                                        in_mBuildPhaseRef,
                                                        in_mBuildConfigurationListRef,
                                                        in_mBuildConfigurationSettingList,
                                                        in_mBuildConfigurationRef,
                                                        in_mFrameworksFileRefList,
                                                        in_mFrameworkBuildPhaseRef,
                                                        in_mDependentTargets,
                                                        in_mResourceBuildRef,
                                                        in_mResourceFileBuildRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::addAssignOperation (const GGS_string & inOperand0,
                                                 const GGS_string & inOperand1,
                                                 const GGS_string & inOperand2,
                                                 const GGS_string & inOperand3,
                                                 const GGS_stringlist & inOperand4,
                                                 const GGS_string & inOperand5,
                                                 const GGS_string & inOperand6,
                                                 const GGS_stringlist & inOperand7,
                                                 const GGS_string & inOperand8,
                                                 const GGS_stringlist & inOperand9,
                                                 const GGS_string & inOperand10,
                                                 const GGS__32_stringlist & inOperand11,
                                                 const GGS_string & inOperand12,
                                                 const GGS_stringlist & inOperand13
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_append (const GGS_string inOperand0,
                                            const GGS_string inOperand1,
                                            const GGS_string inOperand2,
                                            const GGS_string inOperand3,
                                            const GGS_stringlist inOperand4,
                                            const GGS_string inOperand5,
                                            const GGS_string inOperand6,
                                            const GGS_stringlist inOperand7,
                                            const GGS_string inOperand8,
                                            const GGS_stringlist inOperand9,
                                            const GGS_string inOperand10,
                                            const GGS__32_stringlist inOperand11,
                                            const GGS_string inOperand12,
                                            const GGS_stringlist inOperand13,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_insertAtIndex (const GGS_string inOperand0,
                                                   const GGS_string inOperand1,
                                                   const GGS_string inOperand2,
                                                   const GGS_string inOperand3,
                                                   const GGS_stringlist inOperand4,
                                                   const GGS_string inOperand5,
                                                   const GGS_string inOperand6,
                                                   const GGS_stringlist inOperand7,
                                                   const GGS_string inOperand8,
                                                   const GGS_stringlist inOperand9,
                                                   const GGS_string inOperand10,
                                                   const GGS__32_stringlist inOperand11,
                                                   const GGS_string inOperand12,
                                                   const GGS_stringlist inOperand13,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_removeAtIndex (GGS_string & outOperand0,
                                                   GGS_string & outOperand1,
                                                   GGS_string & outOperand2,
                                                   GGS_string & outOperand3,
                                                   GGS_stringlist & outOperand4,
                                                   GGS_string & outOperand5,
                                                   GGS_string & outOperand6,
                                                   GGS_stringlist & outOperand7,
                                                   GGS_string & outOperand8,
                                                   GGS_stringlist & outOperand9,
                                                   GGS_string & outOperand10,
                                                   GGS__32_stringlist & outOperand11,
                                                   GGS_string & outOperand12,
                                                   GGS_stringlist & outOperand13,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;
  outOperand7.drop () ;
  outOperand8.drop () ;
  outOperand9.drop () ;
  outOperand10.drop () ;
  outOperand11.drop () ;
  outOperand12.drop () ;
  outOperand13.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
      outOperand0 = p->mObject.mProperty_mTargetRef ;
      outOperand1 = p->mObject.mProperty_mTargetName ;
      outOperand2 = p->mObject.mProperty_mProductFileReference ;
      outOperand3 = p->mObject.mProperty_mProductFileName ;
      outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
      outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
      outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
      outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
      outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
      outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
      outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = p->mObject.mProperty_mDependentTargets ;
      outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
      outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_popFirst (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              GGS_string & outOperand3,
                                              GGS_stringlist & outOperand4,
                                              GGS_string & outOperand5,
                                              GGS_string & outOperand6,
                                              GGS_stringlist & outOperand7,
                                              GGS_string & outOperand8,
                                              GGS_stringlist & outOperand9,
                                              GGS_string & outOperand10,
                                              GGS__32_stringlist & outOperand11,
                                              GGS_string & outOperand12,
                                              GGS_stringlist & outOperand13,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_popLast (GGS_string & outOperand0,
                                             GGS_string & outOperand1,
                                             GGS_string & outOperand2,
                                             GGS_string & outOperand3,
                                             GGS_stringlist & outOperand4,
                                             GGS_string & outOperand5,
                                             GGS_string & outOperand6,
                                             GGS_stringlist & outOperand7,
                                             GGS_string & outOperand8,
                                             GGS_stringlist & outOperand9,
                                             GGS_string & outOperand10,
                                             GGS__32_stringlist & outOperand11,
                                             GGS_string & outOperand12,
                                             GGS_stringlist & outOperand13,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::method_first (GGS_string & outOperand0,
                                           GGS_string & outOperand1,
                                           GGS_string & outOperand2,
                                           GGS_string & outOperand3,
                                           GGS_stringlist & outOperand4,
                                           GGS_string & outOperand5,
                                           GGS_string & outOperand6,
                                           GGS_stringlist & outOperand7,
                                           GGS_string & outOperand8,
                                           GGS_stringlist & outOperand9,
                                           GGS_string & outOperand10,
                                           GGS__32_stringlist & outOperand11,
                                           GGS_string & outOperand12,
                                           GGS_stringlist & outOperand13,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::method_last (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_string & outOperand3,
                                          GGS_stringlist & outOperand4,
                                          GGS_string & outOperand5,
                                          GGS_string & outOperand6,
                                          GGS_stringlist & outOperand7,
                                          GGS_string & outOperand8,
                                          GGS_stringlist & outOperand9,
                                          GGS_string & outOperand10,
                                          GGS__32_stringlist & outOperand11,
                                          GGS_string & outOperand12,
                                          GGS_stringlist & outOperand13,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::add_operation (const GGS_XCodeAppTargetList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result = GGS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result = GGS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result = GGS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::plusAssignOperation (const GGS_XCodeAppTargetList inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GGS__32_stringlist inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependentTargets = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mDependentTargets ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceBuildRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceBuildRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceFileBuildRefs = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeAppTargetList::DownEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element DownEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeAppTargetList::UpEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element UpEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeAppTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_XCodeAppTargetList result ;
  const GGS_XCodeAppTargetList * p = (const GGS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@BuildFileList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_BuildFileList : public cCollectionElement {
  public: GGS_BuildFileList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_BuildFileList (const GGS_string & in_mFileReference,
                                            const GGS_string & in_mFileName,
                                            const GGS_string & in_mBuildReference
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GGS_string & in_mFileReference,
                                                                    const GGS_string & in_mFileName,
                                                                    const GGS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_BuildFileList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_BuildFileList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileReference" ":") ;
  mObject.mProperty_mFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileName" ":") ;
  mObject.mProperty_mFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildReference" ":") ;
  mObject.mProperty_mBuildReference.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_BuildFileList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_BuildFileList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::plusPlusAssignOperation (const GGS_BuildFileList_2E_element & inValue
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_BuildFileList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::class_func_listWithValue (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1,
                                                               const GGS_string & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  GGS_BuildFileList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_BuildFileList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_BuildFileList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GGS_string & in_mFileReference,
                                                   const GGS_string & in_mFileName,
                                                   const GGS_string & in_mBuildReference
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = nullptr ;
  macroMyNew (p, cCollectionElement_BuildFileList (in_mFileReference,
                                                   in_mFileName,
                                                   in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::addAssignOperation (const GGS_string & inOperand0,
                                            const GGS_string & inOperand1,
                                            const GGS_string & inOperand2
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_append (const GGS_string inOperand0,
                                       const GGS_string inOperand1,
                                       const GGS_string inOperand2,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_insertAtIndex (const GGS_string inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_string inOperand2,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_removeAtIndex (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
      outOperand0 = p->mObject.mProperty_mFileReference ;
      outOperand1 = p->mObject.mProperty_mFileName ;
      outOperand2 = p->mObject.mProperty_mBuildReference ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_popFirst (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_popLast (GGS_string & outOperand0,
                                        GGS_string & outOperand1,
                                        GGS_string & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::method_first (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::method_last (GGS_string & outOperand0,
                                     GGS_string & outOperand1,
                                     GGS_string & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::add_operation (const GGS_BuildFileList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result = GGS_BuildFileList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result = GGS_BuildFileList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result = GGS_BuildFileList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::plusAssignOperation (const GGS_BuildFileList inOperand,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_setMFileReferenceAtIndex (GGS_string inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_BuildFileList::getter_mFileReferenceAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_setMFileNameAtIndex (GGS_string inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_BuildFileList::getter_mFileNameAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_setMBuildReferenceAtIndex (GGS_string inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_BuildFileList::getter_mBuildReferenceAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mBuildReference ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @BuildFileList
//--------------------------------------------------------------------------------------------------

DownEnumerator_BuildFileList::DownEnumerator_BuildFileList (const GGS_BuildFileList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element DownEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @BuildFileList
//--------------------------------------------------------------------------------------------------

UpEnumerator_BuildFileList::UpEnumerator_BuildFileList (const GGS_BuildFileList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element UpEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}




//--------------------------------------------------------------------------------------------------
//     @BuildFileList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_BuildFileList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_BuildFileList result ;
  const GGS_BuildFileList * p = (const GGS_BuildFileList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_BuildFileList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum xcodeProject
//--------------------------------------------------------------------------------------------------

GGS_xcodeProject::GGS_xcodeProject (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::class_func_objcApp (UNUSED_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  result.mEnum = Enumeration::enum_objcApp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::class_func_swiftApp (UNUSED_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  result.mEnum = Enumeration::enum_swiftApp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_xcodeProject [4] = {
  "(not built)",
  "none",
  "objcApp",
  "swiftApp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xcodeProject::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xcodeProject::getter_isObjcApp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_objcApp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xcodeProject::getter_isSwiftApp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_swiftApp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_xcodeProject::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @xcodeProject: ") ;
  ioString.appendCString (gEnumNameArrayFor_xcodeProject [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xcodeProject::objectCompare (const GGS_xcodeProject & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @xcodeProject generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xcodeProject ("xcodeProject",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_xcodeProject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xcodeProject ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xcodeProject::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xcodeProject (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xcodeProject GGS_xcodeProject::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_xcodeProject result ;
  const GGS_xcodeProject * p = (const GGS_xcodeProject *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xcodeProject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xcodeProject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element::GGS_templateInstructionListAST_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element::GGS_templateInstructionListAST_2E_element (const GGS_templateInstructionListAST_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element & GGS_templateInstructionListAST_2E_element::operator = (const GGS_templateInstructionListAST_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element GGS_templateInstructionListAST_2E_element::init_21_ (const GGS_templateInstructionAST & in_mInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element::GGS_templateInstructionListAST_2E_element (const GGS_templateInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element GGS_templateInstructionListAST_2E_element::class_func_new (const GGS_templateInstructionAST & in_mInstruction,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionListAST_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListAST_2E_element ("templateInstructionListAST.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element GGS_templateInstructionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionListAST_2E_element result ;
  const GGS_templateInstructionListAST_2E_element * p = (const GGS_templateInstructionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element::GGS_templateInstructionIfBranchListAST_2E_element (void) :
mProperty_mExpression (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element::GGS_templateInstructionIfBranchListAST_2E_element (const GGS_templateInstructionIfBranchListAST_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element & GGS_templateInstructionIfBranchListAST_2E_element::operator = (const GGS_templateInstructionIfBranchListAST_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element GGS_templateInstructionIfBranchListAST_2E_element::init_21__21_ (const GGS_templateExpressionAST & in_mExpression,
                                                                                                                   const GGS_templateInstructionListAST & in_mInstructionList,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element::GGS_templateInstructionIfBranchListAST_2E_element (const GGS_templateExpressionAST & inOperand0,
                                                                                                      const GGS_templateInstructionListAST & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element GGS_templateInstructionIfBranchListAST_2E_element::class_func_new (const GGS_templateExpressionAST & in_mExpression,
                                                                                                                     const GGS_templateInstructionListAST & in_mInstructionList,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionIfBranchListAST_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionIfBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2E_element ("templateInstructionIfBranchListAST.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionIfBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element GGS_templateInstructionIfBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListAST_2E_element result ;
  const GGS_templateInstructionIfBranchListAST_2E_element * p = (const GGS_templateInstructionIfBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit::GGS_templateInstructionForEnumerationAST_2E_implicit (void) :
mProperty_prefix (),
mProperty_remplacementRange () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit::GGS_templateInstructionForEnumerationAST_2E_implicit (const GGS_templateInstructionForEnumerationAST_2E_implicit & inSource) :
mProperty_prefix (inSource.mProperty_prefix),
mProperty_remplacementRange (inSource.mProperty_remplacementRange) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit & GGS_templateInstructionForEnumerationAST_2E_implicit::operator = (const GGS_templateInstructionForEnumerationAST_2E_implicit & inSource) {
  mProperty_prefix = inSource.mProperty_prefix ;
  mProperty_remplacementRange = inSource.mProperty_remplacementRange ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit GGS_templateInstructionForEnumerationAST_2E_implicit::init_21__21_ (const GGS_string & in_prefix,
                                                                                                                         const GGS_location & in_remplacementRange,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_implicit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_prefix = in_prefix ;
  result.mProperty_remplacementRange = in_remplacementRange ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit::GGS_templateInstructionForEnumerationAST_2E_implicit (const GGS_string & inOperand0,
                                                                                                            const GGS_location & inOperand1) :
mProperty_prefix (inOperand0),
mProperty_remplacementRange (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit GGS_templateInstructionForEnumerationAST_2E_implicit::class_func_new (const GGS_string & in_prefix,
                                                                                                                           const GGS_location & in_remplacementRange,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_implicit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_prefix = in_prefix ;
  result.mProperty_remplacementRange = in_remplacementRange ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_implicit::isValid (void) const {
  return mProperty_prefix.isValid () && mProperty_remplacementRange.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit::drop (void) {
  mProperty_prefix.drop () ;
  mProperty_remplacementRange.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionForEnumerationAST.implicit:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_prefix.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_remplacementRange.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForEnumerationAST.implicit generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_implicit ("templateInstructionForEnumerationAST.implicit",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForEnumerationAST_2E_implicit::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_implicit ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForEnumerationAST_2E_implicit::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForEnumerationAST_2E_implicit (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit GGS_templateInstructionForEnumerationAST_2E_implicit::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_implicit result ;
  const GGS_templateInstructionForEnumerationAST_2E_implicit * p = (const GGS_templateInstructionForEnumerationAST_2E_implicit *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForEnumerationAST_2E_implicit *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForEnumerationAST.implicit", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @templateInstructionForEnumerationAST_2E_implicit_3F_
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ (const GGS_templateInstructionForEnumerationAST_2E_implicit & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::init_nil (void) {
  GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_templateInstructionForEnumerationAST_2E_implicit () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForEnumerationAST.implicit? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_implicit_3F_ ("templateInstructionForEnumerationAST.implicit?",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_implicit_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ GGS_templateInstructionForEnumerationAST_2E_implicit_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ result ;
  const GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ * p = (const GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForEnumerationAST.implicit?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit::GGS_templateInstructionForEnumerationAST_2E_explicit (void) :
mProperty_enumeration (),
mProperty_endOfProperties () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit::GGS_templateInstructionForEnumerationAST_2E_explicit (const GGS_templateInstructionForEnumerationAST_2E_explicit & inSource) :
mProperty_enumeration (inSource.mProperty_enumeration),
mProperty_endOfProperties (inSource.mProperty_endOfProperties) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit & GGS_templateInstructionForEnumerationAST_2E_explicit::operator = (const GGS_templateInstructionForEnumerationAST_2E_explicit & inSource) {
  mProperty_enumeration = inSource.mProperty_enumeration ;
  mProperty_endOfProperties = inSource.mProperty_endOfProperties ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit GGS_templateInstructionForEnumerationAST_2E_explicit::init_21__21_ (const GGS_lstringlist & in_enumeration,
                                                                                                                         const GGS_location & in_endOfProperties,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_explicit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_enumeration = in_enumeration ;
  result.mProperty_endOfProperties = in_endOfProperties ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit::GGS_templateInstructionForEnumerationAST_2E_explicit (const GGS_lstringlist & inOperand0,
                                                                                                            const GGS_location & inOperand1) :
mProperty_enumeration (inOperand0),
mProperty_endOfProperties (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit GGS_templateInstructionForEnumerationAST_2E_explicit::class_func_new (const GGS_lstringlist & in_enumeration,
                                                                                                                           const GGS_location & in_endOfProperties,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_explicit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_enumeration = in_enumeration ;
  result.mProperty_endOfProperties = in_endOfProperties ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_explicit::isValid (void) const {
  return mProperty_enumeration.isValid () && mProperty_endOfProperties.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit::drop (void) {
  mProperty_enumeration.drop () ;
  mProperty_endOfProperties.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionForEnumerationAST.explicit:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_enumeration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfProperties.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForEnumerationAST.explicit generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_explicit ("templateInstructionForEnumerationAST.explicit",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForEnumerationAST_2E_explicit::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_explicit ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForEnumerationAST_2E_explicit::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForEnumerationAST_2E_explicit (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit GGS_templateInstructionForEnumerationAST_2E_explicit::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_explicit result ;
  const GGS_templateInstructionForEnumerationAST_2E_explicit * p = (const GGS_templateInstructionForEnumerationAST_2E_explicit *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForEnumerationAST_2E_explicit *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForEnumerationAST.explicit", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @templateInstructionForEnumerationAST_2E_explicit_3F_
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ (const GGS_templateInstructionForEnumerationAST_2E_explicit & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::init_nil (void) {
  GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_templateInstructionForEnumerationAST_2E_explicit () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForEnumerationAST.explicit? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_explicit_3F_ ("templateInstructionForEnumerationAST.explicit?",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_explicit_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ GGS_templateInstructionForEnumerationAST_2E_explicit_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ result ;
  const GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ * p = (const GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForEnumerationAST.explicit?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element::GGS_templateInstructionSwitchBranchListAST_2E_element (void) :
mProperty_constantList (),
mProperty_associatedValuesExtraction (),
mProperty_instructionList (),
mProperty_endOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element::GGS_templateInstructionSwitchBranchListAST_2E_element (const GGS_templateInstructionSwitchBranchListAST_2E_element & inSource) :
mProperty_constantList (inSource.mProperty_constantList),
mProperty_associatedValuesExtraction (inSource.mProperty_associatedValuesExtraction),
mProperty_instructionList (inSource.mProperty_instructionList),
mProperty_endOfBranch (inSource.mProperty_endOfBranch) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element & GGS_templateInstructionSwitchBranchListAST_2E_element::operator = (const GGS_templateInstructionSwitchBranchListAST_2E_element & inSource) {
  mProperty_constantList = inSource.mProperty_constantList ;
  mProperty_associatedValuesExtraction = inSource.mProperty_associatedValuesExtraction ;
  mProperty_instructionList = inSource.mProperty_instructionList ;
  mProperty_endOfBranch = inSource.mProperty_endOfBranch ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element GGS_templateInstructionSwitchBranchListAST_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_constantList,
                                                                                                                                   const GGS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                                                                                                   const GGS_templateInstructionListAST & in_instructionList,
                                                                                                                                   const GGS_location & in_endOfBranch,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantList = in_constantList ;
  result.mProperty_associatedValuesExtraction = in_associatedValuesExtraction ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfBranch = in_endOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element::GGS_templateInstructionSwitchBranchListAST_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                                              const GGS_switchExtractedValuesListAST & inOperand1,
                                                                                                              const GGS_templateInstructionListAST & inOperand2,
                                                                                                              const GGS_location & inOperand3) :
mProperty_constantList (inOperand0),
mProperty_associatedValuesExtraction (inOperand1),
mProperty_instructionList (inOperand2),
mProperty_endOfBranch (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element GGS_templateInstructionSwitchBranchListAST_2E_element::class_func_new (const GGS__5B_lstring_5D_ & in_constantList,
                                                                                                                             const GGS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                                                                                             const GGS_templateInstructionListAST & in_instructionList,
                                                                                                                             const GGS_location & in_endOfBranch,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantList = in_constantList ;
  result.mProperty_associatedValuesExtraction = in_associatedValuesExtraction ;
  result.mProperty_instructionList = in_instructionList ;
  result.mProperty_endOfBranch = in_endOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionSwitchBranchListAST_2E_element::isValid (void) const {
  return mProperty_constantList.isValid () && mProperty_associatedValuesExtraction.isValid () && mProperty_instructionList.isValid () && mProperty_endOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST_2E_element::drop (void) {
  mProperty_constantList.drop () ;
  mProperty_associatedValuesExtraction.drop () ;
  mProperty_instructionList.drop () ;
  mProperty_endOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionSwitchBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_constantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_associatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_instructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2E_element ("templateInstructionSwitchBranchListAST.element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionSwitchBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element GGS_templateInstructionSwitchBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST_2E_element result ;
  const GGS_templateInstructionSwitchBranchListAST_2E_element * p = (const GGS_templateInstructionSwitchBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element::GGS_templateInstructionSwitchBranchListForGeneration_2E_element (void) :
mProperty_mConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element::GGS_templateInstructionSwitchBranchListForGeneration_2E_element (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inSource) :
mProperty_mConstantList (inSource.mProperty_mConstantList),
mProperty_mExtractedAssociatedValuesForGeneration (inSource.mProperty_mExtractedAssociatedValuesForGeneration),
mProperty_mEndOfBranchLocationIndex (inSource.mProperty_mEndOfBranchLocationIndex),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element & GGS_templateInstructionSwitchBranchListForGeneration_2E_element::operator = (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inSource) {
  mProperty_mConstantList = inSource.mProperty_mConstantList ;
  mProperty_mExtractedAssociatedValuesForGeneration = inSource.mProperty_mExtractedAssociatedValuesForGeneration ;
  mProperty_mEndOfBranchLocationIndex = inSource.mProperty_mEndOfBranchLocationIndex ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element GGS_templateInstructionSwitchBranchListForGeneration_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mConstantList,
                                                                                                                                                       const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                                       const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                                       const GGS_templateInstructionListForGeneration & in_mInstructionList,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantList = in_mConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element::GGS_templateInstructionSwitchBranchListForGeneration_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                                                                  const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                                                  const GGS_uint & inOperand2,
                                                                                                                                  const GGS_templateInstructionListForGeneration & inOperand3) :
mProperty_mConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructionList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element GGS_templateInstructionSwitchBranchListForGeneration_2E_element::class_func_new (const GGS__5B_lstring_5D_ & in_mConstantList,
                                                                                                                                                 const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                                 const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                                 const GGS_templateInstructionListForGeneration & in_mInstructionList,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantList = in_mConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionSwitchBranchListForGeneration_2E_element::isValid (void) const {
  return mProperty_mConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration_2E_element::drop (void) {
  mProperty_mConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration_2E_element::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionSwitchBranchListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchBranchListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2E_element ("templateInstructionSwitchBranchListForGeneration.element",
                                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionSwitchBranchListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchBranchListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchBranchListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element GGS_templateInstructionSwitchBranchListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListForGeneration_2E_element result ;
  const GGS_templateInstructionSwitchBranchListForGeneration_2E_element * p = (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchBranchListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element::GGS_lexicalInstructionListAST_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element::GGS_lexicalInstructionListAST_2E_element (const GGS_lexicalInstructionListAST_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element & GGS_lexicalInstructionListAST_2E_element::operator = (const GGS_lexicalInstructionListAST_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element GGS_lexicalInstructionListAST_2E_element::init_21_ (const GGS_lexicalInstructionAST & in_mInstruction,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element::GGS_lexicalInstructionListAST_2E_element (const GGS_lexicalInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element GGS_lexicalInstructionListAST_2E_element::class_func_new (const GGS_lexicalInstructionAST & in_mInstruction,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalInstructionListAST_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalInstructionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalInstructionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST_2E_element ("lexicalInstructionListAST.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalInstructionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalInstructionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalInstructionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element GGS_lexicalInstructionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST_2E_element result ;
  const GGS_lexicalInstructionListAST_2E_element * p = (const GGS_lexicalInstructionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalInstructionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element::GGS_lexicalRuleListAST_2E_element (void) :
mProperty_mLexicalRule () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element::GGS_lexicalRuleListAST_2E_element (const GGS_lexicalRuleListAST_2E_element & inSource) :
mProperty_mLexicalRule (inSource.mProperty_mLexicalRule) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element & GGS_lexicalRuleListAST_2E_element::operator = (const GGS_lexicalRuleListAST_2E_element & inSource) {
  mProperty_mLexicalRule = inSource.mProperty_mLexicalRule ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element GGS_lexicalRuleListAST_2E_element::init_21_ (const GGS_abstractLexicalRuleAST & in_mLexicalRule,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRuleListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRule = in_mLexicalRule ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element::GGS_lexicalRuleListAST_2E_element (const GGS_abstractLexicalRuleAST & inOperand0) :
mProperty_mLexicalRule (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element GGS_lexicalRuleListAST_2E_element::class_func_new (const GGS_abstractLexicalRuleAST & in_mLexicalRule,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRuleListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRule = in_mLexicalRule ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRuleListAST_2E_element::isValid (void) const {
  return mProperty_mLexicalRule.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST_2E_element::drop (void) {
  mProperty_mLexicalRule.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRuleListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalRule.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRuleListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST_2E_element ("lexicalRuleListAST.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRuleListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRuleListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRuleListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element GGS_lexicalRuleListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalRuleListAST_2E_element result ;
  const GGS_lexicalRuleListAST_2E_element * p = (const GGS_lexicalRuleListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRuleListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element::GGS_lexicalWhileBranchListAST_2E_element (void) :
mProperty_mWhileExpression (),
mProperty_mWhileInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element::GGS_lexicalWhileBranchListAST_2E_element (const GGS_lexicalWhileBranchListAST_2E_element & inSource) :
mProperty_mWhileExpression (inSource.mProperty_mWhileExpression),
mProperty_mWhileInstructionList (inSource.mProperty_mWhileInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element & GGS_lexicalWhileBranchListAST_2E_element::operator = (const GGS_lexicalWhileBranchListAST_2E_element & inSource) {
  mProperty_mWhileExpression = inSource.mProperty_mWhileExpression ;
  mProperty_mWhileInstructionList = inSource.mProperty_mWhileInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element GGS_lexicalWhileBranchListAST_2E_element::init_21__21_ (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                                                                 const GGS_lexicalInstructionListAST & in_mWhileInstructionList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mWhileExpression = in_mWhileExpression ;
  result.mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element::GGS_lexicalWhileBranchListAST_2E_element (const GGS_lexicalExpressionAST & inOperand0,
                                                                                    const GGS_lexicalInstructionListAST & inOperand1) :
mProperty_mWhileExpression (inOperand0),
mProperty_mWhileInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element GGS_lexicalWhileBranchListAST_2E_element::class_func_new (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                                                                   const GGS_lexicalInstructionListAST & in_mWhileInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mWhileExpression = in_mWhileExpression ;
  result.mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalWhileBranchListAST_2E_element::isValid (void) const {
  return mProperty_mWhileExpression.isValid () && mProperty_mWhileInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST_2E_element::drop (void) {
  mProperty_mWhileExpression.drop () ;
  mProperty_mWhileInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalWhileBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalWhileBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2E_element ("lexicalWhileBranchListAST.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalWhileBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalWhileBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalWhileBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST_2E_element GGS_lexicalWhileBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalWhileBranchListAST_2E_element result ;
  const GGS_lexicalWhileBranchListAST_2E_element * p = (const GGS_lexicalWhileBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalWhileBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element::GGS_lexicalSelectBranchListAST_2E_element (void) :
mProperty_mSelectExpression (),
mProperty_mSelectInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element::GGS_lexicalSelectBranchListAST_2E_element (const GGS_lexicalSelectBranchListAST_2E_element & inSource) :
mProperty_mSelectExpression (inSource.mProperty_mSelectExpression),
mProperty_mSelectInstructionList (inSource.mProperty_mSelectInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element & GGS_lexicalSelectBranchListAST_2E_element::operator = (const GGS_lexicalSelectBranchListAST_2E_element & inSource) {
  mProperty_mSelectExpression = inSource.mProperty_mSelectExpression ;
  mProperty_mSelectInstructionList = inSource.mProperty_mSelectInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element GGS_lexicalSelectBranchListAST_2E_element::init_21__21_ (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                                                   const GGS_lexicalInstructionListAST & in_mSelectInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelectExpression = in_mSelectExpression ;
  result.mProperty_mSelectInstructionList = in_mSelectInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element::GGS_lexicalSelectBranchListAST_2E_element (const GGS_lexicalExpressionAST & inOperand0,
                                                                                      const GGS_lexicalInstructionListAST & inOperand1) :
mProperty_mSelectExpression (inOperand0),
mProperty_mSelectInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element GGS_lexicalSelectBranchListAST_2E_element::class_func_new (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                                                     const GGS_lexicalInstructionListAST & in_mSelectInstructionList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelectExpression = in_mSelectExpression ;
  result.mProperty_mSelectInstructionList = in_mSelectInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalSelectBranchListAST_2E_element::isValid (void) const {
  return mProperty_mSelectExpression.isValid () && mProperty_mSelectInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST_2E_element::drop (void) {
  mProperty_mSelectExpression.drop () ;
  mProperty_mSelectInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalSelectBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelectExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2E_element ("lexicalSelectBranchListAST.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSelectBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSelectBranchListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSelectBranchListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST_2E_element GGS_lexicalSelectBranchListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectBranchListAST_2E_element result ;
  const GGS_lexicalSelectBranchListAST_2E_element * p = (const GGS_lexicalSelectBranchListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSelectBranchListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element::GGS_lexicalFunctionCallActualArgumentListAST_2E_element (void) :
mProperty_mLexicalActualInputArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element::GGS_lexicalFunctionCallActualArgumentListAST_2E_element (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inSource) :
mProperty_mLexicalActualInputArgument (inSource.mProperty_mLexicalActualInputArgument) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element & GGS_lexicalFunctionCallActualArgumentListAST_2E_element::operator = (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inSource) {
  mProperty_mLexicalActualInputArgument = inSource.mProperty_mLexicalActualInputArgument ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element GGS_lexicalFunctionCallActualArgumentListAST_2E_element::init_21_ (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalActualInputArgument = in_mLexicalActualInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element::GGS_lexicalFunctionCallActualArgumentListAST_2E_element (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0) :
mProperty_mLexicalActualInputArgument (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element GGS_lexicalFunctionCallActualArgumentListAST_2E_element::class_func_new (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalActualInputArgument = in_mLexicalActualInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionCallActualArgumentListAST_2E_element::isValid (void) const {
  return mProperty_mLexicalActualInputArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST_2E_element::drop (void) {
  mProperty_mLexicalActualInputArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionCallActualArgumentListAST_2E_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionCallActualArgumentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalActualInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionCallActualArgumentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2E_element ("lexicalFunctionCallActualArgumentListAST.element",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFunctionCallActualArgumentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionCallActualArgumentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionCallActualArgumentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST_2E_element GGS_lexicalFunctionCallActualArgumentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionCallActualArgumentListAST_2E_element result ;
  const GGS_lexicalFunctionCallActualArgumentListAST_2E_element * p = (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionCallActualArgumentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element::GGS_tokenSortedlist_2E_element (void) :
mProperty_mLength (),
mProperty_mName (),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element::GGS_tokenSortedlist_2E_element (const GGS_tokenSortedlist_2E_element & inSource) :
mProperty_mLength (inSource.mProperty_mLength),
mProperty_mName (inSource.mProperty_mName),
mProperty_mTerminalName (inSource.mProperty_mTerminalName) {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element & GGS_tokenSortedlist_2E_element::operator = (const GGS_tokenSortedlist_2E_element & inSource) {
  mProperty_mLength = inSource.mProperty_mLength ;
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mTerminalName = inSource.mProperty_mTerminalName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_tokenSortedlist_2E_element GGS_tokenSortedlist_2E_element::init_21__21__21_ (const GGS_uint & in_mLength,
                                                                                 const GGS_string & in_mName,
                                                                                 const GGS_string & in_mTerminalName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tokenSortedlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLength = in_mLength ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mTerminalName = in_mTerminalName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element::GGS_tokenSortedlist_2E_element (const GGS_uint & inOperand0,
                                                                const GGS_string & inOperand1,
                                                                const GGS_string & inOperand2) :
mProperty_mLength (inOperand0),
mProperty_mName (inOperand1),
mProperty_mTerminalName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element GGS_tokenSortedlist_2E_element::class_func_new (const GGS_uint & in_mLength,
                                                                               const GGS_string & in_mName,
                                                                               const GGS_string & in_mTerminalName,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tokenSortedlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLength = in_mLength ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mTerminalName = in_mTerminalName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_tokenSortedlist_2E_element::isValid (void) const {
  return mProperty_mLength.isValid () && mProperty_mName.isValid () && mProperty_mTerminalName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist_2E_element::drop (void) {
  mProperty_mLength.drop () ;
  mProperty_mName.drop () ;
  mProperty_mTerminalName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tokenSortedlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @tokenSortedlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLength.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @tokenSortedlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist_2E_element ("tokenSortedlist.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_tokenSortedlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tokenSortedlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tokenSortedlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tokenSortedlist_2E_element GGS_tokenSortedlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_tokenSortedlist_2E_element result ;
  const GGS_tokenSortedlist_2E_element * p = (const GGS_tokenSortedlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tokenSortedlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element::GGS_lexicalRoutineFormalArgumentList_2E_element (void) :
mProperty_mLexicalFormalArgumentMode (),
mProperty_mLexicalFormalArgumentType (),
mProperty_mArgumentNameForComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element::GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) :
mProperty_mLexicalFormalArgumentMode (inSource.mProperty_mLexicalFormalArgumentMode),
mProperty_mLexicalFormalArgumentType (inSource.mProperty_mLexicalFormalArgumentType),
mProperty_mArgumentNameForComment (inSource.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element & GGS_lexicalRoutineFormalArgumentList_2E_element::operator = (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) {
  mProperty_mLexicalFormalArgumentMode = inSource.mProperty_mLexicalFormalArgumentMode ;
  mProperty_mLexicalFormalArgumentType = inSource.mProperty_mLexicalFormalArgumentType ;
  mProperty_mArgumentNameForComment = inSource.mProperty_mArgumentNameForComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                                   const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                                   const GGS_string & in_mArgumentNameForComment,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalArgumentMode = in_mLexicalFormalArgumentMode ;
  result.mProperty_mLexicalFormalArgumentType = in_mLexicalFormalArgumentType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element::GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalArgumentModeAST & inOperand0,
                                                                                                  const GGS_lexicalTypeEnum & inOperand1,
                                                                                                  const GGS_string & inOperand2) :
mProperty_mLexicalFormalArgumentMode (inOperand0),
mProperty_mLexicalFormalArgumentType (inOperand1),
mProperty_mArgumentNameForComment (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element GGS_lexicalRoutineFormalArgumentList_2E_element::class_func_new (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                                 const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                                 const GGS_string & in_mArgumentNameForComment,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalArgumentMode = in_mLexicalFormalArgumentMode ;
  result.mProperty_mLexicalFormalArgumentType = in_mLexicalFormalArgumentType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineFormalArgumentList_2E_element::isValid (void) const {
  return mProperty_mLexicalFormalArgumentMode.isValid () && mProperty_mLexicalFormalArgumentType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList_2E_element::drop (void) {
  mProperty_mLexicalFormalArgumentMode.drop () ;
  mProperty_mLexicalFormalArgumentType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentList_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineFormalArgumentList.element:") ;
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
//     @lexicalRoutineFormalArgumentList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2E_element ("lexicalRoutineFormalArgumentList.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRoutineFormalArgumentList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineFormalArgumentList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineFormalArgumentList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentList_2E_element GGS_lexicalRoutineFormalArgumentList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList_2E_element result ;
  const GGS_lexicalRoutineFormalArgumentList_2E_element * p = (const GGS_lexicalRoutineFormalArgumentList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineFormalArgumentList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element::GGS_lexicalFunctionFormalArgumentList_2E_element (void) :
mProperty_mLexicalType (),
mProperty_mArgumentNameForComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element::GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) :
mProperty_mLexicalType (inSource.mProperty_mLexicalType),
mProperty_mArgumentNameForComment (inSource.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element & GGS_lexicalFunctionFormalArgumentList_2E_element::operator = (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) {
  mProperty_mLexicalType = inSource.mProperty_mLexicalType ;
  mProperty_mArgumentNameForComment = inSource.mProperty_mArgumentNameForComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element GGS_lexicalFunctionFormalArgumentList_2E_element::init_21__21_ (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                                                 const GGS_string & in_mArgumentNameForComment,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element::GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalTypeEnum & inOperand0,
                                                                                                    const GGS_string & inOperand1) :
mProperty_mLexicalType (inOperand0),
mProperty_mArgumentNameForComment (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element GGS_lexicalFunctionFormalArgumentList_2E_element::class_func_new (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                                                                                   const GGS_string & in_mArgumentNameForComment,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionFormalArgumentList_2E_element::isValid (void) const {
  return mProperty_mLexicalType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList_2E_element::drop (void) {
  mProperty_mLexicalType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionFormalArgumentList_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionFormalArgumentList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionFormalArgumentList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2E_element ("lexicalFunctionFormalArgumentList.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalFunctionFormalArgumentList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionFormalArgumentList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionFormalArgumentList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionFormalArgumentList_2E_element GGS_lexicalFunctionFormalArgumentList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList_2E_element result ;
  const GGS_lexicalFunctionFormalArgumentList_2E_element * p = (const GGS_lexicalFunctionFormalArgumentList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionFormalArgumentList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element::GGS_lexicalRoutineCallActualArgumentListAST_2E_element (void) :
mProperty_mLexicalRoutineActualArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element::GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) :
mProperty_mLexicalRoutineActualArgument (inSource.mProperty_mLexicalRoutineActualArgument) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element & GGS_lexicalRoutineCallActualArgumentListAST_2E_element::operator = (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) {
  mProperty_mLexicalRoutineActualArgument = inSource.mProperty_mLexicalRoutineActualArgument ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element GGS_lexicalRoutineCallActualArgumentListAST_2E_element::init_21_ (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRoutineActualArgument = in_mLexicalRoutineActualArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element::GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand0) :
mProperty_mLexicalRoutineActualArgument (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element GGS_lexicalRoutineCallActualArgumentListAST_2E_element::class_func_new (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRoutineActualArgument = in_mLexicalRoutineActualArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineCallActualArgumentListAST_2E_element::isValid (void) const {
  return mProperty_mLexicalRoutineActualArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST_2E_element::drop (void) {
  mProperty_mLexicalRoutineActualArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineCallActualArgumentListAST_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineCallActualArgumentListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalRoutineActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallActualArgumentListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2E_element ("lexicalRoutineCallActualArgumentListAST.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRoutineCallActualArgumentListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallActualArgumentListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallActualArgumentListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST_2E_element GGS_lexicalRoutineCallActualArgumentListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallActualArgumentListAST_2E_element result ;
  const GGS_lexicalRoutineCallActualArgumentListAST_2E_element * p = (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallActualArgumentListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (void) :
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment (),
mProperty_mDefaultValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (const GGS_commandLineOptionSortedList_2E_element & inSource) :
mProperty_mOptionIdentifier (inSource.mProperty_mOptionIdentifier),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment),
mProperty_mDefaultValue (inSource.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element & GGS_commandLineOptionSortedList_2E_element::operator = (const GGS_commandLineOptionSortedList_2E_element & inSource) {
  mProperty_mOptionIdentifier = inSource.mProperty_mOptionIdentifier ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  mProperty_mDefaultValue = inSource.mProperty_mDefaultValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element GGS_commandLineOptionSortedList_2E_element::init_21__21__21__21__21_ (const GGS_string & in_mOptionIdentifier,
                                                                                                                 const GGS_char & in_mOptionChar,
                                                                                                                 const GGS_string & in_mOptionString,
                                                                                                                 const GGS_string & in_mComment,
                                                                                                                 const GGS_string & in_mDefaultValue,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element::GGS_commandLineOptionSortedList_2E_element (const GGS_string & inOperand0,
                                                                                        const GGS_char & inOperand1,
                                                                                        const GGS_string & inOperand2,
                                                                                        const GGS_string & inOperand3,
                                                                                        const GGS_string & inOperand4) :
mProperty_mOptionIdentifier (inOperand0),
mProperty_mOptionChar (inOperand1),
mProperty_mOptionString (inOperand2),
mProperty_mComment (inOperand3),
mProperty_mDefaultValue (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element GGS_commandLineOptionSortedList_2E_element::class_func_new (const GGS_string & in_mOptionIdentifier,
                                                                                                       const GGS_char & in_mOptionChar,
                                                                                                       const GGS_string & in_mOptionString,
                                                                                                       const GGS_string & in_mComment,
                                                                                                       const GGS_string & in_mDefaultValue,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionSortedList_2E_element::isValid (void) const {
  return mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::drop (void) {
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionSortedList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionSortedList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @commandLineOptionSortedList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ("commandLineOptionSortedList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_commandLineOptionSortedList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_commandLineOptionSortedList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_commandLineOptionSortedList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList_2E_element GGS_commandLineOptionSortedList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionSortedList_2E_element result ;
  const GGS_commandLineOptionSortedList_2E_element * p = (const GGS_commandLineOptionSortedList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_commandLineOptionSortedList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionSortedList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element::GGS_guiLabelListAST_2E_element (void) :
mProperty_mLeadingCharacterStrippedCount (),
mProperty_mTerminalList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element::GGS_guiLabelListAST_2E_element (const GGS_guiLabelListAST_2E_element & inSource) :
mProperty_mLeadingCharacterStrippedCount (inSource.mProperty_mLeadingCharacterStrippedCount),
mProperty_mTerminalList (inSource.mProperty_mTerminalList),
mProperty_mLocation (inSource.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element & GGS_guiLabelListAST_2E_element::operator = (const GGS_guiLabelListAST_2E_element & inSource) {
  mProperty_mLeadingCharacterStrippedCount = inSource.mProperty_mLeadingCharacterStrippedCount ;
  mProperty_mTerminalList = inSource.mProperty_mTerminalList ;
  mProperty_mLocation = inSource.mProperty_mLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiLabelListAST_2E_element GGS_guiLabelListAST_2E_element::init_21__21__21_ (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                                                 const GGS_terminalLabelListAST & in_mTerminalList,
                                                                                 const GGS_location & in_mLocation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeadingCharacterStrippedCount = in_mLeadingCharacterStrippedCount ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element::GGS_guiLabelListAST_2E_element (const GGS_uint & inOperand0,
                                                                const GGS_terminalLabelListAST & inOperand1,
                                                                const GGS_location & inOperand2) :
mProperty_mLeadingCharacterStrippedCount (inOperand0),
mProperty_mTerminalList (inOperand1),
mProperty_mLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element GGS_guiLabelListAST_2E_element::class_func_new (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                                                               const GGS_terminalLabelListAST & in_mTerminalList,
                                                                               const GGS_location & in_mLocation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeadingCharacterStrippedCount = in_mLeadingCharacterStrippedCount ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiLabelListAST_2E_element::isValid (void) const {
  return mProperty_mLeadingCharacterStrippedCount.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST_2E_element::drop (void) {
  mProperty_mLeadingCharacterStrippedCount.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiLabelListAST_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST_2E_element ("guiLabelListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guiLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiLabelListAST_2E_element GGS_guiLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_guiLabelListAST_2E_element result ;
  const GGS_guiLabelListAST_2E_element * p = (const GGS_guiLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element::GGS_guiCommandLineOptionList_2E_element (void) :
mProperty_mOptionComponent (),
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element::GGS_guiCommandLineOptionList_2E_element (const GGS_guiCommandLineOptionList_2E_element & inSource) :
mProperty_mOptionComponent (inSource.mProperty_mOptionComponent),
mProperty_mOptionIdentifier (inSource.mProperty_mOptionIdentifier),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element & GGS_guiCommandLineOptionList_2E_element::operator = (const GGS_guiCommandLineOptionList_2E_element & inSource) {
  mProperty_mOptionComponent = inSource.mProperty_mOptionComponent ;
  mProperty_mOptionIdentifier = inSource.mProperty_mOptionIdentifier ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element GGS_guiCommandLineOptionList_2E_element::init_21__21__21__21__21_ (const GGS_string & in_mOptionComponent,
                                                                                                           const GGS_string & in_mOptionIdentifier,
                                                                                                           const GGS_char & in_mOptionChar,
                                                                                                           const GGS_string & in_mOptionString,
                                                                                                           const GGS_string & in_mComment,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionComponent = in_mOptionComponent ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element::GGS_guiCommandLineOptionList_2E_element (const GGS_string & inOperand0,
                                                                                  const GGS_string & inOperand1,
                                                                                  const GGS_char & inOperand2,
                                                                                  const GGS_string & inOperand3,
                                                                                  const GGS_string & inOperand4) :
mProperty_mOptionComponent (inOperand0),
mProperty_mOptionIdentifier (inOperand1),
mProperty_mOptionChar (inOperand2),
mProperty_mOptionString (inOperand3),
mProperty_mComment (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element GGS_guiCommandLineOptionList_2E_element::class_func_new (const GGS_string & in_mOptionComponent,
                                                                                                 const GGS_string & in_mOptionIdentifier,
                                                                                                 const GGS_char & in_mOptionChar,
                                                                                                 const GGS_string & in_mOptionString,
                                                                                                 const GGS_string & in_mComment,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionComponent = in_mOptionComponent ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiCommandLineOptionList_2E_element::isValid (void) const {
  return mProperty_mOptionComponent.isValid () && mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList_2E_element::drop (void) {
  mProperty_mOptionComponent.drop () ;
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCommandLineOptionList_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiCommandLineOptionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionComponent.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiCommandLineOptionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList_2E_element ("guiCommandLineOptionList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guiCommandLineOptionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCommandLineOptionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCommandLineOptionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCommandLineOptionList_2E_element GGS_guiCommandLineOptionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_guiCommandLineOptionList_2E_element result ;
  const GGS_guiCommandLineOptionList_2E_element * p = (const GGS_guiCommandLineOptionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCommandLineOptionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element::GGS_textMacroList_2E_element (void) :
mProperty_mKey (),
mProperty_mContents () {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element::GGS_textMacroList_2E_element (const GGS_textMacroList_2E_element & inSource) :
mProperty_mKey (inSource.mProperty_mKey),
mProperty_mContents (inSource.mProperty_mContents) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element & GGS_textMacroList_2E_element::operator = (const GGS_textMacroList_2E_element & inSource) {
  mProperty_mKey = inSource.mProperty_mKey ;
  mProperty_mContents = inSource.mProperty_mContents ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_textMacroList_2E_element GGS_textMacroList_2E_element::init_21__21_ (const GGS_string & in_mKey,
                                                                         const GGS_string & in_mContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_textMacroList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mContents = in_mContents ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element::GGS_textMacroList_2E_element (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1) :
mProperty_mKey (inOperand0),
mProperty_mContents (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element GGS_textMacroList_2E_element::class_func_new (const GGS_string & in_mKey,
                                                                           const GGS_string & in_mContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_textMacroList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mContents = in_mContents ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_textMacroList_2E_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mContents.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList_2E_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mContents.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_textMacroList_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @textMacroList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mContents.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @textMacroList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_textMacroList_2E_element ("textMacroList.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_textMacroList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_textMacroList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_textMacroList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_textMacroList_2E_element GGS_textMacroList_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_textMacroList_2E_element result ;
  const GGS_textMacroList_2E_element * p = (const GGS_textMacroList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_textMacroList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element::GGS_importedLexiqueList_2E_element (void) :
mProperty_mLexiqueClassName (),
mProperty_mIndex (),
mProperty_mBlockComment (),
mProperty_mTitle (),
mProperty_mTextMacroList (),
mProperty_mLabels (),
mProperty_mLexicalStyleList () {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element::GGS_importedLexiqueList_2E_element (const GGS_importedLexiqueList_2E_element & inSource) :
mProperty_mLexiqueClassName (inSource.mProperty_mLexiqueClassName),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mBlockComment (inSource.mProperty_mBlockComment),
mProperty_mTitle (inSource.mProperty_mTitle),
mProperty_mTextMacroList (inSource.mProperty_mTextMacroList),
mProperty_mLabels (inSource.mProperty_mLabels),
mProperty_mLexicalStyleList (inSource.mProperty_mLexicalStyleList) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element & GGS_importedLexiqueList_2E_element::operator = (const GGS_importedLexiqueList_2E_element & inSource) {
  mProperty_mLexiqueClassName = inSource.mProperty_mLexiqueClassName ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mBlockComment = inSource.mProperty_mBlockComment ;
  mProperty_mTitle = inSource.mProperty_mTitle ;
  mProperty_mTextMacroList = inSource.mProperty_mTextMacroList ;
  mProperty_mLabels = inSource.mProperty_mLabels ;
  mProperty_mLexicalStyleList = inSource.mProperty_mLexicalStyleList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_importedLexiqueList_2E_element GGS_importedLexiqueList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_string & in_mLexiqueClassName,
                                                                                                         const GGS_uint & in_mIndex,
                                                                                                         const GGS_string & in_mBlockComment,
                                                                                                         const GGS_string & in_mTitle,
                                                                                                         const GGS_textMacroList & in_mTextMacroList,
                                                                                                         const GGS_guiLabelListAST & in_mLabels,
                                                                                                         const GGS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_importedLexiqueList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueClassName = in_mLexiqueClassName ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBlockComment = in_mBlockComment ;
  result.mProperty_mTitle = in_mTitle ;
  result.mProperty_mTextMacroList = in_mTextMacroList ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mLexicalStyleList = in_mLexicalStyleList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element::GGS_importedLexiqueList_2E_element (const GGS_string & inOperand0,
                                                                        const GGS_uint & inOperand1,
                                                                        const GGS_string & inOperand2,
                                                                        const GGS_string & inOperand3,
                                                                        const GGS_textMacroList & inOperand4,
                                                                        const GGS_guiLabelListAST & inOperand5,
                                                                        const GGS_lexicalStyleListAST & inOperand6) :
mProperty_mLexiqueClassName (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBlockComment (inOperand2),
mProperty_mTitle (inOperand3),
mProperty_mTextMacroList (inOperand4),
mProperty_mLabels (inOperand5),
mProperty_mLexicalStyleList (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element GGS_importedLexiqueList_2E_element::class_func_new (const GGS_string & in_mLexiqueClassName,
                                                                                       const GGS_uint & in_mIndex,
                                                                                       const GGS_string & in_mBlockComment,
                                                                                       const GGS_string & in_mTitle,
                                                                                       const GGS_textMacroList & in_mTextMacroList,
                                                                                       const GGS_guiLabelListAST & in_mLabels,
                                                                                       const GGS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_importedLexiqueList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueClassName = in_mLexiqueClassName ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBlockComment = in_mBlockComment ;
  result.mProperty_mTitle = in_mTitle ;
  result.mProperty_mTextMacroList = in_mTextMacroList ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mLexicalStyleList = in_mLexicalStyleList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_importedLexiqueList_2E_element::isValid (void) const {
  return mProperty_mLexiqueClassName.isValid () && mProperty_mIndex.isValid () && mProperty_mBlockComment.isValid () && mProperty_mTitle.isValid () && mProperty_mTextMacroList.isValid () && mProperty_mLabels.isValid () && mProperty_mLexicalStyleList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList_2E_element::drop (void) {
  mProperty_mLexiqueClassName.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBlockComment.drop () ;
  mProperty_mTitle.drop () ;
  mProperty_mTextMacroList.drop () ;
  mProperty_mLabels.drop () ;
  mProperty_mLexicalStyleList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_importedLexiqueList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @importedLexiqueList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueClassName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlockComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTitle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTextMacroList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalStyleList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @importedLexiqueList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_importedLexiqueList_2E_element ("importedLexiqueList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_importedLexiqueList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_importedLexiqueList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_importedLexiqueList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_importedLexiqueList_2E_element GGS_importedLexiqueList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_importedLexiqueList_2E_element result ;
  const GGS_importedLexiqueList_2E_element * p = (const GGS_importedLexiqueList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_importedLexiqueList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some::GGS_propertyInCollectionInitializationAST_2E_some (void) :
mProperty_expression () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some::GGS_propertyInCollectionInitializationAST_2E_some (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) :
mProperty_expression (inSource.mProperty_expression) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some & GGS_propertyInCollectionInitializationAST_2E_some::operator = (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) {
  mProperty_expression = inSource.mProperty_expression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some GGS_propertyInCollectionInitializationAST_2E_some::init_21_ (const GGS_semanticExpressionAST & in_expression,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST_2E_some result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some::GGS_propertyInCollectionInitializationAST_2E_some (const GGS_semanticExpressionAST & inOperand0) :
mProperty_expression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some GGS_propertyInCollectionInitializationAST_2E_some::class_func_new (const GGS_semanticExpressionAST & in_expression,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST_2E_some result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyInCollectionInitializationAST_2E_some::objectCompare (const GGS_propertyInCollectionInitializationAST_2E_some & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_expression.objectCompare (inOperand.mProperty_expression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyInCollectionInitializationAST_2E_some::isValid (void) const {
  return mProperty_expression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some::drop (void) {
  mProperty_expression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyInCollectionInitializationAST.some:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_expression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyInCollectionInitializationAST.some generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some ("propertyInCollectionInitializationAST.some",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyInCollectionInitializationAST_2E_some::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyInCollectionInitializationAST_2E_some::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyInCollectionInitializationAST_2E_some (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some GGS_propertyInCollectionInitializationAST_2E_some::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST_2E_some result ;
  const GGS_propertyInCollectionInitializationAST_2E_some * p = (const GGS_propertyInCollectionInitializationAST_2E_some *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyInCollectionInitializationAST_2E_some *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionInitializationAST.some", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyInCollectionInitializationAST_2E_some_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_::GGS_propertyInCollectionInitializationAST_2E_some_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_::GGS_propertyInCollectionInitializationAST_2E_some_3F_ (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_ GGS_propertyInCollectionInitializationAST_2E_some_3F_::init_nil (void) {
  GGS_propertyInCollectionInitializationAST_2E_some_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyInCollectionInitializationAST_2E_some_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyInCollectionInitializationAST_2E_some_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyInCollectionInitializationAST_2E_some () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyInCollectionInitializationAST_2E_some_3F_::objectCompare (const GGS_propertyInCollectionInitializationAST_2E_some_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some_3F_::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyInCollectionInitializationAST.some? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some_3F_ ("propertyInCollectionInitializationAST.some?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyInCollectionInitializationAST_2E_some_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyInCollectionInitializationAST_2E_some_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyInCollectionInitializationAST_2E_some_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_ GGS_propertyInCollectionInitializationAST_2E_some_3F_::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST_2E_some_3F_ result ;
  const GGS_propertyInCollectionInitializationAST_2E_some_3F_ * p = (const GGS_propertyInCollectionInitializationAST_2E_some_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyInCollectionInitializationAST_2E_some_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionInitializationAST.some?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element::GGS_enumConstantListForGeneration_2E_element (void) :
mProperty_name (),
mProperty_associatedValueTypeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element::GGS_enumConstantListForGeneration_2E_element (const GGS_enumConstantListForGeneration_2E_element & inSource) :
mProperty_name (inSource.mProperty_name),
mProperty_associatedValueTypeList (inSource.mProperty_associatedValueTypeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element & GGS_enumConstantListForGeneration_2E_element::operator = (const GGS_enumConstantListForGeneration_2E_element & inSource) {
  mProperty_name = inSource.mProperty_name ;
  mProperty_associatedValueTypeList = inSource.mProperty_associatedValueTypeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element GGS_enumConstantListForGeneration_2E_element::init_21__21_ (const GGS_string & in_name,
                                                                                                         const GGS_associatedValueDescriptorList & in_associatedValueTypeList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_associatedValueTypeList = in_associatedValueTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element::GGS_enumConstantListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                            const GGS_associatedValueDescriptorList & inOperand1) :
mProperty_name (inOperand0),
mProperty_associatedValueTypeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element GGS_enumConstantListForGeneration_2E_element::class_func_new (const GGS_string & in_name,
                                                                                                           const GGS_associatedValueDescriptorList & in_associatedValueTypeList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_associatedValueTypeList = in_associatedValueTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantListForGeneration_2E_element::isValid (void) const {
  return mProperty_name.isValid () && mProperty_associatedValueTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantListForGeneration_2E_element::drop (void) {
  mProperty_name.drop () ;
  mProperty_associatedValueTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantListForGeneration_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumConstantListForGeneration.element:") ;
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
//     @enumConstantListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration_2E_element ("enumConstantListForGeneration.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumConstantListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration_2E_element GGS_enumConstantListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_enumConstantListForGeneration_2E_element result ;
  const GGS_enumConstantListForGeneration_2E_element * p = (const GGS_enumConstantListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element::GGS_externTypeConstructorList_2E_element (void) :
mProperty_mParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element::GGS_externTypeConstructorList_2E_element (const GGS_externTypeConstructorList_2E_element & inSource) :
mProperty_mParameterList (inSource.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element & GGS_externTypeConstructorList_2E_element::operator = (const GGS_externTypeConstructorList_2E_element & inSource) {
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element GGS_externTypeConstructorList_2E_element::init_21_ (const GGS_typeNameFormalParameterNameList & in_mParameterList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeConstructorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element::GGS_externTypeConstructorList_2E_element (const GGS_typeNameFormalParameterNameList & inOperand0) :
mProperty_mParameterList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element GGS_externTypeConstructorList_2E_element::class_func_new (const GGS_typeNameFormalParameterNameList & in_mParameterList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externTypeConstructorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externTypeConstructorList_2E_element::isValid (void) const {
  return mProperty_mParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList_2E_element::drop (void) {
  mProperty_mParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externTypeConstructorList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externTypeConstructorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @externTypeConstructorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList_2E_element ("externTypeConstructorList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externTypeConstructorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeConstructorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeConstructorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList_2E_element GGS_externTypeConstructorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_externTypeConstructorList_2E_element result ;
  const GGS_externTypeConstructorList_2E_element * p = (const GGS_externTypeConstructorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeConstructorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element::GGS_insertOrReplaceDeclarationListAST_2E_element (void) :
mProperty_mInsertOrReplaceDeclarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element::GGS_insertOrReplaceDeclarationListAST_2E_element (const GGS_insertOrReplaceDeclarationListAST_2E_element & inSource) :
mProperty_mInsertOrReplaceDeclarationLocation (inSource.mProperty_mInsertOrReplaceDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element & GGS_insertOrReplaceDeclarationListAST_2E_element::operator = (const GGS_insertOrReplaceDeclarationListAST_2E_element & inSource) {
  mProperty_mInsertOrReplaceDeclarationLocation = inSource.mProperty_mInsertOrReplaceDeclarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element GGS_insertOrReplaceDeclarationListAST_2E_element::init_21_ (const GGS_location & in_mInsertOrReplaceDeclarationLocation,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertOrReplaceDeclarationLocation = in_mInsertOrReplaceDeclarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element::GGS_insertOrReplaceDeclarationListAST_2E_element (const GGS_location & inOperand0) :
mProperty_mInsertOrReplaceDeclarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element GGS_insertOrReplaceDeclarationListAST_2E_element::class_func_new (const GGS_location & in_mInsertOrReplaceDeclarationLocation,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertOrReplaceDeclarationLocation = in_mInsertOrReplaceDeclarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_insertOrReplaceDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mInsertOrReplaceDeclarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST_2E_element::drop (void) {
  mProperty_mInsertOrReplaceDeclarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @insertOrReplaceDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @insertOrReplaceDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2E_element ("insertOrReplaceDeclarationListAST.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_insertOrReplaceDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_insertOrReplaceDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertOrReplaceDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element GGS_insertOrReplaceDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST_2E_element result ;
  const GGS_insertOrReplaceDeclarationListAST_2E_element * p = (const GGS_insertOrReplaceDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertOrReplaceDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element::GGS_sortDescriptorListForGeneration_2E_element (void) :
mProperty_mAttributeTypeIndex (),
mProperty_mAttributeName (),
mProperty_mAscendingOrder () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element::GGS_sortDescriptorListForGeneration_2E_element (const GGS_sortDescriptorListForGeneration_2E_element & inSource) :
mProperty_mAttributeTypeIndex (inSource.mProperty_mAttributeTypeIndex),
mProperty_mAttributeName (inSource.mProperty_mAttributeName),
mProperty_mAscendingOrder (inSource.mProperty_mAscendingOrder) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element & GGS_sortDescriptorListForGeneration_2E_element::operator = (const GGS_sortDescriptorListForGeneration_2E_element & inSource) {
  mProperty_mAttributeTypeIndex = inSource.mProperty_mAttributeTypeIndex ;
  mProperty_mAttributeName = inSource.mProperty_mAttributeName ;
  mProperty_mAscendingOrder = inSource.mProperty_mAscendingOrder ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element GGS_sortDescriptorListForGeneration_2E_element::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                                                                 const GGS_string & in_mAttributeName,
                                                                                                                 const GGS_bool & in_mAscendingOrder,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortDescriptorListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeTypeIndex = in_mAttributeTypeIndex ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAscendingOrder = in_mAscendingOrder ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element::GGS_sortDescriptorListForGeneration_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                const GGS_string & inOperand1,
                                                                                                const GGS_bool & inOperand2) :
mProperty_mAttributeTypeIndex (inOperand0),
mProperty_mAttributeName (inOperand1),
mProperty_mAscendingOrder (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element GGS_sortDescriptorListForGeneration_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                                                               const GGS_string & in_mAttributeName,
                                                                                                               const GGS_bool & in_mAscendingOrder,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortDescriptorListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeTypeIndex = in_mAttributeTypeIndex ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAscendingOrder = in_mAscendingOrder ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sortDescriptorListForGeneration_2E_element::isValid (void) const {
  return mProperty_mAttributeTypeIndex.isValid () && mProperty_mAttributeName.isValid () && mProperty_mAscendingOrder.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration_2E_element::drop (void) {
  mProperty_mAttributeTypeIndex.drop () ;
  mProperty_mAttributeName.drop () ;
  mProperty_mAscendingOrder.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sortDescriptorListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAttributeTypeIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAscendingOrder.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sortDescriptorListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2E_element ("sortDescriptorListForGeneration.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sortDescriptorListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortDescriptorListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortDescriptorListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element GGS_sortDescriptorListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_sortDescriptorListForGeneration_2E_element result ;
  const GGS_sortDescriptorListForGeneration_2E_element * p = (const GGS_sortDescriptorListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortDescriptorListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortDescriptorListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType::GGS_typeKindEnum_2E_classType (void) :
mProperty_isReference () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType::GGS_typeKindEnum_2E_classType (const GGS_typeKindEnum_2E_classType & inSource) :
mProperty_isReference (inSource.mProperty_isReference) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType & GGS_typeKindEnum_2E_classType::operator = (const GGS_typeKindEnum_2E_classType & inSource) {
  mProperty_isReference = inSource.mProperty_isReference ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKindEnum_2E_classType GGS_typeKindEnum_2E_classType::init_21_ (const GGS_bool & in_isReference,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_classType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isReference = in_isReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_classType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType::GGS_typeKindEnum_2E_classType (const GGS_bool & inOperand0) :
mProperty_isReference (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType GGS_typeKindEnum_2E_classType::class_func_new (const GGS_bool & in_isReference,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_classType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isReference = in_isReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_classType::objectCompare (const GGS_typeKindEnum_2E_classType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_isReference.objectCompare (inOperand.mProperty_isReference) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_classType::isValid (void) const {
  return mProperty_isReference.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_classType::drop (void) {
  mProperty_isReference.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_classType::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKindEnum.classType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_isReference.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.classType generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_classType ("typeKindEnum.classType",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKindEnum_2E_classType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_classType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_classType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_classType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType GGS_typeKindEnum_2E_classType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_classType result ;
  const GGS_typeKindEnum_2E_classType * p = (const GGS_typeKindEnum_2E_classType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_classType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.classType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKindEnum_2E_classType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType_3F_::GGS_typeKindEnum_2E_classType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType_3F_::GGS_typeKindEnum_2E_classType_3F_ (const GGS_typeKindEnum_2E_classType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType_3F_ GGS_typeKindEnum_2E_classType_3F_::init_nil (void) {
  GGS_typeKindEnum_2E_classType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_classType_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_classType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_classType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKindEnum_2E_classType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_classType_3F_::objectCompare (const GGS_typeKindEnum_2E_classType_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_classType_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.classType? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_classType_3F_ ("typeKindEnum.classType?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKindEnum_2E_classType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_classType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_classType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_classType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType_3F_ GGS_typeKindEnum_2E_classType_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_classType_3F_ result ;
  const GGS_typeKindEnum_2E_classType_3F_ * p = (const GGS_typeKindEnum_2E_classType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_classType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.classType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType::GGS_typeKindEnum_2E_weakReferenceType (void) :
mProperty_referenceType () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType::GGS_typeKindEnum_2E_weakReferenceType (const GGS_typeKindEnum_2E_weakReferenceType & inSource) :
mProperty_referenceType (inSource.mProperty_referenceType) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType & GGS_typeKindEnum_2E_weakReferenceType::operator = (const GGS_typeKindEnum_2E_weakReferenceType & inSource) {
  mProperty_referenceType = inSource.mProperty_referenceType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType GGS_typeKindEnum_2E_weakReferenceType::init_21_ (const GGS_unifiedTypeMapEntry & in_referenceType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_referenceType = in_referenceType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType::GGS_typeKindEnum_2E_weakReferenceType (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_referenceType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType GGS_typeKindEnum_2E_weakReferenceType::class_func_new (const GGS_unifiedTypeMapEntry & in_referenceType,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_referenceType = in_referenceType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_weakReferenceType::objectCompare (const GGS_typeKindEnum_2E_weakReferenceType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_referenceType.objectCompare (inOperand.mProperty_referenceType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_weakReferenceType::isValid (void) const {
  return mProperty_referenceType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType::drop (void) {
  mProperty_referenceType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKindEnum.weakReferenceType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_referenceType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.weakReferenceType generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ("typeKindEnum.weakReferenceType",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKindEnum_2E_weakReferenceType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_weakReferenceType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_weakReferenceType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType GGS_typeKindEnum_2E_weakReferenceType::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType result ;
  const GGS_typeKindEnum_2E_weakReferenceType * p = (const GGS_typeKindEnum_2E_weakReferenceType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_weakReferenceType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.weakReferenceType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKindEnum_2E_weakReferenceType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_::GGS_typeKindEnum_2E_weakReferenceType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_::GGS_typeKindEnum_2E_weakReferenceType_3F_ (const GGS_typeKindEnum_2E_weakReferenceType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_ GGS_typeKindEnum_2E_weakReferenceType_3F_::init_nil (void) {
  GGS_typeKindEnum_2E_weakReferenceType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_weakReferenceType_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_weakReferenceType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKindEnum_2E_weakReferenceType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_weakReferenceType_3F_::objectCompare (const GGS_typeKindEnum_2E_weakReferenceType_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_weakReferenceType_3F_::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.weakReferenceType? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType_3F_ ("typeKindEnum.weakReferenceType?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKindEnum_2E_weakReferenceType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_weakReferenceType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_weakReferenceType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_ GGS_typeKindEnum_2E_weakReferenceType_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_weakReferenceType_3F_ result ;
  const GGS_typeKindEnum_2E_weakReferenceType_3F_ * p = (const GGS_typeKindEnum_2E_weakReferenceType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_weakReferenceType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.weakReferenceType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType::GGS_typeKindEnum_2E_enumType (void) :
mProperty_constantMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType::GGS_typeKindEnum_2E_enumType (const GGS_typeKindEnum_2E_enumType & inSource) :
mProperty_constantMap (inSource.mProperty_constantMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType & GGS_typeKindEnum_2E_enumType::operator = (const GGS_typeKindEnum_2E_enumType & inSource) {
  mProperty_constantMap = inSource.mProperty_constantMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType GGS_typeKindEnum_2E_enumType::init_21_ (const GGS_constantIndexMap & in_constantMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantMap = in_constantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType::GGS_typeKindEnum_2E_enumType (const GGS_constantIndexMap & inOperand0) :
mProperty_constantMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType GGS_typeKindEnum_2E_enumType::class_func_new (const GGS_constantIndexMap & in_constantMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_constantMap = in_constantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_enumType::objectCompare (const GGS_typeKindEnum_2E_enumType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_constantMap.objectCompare (inOperand.mProperty_constantMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_enumType::isValid (void) const {
  return mProperty_constantMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType::drop (void) {
  mProperty_constantMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKindEnum.enumType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_constantMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.enumType generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ("typeKindEnum.enumType",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKindEnum_2E_enumType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_enumType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_enumType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType GGS_typeKindEnum_2E_enumType::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType result ;
  const GGS_typeKindEnum_2E_enumType * p = (const GGS_typeKindEnum_2E_enumType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_enumType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.enumType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKindEnum_2E_enumType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_::GGS_typeKindEnum_2E_enumType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_::GGS_typeKindEnum_2E_enumType_3F_ (const GGS_typeKindEnum_2E_enumType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_ GGS_typeKindEnum_2E_enumType_3F_::init_nil (void) {
  GGS_typeKindEnum_2E_enumType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_enumType_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindEnum_2E_enumType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKindEnum_2E_enumType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum_2E_enumType_3F_::objectCompare (const GGS_typeKindEnum_2E_enumType_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum_2E_enumType_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindEnum.enumType? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType_3F_ ("typeKindEnum.enumType?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKindEnum_2E_enumType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum_2E_enumType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum_2E_enumType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_ GGS_typeKindEnum_2E_enumType_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum_2E_enumType_3F_ result ;
  const GGS_typeKindEnum_2E_enumType_3F_ * p = (const GGS_typeKindEnum_2E_enumType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum_2E_enumType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum.enumType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (void) :
mProperty_usedInSubscope () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (const GGS_localVarValuation_2E_declared & inSource) :
mProperty_usedInSubscope (inSource.mProperty_usedInSubscope) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared & GGS_localVarValuation_2E_declared::operator = (const GGS_localVarValuation_2E_declared & inSource) {
  mProperty_usedInSubscope = inSource.mProperty_usedInSubscope ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarValuation_2E_declared GGS_localVarValuation_2E_declared::init_21_ (const GGS_bool & in_usedInSubscope,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_usedInSubscope = in_usedInSubscope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared::GGS_localVarValuation_2E_declared (const GGS_bool & inOperand0) :
mProperty_usedInSubscope (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared GGS_localVarValuation_2E_declared::class_func_new (const GGS_bool & in_usedInSubscope,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_usedInSubscope = in_usedInSubscope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVarValuation_2E_declared::objectCompare (const GGS_localVarValuation_2E_declared & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_usedInSubscope.objectCompare (inOperand.mProperty_usedInSubscope) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarValuation_2E_declared::isValid (void) const {
  return mProperty_usedInSubscope.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::drop (void) {
  mProperty_usedInSubscope.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarValuation.declared:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_usedInSubscope.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarValuation.declared generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared ("localVarValuation.declared",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVarValuation_2E_declared::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation_2E_declared ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarValuation_2E_declared::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarValuation_2E_declared (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared GGS_localVarValuation_2E_declared::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared result ;
  const GGS_localVarValuation_2E_declared * p = (const GGS_localVarValuation_2E_declared *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarValuation_2E_declared *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarValuation.declared", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @localVarValuation_2E_declared_3F_
//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_::GGS_localVarValuation_2E_declared_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_::GGS_localVarValuation_2E_declared_3F_ (const GGS_localVarValuation_2E_declared & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_ GGS_localVarValuation_2E_declared_3F_::init_nil (void) {
  GGS_localVarValuation_2E_declared_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarValuation_2E_declared_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarValuation_2E_declared_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_localVarValuation_2E_declared () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVarValuation_2E_declared_3F_::objectCompare (const GGS_localVarValuation_2E_declared_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation_2E_declared_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarValuation.declared? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ("localVarValuation.declared?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVarValuation_2E_declared_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarValuation_2E_declared_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarValuation_2E_declared_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_ GGS_localVarValuation_2E_declared_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localVarValuation_2E_declared_3F_ result ;
  const GGS_localVarValuation_2E_declared_3F_ * p = (const GGS_localVarValuation_2E_declared_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarValuation_2E_declared_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarValuation.declared?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (void) :
mProperty_mMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (const GGS_localVarMapListForLLVM_2E_element & inSource) :
mProperty_mMap (inSource.mProperty_mMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element & GGS_localVarMapListForLLVM_2E_element::operator = (const GGS_localVarMapListForLLVM_2E_element & inSource) {
  mProperty_mMap = inSource.mProperty_mMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element GGS_localVarMapListForLLVM_2E_element::init_21_ (const GGS_scopeLocalVarMap & in_mMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element::GGS_localVarMapListForLLVM_2E_element (const GGS_scopeLocalVarMap & inOperand0) :
mProperty_mMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element GGS_localVarMapListForLLVM_2E_element::class_func_new (const GGS_scopeLocalVarMap & in_mMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarMapListForLLVM_2E_element::isValid (void) const {
  return mProperty_mMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::drop (void) {
  mProperty_mMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarMapListForLLVM_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarMapListForLLVM.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarMapListForLLVM.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ("localVarMapListForLLVM.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVarMapListForLLVM_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarMapListForLLVM_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarMapListForLLVM_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarMapListForLLVM_2E_element GGS_localVarMapListForLLVM_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localVarMapListForLLVM_2E_element result ;
  const GGS_localVarMapListForLLVM_2E_element * p = (const GGS_localVarMapListForLLVM_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarMapListForLLVM_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarMapListForLLVM.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

