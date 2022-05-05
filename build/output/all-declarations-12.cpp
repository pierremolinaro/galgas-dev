#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
  GALGAS_lstring var_optionComponentName_1673 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 40)) ;
  GALGAS_commandLineOptionListAST var_options_1723 = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("optionCompilation.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_OptionComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_option_5F_declaration_ (var_options_1723, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool (false), var_optionComponentName_1673, var_options_1723  COMMA_SOURCE_FILE ("optionCompilation.galgas", 47))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 40)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 40)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_ (GALGAS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mOptionTypeName_2192 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  GALGAS_lstring var_mOptionInternalName_2243 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  GALGAS_lchar var_mOptionInvocationLetter_2300 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
  GALGAS_lstring var_mOptionInvocationString_2361 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
  GALGAS_lstring var_mOptionComment_2414 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 64)) ;
  GALGAS_lstring var_defaultValue_2435 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 65))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 65)) ;
  GALGAS_optionDefaultValueEnumAST var_optionDefaultValueKind_2528 ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_2528 = GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 70)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_2435 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 72)) ;
      var_optionDefaultValueKind_2528 = GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 73)) ;
    } break ;
    case 2: {
      GALGAS_luint var_v_2803 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
      var_defaultValue_2435 = GALGAS_lstring::constructor_new (var_v_2803.readProperty_uint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 76)), var_v_2803.readProperty_location ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 76)) ;
      var_optionDefaultValueKind_2528 = GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 77)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssign_operation (var_mOptionTypeName_2192, var_mOptionInternalName_2243, var_mOptionInvocationLetter_2300, var_mOptionInvocationString_2361, var_mOptionComment_2414, var_defaultValue_2435, var_optionDefaultValueKind_2528  COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 64)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 70)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 72)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
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

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 64)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 70)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 72)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 75)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 95)) ;
  GALGAS_lstring var_mGUIName_3529 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 97)) ;
  GALGAS_lstringlist var_importedOptionList_3577 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 98)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes_3640 = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 99)) ;
  GALGAS_withLexiqueListAST var_withLexiqueList_3689 = GALGAS_withLexiqueListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 100)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_3640, inCompiler) ;
    } break ;
    case 3: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_3577, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_3689, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 110)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssign_operation (var_mGUIName_3529, var_importedOptionList_3577, var_simpleGlobalAttributes_3640, var_withLexiqueList_3689  COMMA_SOURCE_FILE ("guiCompilation.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 97)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 110)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 97)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 110)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GALGAS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  GALGAS_lstring var_lexiqueReference_4337 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  GALGAS_guiLabelListAST var_labels_4369 = GALGAS_guiLabelListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 124)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleAttributes_4426 = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 125)) ;
  GALGAS_guiCompoundAttributeListAST var_compoundAttributes_4487 = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)) ;
      GALGAS_uint var_displayStyle_4564 ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_4564 = GALGAS_uint ((uint32_t) 0U) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
        var_displayStyle_4564 = GALGAS_uint ((uint32_t) 1U) ;
      } break ;
      default:
        break ;
      }
      GALGAS_terminalLabelListAST var_terminalList_4703 = GALGAS_terminalLabelListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 138)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_terminal_4768 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 140)) ;
        GALGAS_uint var_displayFlags_4799 ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_4799 = GALGAS_uint ((uint32_t) 0U) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
          var_displayFlags_4799 = GALGAS_uint ((uint32_t) 65535U) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 148)) ;
          GALGAS_luint var_leadingStrip_4993 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 149)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsSupOrEqual, var_leadingStrip_4993.readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_4993.readProperty_location (), GALGAS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 151)) ;
            }
          }
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 153)) ;
          GALGAS_luint var_endingStrip_5168 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 154)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsSupOrEqual, var_endingStrip_5168.readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_5168.readProperty_location (), GALGAS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 156)) ;
            }
          }
          var_displayFlags_4799 = var_leadingStrip_4993.readProperty_uint ().left_shift_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)).operator_or (var_endingStrip_5168.readProperty_uint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_4703.addAssign_operation (var_terminal_4768, var_displayFlags_4799  COMMA_SOURCE_FILE ("guiCompilation.galgas", 161)) ;
        switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      var_labels_4369.addAssign_operation (var_displayStyle_4564, var_terminalList_4703, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 165))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 165)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_key_5559 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 167)) ;
      GALGAS_lstring var_name_5595 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 168)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 169)) ;
      GALGAS_lstring var_value_5621 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 170))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 170)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GALGAS_lstring var_v_5704 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 172)) ;
        var_value_5621 = GALGAS_lstring::constructor_new (var_value_5621.readProperty_string ().add_operation (var_v_5704.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 173)), var_v_5704.readProperty_location ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 173)) ;
        switch (select_galgas_33_GuiComponentSyntax_5 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_6 = false ;
          break ;
        }
      }
      var_compoundAttributes_4487.addAssign_operation (var_key_5559, var_name_5595, var_value_5621  COMMA_SOURCE_FILE ("guiCompilation.galgas", 176)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_name_5888 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 179)) ;
      GALGAS_lstring var_value_5935 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
      var_simpleAttributes_4426.addAssign_operation (var_name_5888, var_value_5935  COMMA_SOURCE_FILE ("guiCompilation.galgas", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 183)) ;
  ioArgument_ioWithLexiqueList.addAssign_operation (var_lexiqueReference_4337, var_labels_4369, var_simpleAttributes_4426, var_compoundAttributes_4487  COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 140)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 148)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 149)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 153)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 154)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 167)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 168)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 169)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 172)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 179)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 183)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)) ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 140)) ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 148)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 149)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 153)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 154)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 159)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_GuiComponentSyntax_3 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 163)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 167)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 168)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 169)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 172)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 179)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 183)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GALGAS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
  GALGAS_lstring var_optionReference_6357 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 192)) ;
  ioArgument_ioImportedOptionList.addAssign_operation (var_optionReference_6357  COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 192)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 192)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GALGAS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mKey_6647 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 199)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
  GALGAS_lstring var_mValue_6670 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 201))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_value_6746 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
    var_mValue_6670 = GALGAS_lstring::constructor_new (var_mValue_6670.readProperty_string ().add_operation (var_value_6746.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)), var_value_6746.readProperty_location ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
    switch (select_galgas_33_GuiComponentSyntax_6 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssign_operation (var_mKey_6647, var_mValue_6670  COMMA_SOURCE_FILE ("guiCompilation.galgas", 207)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 199)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
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

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 199)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 35)) ;
  GALGAS_lstring var_syntaxComponentName_2064 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 36)) ;
  GALGAS_lstring var_importedLexiqueReference_2130 ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_2130 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 40)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 42)) ;
    var_importedLexiqueReference_2130 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 43)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasTranslateFeature_2328 ;
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2328 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_featureName_2425 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_featureName_2425.readProperty_string ().objectCompare (GALGAS_string ("translate"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_featureName_2425.readProperty_location (), GALGAS_string ("only 'feature translate' can be declared here"), fixItArray1  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 53)) ;
      }
    }
    var_hasTranslateFeature_2328 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 57)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_2670 = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 59)) ;
  GALGAS_syntaxRuleListAST var_ruleList_2722 = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 60)) ;
  GALGAS_semanticDeclarationListAST var_mSemanticDeclarations_2775 = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 61)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (var_nonterminalDeclarationList_2670, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (var_ruleList_2722, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 69)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssign_operation (var_syntaxComponentName_2064, var_importedLexiqueReference_2130, var_nonterminalDeclarationList_2670, var_ruleList_2722, var_hasTranslateFeature_2328  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 36)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 42)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 43)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 57)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 36)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 42)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 43)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 57)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 84)) ;
  GALGAS_lstring var_syntaxComponentName_3588 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 86)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3659 = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 88)) ;
  GALGAS_syntaxRuleListAST var_ruleList_3711 = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 89)) ;
  GALGAS_semanticDeclarationListAST var_mSemanticDeclarations_3764 = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (var_nonterminalDeclarationList_3659, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (var_ruleList_3711, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 98)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxExtensions.addAssign_operation (var_syntaxComponentName_3588.readProperty_string (), var_syntaxComponentName_3588, var_nonterminalDeclarationList_3659, var_ruleList_3711  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 86)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 98)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 86)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GALGAS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 111)) ;
  GALGAS_lstring var_mNonterminalName_4578 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 112)) ;
  GALGAS_nonTerminalLabelListAST var_labels_4642 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 113)) ;
  GALGAS_formalParameterListAST var_firstBranchFormalParameters_4732 ;
  nt_formal_5F_parameter_5F_list_ (var_firstBranchFormalParameters_4732, inCompiler) ;
  var_labels_4642.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 115))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 115)), var_firstBranchFormalParameters_4732, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 115))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 115)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 118)) ;
      GALGAS_lstring var_labelName_4879 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 119)) ;
      GALGAS_formalParameterListAST var_formalParameters_4955 ;
      nt_formal_5F_parameter_5F_list_ (var_formalParameters_4955, inCompiler) ;
      var_labels_4642.addAssign_operation (var_labelName_4879, var_formalParameters_4955, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 121))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 121)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssign_operation (var_mNonterminalName_4578, var_labels_4642  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 111)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 112)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 118)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 119)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 111)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 112)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 118)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 119)) ;
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
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_formalParameterListAST var_mFormalParameters_5526 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameters_5526, inCompiler) ;
  GALGAS_location var_endOfArguments_5549 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 132)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 133)) ;
  GALGAS_syntaxInstructionList var_mSyntaxInstructionList_5655 ;
  nt_syntax_5F_instruction_5F_list_ (var_mSyntaxInstructionList_5655, inCompiler) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameters_5526, var_endOfArguments_5549, var_mSyntaxInstructionList_5655, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 140))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 133)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 141)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 133)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GALGAS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 147)) ;
  GALGAS_lstring var_mNonterminalName_6057 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 148)) ;
  GALGAS_lstring var_labelName_6099 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 149))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 149)) ;
  GALGAS_syntaxRuleLabelListAST var_mLabelList_6153 = GALGAS_syntaxRuleLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 150)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (var_labelName_6099, var_mLabelList_6153, inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 154)) ;
      var_labelName_6099 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 155)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioRuleList.addAssign_operation (var_mNonterminalName_6057, var_mLabelList_6153  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 147)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 155)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 147)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 155)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GALGAS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GALGAS_syntaxInstructionList::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 167)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 170)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction_6901 ;
      nt_semantic_5F_instruction_ (var_instruction_6901, inCompiler) ;
      outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_6901  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 173)) ;
    } break ;
    case 4: {
      GALGAS_syntaxInstructionAST var_instruction_7002 ;
      nt_syntax_5F_instruction_ (var_instruction_7002, inCompiler) ;
      outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_7002  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 176)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 170)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 170)) ;
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
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mLabelName_1117 ;
  switch (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler)) {
  case 1: {
    var_mLabelName_1117 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 23))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 23)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 25)) ;
    var_mLabelName_1117 = GALGAS_lstring::constructor_new (GALGAS_string ("parse"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 26))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 26)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 28)) ;
    var_mLabelName_1117 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mNonterminalName_1401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 31)) ;
  GALGAS_actualParameterListAST var_mActualParameterList_1502 ;
  nt_actual_5F_parameter_5F_list_ (var_mActualParameterList_1502, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_1672 ;
  switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_1672 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 38)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_1672, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_nonterminalCallInstruction::constructor_new (var_mNonterminalName_1401.readProperty_location (), var_mNonterminalName_1401, var_mLabelName_1117, var_mActualParameterList_1502, var_grammarInstructionSyntaxDirectedTranslationResult_1672  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 25)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 28)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 31)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 38)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 25)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 28)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 31)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 38)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 22)) ;
  GALGAS_location var_mRepeatInstructionLocation_1082 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 23)) ;
  GALGAS_syntaxInstructionList var_mRepeatedInstructionList_1182 ;
  nt_syntax_5F_instruction_5F_list_ (var_mRepeatedInstructionList_1182, inCompiler) ;
  GALGAS_location var_endOf_5F_repeated_5F_instructions_1218 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 25)) ;
  GALGAS_listOfSyntaxInstructionList var_mRepeatBranchList_1261 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 28)) ;
    GALGAS_syntaxInstructionList var_mInstructionList_1396 ;
    nt_syntax_5F_instruction_5F_list_ (var_mInstructionList_1396, inCompiler) ;
    var_mRepeatBranchList_1261.addAssign_operation (var_mInstructionList_1396, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 30))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 30)) ;
    switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 33)) ;
  GALGAS_location var_endOf_5F_repeat_5F_instruction_1519 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 34)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1598 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-repeat.galgas", 37)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_1598.readProperty_string ().objectCompare (GALGAS_string ("repeat"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%repeat")) ;
        inCompiler->emitSemanticError (var_terminator_1598.readProperty_location (), GALGAS_string ("the terminator attribute should be '%repeat'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 39)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_repeatInstruction::constructor_new (var_mRepeatInstructionLocation_1082, var_mRepeatedInstructionList_1182, var_endOf_5F_repeated_5F_instructions_1218, var_mRepeatBranchList_1261, var_endOf_5F_repeat_5F_instruction_1519  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 22)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 28)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 33)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-repeat.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 22)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 28)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 33)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-repeat.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 20)) ;
  GALGAS_location var_mSelectInstructionLocation_958 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 21)) ;
  GALGAS_listOfSyntaxInstructionList var_mSelectBranchList_1001 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 22)) ;
  GALGAS_syntaxInstructionList var_il_1095 ;
  nt_syntax_5F_instruction_5F_list_ (var_il_1095, inCompiler) ;
  var_mSelectBranchList_1001.addAssign_operation (var_il_1095, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 24))  COMMA_SOURCE_FILE ("instruction-select.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 26)) ;
    GALGAS_syntaxInstructionList var_instructionList_1238 ;
    nt_syntax_5F_instruction_5F_list_ (var_instructionList_1238, inCompiler) ;
    var_mSelectBranchList_1001.addAssign_operation (var_instructionList_1238, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 28))  COMMA_SOURCE_FILE ("instruction-select.galgas", 28)) ;
    switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 31)) ;
  GALGAS_location var_endOf_5F_select_5F_instruction_1359 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 32)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1438 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-select.galgas", 35)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_1438.readProperty_string ().objectCompare (GALGAS_string ("select"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%select")) ;
        inCompiler->emitSemanticError (var_terminator_1438.readProperty_location (), GALGAS_string ("the terminator attribute should be '%select'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-select.galgas", 37)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_selectInstruction::constructor_new (var_mSelectInstructionLocation_958, var_mSelectBranchList_1001, var_endOf_5F_select_5F_instruction_1359  COMMA_SOURCE_FILE ("instruction-select.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 20)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 31)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-select.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 20)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 31)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-select.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_terminalName_1286 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 22)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 32)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1644, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1770, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_terminalCheckInstruction::constructor_new (var_terminalName_1286.readProperty_location (), var_terminalName_1286, var_actualInputParameterList_1406, var_indexNameList_1461, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1644, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1770  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 22)) ;
  nt_actual_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 32)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 22)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 32)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GALGAS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 49)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_indexName_2889 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 54)) ;
      GALGAS_lstring var_postfixName_2953 ;
      switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
        var_postfixName_2953 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 57)) ;
      } break ;
      case 2: {
        var_postfixName_2953 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 59)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssign_operation (var_indexName_2889, var_postfixName_2953  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 61)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 54)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 59)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 54)) ;
      switch (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 59)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
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
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 24)) ;
  GALGAS_location var_instructionLocation_1150 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 26)) ;
  GALGAS_semanticExpressionAST var_variantExpression_1241 ;
  nt_expression_ (var_variantExpression_1241, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_1272 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_whileExpression_1362 ;
  nt_expression_ (var_whileExpression_1362, inCompiler) ;
  GALGAS_location var_endOfWhileExpression_1391 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 32)) ;
  GALGAS_syntaxInstructionList var_instructionList_1491 ;
  nt_syntax_5F_instruction_5F_list_ (var_instructionList_1491, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 34)) ;
  GALGAS_location var_endOfInstructionList_1530 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 35)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1609 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 38)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 32)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 34)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 26)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 32)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 34)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 19)) ;
  GALGAS_location var_instructionLocation_955 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 21)) ;
  GALGAS_listOfSyntaxInstructionList var_mParseDoBranchList_1008 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 22)) ;
  GALGAS_syntaxInstructionList var_il_1102 ;
  nt_syntax_5F_instruction_5F_list_ (var_il_1102, inCompiler) ;
  var_mParseDoBranchList_1008.addAssign_operation (var_il_1102, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 24))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 26)) ;
    GALGAS_syntaxInstructionList var_instructionList_1250 ;
    nt_syntax_5F_instruction_5F_list_ (var_instructionList_1250, inCompiler) ;
    var_mParseDoBranchList_1008.addAssign_operation (var_instructionList_1250, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 28))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 28)) ;
    switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 31)) ;
  GALGAS_location var_endOfInstruction_1364 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 32)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1443 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 35)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_1443.readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%parse")) ;
        inCompiler->emitSemanticError (var_terminator_1443.readProperty_location (), GALGAS_string ("the terminator attribute should be '%parse'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 37)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseRewindInstruction::constructor_new (var_instructionLocation_955, var_mParseDoBranchList_1008, var_endOfInstruction_1364  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 21)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 31)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 21)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 26)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 31)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 23)) ;
  nt_syntax_5F_instruction_5F_list_ (outArgument_outElseInstructionList, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 23)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 23)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 30)) ;
  GALGAS_location var_instructionLocation_1460 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 31)) ;
  GALGAS_semanticExpressionAST var_whenExpression_1514 ;
  nt_expression_ (var_whenExpression_1514, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_1542 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 34)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 34)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 30)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 34)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  GALGAS_location var_instructionLocation_2318 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 57)) ;
  GALGAS_semanticExpressionAST var_whenExpression_2406 ;
  nt_expression_ (var_whenExpression_2406, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_2434 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_2537 ;
  nt_syntax_5F_instruction_5F_list_ (var_whenInstructionList_2537, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_2567 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 62)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_2685 ;
  nt_branchOfParseWhithInstruction_ (var_elseInstructionList_2685, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_2715 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 66)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2804 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 69)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 57)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 66)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 69)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 57)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 66)) ;
  switch (select_galgas_33_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 69)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 18)) ;
  GALGAS_location var_instructionLocation_891 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 19)) ;
  GALGAS_semanticExpressionAST var_sentExpression_968 ;
  nt_expression_ (var_sentExpression_968, inCompiler) ;
  outArgument_outInstruction = GALGAS_syntaxSendInstruction::constructor_new (var_instructionLocation_891, var_sentExpression_968  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lbool var_hasIndexing_1442 ;
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_1442 = GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 25))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
    var_hasIndexing_1442 = GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 27))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 27)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 30)) ;
  GALGAS_lstring var_mGrammarName_1654 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 31)) ;
  GALGAS_lstring var_mGrammarClass_1733 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 32)) ;
  GALGAS_bool var_hasTranslateFeature_1792 ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_1792 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_featureName_1889 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 38)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_featureName_1889.readProperty_string ().objectCompare (GALGAS_string ("translate"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_featureName_1889.readProperty_location (), GALGAS_string ("only 'feature translate' can be declared here"), fixItArray1  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 40)) ;
      }
    }
    var_hasTranslateFeature_1792 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  GALGAS_lstringlist var_syntaxComponents_2124 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 46)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 48)) ;
    GALGAS_lstring var_syntaxComponent_2204 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 49)) ;
    var_syntaxComponents_2124.addAssign_operation (var_syntaxComponent_2204  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 50)) ;
    switch (select_galgas_33_GrammarComponentSyntax_2 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_mStartSymbol_2333 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 54)) ;
  GALGAS_nonTerminalLabelListAST var_mLabelList_2375 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 55)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 56))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 56)), var_mLabelList_2375, inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_galgas_33_GrammarComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 59)) ;
      GALGAS_lstring var_labelName_2564 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 60)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (var_labelName_2564, var_mLabelList_2375, inCompiler) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_mUnusedNonterminalList_2698 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 64)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    switch (select_galgas_33_GrammarComponentSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 67)) ;
      GALGAS_lstring var_nonterminalSymbolName_2810 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
      var_mUnusedNonterminalList_2698.addAssign_operation (var_nonterminalSymbolName_2810  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_4 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 72)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_galgas_33_GrammarComponentAST::constructor_new (GALGAS_bool (false), var_hasIndexing_1442, var_mGrammarName_1654, var_mGrammarClass_1733, var_syntaxComponents_2124, var_mStartSymbol_2333, var_mLabelList_2375, var_mUnusedNonterminalList_2698, var_hasTranslateFeature_1792  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 73))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 30)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 32)) ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 48)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 49)) ;
    switch (select_galgas_33_GrammarComponentSyntax_2 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 54)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_GrammarComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 60)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 30)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 32)) ;
  switch (select_galgas_33_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 48)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 49)) ;
    switch (select_galgas_33_GrammarComponentSyntax_2 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 54)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_GrammarComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 60)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
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

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
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

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
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
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4159 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 108)) ;
  GALGAS_lstring var_mTypeName_4195 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 114)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_4159, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 117)), var_mTypeName_4195, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 114)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4713 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  GALGAS_lstring var_mTypeName_4759 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 130)) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 135)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_4713, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 138)), var_mTypeName_4759, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 130)) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 135)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 130)) ;
  switch (select_galgas_33_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_5286 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 149)) ;
  GALGAS_lstring var_mTypeName_5322 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 155)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_5286, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 158)), var_mTypeName_5322, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 156)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 155)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_5843 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 169)) ;
  GALGAS_lstring var_mTypeName_5879 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 170)) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 171)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_5843, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 174)), var_mTypeName_5879, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 169)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 171)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_GrammarComponentSyntax::rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 169)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 171)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 30)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_1824 ;
  nt_semantic_5F_instruction_5F_list_ (var_prologueInstructionList_1824, inCompiler) ;
  GALGAS_location var_endOfPrologue_1846 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 33)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssign_operation (var_prologueInstructionList_1824, var_endOfPrologue_1846  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 30)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 30)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 45)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_2437 ;
  nt_semantic_5F_instruction_5F_list_ (var_prologueInstructionList_2437, inCompiler) ;
  GALGAS_location var_endOfPrologue_2459 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 48)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssign_operation (var_prologueInstructionList_2437, var_endOfPrologue_2459  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 45)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 45)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 61)) ;
  GALGAS_lstring var_mSourceFileExtension_3013 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 63)) ;
  GALGAS_lstring var_mSourceFileHelp_3072 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 64)) ;
  GALGAS_lstring var_referenceGrammar_3131 ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_3131 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
    var_referenceGrammar_3131 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_selector_3289 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 74)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_3289.readProperty_string ().objectCompare (GALGAS_string ("sourceFilePath"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3289.readProperty_location (), GALGAS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 76)) ;
    }
  }
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_3495 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 80)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, var_typeName_3495.readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3495.readProperty_location (), GALGAS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 82)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isUnused_3647 ;
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_3647 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 89)) ;
    var_isUnused_3647 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSourceFileVariableName_3788 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 94)) ;
  GALGAS_semanticInstructionListAST var_mInstructionList_3885 ;
  nt_semantic_5F_instruction_5F_list_ (var_mInstructionList_3885, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3914 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssign_operation (var_mSourceFileExtension_3013, var_mSourceFileHelp_3072, var_mSourceFileVariableName_3788, var_isUnused_3647, var_referenceGrammar_3131, var_mInstructionList_3885, var_endOfInstructionList_3914  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 64)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 74)) ;
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 80)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 89)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 94)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProgramDeclarations::rule_galgas_33_ProgramDeclarations_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 64)) ;
  switch (select_galgas_33_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 74)) ;
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 80)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 89)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 94)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 39)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 39)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 39)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
  GALGAS_semanticExpressionAST var_ifExpression_1825 ;
  nt_expression_ (var_ifExpression_1825, inCompiler) ;
  GALGAS_location var_operatorLocation_1850 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_thenExpression_1915 ;
  nt_expression_ (var_thenExpression_1915, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 53)) ;
  GALGAS_semanticExpressionAST var_elseExpression_1963 ;
  nt_expression_ (var_elseExpression_1963, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation_1850, var_ifExpression_1825, var_thenExpression_1915, var_elseExpression_1963  COMMA_SOURCE_FILE ("expression-if.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 51)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 53)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 48)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 51)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 53)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i2_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1540 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation_1540, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1542 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation_1542, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i4_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_1419 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 33)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier_1419  COMMA_SOURCE_FILE ("expression-var.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-output-expression-list.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_1691 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 43)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 43)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 43)) ;
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
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 46)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 47))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 53)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 54))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_1632 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-literal-string.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_1684 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 41)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 41)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 41)) ;
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
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_1441 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 33)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar_1441  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_1464 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 33)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble_1464  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint var_literalInt_3463 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 85)) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionAST::constructor_new (var_literalInt_3463  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint var_literalInt_3751 = inCompiler->synthetizedAttribute_sint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 92)) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionAST::constructor_new (var_literalInt_3751  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint_36__34_ var_literalInt_4041 = inCompiler->synthetizedAttribute_uint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 99)) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionAST::constructor_new (var_literalInt_4041  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint_36__34_ var_literalInt_4334 = inCompiler->synthetizedAttribute_sint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 106)) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionAST::constructor_new (var_literalInt_4334  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_4626 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_bigint_5F_G COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 113)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt_4626  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_bigint_5F_G COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 113)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_bigint_5F_G COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i16_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4011 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 102)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4061 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4121 ;
      nt_simple_5F_expression_ (var_rightOperand_4121, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4011, var_leftOperand_4061, GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression-comparison.galgas", 105)), var_rightOperand_4121  COMMA_SOURCE_FILE ("expression-comparison.galgas", 105)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4264 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4314 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4374 ;
      nt_simple_5F_expression_ (var_rightOperand_4374, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4264, var_leftOperand_4314, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression-comparison.galgas", 111)), var_rightOperand_4374  COMMA_SOURCE_FILE ("expression-comparison.galgas", 111)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_4520 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 114)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4570 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4630 ;
      nt_simple_5F_expression_ (var_rightOperand_4630, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4520, var_leftOperand_4570, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 117)), var_rightOperand_4630  COMMA_SOURCE_FILE ("expression-comparison.galgas", 117)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_4780 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 120)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4830 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4890 ;
      nt_simple_5F_expression_ (var_rightOperand_4890, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_4780, var_leftOperand_4830, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 123)), var_rightOperand_4890  COMMA_SOURCE_FILE ("expression-comparison.galgas", 123)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5042 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 126)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5091 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5151 ;
      nt_simple_5F_expression_ (var_rightOperand_5151, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5042, var_leftOperand_5091, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 129)), var_rightOperand_5151  COMMA_SOURCE_FILE ("expression-comparison.galgas", 129)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_5300 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 132)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5349 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5409 ;
      nt_simple_5F_expression_ (var_rightOperand_5409, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5300, var_leftOperand_5349, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 135)), var_rightOperand_5409  COMMA_SOURCE_FILE ("expression-comparison.galgas", 135)) ;
    } break ;
    case 8: {
      GALGAS_location var_operatorLocation_5556 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 138)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5607 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5667 ;
      nt_simple_5F_expression_ (var_rightOperand_5667, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_5556, var_leftOperand_5607, GALGAS_comparison::constructor_sameInstance (SOURCE_FILE ("expression-comparison.galgas", 141)), var_rightOperand_5667  COMMA_SOURCE_FILE ("expression-comparison.galgas", 141)) ;
    } break ;
    case 9: {
      GALGAS_location var_operatorLocation_5817 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 143)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 144)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 102)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 108)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 114)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 120)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 126)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 132)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 138)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 144)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 102)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 108)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 114)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 120)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 126)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 132)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 138)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 144)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4606 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 115)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 116)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4656 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4703 ;
      nt_term_ (var_rightOperand_4703, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation_4606, var_leftOperand_4656, var_rightOperand_4703  COMMA_SOURCE_FILE ("expression-additive.galgas", 119)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4837 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 121)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 122)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4887 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4934 ;
      nt_term_ (var_rightOperand_4934, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation_4837, var_leftOperand_4887, var_rightOperand_4934  COMMA_SOURCE_FILE ("expression-additive.galgas", 125)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_5069 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 128)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5118 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5165 ;
      nt_term_ (var_rightOperand_5165, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation_5069, var_leftOperand_5118, var_rightOperand_5165  COMMA_SOURCE_FILE ("expression-additive.galgas", 131)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_5293 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 133)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 134)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5343 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5390 ;
      nt_term_ (var_rightOperand_5390, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation_5293, var_leftOperand_5343, var_rightOperand_5390  COMMA_SOURCE_FILE ("expression-additive.galgas", 137)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5528 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 140)) ;
      GALGAS_semanticExpressionAST var_leftOperand_5577 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_5624 ;
      nt_term_ (var_rightOperand_5624, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation_5528, var_leftOperand_5577, var_rightOperand_5624  COMMA_SOURCE_FILE ("expression-additive.galgas", 143)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_5752 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 145)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 146)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 116)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 122)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 128)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 134)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 140)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 146)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 116)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 122)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 128)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 134)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 140)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 146)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4117 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 102)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4166 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4238 ;
      nt_factor_ (var_rightOperand_4238, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation_4117, var_leftOperand_4166, var_rightOperand_4238  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 105)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4377 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4427 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4499 ;
      nt_factor_ (var_rightOperand_4499, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation_4377, var_leftOperand_4427, var_rightOperand_4499  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 111)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_4648 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 114)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4697 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4746 ;
      nt_factor_ (var_rightOperand_4746, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation_4648, var_leftOperand_4697, var_rightOperand_4746  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 117)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_4879 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 120)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4929 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4978 ;
      nt_factor_ (var_rightOperand_4978, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation_4879, var_leftOperand_4929, var_rightOperand_4978  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 123)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5121 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 126)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 102)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 108)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 114)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 120)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 126)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 102)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 108)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 114)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 120)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 126)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (outArgument_outExpression, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_2857 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 87)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_is COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 88)) ;
    GALGAS_dynamicTypeComparisonKind var_kind_2927 ;
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 91)) ;
      var_kind_2927 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("expression-cast-expression.galgas", 92)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 94)) ;
      var_kind_2927 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-cast-expression.galgas", 95)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 97)) ;
      var_kind_2927 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("expression-cast-expression.galgas", 98)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName_3116 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 100)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_2857, var_kind_2927, var_typeName_3116  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 101)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_3314 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 108)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 109)) ;
    GALGAS_lstring var_typeName_3370 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 110)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_3314, var_typeName_3370  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 111)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_or_parse (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_is COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 88)) ;
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 91)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 97)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 100)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 109)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_is COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 88)) ;
    switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 91)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 97)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 100)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 109)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 54)) ;
  GALGAS_lstring var_optionComponentName_2123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 56)) ;
  GALGAS_lstring var_optionName_2198 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 57)) ;
  GALGAS_lstring var_getterName_2231 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 58)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName_2123, var_optionName_2198, var_getterName_2231  COMMA_SOURCE_FILE ("expression-option.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  GALGAS_lstring var_optionName_2581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 69)) ;
  GALGAS_lstring var_getterName_2614 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 70)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 71))  COMMA_SOURCE_FILE ("expression-option.galgas", 71)), var_optionName_2581, var_getterName_2614  COMMA_SOURCE_FILE ("expression-option.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 40)) ;
  GALGAS_lstring var_lexiqueName_1613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 42)) ;
  GALGAS_lstring var_getterName_1654 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 43)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName_1613, var_getterName_1654  COMMA_SOURCE_FILE ("expression-lexique.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 73)) ;
  GALGAS_lstring var_filewrapperName_2739 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 74)) ;
  switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName_2739  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 80)) ;
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_2960 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 82)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName_2739, var_filePath_2960  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 83)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_3143 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 88)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 73)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 74)) ;
  switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 80)) ;
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 82)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 88)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 73)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 74)) ;
  switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 80)) ;
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 82)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 88)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 52)) ;
  GALGAS_location var_startLocation_2228 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 54)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_2309 ;
  nt_expression_ (var_receiverExpression_2309, inCompiler) ;
  GALGAS_lstring var_getterName_2374 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 57)) ;
  GALGAS_actualOutputExpressionList var_expressionList_2476 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_2476, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 60)) ;
  GALGAS_location var_endLocation_2504 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 61)) ;
  outArgument_outExpression = GALGAS_getterCallExpressionAST::constructor_new (GALGAS_bool (true), var_receiverExpression_2309, var_getterName_2374, var_expressionList_2476, var_startLocation_2228.getter_union (var_endLocation_2504, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 67))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 52)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 57)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 52)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 57)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i25_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 82))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 82)) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3269 ;
  nt_optional_5F_type_ (var_typeName_3269, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 93)) ;
  GALGAS_location var_startOfExpression_3303 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 94)) ;
  GALGAS_lstring var_constructorName_3391 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
  GALGAS_actualOutputExpressionList var_expressionList_3466 ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    var_expressionList_3466 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 100)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 102)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 103)), GALGAS_string ("'{' is obsolete here, use '('"), fixItArray0  COMMA_SOURCE_FILE ("expression-constructor.galgas", 103)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_3466, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 105)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 107)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_3466, inCompiler) ;
    switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 112)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 102)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 105)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 107)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 112)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 102)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 105)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 107)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 112)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_4264 ;
  nt_optional_5F_type_ (var_typeName_4264, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 130)) ;
  outArgument_outExpression = GALGAS_defaultConstructorExpressionAST::constructor_new (var_typeName_4264  COMMA_SOURCE_FILE ("expression-constructor.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 130)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_1670 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1777 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_1777, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName_1670, var_expressionList_1777  COMMA_SOURCE_FILE ("expression-function-call.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 41)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  GALGAS_lstring var_typeName_1458 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 35)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName_1458  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3734 ;
  nt_optional_5F_type_ (var_typeName_3734, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 96)) ;
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
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 104)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 104)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 96)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 104)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i31_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList_4357 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_4397 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 120)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 120)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 120)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i32_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_expression_4898 ;
  nt_expression_ (var_expression_4898, inCompiler) ;
  outArgument_outValueElement = GALGAS_expressionCollectionValue::constructor_new (var_expression_4898, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 132))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i33_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 33)) ;
  outArgument_outExpression = GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 34))  COMMA_SOURCE_FILE ("expression-self.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 43)) ;
      GALGAS_lstring var_structFieldName_1733 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 44)) ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionAST::constructor_new (var_structFieldName_1733.readProperty_location (), outArgument_outExpression, var_structFieldName_1733  COMMA_SOURCE_FILE ("expression-property-access.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 44)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 44)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1534 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation_1534, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-not.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i36_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1536 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_tildeExpressionAST::constructor_new (var_operatorLocation_1536, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-tilde.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i37_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1535 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 36)) ;
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__B0_ COMMA_SOURCE_FILE ("expression-bang.galgas", 38)) ;
  outArgument_outExpression = GALGAS_bangExpressionAST::constructor_new (var_operatorLocation_1535, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-bang.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__B0_ COMMA_SOURCE_FILE ("expression-bang.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__B0_ COMMA_SOURCE_FILE ("expression-bang.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i38_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_1563 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionAST::constructor_new (var_operatorLocation_1563, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i39_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_4081 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 102)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4130 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4187 ;
      nt_expression_5F_and_ (var_rightOperand_4187, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation_4081, var_leftOperand_4130, var_rightOperand_4187  COMMA_SOURCE_FILE ("expression-or.galgas", 105)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_4314 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4364 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4421 ;
      nt_expression_5F_and_ (var_rightOperand_4421, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation_4314, var_leftOperand_4364, var_rightOperand_4421  COMMA_SOURCE_FILE ("expression-or.galgas", 111)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_4553 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 114)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4602 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4659 ;
      nt_expression_5F_and_ (var_rightOperand_4659, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation_4553, var_leftOperand_4602, var_rightOperand_4659  COMMA_SOURCE_FILE ("expression-or.galgas", 117)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_4787 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 120)) ;
      GALGAS_semanticExpressionAST var_leftOperand_4838 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_4895 ;
      nt_expression_5F_and_ (var_rightOperand_4895, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation_4787, var_leftOperand_4838, var_rightOperand_4895  COMMA_SOURCE_FILE ("expression-or.galgas", 123)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_5031 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 126)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 102)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 108)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 114)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 120)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 126)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 102)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 108)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 114)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 120)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 126)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i40_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2417 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 60)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2466 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2547 ;
      nt_relation_5F_factor_ (var_rightOperand_2547, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation_2417, var_leftOperand_2466, var_rightOperand_2547  COMMA_SOURCE_FILE ("expression-and.galgas", 63)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2675 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 66)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 60)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 66)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 60)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 66)) ;
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
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 256)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_8983 ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode_9051 ;
      switch (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector_8983 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 262)) ;
        var_mFormalParameterPassingMode_9051 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 263)) ;
      } break ;
      case 2: {
        var_selector_8983 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 265)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 266)) ;
        var_mFormalParameterPassingMode_9051 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 267)) ;
      } break ;
      case 3: {
        var_selector_8983 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 269)) ;
        var_mFormalParameterPassingMode_9051 = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 270)) ;
      } break ;
      case 4: {
        var_selector_8983 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 272)) ;
        var_mFormalParameterPassingMode_9051 = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 273)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_9589 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 275)) ;
      GALGAS_bool var_mIsUnused_9615 ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused_9615 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 280)) ;
        var_mIsUnused_9615 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_9769 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 283)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_8983, var_mFormalParameterPassingMode_9051, var_mFormalParameterTypeName_9589, var_mFormalParameterName_9769, var_mIsUnused_9615  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 284)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 291)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 256)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 262)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 265)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 266)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 269)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 272)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 275)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 280)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 283)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 291)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 256)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 262)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 265)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 266)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 269)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 272)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 275)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 280)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 283)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 291)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 299)) ;
  nt_actual_5F_parameter_5F_list_ (outArgument_outActualParameterList, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 301)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 299)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 301)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 299)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 301)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 307)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_10708 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 310)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 312)) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector_10708  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 313))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 313)) ;
      } break ;
      case 2: {
        GALGAS_luint var_count_10857 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 315)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 316)) ;
        GALGAS_uint var_n_10883 = var_count_10857.readProperty_uint () ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_10708.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("\?")) ;
            inCompiler->emitSemanticError (var_selector_10708.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 319)) ;
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_n_10883.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_count_10857.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 322)) ;
          }
        }
        if (kBoolFalse == test_3) {
          if (var_n_10883.isValid ()) {
            uint32_t variant_11129 = var_n_10883.uintValue () ;
            bool loop_11129 = true ;
            while (loop_11129) {
              loop_11129 = GALGAS_bool (kIsStrictSup, var_n_10883.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
              if (loop_11129) {
                loop_11129 = GALGAS_bool (kIsStrictSup, var_n_10883.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
              }
              if (loop_11129 && (0 == variant_11129)) {
                loop_11129 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 324)) ;
              }
              if (loop_11129) {
                variant_11129 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector_10708.readProperty_location (), var_n_10883  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 326))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 326)) ;
                var_n_10883.minusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 327)) ;
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
      GALGAS_lstring var_selector_11344 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 332)) ;
      GALGAS_semanticExpressionAST var_e_11393 ;
      nt_expression_ (var_e_11393, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation_11437 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 334)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_11344, var_e_11393, var_endOfExpressionLocation_11437  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 335))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 335)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_11624 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 341)) ;
      GALGAS_lstring var_outputInputActualParameterName_11679 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 342)) ;
      GALGAS_lstringlist var_structAttributeList_11709 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 343)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 346)) ;
          GALGAS_lstring var_structAttributeName_11809 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 347)) ;
          var_structAttributeList_11709.addAssign_operation (var_structAttributeName_11809  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 348)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector_11624, var_outputInputActualParameterName_11679, var_structAttributeList_11709  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 350))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 350)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_12072 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 356)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 357)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector_12072  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 358))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 358)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_12202 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 360)) ;
      GALGAS_luint var_count_12235 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 361)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 362)) ;
      GALGAS_uint var_n_12257 = var_count_12235.readProperty_uint () ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_selector_12202.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("!\?")) ;
          inCompiler->emitSemanticError (var_selector_12202.readProperty_location (), GALGAS_string ("the selector should be '!\?'"), fixItArray7  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 365)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, var_n_12257.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_count_12235.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray9  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 368)) ;
        }
      }
      if (kBoolFalse == test_8) {
        if (var_n_12257.isValid ()) {
          uint32_t variant_12492 = var_n_12257.uintValue () ;
          bool loop_12492 = true ;
          while (loop_12492) {
            loop_12492 = GALGAS_bool (kIsStrictSup, var_n_12257.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
            if (loop_12492) {
              loop_12492 = GALGAS_bool (kIsStrictSup, var_n_12257.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
            }
            if (loop_12492 && (0 == variant_12492)) {
              loop_12492 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 370)) ;
            }
            if (loop_12492) {
              variant_12492 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector_12202.readProperty_location (), var_n_12257  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 372))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 372)) ;
              var_n_12257.minusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 373)) ;
            }
          }
        }
      }
    } break ;
    case 7: {
      GALGAS_lstring var_selector_12724 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 377)) ;
      GALGAS_lstring var_inputActualParameterName_12773 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 378)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector_12724, var_inputActualParameterName_12773  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 379))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 379)) ;
    } break ;
    case 8: {
      GALGAS_lstring var_selector_12984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 384)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 385)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 386)) ;
      GALGAS_lstring var_inputActualParameterName_13056 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 387)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfPropertyParameterAST::constructor_new (var_selector_12984, var_inputActualParameterName_13056  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 388))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 388)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector_13259 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 393)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394)) ;
      GALGAS_lstring var_declarationTypeName_13310 ;
      switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName_13310 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 397)) ;
      } break ;
      case 2: {
        var_declarationTypeName_13310 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 399)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_13471 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_13259, var_declarationTypeName_13310, var_inputActualParameterName_13471  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 402))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 402)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector_13717 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
      GALGAS_lstring var_declarationTypeName_13765 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
      GALGAS_lstring var_inputActualParameterName_13814 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 410)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_13717, var_declarationTypeName_13765, var_inputActualParameterName_13814  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 411))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 411)) ;
    } break ;
    case 11: {
      GALGAS_lstring var_selector_14044 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 417)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 418)) ;
      GALGAS_lstring var_declarationTypeName_14095 ;
      switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName_14095 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 421)) ;
      } break ;
      case 2: {
        var_declarationTypeName_14095 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 423)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused_14238 ;
      switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused_14238 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 429)) ;
        var_markedAsUnused_14238 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_14397 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector_14044, var_declarationTypeName_14095, var_inputActualParameterName_14397, var_markedAsUnused_14238  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 433))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 433)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 310)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 312)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 315)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 316)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 332)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 341)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 342)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 346)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 347)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 356)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 357)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 360)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 361)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 362)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 377)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 378)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 384)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 385)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 386)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 387)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 393)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 399)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 410)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 417)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 418)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 423)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 429)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 310)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 312)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 315)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 316)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 332)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 341)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 342)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 346)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 347)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 356)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 357)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 360)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 361)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 362)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 377)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 378)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 384)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 385)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 386)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 387)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 393)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 399)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 410)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 417)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 418)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 423)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 429)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_ (GALGAS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 447)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 448)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      GALGAS_bool var_isConstant_15085 ;
      GALGAS_lstring var_selector_15109 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 452)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant_15085 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 456)) ;
        var_isConstant_15085 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_15261 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 459)) ;
      GALGAS_bool var_mIsUnused_15287 ;
      switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused_15287 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 464)) ;
        var_mIsUnused_15287 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_15441 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 467)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_15109, var_mFormalParameterTypeName_15261, var_mFormalParameterName_15441, var_mIsUnused_15287, var_isConstant_15085  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 468)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 475)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 448)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 452)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 456)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 459)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 464)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 467)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 475)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 448)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 452)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 456)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 459)) ;
      switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 464)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 467)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 475)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 288)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 291)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction_11794 ;
      nt_semantic_5F_instruction_ (var_instruction_11794, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_11794  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 294)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 291)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 291)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isLocal_12056 ;
  switch (select_galgas_34_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
    var_isLocal_12056 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 305)) ;
    var_isLocal_12056 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_ (var_isLocal_12056, ioArgument_ioDeclarations, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 305)) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 305)) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 316)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 317)) ;
  GALGAS_lstring var_mActionName_12637 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 319)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_12750 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_12750, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 321)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_12637, var_mFormalParameterList_12750  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 322))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 322)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 316)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 317)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 319)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 321)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 316)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 317)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 319)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 321)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 338)) ;
  GALGAS_lstring var_mRoutineName_13400 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 339)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_13505 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_13505, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 341)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_13602 ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList_13602, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 343)) ;
  GALGAS_location var_endOfInstructionList_13639 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 344)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsPrivate, var_mRoutineName_13400, var_mFormalParameterList_13505, var_mRoutineInstructionList_13602, var_endOfInstructionList_13639  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 345))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 345)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 338)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 339)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 341)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 343)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 338)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 339)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 341)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 343)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 363)) ;
  GALGAS_bool var_isOnce_14323 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_14349 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_14421 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 368)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attribute_14421.readProperty_string ().objectCompare (GALGAS_string ("once"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_isOnce_14323.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attribute_14421.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray3  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 371)) ;
            }
          }
          var_isOnce_14323 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attribute_14421.readProperty_string ().objectCompare (GALGAS_string ("usefull"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_isUsefull_14349.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attribute_14421.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 376)) ;
              }
            }
            var_isUsefull_14349 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%once")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%usefull")) ;
          inCompiler->emitSemanticError (var_attribute_14421.readProperty_location (), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 380)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_14918 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 383)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_15039 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_15039, inCompiler) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_isOnce_14323.boolEnum () ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_15039.getter_length (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 385)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_functionName_14918.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray9  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 386)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 388)) ;
  GALGAS_lstring var_resultTypeName_15218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 389)) ;
  GALGAS_lstring var_resultVariableName_15254 ;
  switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    var_resultVariableName_15254 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 392)) ;
  } break ;
  case 2: {
    var_resultVariableName_15254 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 394))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 394)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 396)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_15467 ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList_15467, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 398)) ;
  GALGAS_location var_endOfFunctionInstructionList_15512 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 399)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_isOnce_14323.boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_14918, var_resultTypeName_15218, var_resultVariableName_15254, var_functionInstructionList_15467, var_endOfFunctionInstructionList_15512, constinArgument_inIsPrivate, var_isUsefull_14349  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 401))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 401)) ;
    }
  }
  if (kBoolFalse == test_10) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_14918, var_formalInputParameterList_15039, var_resultTypeName_15218, var_resultVariableName_15254, var_functionInstructionList_15467, var_endOfFunctionInstructionList_15512, constinArgument_inIsPrivate, var_isUsefull_14349  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 412))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 412)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 363)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 368)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 383)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 388)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 389)) ;
  switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 392)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 396)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 398)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 363)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 368)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 383)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 388)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 389)) ;
  switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 392)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 396)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 398)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 431)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 432)) ;
  GALGAS_lstring var_mActionName_16686 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 433)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 434)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_16815 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_16815, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 436)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 437)) ;
  GALGAS_lstring var_resultTypeName_16864 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 438)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName_16686, var_formalInputParameterList_16815, var_resultTypeName_16864  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 439))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 439)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 431)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 432)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 433)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 434)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 436)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 438)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 431)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 432)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 433)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 434)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 436)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 437)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 438)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_17791 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 458)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_17791.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?")) ;
      inCompiler->emitSemanticError (var_selector_17791.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 460)) ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 463)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 464))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 464)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_18070 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
    GALGAS_lstring var_actualParameterName_18114 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 467)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName_18070, var_actualParameterName_18114  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 468)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 470)) ;
    GALGAS_lstring var_actualParameterTypeName_18307 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 471)) ;
    GALGAS_lstring var_actualParameterName_18351 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 472)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName_18307, var_actualParameterName_18351  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 473)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_18535 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 475)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName_18535  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 476)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 458)) ;
  switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 463)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 467)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 470)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 471)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 472)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 475)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 458)) ;
  switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 463)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 466)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 467)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 470)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 471)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 472)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 475)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 483)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_18978 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 486)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 487)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_18978, GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 488))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 488)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_19107 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 490)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 491)) ;
      GALGAS_lstring var_actualParameterTypeName_19162 ;
      switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_19162 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 494)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_19162 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 496)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_19326 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 498)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_19107, GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName_19162, var_actualParameterName_19326  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 501))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 499)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_19508 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 503)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 504)) ;
      GALGAS_lstring var_actualParameterTypeName_19563 ;
      switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_19563 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 507)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_19563 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 509)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_19727 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 511)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_19508, GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName_19563, var_actualParameterName_19727  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 514))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 512)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_19909 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 516)) ;
      GALGAS_lstring var_actualParameterName_19953 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 517)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_19909, GALGAS_inputParameterVariable::constructor_new (var_actualParameterName_19953  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 518))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 518)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 486)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 487)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 490)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 491)) ;
      switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 496)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 498)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 503)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 504)) ;
      switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 509)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 511)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 516)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 517)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 486)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 487)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 490)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 491)) ;
      switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 496)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 498)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 503)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 504)) ;
      switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 509)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 511)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 516)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 517)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName_2992 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
  GALGAS_lstring var_optionalProperty_3026 ;
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
    var_optionalProperty_3026 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 85)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 87)) ;
    GALGAS_lstring var_attributeName_3130 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88)) ;
    var_optionalProperty_3026 = var_attributeName_3130 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_3248 ;
  nt_expression_ (var_mSourceExpression_3248, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName_2992.readProperty_location (), var_mTargetVariableName_2992, var_optionalProperty_3026, var_mSourceExpression_3248  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 87)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 87)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)) ;
  GALGAS_lstring var_mTargetVariableName_3680 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 106)) ;
  GALGAS_lstring var_optionalProperty_3714 ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    var_optionalProperty_3714 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
    GALGAS_lstring var_attributeName_3818 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
    var_optionalProperty_3714 = var_attributeName_3818 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_3936 ;
  nt_expression_ (var_mSourceExpression_3936, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPropertyAssignmentInstructionAST::constructor_new (var_mTargetVariableName_3680.readProperty_location (), var_mTargetVariableName_3680, var_optionalProperty_3714, var_mSourceExpression_3936  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 106)) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 106)) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 163)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 163)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 163)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i12_ (const GALGAS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiverName_6384 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 173)) ;
  GALGAS_location var_instructionLocation_6412 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 174)) ;
  GALGAS_lstringlist var_mStructAttributeList_6471 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 175)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 178)) ;
      GALGAS_lstring var_attributeName_6545 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 179)) ;
      var_mStructAttributeList_6471.addAssign_operation (var_attributeName_6545  COMMA_SOURCE_FILE ("instruction-concat.galgas", 180)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 183)) ;
    GALGAS_semanticExpressionAST var_expression_6678 ;
    nt_expression_ (var_expression_6678, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6412, constinArgument_inHasSelfPrefix, var_receiverName_6384, var_mStructAttributeList_6471, var_expression_6678  COMMA_SOURCE_FILE ("instruction-concat.galgas", 185)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 193)) ;
    switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
    case 1: {
      GALGAS_actualOutputExpressionList var_expressionList_6999 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_6999, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualElementsInstructionAST::constructor_new (var_instructionLocation_6412, constinArgument_inHasSelfPrefix, var_receiverName_6384, var_mStructAttributeList_6471, var_expressionList_6999  COMMA_SOURCE_FILE ("instruction-concat.galgas", 196)) ;
    } break ;
    case 2: {
      GALGAS_semanticExpressionAST var_expression_7282 ;
      nt_expression_ (var_expression_7282, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6412, constinArgument_inHasSelfPrefix, var_receiverName_6384, var_mStructAttributeList_6471, var_expression_7282  COMMA_SOURCE_FILE ("instruction-concat.galgas", 205)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 214)) ;
    GALGAS_semanticExpressionAST var_expression_7580 ;
    nt_expression_ (var_expression_7580, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6412, constinArgument_inHasSelfPrefix, var_receiverName_6384, var_mStructAttributeList_6471, var_expression_7580  COMMA_SOURCE_FILE ("instruction-concat.galgas", 216)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 224)) ;
    GALGAS_semanticExpressionAST var_expression_7853 ;
    nt_expression_ (var_expression_7853, inCompiler) ;
    outArgument_outInstruction = GALGAS_divEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6412, constinArgument_inHasSelfPrefix, var_receiverName_6384, var_mStructAttributeList_6471, var_expression_7853  COMMA_SOURCE_FILE ("instruction-concat.galgas", 226)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 173)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 183)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 193)) ;
    switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 214)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 224)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 173)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 178)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 183)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 193)) ;
    switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 214)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 224)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i13_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 239)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_8340 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 241)) ;
    GALGAS_semanticExpressionAST var_expression_8398 ;
    nt_expression_ (var_expression_8398, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_8340, var_expression_8398, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 243))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 243)) ;
    switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 241)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 241)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 41)) ;
  GALGAS_location var_instructionLocation_1646 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 42)) ;
  GALGAS_lstringlist var_dropList_1693 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_1746 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 45)) ;
    var_dropList_1693.addAssign_operation (var_variableName_1746  COMMA_SOURCE_FILE ("instruction-drop.galgas", 46)) ;
    switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation_1646, var_dropList_1693  COMMA_SOURCE_FILE ("instruction-drop.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 45)) ;
    switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 45)) ;
    switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i15_ (GALGAS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 111)) ;
  switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
    GALGAS_bool var_hasFixItRemove_4007 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 119)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_hasFixItRemove_4007.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 121)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 121)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 123))  COMMA_SOURCE_FILE ("instruction-error.galgas", 123)) ;
          var_hasFixItRemove_4007 = GALGAS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 127)) ;
        GALGAS_location var_errorLocation_4307 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 128)) ;
        GALGAS_semanticExpressionAST var_expression_4384 ;
        nt_expression_ (var_expression_4384, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItReplace (var_expression_4384, var_errorLocation_4307  COMMA_SOURCE_FILE ("instruction-error.galgas", 130))  COMMA_SOURCE_FILE ("instruction-error.galgas", 130)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 132)) ;
        GALGAS_location var_errorLocation_4527 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 133)) ;
        GALGAS_semanticExpressionAST var_expression_4604 ;
        nt_expression_ (var_expression_4604, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertAfter (var_expression_4604, var_errorLocation_4527  COMMA_SOURCE_FILE ("instruction-error.galgas", 135))  COMMA_SOURCE_FILE ("instruction-error.galgas", 135)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 137)) ;
        GALGAS_location var_errorLocation_4752 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 138)) ;
        GALGAS_semanticExpressionAST var_expression_4829 ;
        nt_expression_ (var_expression_4829, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertBefore (var_expression_4829, var_errorLocation_4752  COMMA_SOURCE_FILE ("instruction-error.galgas", 140))  COMMA_SOURCE_FILE ("instruction-error.galgas", 140)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 142)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 119)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 127)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 132)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 137)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 142)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 119)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 127)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 132)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 137)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 142)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 149)) ;
  GALGAS_location var_instructionLocation_5190 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 150)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_5272 ;
  nt_expression_ (var_mReceiverExpression_5272, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 152)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_5342 ;
  nt_expression_ (var_mErrorExpression_5342, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_5369 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 154)) ;
  switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_5470 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 159)) ;
      var_mBuiltVariableList_5369.addAssign_operation (var_builtVariableName_5470  COMMA_SOURCE_FILE ("instruction-error.galgas", 160)) ;
      switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 162)) ;
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
  GALGAS_fixitListAST var_fixitListAST_5610 ;
  nt_issue_5F_fixit_ (var_fixitListAST_5610, inCompiler) ;
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_5190, var_mReceiverExpression_5272, var_mErrorExpression_5342, var_mBuiltVariableList_5369, var_fixitListAST_5610  COMMA_SOURCE_FILE ("instruction-error.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 149)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 152)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 159)) ;
      switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 162)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 149)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 152)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 157)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 159)) ;
      switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 162)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i17_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_luint var_count_9998 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-for.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 295)) ;
  GALGAS_uint var_n_10016 = var_count_9998.readProperty_uint () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_n_10016.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_9998.readProperty_location (), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 298)) ;
    }
  }
  if (var_n_10016.isValid ()) {
    uint32_t variant_10111 = var_n_10016.uintValue () ;
    bool loop_10111 = true ;
    while (loop_10111) {
      loop_10111 = GALGAS_bool (kIsStrictSup, var_n_10016.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_10111) {
        loop_10111 = GALGAS_bool (kIsStrictSup, var_n_10016.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_10111 && (0 == variant_10111)) {
        loop_10111 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 300)) ;
      }
      if (loop_10111) {
        variant_10111 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 301)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 301))  COMMA_SOURCE_FILE ("instruction-for.galgas", 301)) ;
        var_n_10016.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 302)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-for.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 295)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-for.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 295)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_typeName_10460 ;
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
    var_typeName_10460 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 311)) ;
  } break ;
  case 2: {
    var_typeName_10460 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 313)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_10460, GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 317))  COMMA_SOURCE_FILE ("instruction-for.galgas", 317)) ;
  } break ;
  case 2: {
    GALGAS_bool var_isUnused_10643 ;
    switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
    case 1: {
      var_isUnused_10643 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 323)) ;
      var_isUnused_10643 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_constantName_10787 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 326)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_10460, var_isUnused_10643, var_constantName_10787  COMMA_SOURCE_FILE ("instruction-for.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 313)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 323)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 326)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 313)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 323)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 326)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i19_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_11110 = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 335)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (var_elementList_11110, inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_location_11253 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 340)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 342)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_11353 ;
  nt_expression_ (var_enumeratedExpression_11353, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList_11110, GALGAS_bool (false), var_enumeratedExpression_11353, var_location_11253  COMMA_SOURCE_FILE ("instruction-for.galgas", 344)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_parse (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 342)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 334)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 342)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_11779 ;
  switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
    var_typeName_11779 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 357)) ;
  } break ;
  case 2: {
    var_typeName_11779 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 359)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_11896 ;
  switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 363)) ;
    var_enumerationVariable_11896 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 364)) ;
  } break ;
  case 2: {
    var_enumerationVariable_11896 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 366)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 368)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_12085 ;
  nt_expression_ (var_enumeratedExpression_12085, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName_11779, var_enumerationVariable_11896, var_enumeratedExpression_12085, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 374))  COMMA_SOURCE_FILE ("instruction-for.galgas", 370)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 359)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 363)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 366)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 368)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 359)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 363)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 366)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 368)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 381)) ;
  GALGAS_location var_startLocation_12509 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 382)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 383)) ;
  GALGAS_lstring var_prefix_12558 ;
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    var_prefix_12558 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 386)) ;
  } break ;
  case 2: {
    var_prefix_12558 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endLocation_12659 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 390)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 391)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_12751 ;
  nt_expression_ (var_enumeratedExpression_12751, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix_12558, var_enumeratedExpression_12751, var_startLocation_12509.getter_union (var_endLocation_12659, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 396))  COMMA_SOURCE_FILE ("instruction-for.galgas", 393)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 381)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 383)) ;
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 391)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 381)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 383)) ;
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 391)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
  GALGAS_location var_instructionLocation_13155 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 404)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_13202 = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 405)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_13282 ;
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
      var_ascending_13282 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 411)) ;
      var_ascending_13282 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_13474 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject_13474, inCompiler) ;
    var_mEnumeratedObjectList_13202.addAssign_operation (var_ascending_13282, var_enumeratedObject_13474  COMMA_SOURCE_FILE ("instruction-for.galgas", 415)) ;
    switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 417)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_13610 ;
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    var_mWhileExpression_13610 = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 421))  COMMA_SOURCE_FILE ("instruction-for.galgas", 421)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 423)) ;
    nt_expression_ (var_mWhileExpression_13610, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_13785 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 426)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_13861 ;
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_13861 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 429)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 431)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBeforeInstructionList_13861, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_14051 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 434)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 435)) ;
  GALGAS_lstring var_indexVariableName_14112 ;
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    var_indexVariableName_14112 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 438))  COMMA_SOURCE_FILE ("instruction-for.galgas", 438)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
    var_indexVariableName_14112 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 441)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 442)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_14314 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoInstructionList_14314, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_14338 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 445)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_14415 ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_14415 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 448)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 450)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBetweenInstructionList_14415, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_14609 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 453)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_14684 ;
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_14684 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 456)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mAfterInstructionList_14684, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_14870 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 461)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_14959 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 465)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_14959.readProperty_string ().objectCompare (GALGAS_string ("for"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%for")) ;
        inCompiler->emitSemanticError (var_terminator_14959.readProperty_location (), GALGAS_string ("the terminator attribute should be '%for'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for.galgas", 467)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_foreach_5F_instruction_15148 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 470)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation_13155, var_mEnumeratedObjectList_13202, var_indexVariableName_14112, var_mWhileExpression_13610, var_endof_5F_while_5F_expression_13785, var_mBeforeInstructionList_13861, var_endof_5F_before_5F_branch_14051, var_mBetweenInstructionList_14415, var_endof_5F_between_5F_branch_14609, var_mDoInstructionList_14314, var_endof_5F_do_5F_branch_14338, var_mAfterInstructionList_14684, var_endof_5F_after_5F_branch_14870, var_endof_5F_foreach_5F_instruction_15148  COMMA_SOURCE_FILE ("instruction-for.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 411)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 417)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 423)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 431)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 435)) ;
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 441)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 442)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 450)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 465)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 411)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 417)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 423)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 431)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 435)) ;
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 441)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 442)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 450)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 458)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 465)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 253)) ;
  GALGAS_location var_instructionLocation_11395 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)) ;
  GALGAS_lstring var_grammarComponentName_11464 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  GALGAS_lstring var_labelName_11526 ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    var_labelName_11526 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 258))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 258)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 260)) ;
    var_labelName_11526 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 261)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_actualParameterListAST var_actualParameterList_11736 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_actualParameterList_11736, inCompiler) ;
  nt_grammar_5F_instruction_5F_core_ (var_instructionLocation_11395, var_actualParameterList_11736, var_grammarComponentName_11464, var_labelName_11526, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 253)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 260)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 261)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 253)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 260)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 261)) ;
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
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 274)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_12419 ;
  nt_expression_ (var_sourceExpression_12419, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_12449 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 276)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_12636 ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_12636 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 280)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 282)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_12636, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_12419, var_endOfSourceExpression_12449, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_12636  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 285)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 274)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 282)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 274)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 282)) ;
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
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 303)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_13720 ;
  nt_expression_ (var_sourceExpression_13720, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_13760 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 306)) ;
  GALGAS_semanticExpressionAST var_nameExpression_13836 ;
  nt_expression_ (var_nameExpression_13836, inCompiler) ;
  GALGAS_location var_endOfNameExpression_13874 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 308)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_14052 ;
  switch (select_galgas_34_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_14052 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 312)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 314)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_14052, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_13720, var_endOfSourceExpression_13760, var_nameExpression_13836, var_endOfNameExpression_13874, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_14052  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 317)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 303)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 306)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 314)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 303)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 306)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 314)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 161)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 161)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 161)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i28_ (const GALGAS_bool constinArgument_inPrefixedBySelf,
                                                                                                                         GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName_5535 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)) ;
  GALGAS_lstringlist var_mStructAttributeList_5564 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)) ;
      GALGAS_lstring var_attributeName_5650 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)) ;
      var_mStructAttributeList_5564.addAssign_operation (var_attributeName_5650  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 177)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_5535.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_5535, var_mStructAttributeList_5564, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 183))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 178)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 186)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_5535.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_5535, var_mStructAttributeList_5564, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 192))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 187)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_5535.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_5535, var_mStructAttributeList_5564, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 201))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 196)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 204)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_5535.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_5535, var_mStructAttributeList_5564, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 210))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 205)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 177)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 186)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 204)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 177)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 186)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 204)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 218)) ;
  GALGAS_location var_instructionLocation_6797 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)) ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 221)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_6797, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 224))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 222)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 227)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_6797, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 230))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 233)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_6797, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 236))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 234)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_6797, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 242))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 240)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 218)) ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 221)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 227)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 233)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 218)) ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 221)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 227)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 233)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i30_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_7694 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  GALGAS_ifExpressionList var_testExpression_7751 ;
  nt_if_5F_expression_ (var_testExpression_7751, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_7820 ;
  nt_semantic_5F_instruction_5F_list_ (var_then_5F_instructionList_7820, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_7854 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_7928 ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_7928 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 216)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 218)) ;
    nt_semantic_5F_instruction_5F_list_ (var_else_5F_instructionList_7928, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 221)) ;
    GALGAS_semanticInstructionAST var_instruction_8142 ;
    nt_if_5F_instruction_5F_core_ (var_instruction_8142, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 223)) ;
    temp_0.addAssign_operation (var_instruction_8142  COMMA_SOURCE_FILE ("instruction-if.galgas", 223)) ;
    var_else_5F_instructionList_7928 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_7694, var_testExpression_7751, var_then_5F_instructionList_7820, var_endOf_5F_then_5F_branchLocation_7854, var_else_5F_instructionList_7928, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 231))  COMMA_SOURCE_FILE ("instruction-if.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_if_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 218)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 221)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_if_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 218)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 221)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 238)) ;
  nt_if_5F_instruction_5F_core_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 240)) ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_8731 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 243)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_8731.readProperty_string ().objectCompare (GALGAS_string ("if"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%if")) ;
        inCompiler->emitSemanticError (var_terminator_8731.readProperty_location (), GALGAS_string ("the terminator attribute should be '%if'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 245)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 238)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 240)) ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 243)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 238)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 240)) ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 243)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i32_ (GALGAS_ifExpressionList & outArgument_outExpressionList,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_ifExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 253)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 256)) ;
      GALGAS_lstring var_constantName_9176 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 257)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 258)) ;
      GALGAS_semanticExpressionAST var_expression_9228 ;
      nt_expression_5F_or_ (var_expression_9228, inCompiler) ;
      GALGAS_location var_endOfReceiverExpression_9264 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 260)) ;
      switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_9176, var_expression_9228, var_endOfReceiverExpression_9264, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 266))  COMMA_SOURCE_FILE ("instruction-if.galgas", 262))  COMMA_SOURCE_FILE ("instruction-if.galgas", 262)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 269)) ;
        GALGAS_lstring var_typeName_9566 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 270)) ;
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_9176, var_expression_9228, var_endOfReceiverExpression_9264, var_typeName_9566  COMMA_SOURCE_FILE ("instruction-if.galgas", 271))  COMMA_SOURCE_FILE ("instruction-if.galgas", 271)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 279)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 280)) ;
      GALGAS_semanticExpressionAST var_receiverExpression_9883 ;
      nt_expression_ (var_receiverExpression_9883, inCompiler) ;
      GALGAS_lstring var_optionalMethodName_9937 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 282)) ;
      GALGAS_optionalMethodActualArgumentList var_optionalMethodActualArgumentList_10016 = GALGAS_optionalMethodActualArgumentList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 283)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_10078 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 286)) ;
          GALGAS_semanticExpressionAST var_expression_10117 ;
          nt_expression_ (var_expression_10117, inCompiler) ;
          var_optionalMethodActualArgumentList_10016.addAssign_operation (var_selector_10078, GALGAS_optionalMethodActualArgument::constructor_actualOutput (var_expression_10117, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 288))  COMMA_SOURCE_FILE ("instruction-if.galgas", 288))  COMMA_SOURCE_FILE ("instruction-if.galgas", 288)) ;
        } break ;
        case 3: {
          GALGAS_lstring var_selector_10273 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 290)) ;
          switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
            GALGAS_lstring var_typeName_10342 ;
            switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
            case 1: {
              var_typeName_10342 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 295)) ;
            } break ;
            case 2: {
              var_typeName_10342 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 297)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_constantName_10508 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 299)) ;
            var_optionalMethodActualArgumentList_10016.addAssign_operation (var_selector_10273, GALGAS_optionalMethodActualArgument::constructor_actualLetInput (var_typeName_10342, var_constantName_10508  COMMA_SOURCE_FILE ("instruction-if.galgas", 300))  COMMA_SOURCE_FILE ("instruction-if.galgas", 300)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 302)) ;
            GALGAS_lstring var_typeName_10698 ;
            switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
            case 1: {
              var_typeName_10698 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 305)) ;
            } break ;
            case 2: {
              var_typeName_10698 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 307)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_variableName_10863 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 309)) ;
            var_optionalMethodActualArgumentList_10016.addAssign_operation (var_selector_10273, GALGAS_optionalMethodActualArgument::constructor_actualVarInput (var_typeName_10698, var_variableName_10863  COMMA_SOURCE_FILE ("instruction-if.galgas", 310))  COMMA_SOURCE_FILE ("instruction-if.galgas", 310)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 312)) ;
            var_optionalMethodActualArgumentList_10016.addAssign_operation (var_selector_10273, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 313)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("instruction-if.galgas", 313))  COMMA_SOURCE_FILE ("instruction-if.galgas", 313)) ;
          } break ;
          case 4: {
            GALGAS_luint var_repetitionCount_11197 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-if.galgas", 315)) ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 316)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsNotEqual, var_selector_10273.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("\?")) ;
                inCompiler->emitSemanticError (var_selector_10273.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 318)) ;
              }
            }
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_repetitionCount_11197.readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_repetitionCount_11197.readProperty_location (), GALGAS_string ("the repetition count should be > 0"), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 321)) ;
              }
            }
            cEnumerator_range enumerator_11539 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_repetitionCount_11197.readProperty_uint ().substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 323))), kENUMERATION_UP) ;
            while (enumerator_11539.hasCurrentObject ()) {
              var_optionalMethodActualArgumentList_10016.addAssign_operation (var_selector_10273, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 324)), enumerator_11539.current (HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 324))  COMMA_SOURCE_FILE ("instruction-if.galgas", 324)) ;
              enumerator_11539.gotoNextObject () ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 328)) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_optionalMethodCall (var_receiverExpression_9883, var_optionalMethodName_9937, var_optionalMethodActualArgumentList_10016  COMMA_SOURCE_FILE ("instruction-if.galgas", 329))  COMMA_SOURCE_FILE ("instruction-if.galgas", 329)) ;
    } break ;
    case 3: {
      GALGAS_semanticExpressionAST var_expression_11979 ;
      nt_expression_ (var_expression_11979, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_regularExp (var_expression_11979  COMMA_SOURCE_FILE ("instruction-if.galgas", 336))  COMMA_SOURCE_FILE ("instruction-if.galgas", 336)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 339)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 256)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 257)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 258)) ;
      nt_expression_5F_or_parse (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 269)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 270)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 279)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 280)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 282)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 286)) ;
          nt_expression_parse (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 290)) ;
          switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
            switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 297)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 299)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 302)) ;
            switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 307)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 309)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 312)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-if.galgas", 315)) ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 316)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 328)) ;
    } break ;
    case 3: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 339)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_expression_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 256)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 257)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 258)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 269)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 270)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 279)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 280)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 282)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 286)) ;
          nt_expression_indexing (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 290)) ;
          switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
            switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 297)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 299)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 302)) ;
            switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 307)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 309)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 312)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-if.galgas", 315)) ;
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 316)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 328)) ;
    } break ;
    case 3: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 339)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 85)) ;
  GALGAS_lstring var_typeName_3293 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  GALGAS_lstring var_constantName_3328 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 87)) ;
  outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (var_typeName_3293.readProperty_location (), var_typeName_3293, var_constantName_3328  COMMA_SOURCE_FILE ("instruction-let.galgas", 88)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 87)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
  GALGAS_lstring var_typeName_3694 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  GALGAS_lstring var_variableName_3729 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_3799 ;
  nt_expression_ (var_sourceExpression_3799, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_3694.readProperty_location (), GALGAS_bool (true), var_typeName_3694, var_variableName_3729, var_sourceExpression_3799  COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 98)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
  GALGAS_lstring var_variableName_4235 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_4305 ;
  nt_expression_ (var_sourceExpression_4305, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName_4235.readProperty_location (), var_variableName_4235, var_sourceExpression_4305  COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 66)) ;
  GALGAS_location var_instructionLocation_2366 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 67)) ;
  GALGAS_logListAST var_logList_2411 = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_2485 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 71)) ;
      var_logList_2411.addAssign_operation (var_loggedVariableName_2485, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName_2485  COMMA_SOURCE_FILE ("instruction-log.galgas", 72))  COMMA_SOURCE_FILE ("instruction-log.galgas", 72)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 75)) ;
      GALGAS_lstring var_propertyName_2646 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 76)) ;
      var_logList_2411.addAssign_operation (var_propertyName_2646, GALGAS_structPropertyAccessExpressionAST::constructor_new (var_propertyName_2646.readProperty_location (), GALGAS_selfInExpressionAST::constructor_new (var_propertyName_2646.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-log.galgas", 79)), var_propertyName_2646  COMMA_SOURCE_FILE ("instruction-log.galgas", 79))  COMMA_SOURCE_FILE ("instruction-log.galgas", 77)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_logMessage_2871 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 82)) ;
      GALGAS_semanticExpressionAST var_logExpression_2923 ;
      nt_expression_ (var_logExpression_2923, inCompiler) ;
      var_logList_2411.addAssign_operation (var_logMessage_2871, var_logExpression_2923  COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation_2366, var_logList_2411  COMMA_SOURCE_FILE ("instruction-log.galgas", 89)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 71)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 76)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 82)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 71)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 76)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 82)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 87)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 77)) ;
  GALGAS_location var_instructionLocation_3017 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 80)) ;
  GALGAS_semanticExpressionAST var_variantExpression_3120 ;
  nt_expression_ (var_variantExpression_3120, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_3151 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 83)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_3266 ;
  nt_semantic_5F_instruction_5F_list_ (var_firstInstructions_3266, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_3304 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 87)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 88)) ;
  GALGAS_semanticExpressionAST var_loopExpression_3393 ;
  nt_expression_ (var_loopExpression_3393, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_3421 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 90)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 91)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_3531 ;
  nt_semantic_5F_instruction_5F_list_ (var_secondInstructions_3531, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_3563 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 94)) ;
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3652 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 97)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 80)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 83)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 88)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 91)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 94)) ;
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 97)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 80)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 83)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 88)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 91)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 94)) ;
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 97)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 67)) ;
  GALGAS_location var_instructionLocation_2717 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 68)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_2817 ;
  nt_semantic_5F_instruction_5F_list_ (var_firstInstructions_2817, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_2855 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 72)) ;
  GALGAS_semanticExpressionAST var_loopExpression_2944 ;
  nt_expression_ (var_loopExpression_2944, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_2972 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 75)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_3082 ;
  nt_semantic_5F_instruction_5F_list_ (var_secondInstructions_3082, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_3114 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 78)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3203 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 81)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 67)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 72)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 75)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 78)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 67)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 72)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 75)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 78)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
  GALGAS_location var_instructionLocation_1585 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 36)) ;
  GALGAS_semanticExpressionAST var_expression_1658 ;
  nt_expression_ (var_expression_1658, inCompiler) ;
  outArgument_outInstruction = GALGAS_messageInstructionAST::constructor_new (var_instructionLocation_1585, var_expression_1658  COMMA_SOURCE_FILE ("instruction-message.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 45)) ;
  GALGAS_location var_instructionLocation_1882 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 46)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1964 ;
  nt_expression_ (var_mReceiverExpression_1964, inCompiler) ;
  GALGAS_lstring var_mMethodName_1998 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2075 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2075, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 50)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_1882, var_mReceiverExpression_1964, var_mMethodName_1998, var_actualParameterList_2075  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 45)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 45)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName_1709 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 41)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1826 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_actualParameterList_1826, inCompiler) ;
  outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_mRoutineName_1709.readProperty_location (), var_mRoutineName_1709, var_actualParameterList_1826  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 41)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 41)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
  GALGAS_location var_instructionLocation_1641 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 42)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_1728 ;
  nt_expression_ (var_sourceExpression_1728, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation_1641, var_sourceExpression_1728  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 42)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 42)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 115)) ;
  GALGAS_location var_instructionLocation_4435 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 117)) ;
  GALGAS_actualOutputExpressionList var_expressionList_4548 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_4548, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation_4435, var_expressionList_4548  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 117)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 117)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 128)) ;
  GALGAS_location var_instructionLocation_4909 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 130)) ;
  GALGAS_semanticExpressionAST var_expression_4991 ;
  nt_expression_ (var_expression_4991, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_4909, var_expression_4991  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 130)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 130)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 141)) ;
  GALGAS_location var_instructionLocation_5350 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 142)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 143)) ;
  GALGAS_semanticExpressionAST var_expression_5432 ;
  nt_expression_ (var_expression_5432, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_5350, var_expression_5432  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 143)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 143)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
  GALGAS_location var_instructionLocation_5792 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 155)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 156)) ;
  GALGAS_semanticExpressionAST var_expression_5874 ;
  nt_expression_ (var_expression_5874, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_5792, var_expression_5874  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 158)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 156)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 156)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
  GALGAS_location var_instructionLocation_6232 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
  GALGAS_semanticExpressionAST var_expression_6314 ;
  nt_expression_ (var_expression_6314, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::constructor_new (var_instructionLocation_6232, var_expression_6314  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 104)) ;
  GALGAS_location var_instructionLocation_3569 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 105)) ;
  GALGAS_lstring var_selector_3609 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 106)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_3609.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_3609.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 108)) ;
    }
  }
  GALGAS_bool var_prefixedBySelf_3745 ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_3745 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
    var_prefixedBySelf_3745 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mReceiverName_3887 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 118)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes_3921 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 119)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 122)) ;
      GALGAS_lstring var_structAttribute_4009 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 123)) ;
      var_mReceiverStructAttributes_3921.addAssign_operation (var_structAttribute_4009  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 124)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeNameForCasting_4105 ;
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    var_typeNameForCasting_4105 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-setter-call.galgas", 128)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 130)) ;
    var_typeNameForCasting_4105 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSetterName_4250 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
  GALGAS_actualParameterListAST var_actualParameterList_4327 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_4327, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 135)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation_3569, var_prefixedBySelf_3745, var_mReceiverName_3887, var_mReceiverStructAttributes_3921, var_typeNameForCasting_4105, var_mSetterName_4250, var_actualParameterList_4327  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 106)) ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 123)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 130)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 135)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 106)) ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 114)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 123)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 130)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 150)) ;
  GALGAS_location var_instructionLocation_4804 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 151)) ;
  GALGAS_lstring var_selector_4844 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 152)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_4844.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_4844.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 154)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  GALGAS_lstring var_mSetterName_4996 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 157)) ;
  GALGAS_actualParameterListAST var_actualParameterList_5073 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_5073, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
  outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation_4804, var_mSetterName_4996, var_actualParameterList_5073  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 160)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 157)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 150)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 152)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 157)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  GALGAS_location var_instructionLocation_4494 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
  GALGAS_semanticExpressionAST var_switchExpression_4550 ;
  nt_expression_ (var_switchExpression_4550, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_4580 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)) ;
  GALGAS_switchBranchesAST var_switchBranches_4639 = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 136)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)) ;
    GALGAS_lstringlist var_constantNameList_4731 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_4801 ;
    nt_switch_5F_case_ (var_constantNameList_4731, var_associatedValuesExtraction_4801, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
    GALGAS_semanticInstructionListAST var_instructions_4863 ;
    nt_semantic_5F_instruction_5F_list_ (var_instructions_4863, inCompiler) ;
    var_switchBranches_4639.addAssign_operation (var_constantNameList_4731, var_associatedValuesExtraction_4801, var_instructions_4863, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 144))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 144)) ;
    switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  GALGAS_location var_endOfSwitchInstruction_5022 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_5101 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_5101.readProperty_string ().objectCompare (GALGAS_string ("switch"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%switch")) ;
        inCompiler->emitSemanticError (var_terminator_5101.readProperty_location (), GALGAS_string ("the terminator attribute should be '%switch'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_4494, var_switchExpression_4550, var_endOfSwitchExpression_4580, var_switchBranches_4639, var_endOfSwitchInstruction_5022  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i51_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_5804 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_5804  COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)) ;
    switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 176)) ;
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
      case 1: {
        GALGAS_luint var_n_5996 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
        cEnumerator_range enumerator_6042 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_n_5996.readProperty_uint ().substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184))), kENUMERATION_UP) ;
        while (enumerator_6042.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 185)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 185)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 185)) ;
          enumerator_6042.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 188)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_6287 ;
        switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
        case 1: {
          var_typeName_6287 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
        } break ;
        case 2: {
          var_typeName_6287 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 195)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_6440 ;
        switch (select_galgas_34_InstructionsSyntax_63 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_6440 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
          var_constantMarkedAsUnused_6440 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_6640 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_6287, var_constantName_6640, var_constantMarkedAsUnused_6440  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i51_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
    switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 188)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_63 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i51_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
    switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 174)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 188)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_63 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 44)) ;
  GALGAS_location var_instructionLocation_1866 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 45)) ;
  GALGAS_lstring var_mTypeName_1919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 46)) ;
  GALGAS_lstring var_mMethodName_1997 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 47)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2074 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2074, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 49)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation_1866, var_mTypeName_1919, var_mMethodName_1997, var_actualParameterList_2074  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 44)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 47)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 44)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 47)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 78)) ;
  GALGAS_lstring var_variableName_3005 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 80)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_3075 ;
  nt_expression_ (var_sourceExpression_3075, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName_3005.readProperty_location (), var_variableName_3005, var_sourceExpression_3075  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 80)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 80)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 92)) ;
  GALGAS_lstring var_typeName_3459 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 93)) ;
  GALGAS_lstring var_variableName_3494 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 95)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_3564 ;
  nt_expression_ (var_sourceExpression_3564, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_3459.readProperty_location (), GALGAS_bool (false), var_typeName_3459, var_variableName_3494, var_sourceExpression_3564  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 95)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 95)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
  GALGAS_location var_instructionLocation_1898 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 47)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1980 ;
  nt_expression_ (var_mReceiverExpression_1980, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 49)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_2052 ;
  nt_expression_ (var_mWarningExpression_2052, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_2102 ;
  nt_issue_5F_fixit_ (var_fixitListAST_2102, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation_1898, var_mReceiverExpression_1980, var_mWarningExpression_2052, var_fixitListAST_2102  COMMA_SOURCE_FILE ("instruction-warning.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 49)) ;
  nt_expression_parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 49)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 194)) ;
  GALGAS_location var_instructionLocation_6963 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 195)) ;
  GALGAS_semanticExpressionAST var_keyExpression_7039 ;
  nt_expression_ (var_keyExpression_7039, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_7066 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 197)) ;
  GALGAS_lstring var_withPrefix_7111 ;
  switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
    var_withPrefix_7111 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 200))  COMMA_SOURCE_FILE ("instruction-with.galgas", 200)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 202)) ;
    var_withPrefix_7111 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 203)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 205)) ;
  nt_with_5F_instruction_5F_core_ (var_instructionLocation_6963, var_keyExpression_7039, var_endOfKeyExpression_7066, var_withPrefix_7111, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 207)) ;
  switch (select_galgas_34_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_7426 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 210)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_7426.readProperty_string ().objectCompare (GALGAS_string ("with"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%with")) ;
        inCompiler->emitSemanticError (var_terminator_7426.readProperty_location (), GALGAS_string ("the terminator attribute should be '%with'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 212)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i56_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 194)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 202)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 203)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 205)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 207)) ;
  switch (select_galgas_34_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 194)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 202)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 203)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 205)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 207)) ;
  switch (select_galgas_34_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i57_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_8015 ;
  nt_expression_ (var_receiverExpression_8015, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_8047 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 227)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_8115 ;
  switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_8115 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 230)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 232)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 233)) ;
    var_searchMethodNameForErrorSignaling_8115 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 234)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 236)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_8376 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_8376, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_8404 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 238)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_8481 ;
  switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_8481 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 241)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 243)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_8115.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_8115.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 245)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_8481, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_8015, var_endOfReceiverExpression_8047, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_8115, var_mDoBranchInstructions_8376, var_endOfDoInstructions_8404, var_mElseBranchInstructions_8481, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 260))  COMMA_SOURCE_FILE ("instruction-with.galgas", 249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i57_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 232)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 233)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 234)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 236)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 243)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i57_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 232)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 233)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 234)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 236)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 243)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i58_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_9542 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 273)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_9542.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_9542.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 275)) ;
    }
  }
  GALGAS_bool var_targetIsPrefixedBySelf_9686 ;
  switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
    var_targetIsPrefixedBySelf_9686 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 281)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 282)) ;
    var_targetIsPrefixedBySelf_9686 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_targetObjectName_9847 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  GALGAS_lstringlist var_structAttributeList_9875 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 286)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 289)) ;
      GALGAS_lstring var_mStructFieldName_9964 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 290)) ;
      var_structAttributeList_9875.addAssign_operation (var_mStructFieldName_9964  COMMA_SOURCE_FILE ("instruction-with.galgas", 291)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfReceiverExpression_10051 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 293)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_10119 ;
  switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_10119 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 296)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 299)) ;
    var_searchMethodNameForErrorSignaling_10119 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 300)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 302)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_10380 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_10380, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_10410 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 304)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_10487 ;
  switch (select_galgas_34_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_10487 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 307)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 309)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_10119.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_10119.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray4  COMMA_SOURCE_FILE ("instruction-with.galgas", 311)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_10487, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_10823 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 315)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_targetObjectName_9847, var_targetIsPrefixedBySelf_9686, var_structAttributeList_9875, var_endOfReceiverExpression_10051, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_10119, var_mDoBranchInstructions_10380, var_endOf_5F_do_5F_instructions_10410, var_mElseBranchInstructions_10487, var_endOf_5F_else_5F_instructions_10823  COMMA_SOURCE_FILE ("instruction-with.galgas", 316)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i58_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 273)) ;
  switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 281)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 282)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 289)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 290)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 299)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 300)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 302)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 309)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_with_5F_instruction_5F_core_i58_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 273)) ;
  switch (select_galgas_34_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 281)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 282)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_69 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 289)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 290)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_70 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 299)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 300)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 302)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 309)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
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
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isPublic_9217 ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    var_isPublic_9217 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_public COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 252)) ;
    var_isPublic_9217 = GALGAS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 255)) ;
    var_isPublic_9217 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isConstant_9373 ;
  switch (select_galgas_34_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 260)) ;
    var_isConstant_9373 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 263)) ;
    var_isConstant_9373 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_attributeTypeName_9507 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 266)) ;
  GALGAS_lstring var_attributeName_9543 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 267)) ;
  GALGAS_lstringlist var_featureList_9563 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 268)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName_9647 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 271)) ;
      var_featureList_9563.addAssign_operation (var_featureName_9647  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 272)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_isConstant_9373, var_attributeTypeName_9507, var_attributeName_9543, var_isPublic_9217, var_featureList_9563  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 274)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_public COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 252)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 255)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 260)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 271)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_public COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 252)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 255)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 260)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 271)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_5F_with_5F_private_i2_ (const GALGAS_bool constinArgument_inIsInternal,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 315)) ;
  GALGAS_lstring var_mFilewrapperName_11251 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 316)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 317)) ;
  GALGAS_lstring var_mFilewrapperPath_11337 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 318)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_11404 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_11404, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_11475 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_11475, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_11532 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_11532, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsInternal, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 325)), var_mFilewrapperName_11251, var_mFilewrapperPath_11337, var_filewrapperTextFileExtensionList_11404, var_filewrapperBinaryFileExtensionList_11475, var_filewrapperTemplateList_11532  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 322))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 322)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_5F_with_5F_private_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 315)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 316)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 317)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 318)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_5F_with_5F_private_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 315)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 316)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 317)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 318)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 337)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 338)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_12207 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_12207  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 343)) ;
      switch (select_galgas_34_DeclarationsSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 345)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 348)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 338)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
      switch (select_galgas_34_DeclarationsSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 345)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 348)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 338)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
      switch (select_galgas_34_DeclarationsSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 345)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 348)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 354)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 355)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_12667 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 359)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_12667  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 360)) ;
      switch (select_galgas_34_DeclarationsSyntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 365)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 355)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 359)) ;
      switch (select_galgas_34_DeclarationsSyntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 365)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 355)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 359)) ;
      switch (select_galgas_34_DeclarationsSyntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 365)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 371)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 372)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 375)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_13128 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 376)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_13175 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 377)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_13263 = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 378)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_13319 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 381)) ;
          GALGAS_lstring var_typeName_13358 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 382)) ;
          GALGAS_bool var_isUnused_13385 ;
          switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
          case 1: {
            var_isUnused_13385 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 387)) ;
            var_isUnused_13385 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_13534 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 390)) ;
          var_filewrapperTemplateFormalInputParameters_13263.addAssign_operation (var_selector_13319, var_typeName_13358, var_argumentName_13534, var_isUnused_13385  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 391)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_13128, var_mFilewrapperTemplatePath_13175, var_filewrapperTemplateFormalInputParameters_13263  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 393)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 398)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 371)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 375)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 376)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 377)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 381)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 382)) ;
          switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 387)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 390)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 398)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 371)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 375)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 376)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 377)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 381)) ;
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 382)) ;
          switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 387)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 390)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 398)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i6_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  GALGAS_lstring var_arrayTypeName_1945 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 50)) ;
  GALGAS_lstring var_elementListTypeName_2028 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 52)) ;
  GALGAS_luint var_dimension_2106 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("type-array.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName_1945, var_elementListTypeName_2028, var_dimension_2106  COMMA_SOURCE_FILE ("type-array.galgas", 55))  COMMA_SOURCE_FILE ("type-array.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("type-array.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("type-array.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  GALGAS_lstring var_boolsetTypeName_1864 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 50)) ;
  GALGAS_lstringlist var_slotList_1928 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_slotName_1977 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 53)) ;
    var_slotList_1928.addAssign_operation (var_slotName_1977  COMMA_SOURCE_FILE ("type-boolset.galgas", 54)) ;
    switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 58)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool (false), var_boolsetTypeName_1864, var_slotList_1928  COMMA_SOURCE_FILE ("type-boolset.galgas", 59))  COMMA_SOURCE_FILE ("type-boolset.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 53)) ;
    switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 53)) ;
    switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isAbstract_3877 ;
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    var_isAbstract_3877 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
    var_isAbstract_3877 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  GALGAS_lstring var_className_4017 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 121)) ;
  GALGAS_lstring var_superClassName_4074 ;
  switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
    var_superClassName_4074 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 126)) ;
    var_superClassName_4074 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList_4265 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 129)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_classFeatureName_4354 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 132)) ;
      var_classFeatureList_4265.addAssign_operation (var_classFeatureName_4354  COMMA_SOURCE_FILE ("type-class.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 135)) ;
  GALGAS_string var_mClassMessage_4444 = GALGAS_string::makeEmptyString () ;
  GALGAS_propertyInCollectionListAST var_propertyList_4523 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 138)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_4523, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 143)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 145)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_isAbstract_3877, GALGAS_bool (true), var_className_4017, var_superClassName_4074, var_classFeatureList_4265, var_propertyList_4523  COMMA_SOURCE_FILE ("type-class.galgas", 146))  COMMA_SOURCE_FILE ("type-class.galgas", 146)) ;
  GALGAS_lstring temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_superClassName_4074.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = var_superClassName_4074 ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_lstring::constructor_new (var_superClassName_4074.readProperty_string ().add_operation (GALGAS_string ("-weak"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 162)), var_superClassName_4074.readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 162)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool (false), var_className_4017, GALGAS_lstring::constructor_new (var_className_4017.readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 159)), var_className_4017.readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 159)), temp_2, var_classFeatureList_4265, var_propertyList_4523  COMMA_SOURCE_FILE ("type-class.galgas", 156))  COMMA_SOURCE_FILE ("type-class.galgas", 156)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 121)) ;
  switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 126)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 135)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 143)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 145)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 121)) ;
  switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 126)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 127)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 135)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 143)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 76)) ;
  GALGAS_lstring var_mEnumTypeName_2683 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 78)) ;
  GALGAS_enumConstantList var_mConstantList_2755 = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
    GALGAS_lstring var_constantName_2821 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_2869 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 83)) ;
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_2966 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 88)) ;
        GALGAS_lstring var_associatedValueName_3014 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
        var_associatedValueTypeList_2869.addAssign_operation (var_associatedValueType_2966, var_associatedValueName_3014  COMMA_SOURCE_FILE ("type-enum.galgas", 90)) ;
        switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_2755.addAssign_operation (var_constantName_2821, var_associatedValueTypeList_2869  COMMA_SOURCE_FILE ("type-enum.galgas", 95)) ;
    switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_defaultConstantName_3258 ;
  switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
    var_defaultConstantName_3258 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-enum.galgas", 100)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 102)) ;
    var_defaultConstantName_3258 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 105)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName_2683, var_mConstantList_2755, var_defaultConstantName_3258  COMMA_SOURCE_FILE ("type-enum.galgas", 106))  COMMA_SOURCE_FILE ("type-enum.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 76)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 88)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
        switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 102)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 105)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 76)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 88)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 89)) ;
        switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 102)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 103)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 187)) ;
  GALGAS_lstring var_externTypeName_7158 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 188)) ;
  GALGAS_string var_cppPredeclarationCode_7251 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_7251, inCompiler) ;
  GALGAS_string var_cppClassCode_7307 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_7307, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_7376 = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 192)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_7433 = GALGAS_externTypeGetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 193)) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_7489 = GALGAS_externTypeSetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 194)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_7545 = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 195)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (var_externTypeConstructorList_7376, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (var_externTypeGetterList_7433, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (var_externTypeSetterList_7489, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (var_externTypeMethodList_7545, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 206)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName_7158, var_cppPredeclarationCode_7251, var_cppClassCode_7307, var_externTypeConstructorList_7376, var_externTypeGetterList_7433, var_externTypeSetterList_7489, var_externTypeMethodList_7545  COMMA_SOURCE_FILE ("type-extern.galgas", 207))  COMMA_SOURCE_FILE ("type-extern.galgas", 207)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 187)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 188)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 206)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 187)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 188)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 206)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 222)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_8448 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 226)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_8448.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 227)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 222)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 226)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 229)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 222)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 226)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 235)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_8844 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 239)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_8844.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 240)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 235)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 239)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 242)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 235)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 239)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i13_ (GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 248)) ;
  GALGAS_lstring var_constructorName_9204 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 249)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_9262 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 250)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_9312 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 253)) ;
      GALGAS_lstring var_argumentTypeName_9357 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 254)) ;
      GALGAS_lstring var_argumentName_9403 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 255)) ;
      var_argumentTypeList_9262.addAssign_operation (var_selector_9312, var_argumentTypeName_9357, var_argumentName_9403  COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 258)) ;
  GALGAS_lstring var_resultTypeName_9529 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_constructorName_9204, var_resultTypeName_9529, var_argumentTypeList_9262  COMMA_SOURCE_FILE ("type-extern.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 249)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 253)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 254)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 255)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 249)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 253)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 254)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 255)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i14_ (GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 266)) ;
  GALGAS_lstring var_getterName_9873 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 267)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_9931 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 268)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_9981 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 271)) ;
      GALGAS_lstring var_argumentTypeName_10026 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
      GALGAS_lstring var_argumentName_10072 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
      var_argumentTypeList_9931.addAssign_operation (var_selector_9981, var_argumentTypeName_10026, var_argumentName_10072  COMMA_SOURCE_FILE ("type-extern.galgas", 274)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 276)) ;
  GALGAS_lstring var_resultTypeName_10198 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 277)) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_9873, var_resultTypeName_10198, var_argumentTypeList_9931  COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 271)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 276)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 277)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 271)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 272)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 276)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 277)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i15_ (GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 284)) ;
  GALGAS_lstring var_setterName_10532 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 285)) ;
  GALGAS_formalParameterListAST var_formalParameterList_10609 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_10609, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_10532, var_formalParameterList_10609  COMMA_SOURCE_FILE ("type-extern.galgas", 287)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 285)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 285)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i16_ (GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 293)) ;
  GALGAS_lstring var_methodName_10930 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 294)) ;
  GALGAS_formalParameterListAST var_formalParameterList_11007 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_11007, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_10930, var_formalParameterList_11007, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 296))  COMMA_SOURCE_FILE ("type-extern.galgas", 296)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 294)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 294)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  GALGAS_lstring var_graphTypeName_2414 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  GALGAS_lstring var_associatedListTypeName_2496 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 69)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_2544 = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      GALGAS_lstring var_insertName_2653 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
      GALGAS_lstring var_errorMessage_2727 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 77)) ;
      var_graphInsertModifierList_2544.addAssign_operation (var_insertName_2653, var_errorMessage_2727  COMMA_SOURCE_FILE ("type-graph.galgas", 78)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName_2414, var_associatedListTypeName_2496, var_graphInsertModifierList_2544  COMMA_SOURCE_FILE ("type-graph.galgas", 81))  COMMA_SOURCE_FILE ("type-graph.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  GALGAS_lstring var_listTypeName_1928 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2039 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_ (var_propertyList_2039, inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 58)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_listTypeName_1928, var_propertyList_2039  COMMA_SOURCE_FILE ("type-list.galgas", 63))  COMMA_SOURCE_FILE ("type-list.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_parse (inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 58)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_indexing (inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 58)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 42)) ;
  GALGAS_lstring var_mListmapTypeName_1807 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  GALGAS_lstring var_mAssociatedListTypeName_1892 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName_1807, var_mAssociatedListTypeName_1892  COMMA_SOURCE_FILE ("type-listmap.galgas", 47))  COMMA_SOURCE_FILE ("type-listmap.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 42)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 42)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 70)) ;
  GALGAS_lstring var_mDictTypeName_2541 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 74)) ;
  GALGAS_lstring var_keyTypeName_2656 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 75)) ;
  GALGAS_lstringlist var_mapAttributeList_2716 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 77)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_2776 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 80)) ;
      var_mapAttributeList_2716.addAssign_operation (var_attribute_2776  COMMA_SOURCE_FILE ("type-dict.galgas", 81)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 84)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2872 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 85)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2872, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool (false), var_mDictTypeName_2541, var_keyTypeName_2656, var_mapAttributeList_2716, var_propertyList_2872  COMMA_SOURCE_FILE ("type-dict.galgas", 93))  COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 70)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 80)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 70)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 80)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 90)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  GALGAS_lstring var_mMapTypeName_6627 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 189)) ;
  GALGAS_lstringlist var_mapAttributeList_6739 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 191)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_6799 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 194)) ;
      var_mapAttributeList_6739.addAssign_operation (var_attribute_6799  COMMA_SOURCE_FILE ("type-map.galgas", 195)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 198)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_6895 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 199)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_6954 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 200)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_7029 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 201)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_7084 = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 202)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_7166 = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 203)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_6895, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_6954, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_7029, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_7084, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_7166, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 216)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 218)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_6627, var_mapAttributeList_6739, var_propertyList_6895, var_mInsertMethodList_6954, var_mSearchMethodList_7029, var_mRemoveMethodList_7084, var_insertOrReplaceDeclarationListAST_7166  COMMA_SOURCE_FILE ("type-map.galgas", 219))  COMMA_SOURCE_FILE ("type-map.galgas", 219)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 189)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 194)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 198)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 216)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 218)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 189)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 194)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 198)) ;
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
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-map.galgas", 216)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 218)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 234)) ;
  GALGAS_lstring var_methodName_8089 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 235)) ;
  GALGAS_bool var_locationAttribute_8121 ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
    var_locationAttribute_8121 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_attribute_8205 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_attribute_8205.readProperty_string ().objectCompare (GALGAS_string ("location"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_locationAttribute_8121 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%location")) ;
      inCompiler->emitSemanticError (var_attribute_8205.readProperty_location (), GALGAS_string ("only the %location is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-map.galgas", 244)) ;
      var_locationAttribute_8121.drop () ; // Release error dropped variable
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 248)) ;
  GALGAS_lstring var_errorMessage_8493 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 249)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_8089, var_errorMessage_8493, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 250))  COMMA_SOURCE_FILE ("type-map.galgas", 250)), var_locationAttribute_8121  COMMA_SOURCE_FILE ("type-map.galgas", 250)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 235)) ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 249)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 235)) ;
  switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 256)) ;
  GALGAS_lstring var_mMethodName_8853 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 257)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
  GALGAS_lstring var_mErrorMessage_8922 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 260)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_8853, var_mErrorMessage_8922  COMMA_SOURCE_FILE ("type-map.galgas", 261)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 256)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 257)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 260)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 256)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 257)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 267)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 269)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 270))  COMMA_SOURCE_FILE ("type-map.galgas", 270)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 267)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 269)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 267)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 269)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 276)) ;
  GALGAS_lstring var_mMethodName_9581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 277)) ;
  GALGAS_lstring var_stateName_9608 ;
  switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
    var_stateName_9608 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 280))  COMMA_SOURCE_FILE ("type-map.galgas", 280)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-map.galgas", 282)) ;
    var_stateName_9608 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 283)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 285)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 286)) ;
  GALGAS_lstring var_mErrorMessage_9801 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 287)) ;
  GALGAS_lstring var_mShadowErrorMessage_9838 ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_9838 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 290))  COMMA_SOURCE_FILE ("type-map.galgas", 290)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 292)) ;
    var_mShadowErrorMessage_9838 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 293)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_9581, var_mErrorMessage_9801, var_mShadowErrorMessage_9838, var_stateName_9608  COMMA_SOURCE_FILE ("type-map.galgas", 295)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 276)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 277)) ;
  switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-map.galgas", 282)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 283)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 285)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 286)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 287)) ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 292)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 293)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 276)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 277)) ;
  switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_state COMMA_SOURCE_FILE ("type-map.galgas", 282)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 283)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 285)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 286)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 287)) ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 292)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 293)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  GALGAS_lstring var_sortedListTypeName_2939 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 86)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_3057 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_attributeList_3057, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 92)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_3233 = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 96)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_3233, inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 102)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName_2939, var_attributeList_3057, var_sortDescriptorList_3233  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 103))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 92)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 92)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 95)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i27_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_3809 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 114)) ;
  GALGAS_bool var_mAscending_3834 ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 117)) ;
    var_mAscending_3834 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 120)) ;
    var_mAscending_3834 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_3809, var_mAscending_3834  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 114)) ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 114)) ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  GALGAS_lstring var_structTypeName_1994 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2078 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2078, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 60)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName_1994, var_propertyList_2078, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-struct.galgas", 61))  COMMA_SOURCE_FILE ("type-struct.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3B_ COMMA_SOURCE_FILE ("type-struct.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 54)) ;
  GALGAS_lstring var_className_2319 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 55)) ;
  GALGAS_lstring var_mGetterName_2399 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2536 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_2536, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 58)) ;
  GALGAS_lstring var_mReturnedTypeName_2589 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 59)) ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_2636 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2636.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_2319, var_mGetterName_2399, var_mFormalInputParameterList_2536, var_mReturnedTypeName_2589  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 65))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 59)) ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 59)) ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i30_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 45)) ;
  GALGAS_lstring var_className_2033 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 46)) ;
  GALGAS_lstring var_mMethodName_2122 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 47)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2242 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2242, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_2033, var_mMethodName_2122, var_formalParameterList_2242  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 49))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i31_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 45)) ;
  GALGAS_lstring var_className_2034 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 46)) ;
  GALGAS_lstring var_setterName_2122 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 47)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2242 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2242, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_2034, var_setterName_2122, var_formalParameterList_2242  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 49))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 65)) ;
  GALGAS_lstring var_className_2836 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  GALGAS_lstring var_mMethodName_2917 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 67)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_3017 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_3017, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 69)) ;
  GALGAS_lstring var_mReturnedTypeName_3070 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  GALGAS_lstring var_resultVariableName_3106 ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    var_resultVariableName_3106 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 73)) ;
  } break ;
  case 2: {
    var_resultVariableName_3106 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 75))  COMMA_SOURCE_FILE ("extension-getter.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 77)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3318 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_3318, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3357 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 80)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2836, var_mMethodName_2917, var_mFormalInputParameterList_3017, var_mReturnedTypeName_3070, var_resultVariableName_3106, var_routineInstructionList_3318, var_endOfInstructionList_3357  COMMA_SOURCE_FILE ("extension-getter.galgas", 81))  COMMA_SOURCE_FILE ("extension-getter.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 65)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 67)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 73)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 77)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 65)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 67)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 73)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 77)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  GALGAS_lstring var_className_2449 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 55)) ;
  GALGAS_lstring var_mMethodName_2530 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 56)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2642 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2642, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 58)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2738 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2738, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_2766 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 61)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2449, var_mMethodName_2530, var_formalParameterList_2642, var_routineInstructionList_2738, var_endOfMethodLocation_2766  COMMA_SOURCE_FILE ("extension-method.galgas", 62))  COMMA_SOURCE_FILE ("extension-method.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 56)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 58)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 56)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 58)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i34_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 53)) ;
  GALGAS_lstring var_className_2467 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 54)) ;
  GALGAS_lstring var_setterName_2547 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 55)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2659 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2659, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 57)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2755 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2755, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_2793 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 60)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2467, var_setterName_2547, var_formalParameterList_2659, var_routineInstructionList_2755, var_endOfSetterLocation_2793  COMMA_SOURCE_FILE ("extension-setter.galgas", 61))  COMMA_SOURCE_FILE ("extension-setter.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 53)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 55)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 53)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 55)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 56)) ;
  GALGAS_lstring var_className_2385 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 57)) ;
  GALGAS_lstring var_mGetterName_2473 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2618 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_2618, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 60)) ;
  GALGAS_lstring var_mReturnedTypeName_2671 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 61)) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_2711 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 63)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2711.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 64)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_2385, var_mGetterName_2473, var_mFormalInputParameterList_2618, var_mReturnedTypeName_2671  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 67))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 61)) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 63)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 61)) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 63)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i36_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 47)) ;
  GALGAS_lstring var_className_2103 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 48)) ;
  GALGAS_lstring var_mMethodName_2200 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 49)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2328 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2328, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_2103, var_mMethodName_2200, var_formalParameterList_2328  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 51))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 49)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 49)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 46)) ;
  GALGAS_lstring var_className_2099 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 47)) ;
  GALGAS_lstring var_setterName_2195 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 48)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2323 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2323, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_2099, var_setterName_2195, var_formalParameterList_2323  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 50))  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 67)) ;
  GALGAS_lstring var_className_2950 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
  GALGAS_lstring var_mMethodName_3039 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 69)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_3146 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_3146, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 71)) ;
  GALGAS_lstring var_mReturnedTypeName_3199 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 72)) ;
  GALGAS_lstring var_resultVariableName_3235 ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    var_resultVariableName_3235 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 75)) ;
  } break ;
  case 2: {
    var_resultVariableName_3235 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 77))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 79)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3447 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_3447, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3486 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 82)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2950, var_mMethodName_3039, var_formalInputParameterList_3146, var_mReturnedTypeName_3199, var_resultVariableName_3235, var_routineInstructionList_3447, var_endOfInstructionList_3486  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 83))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 69)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 72)) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 75)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 79)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 82)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 69)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 72)) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 75)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 79)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i39_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 55)) ;
  GALGAS_lstring var_className_2564 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  GALGAS_lstring var_mMethodName_2663 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2783 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2783, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 59)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2879 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2879, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_2917 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2564, var_mMethodName_2663, var_formalParameterList_2783, var_routineInstructionList_2879, var_endOfMethodLocation_2917  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 63))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 59)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 62)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 59)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 55)) ;
  GALGAS_lstring var_className_2573 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 56)) ;
  GALGAS_lstring var_setterName_2671 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 57)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2791 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2791, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 59)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2887 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2887, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_2925 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_className_2573, var_setterName_2671, var_formalParameterList_2791, var_routineInstructionList_2887, var_endOfSetterLocation_2925  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 63))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 59)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 62)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 55)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 56)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 59)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  GALGAS_lstring var_typeName_2315 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 50)) ;
  GALGAS_lstring var_variableName_2350 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 51)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_2315.readProperty_location (), var_typeName_2315, var_variableName_2350, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 51)) ;
}

