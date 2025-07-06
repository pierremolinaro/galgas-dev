#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"



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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 60)) ;
  GGS_lstring var_mFilewrapperName_3176 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 62)) ;
  GGS_lstring var_mFilewrapperPath_3262 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 63)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_3313 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_3313, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_3382 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_3382, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_3467 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_3467, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (false), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 70)), var_mFilewrapperName_3176, var_mFilewrapperPath_3262, var_filewrapperTextFileExtensionList_3313, var_filewrapperBinaryFileExtensionList_3382, var_filewrapperTemplateList_3467, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 60)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 63)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 60)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 63)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 82)) ;
  GGS_lstring var_mFilewrapperName_4075 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 84)) ;
  GGS_lstring var_mFilewrapperPath_4161 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 85)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_4212 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_4212, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_4281 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_4281, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_4366 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_4366, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 92)), var_mFilewrapperName_4075, var_mFilewrapperPath_4161, var_filewrapperTextFileExtensionList_4212, var_filewrapperBinaryFileExtensionList_4281, var_filewrapperTemplateList_4366, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 82)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 85)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 82)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 85)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 105)) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_5046 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 109)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssignOperation (var_pathExtension_5046  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 110)) ;
      if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 112)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 105)) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 109)) ;
      if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 112)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 115)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 105)) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 109)) ;
      if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 112)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 122)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_5487 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 126)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssignOperation (var_pathExtension_5487  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 127)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 129)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 132)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 122)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 126)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 129)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 132)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 122)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 126)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 129)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 132)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 139)) ;
  outArgument_outFilewrapperTemplateList = GGS_filewrapperTemplateListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 143)) ;
      GGS_lstring var_mFilewrapperTemplateName_5988 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
      GGS_lstring var_mFilewrapperTemplatePath_6035 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
      GGS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_6107 = GGS_formalTemplateInputParameterListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
        case 2: {
          GGS_lstring var_selector_6205 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 149)) ;
          GGS_lstring var_typeName_6267 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_6267, inCompiler) ;
          GGS_bool var_isUnused_6294 ;
          switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
          case 1: {
            var_isUnused_6294 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 155)) ;
            var_isUnused_6294 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_argumentName_6439 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 158)) ;
          var_filewrapperTemplateFormalInputParameters_6107.addAssignOperation (var_selector_6205, var_typeName_6267, var_argumentName_6439, var_isUnused_6294  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 159)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 161)) ;
          GGS_lstring var_selector_6584 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 162)) ;
          GGS_lstring var_typeName_6658 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_6658, inCompiler) ;
          GGS_bool var_isUnused_6685 ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
            var_isUnused_6685 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 168)) ;
            var_isUnused_6685 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_argumentName_6830 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 171)) ;
          var_filewrapperTemplateFormalInputParameters_6107.addAssignOperation (var_selector_6584, var_typeName_6658, var_argumentName_6830, var_isUnused_6685  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 172)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssignOperation (var_mFilewrapperTemplateName_5988, var_mFilewrapperTemplatePath_6035, var_filewrapperTemplateFormalInputParameters_6107  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 174)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 179)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 143)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 149)) ;
          nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 155)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 158)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 161)) ;
          nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 168)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 171)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 179)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 143)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 149)) ;
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 155)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 158)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 161)) ;
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 168)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 171)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 179)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_1817 ;
  nt_acces_5F_control_ (var_accessControl_1817, inCompiler) ;
  GGS_propertyMutability var_mutability_1859 ;
  switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 34)) ;
    var_mutability_1859 = GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-property.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 37)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_1817, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 38)) ;
    var_mutability_1859 = GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-property.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_2097 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyTypeName_2097, inCompiler) ;
  GGS_lstring var_propertyName_2136 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 42)) ;
  GGS_bool var_selectorAttribute_2163 ;
  GGS_propertyInCollectionInitializationAST var_initialization_2228 ;
  switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
    var_initialization_2228 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas", 46)) ;
    var_selectorAttribute_2163 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 49)) ;
    var_initialization_2228 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas", 50)) ;
    var_selectorAttribute_2163 = GGS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 53)) ;
    GGS_semanticExpressionAST var_expression_2467 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2467, inCompiler) ;
    var_initialization_2228 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_2467  COMMA_SOURCE_FILE ("declaration-property.galgas", 55)) ;
    var_selectorAttribute_2163 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssignOperation (var_mutability_1859, var_propertyTypeName_2097, var_propertyName_2136, var_accessControl_1817, var_selectorAttribute_2163, var_initialization_2228  COMMA_SOURCE_FILE ("declaration-property.galgas", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 42)) ;
  switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 49)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 53)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 42)) ;
  switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 49)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 53)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_3081 ;
  nt_acces_5F_control_ (var_accessControl_3081, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas", 72)) ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 76)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas", 77)), GGS_string ("a weak property is mutable, and should be declared with 'var'"), fixItArray0  COMMA_SOURCE_FILE ("declaration-property.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_3289 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyTypeName_3289, inCompiler) ;
  GGS_lstring var_propertyName_3328 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 80)) ;
  GGS_bool var_selectorAttribute_3355 ;
  GGS_propertyInCollectionInitializationAST var_initialization_3420 ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    var_initialization_3420 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas", 84)) ;
    var_selectorAttribute_3355 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 87)) ;
    var_initialization_3420 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas", 88)) ;
    var_selectorAttribute_3355 = GGS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 91)) ;
    GGS_semanticExpressionAST var_expression_3659 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3659, inCompiler) ;
    var_initialization_3420 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_3659  COMMA_SOURCE_FILE ("declaration-property.galgas", 93)) ;
    var_selectorAttribute_3355 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyWeakTypeName_3773 = function_makeWeakTypeLName (var_propertyTypeName_3289, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 96)) ;
  ioArgument_ioAttributeInCollectionList.addAssignOperation (GGS_propertyMutability::class_func_weakProperty (SOURCE_FILE ("declaration-property.galgas", 102)), var_propertyWeakTypeName_3773, var_propertyName_3328, var_accessControl_3081, var_selectorAttribute_3355, var_initialization_3420  COMMA_SOURCE_FILE ("declaration-property.galgas", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas", 72)) ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 80)) ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 87)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 91)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas", 72)) ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 80)) ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 87)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 91)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                     GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_propertyTypeName_4533 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-property.galgas", 114)) ;
  GGS_lstring var_propertyName_4614 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 115)) ;
  ioArgument_ioAttributeInCollectionList.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-property.galgas", 117)), var_propertyTypeName_4533, var_propertyName_4614, GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-property.galgas", 120)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas", 122))  COMMA_SOURCE_FILE ("declaration-property.galgas", 116)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_location var_errorLocation_4907 = var_propertyTypeName_4533.readProperty_location ().getter_union (var_propertyName_4614.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 124)) ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_errorLocation_4907, GGS_string ("old style property declaration (due to '--error-old-style-property-declaration' option)"), fixItArray1  COMMA_SOURCE_FILE ("declaration-property.galgas", 125)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-property.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 115)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-property.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 121)) ;
      GGS_lstring var_typeName_5453 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 122)) ;
      outArgument_outTypeName = function_makeEmbeddedTypeLName (outArgument_outTypeName, var_typeName_5453, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 123)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 121)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 122)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 121)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 122)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 131)) ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 133)) ;
  GGS_lstring joker_5898 ; // Joker input parameter
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, joker_5898, inCompiler) ;
  joker_5898.drop () ; // Release temporary input variables (joker in source)
  TC_Array <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 135)), GGS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 136)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 131)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 133)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 136)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 131)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 133)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 136)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_t_6302 ;
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_t_6302, inCompiler) ;
    TC_Array <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_t_6302.readProperty_location (), GGS_string ("not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 147)) ;
    if (select_galgas_33_DeclarationsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 149)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 149)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 151)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 149)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 159)) ;
  GGS_lstring var_unwrappedTypeName_6677 = outArgument_outTypeName ;
  {
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, outArgument_outTypeName, var_unwrappedTypeName_6677, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 161)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 159)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 159)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 168)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 172)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 174)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 174)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 175)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i13_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 168)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 172)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 175)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 168)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 172)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 175)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-array.galgas", 28)) ;
  GGS_lstring var_elementTypeName_1628 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_elementTypeName_1628, inCompiler) ;
  outArgument_outTypeName = function_makeArrayTypeLName (var_elementTypeName_1628, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 30)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outTypeName.readProperty_string () COMMA_SOURCE_FILE ("declaration-type-array.galgas", 31)).operator_not (SOURCE_FILE ("declaration-type-array.galgas", 31)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 32)) ;
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21__21__21_isUsefull_21_equatable (GGS_bool (false), outArgument_outTypeName, var_elementTypeName_1628, GGS_bool (true), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 33)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-array.galgas", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-array.galgas", 28)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-array.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-array.galgas", 28)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-array.galgas", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 27)) ;
  GGS_lstring var_boolsetTypeName_1555 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 28)) ;
  GGS_bool var_isEquatable_1611 ;
  switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
    var_isEquatable_1611 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 33)) ;
    var_isEquatable_1611 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 36)) ;
  GGS_lstringlist var_slotList_1748 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 40)) ;
      GGS_lstring var_slotName_1821 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 41)) ;
      var_slotList_1748.addAssignOperation (var_slotName_1821  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 42)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_boolsetTypeName_1555, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 46)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_slotList_1748.getter_count (SOURCE_FILE ("declaration-type-boolset.galgas", 47)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_boolsetTypeName_1555.readProperty_location (), GGS_string ("a boolset type must define at least one case constant"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 48)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_boolsetDeclarationAST::init_21_isPredefined_21__21__21_isEquatable (GGS_bool (false), var_boolsetTypeName_1555, var_slotList_1748, var_isEquatable_1611, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 40)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 41)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 40)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 41)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  GGS_bool var_isAbstract_1530 ;
  GGS_bool var_clonable_1555 ;
  switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
    var_isAbstract_1530 = GGS_bool (false) ;
    var_clonable_1555 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas", 33)) ;
    var_isAbstract_1530 = GGS_bool (true) ;
    var_clonable_1555 = GGS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas", 37)) ;
    var_isAbstract_1530 = GGS_bool (false) ;
    var_clonable_1555 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_isReference_1788 ;
  switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas", 43)) ;
    var_isReference_1788 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_valueclass COMMA_SOURCE_FILE ("declaration-type-class.galgas", 46)) ;
    var_isReference_1788 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_className_1936 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 49)) ;
  GGS_lstring var_superClassName_1988 ;
  switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
  case 1: {
    var_superClassName_1988 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas", 52)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 54)) ;
    var_superClassName_1988 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_generateInSeparateFile_2184 ;
  switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_2184 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas", 61)) ;
    var_generateInSeparateFile_2184 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 64)) ;
  GGS_propertyInCollectionListAST var_propertyList_2409 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2409, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_className_1936, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 73)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_classDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_isAbstract_1530, var_isReference_1788, var_className_1936, var_superClassName_1988, var_generateInSeparateFile_2184, var_propertyList_2409, var_clonable_1555, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 74)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isReference_1788.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_lstring temp_2 ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, var_superClassName_1988.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        temp_2 = var_superClassName_1988 ;
      }else if (GalgasBool::boolFalse == test_3) {
        temp_2 = function_makeWeakTypeLName (var_superClassName_1988, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 91)) ;
      }
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_weakReferenceDeclarationAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_className_1936, function_makeWeakTypeLName (var_className_1936, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 88)), temp_2, var_generateInSeparateFile_2184, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 85)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas", 33)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_valueclass COMMA_SOURCE_FILE ("declaration-type-class.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 49)) ;
  switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 54)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas", 61)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 73)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas", 33)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas", 37)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_valueclass COMMA_SOURCE_FILE ("declaration-type-class.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 49)) ;
  switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 54)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas", 61)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 27)) ;
  GGS_lstring var_enumTypeName_1543 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 28)) ;
  GGS_structComparison var_comparison_1606 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 32)) ;
      switch (var_comparison_1606.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_1606 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas", 35)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 37)), GGS_string ("duplicated attribute"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 37)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 39)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 39)) ;
        }
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 42)) ;
      switch (var_comparison_1606.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_1606 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas", 45)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 47)), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 47)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 49)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 49)) ;
        }
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 52)) ;
  GGS_enumConstantList var_constantList_2238 = GGS_enumConstantList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 56)) ;
      GGS_lstring var_constantName_2315 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 57)) ;
      GGS__5B_associatedValue_5D_ var_associatedValueTypeList_2357 = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_HERE) ;
      switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 61)) ;
        bool repeatFlag_6 = true ;
        while (repeatFlag_6) {
          GGS_bool var_weakQualifier_2456 ;
          switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
          case 1: {
            var_weakQualifier_2456 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 67)) ;
            var_weakQualifier_2456 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_associatedValueType_2655 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_associatedValueType_2655, inCompiler) ;
          GGS_lstring var_associatedValueName_2703 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 71)) ;
          {
          var_associatedValueTypeList_2357.setter_append (GGS_associatedValue::init_21__21__21_ (var_weakQualifier_2456, var_associatedValueType_2655, var_associatedValueName_2703, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 72)) ;
          }
          if (select_galgas_33_DeclarationsSyntax_26 (inCompiler) == 2) {
          }else{
            repeatFlag_6 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 75)) ;
      } break ;
      default:
        break ;
      }
      var_constantList_2238.addAssignOperation (var_constantName_2315, var_associatedValueTypeList_2357  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 77)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_enumTypeName_1543, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 81)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, var_constantList_2238.getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 82)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (var_enumTypeName_1543.readProperty_location (), GGS_string ("an enumerated type must define at least one case constant"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 83)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_enumDeclarationAST::init_21_isPredefined_21__21__21_comparison (GGS_bool (false), var_enumTypeName_1543, var_constantList_2238, var_comparison_1606, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 85)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 32)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 52)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 57)) ;
      switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 61)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 67)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 71)) ;
          if (select_galgas_33_DeclarationsSyntax_26 (inCompiler) == 2) {
          }else{
            repeatFlag_2 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 75)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 32)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 52)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 57)) ;
      switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 61)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 67)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 71)) ;
          if (select_galgas_33_DeclarationsSyntax_26 (inCompiler) == 2) {
          }else{
            repeatFlag_2 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 75)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 27)) ;
  GGS_lstring var_externTypeName_1554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 28)) ;
  GGS_string var_cppPredeclarationCode_1640 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_1640, inCompiler) ;
  GGS_string var_cppClassCode_1705 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_1705, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 31)) ;
  GGS_externTypeConstructorList var_externTypeConstructorList_1761 = GGS_externTypeConstructorList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeGetterList var_externTypeGetterList_1823 = GGS_externTypeGetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeSetterList var_externTypeSetterList_1880 = GGS_externTypeSetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeMethodList var_externTypeMethodList_1937 = GGS_externTypeMethodList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeConstructorList_1761, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeGetterList_1823, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeSetterList_1880, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeMethodList_1937, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externTypeDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_externTypeName_1554, var_cppPredeclarationCode_1640, var_cppClassCode_1705, var_externTypeConstructorList_1761, var_externTypeGetterList_1823, var_externTypeSetterList_1880, var_externTypeMethodList_1937, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 28)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 28)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i19_ (GGS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 62)) ;
  outArgument_outCppPredeclarationCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_2911 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 66)) ;
      outArgument_outCppPredeclarationCode.plusAssignOperation(var_cppPredeclarationCodeElement_2911.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i19_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i20_ (GGS_string & outArgument_outCppClassCode,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 75)) ;
  outArgument_outCppClassCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_30 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_3286 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 79)) ;
      outArgument_outCppClassCode.plusAssignOperation(var_cppPredeclarationCodeElement_3286.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 80)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i20_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_30 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 82)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_30 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GGS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 90)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_3731 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_3799 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 94)) ;
      GGS_lstring var_argumentTypeName_3859 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_3859, inCompiler) ;
      GGS_lstring var_argumentName_3909 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 96)) ;
      var_argumentTypeList_3731.addAssignOperation (var_selector_3799, var_argumentTypeName_3859, var_argumentName_3909  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 97)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 99)) ;
      GGS_lstring var_selector_4020 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 100)) ;
      GGS_lstring var_argumentTypeName_4092 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_4092, inCompiler) ;
      GGS_lstring var_argumentName_4142 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 102)) ;
      var_argumentTypeList_3731.addAssignOperation (var_selector_4020, var_argumentTypeName_4092, var_argumentName_4142  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 105)) ;
  ioArgument_ioExternTypeConstructorList.addAssignOperation (var_argumentTypeList_3731  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 94)) ;
      nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 96)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 99)) ;
      nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 102)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 105)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 94)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 96)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 99)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 102)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 113)) ;
  GGS_lstring var_getterName_4595 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 114)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_4647 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_4715 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 118)) ;
      GGS_lstring var_argumentTypeName_4775 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_4775, inCompiler) ;
      GGS_lstring var_argumentName_4825 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 120)) ;
      var_argumentTypeList_4647.addAssignOperation (var_selector_4715, var_argumentTypeName_4775, var_argumentName_4825  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 121)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 123)) ;
      GGS_lstring var_selector_4936 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 124)) ;
      GGS_lstring var_argumentTypeName_5008 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_5008, inCompiler) ;
      GGS_lstring var_argumentName_5058 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 126)) ;
      var_argumentTypeList_4647.addAssignOperation (var_selector_4936, var_argumentTypeName_5008, var_argumentName_5058  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 129)) ;
  GGS_lstring var_resultTypeName_5214 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_resultTypeName_5214, inCompiler) ;
  ioArgument_ioExternTypeGetterList.addAssignOperation (var_getterName_4595, var_resultTypeName_5214, var_argumentTypeList_4647  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 118)) ;
      nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 120)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 123)) ;
      nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 129)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 118)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 120)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 123)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 129)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 138)) ;
  GGS_lstring var_setterName_5608 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 139)) ;
  GGS_formalParameterListAST var_formalParameterList_5675 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_5675, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssignOperation (var_setterName_5608, var_formalParameterList_5675  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 141)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 139)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 139)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 148)) ;
  GGS_lstring var_methodName_6061 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 149)) ;
  GGS_formalParameterListAST var_formalParameterList_6128 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_6128, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssignOperation (var_methodName_6061, var_formalParameterList_6128, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 151))  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 149)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 149)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 27)) ;
  GGS_lstring var_graphTypeName_1553 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 29)) ;
  GGS_lstring var_associatedListTypeName_1649 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_associatedListTypeName_1649, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 32)) ;
  GGS_graphInsertModifierList var_graphInsertModifierList_1696 = GGS_graphInsertModifierList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 36)) ;
      GGS_lstring var_insertName_1819 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 39)) ;
      GGS_lstring var_errorMessage_1891 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 40)) ;
      var_graphInsertModifierList_1696.addAssignOperation (var_insertName_1819, var_errorMessage_1891  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 41)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 43)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_graphDeclarationAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_graphTypeName_1553, var_associatedListTypeName_1649, var_graphInsertModifierList_1696, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 29)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 40)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 29)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 40)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas", 38)) ;
  GGS_lstring var_listTypeName_2005 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas", 39)) ;
  GGS_bool var_isUsefull_2079 = GGS_bool (false) ;
  GGS_bool var_isEquatable_2105 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas", 44)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isEquatable_2105.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 46)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 46)) ;
        }
      }
      var_isEquatable_2105 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas", 50)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_2079.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 52)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 52)) ;
        }
      }
      var_isUsefull_2079 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 56)) ;
  GGS_propertyInCollectionListAST var_propertyList_2485 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2485, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_listTypeName_2005, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_propertyList_2485.getter_count (SOURCE_FILE ("declaration-type-list.galgas", 64)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 65)), GGS_string ("a list declaration must declare at least one property"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 65)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 67)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (false), var_listTypeName_2005, var_propertyList_2485, var_isUsefull_2079, var_isEquatable_2105, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i26_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas", 38)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas", 50)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 56)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas", 38)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas", 50)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 56)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 44)) ;
  GGS_lstring var_mDictTypeName_2221 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 46)) ;
  GGS_bool var_equatable_2301 ;
  switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    var_equatable_2301 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 51)) ;
    var_equatable_2301 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 54)) ;
  GGS_lstring var_keyTypeName_2460 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_keyTypeName_2460, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 57)) ;
  GGS_propertyInCollectionListAST var_propertyList_2511 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2511, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mDictTypeName_2221, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 65)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_dictDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_mDictTypeName_2221, var_keyTypeName_2460, var_propertyList_2511, var_equatable_2301, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 46)) ;
  switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 54)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 65)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 46)) ;
  switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 54)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas", 27)) ;
  GGS_lstring var_mapTypeName_1551 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas", 28)) ;
  GGS_bool var_isEquatable_1629 ;
  switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
    var_isEquatable_1629 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas", 33)) ;
    var_isEquatable_1629 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 36)) ;
  GGS_propertyInCollectionListAST var_propertyList_1753 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertSetterListAST var_mInsertSetterList_1808 = GGS_insertSetterListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mSearchMethodList_1880 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mRemoveSetterList_1932 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_replaceMethodList_1984 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_2051 = GGS_insertOrReplaceDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_searchSubscriptListAST_2119 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_1753, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertSetterList_1808, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_ (var_mSearchMethodList_1880, inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subscript_5F_declaration_ (var_searchSubscriptListAST_2119, inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_ (var_mRemoveSetterList_1932, inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_ (var_replaceMethodList_1984, inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_2051, inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mapTypeName_1551, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_mapDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (GGS_bool (false), var_mapTypeName_1551, var_propertyList_1753, var_mInsertSetterList_1808, var_mSearchMethodList_1880, var_searchSubscriptListAST_2119, var_mRemoveSetterList_1932, var_replaceMethodList_1984, var_insertOrReplaceDeclarationListAST_2051, var_isEquatable_1629, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subscript_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 62)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 62)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i29_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("declaration-type-map.galgas", 80)) ;
  GGS_lstring var_methodName_3332 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 82)) ;
  GGS_lstring var_errorMessage_3396 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 83)) ;
  ioArgument_ioMapSearchMethodListAST.addAssignOperation (var_methodName_3332, var_errorMessage_3396  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 84)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i29_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("declaration-type-map.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("declaration-type-map.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i30_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchSubscriptListAST,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas", 90)) ;
  GGS_lstring var_methodName_3740 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 92)) ;
  GGS_lstring var_errorMessage_3804 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 93)) ;
  ioArgument_ioMapSearchSubscriptListAST.addAssignOperation (var_methodName_3740, var_errorMessage_3804  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i30_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i31_ (GGS_mapAccessorListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("declaration-type-map.galgas", 100)) ;
  GGS_lstring var_mMethodName_4135 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 103)) ;
  GGS_lstring var_mErrorMessage_4202 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 104)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssignOperation (var_mMethodName_4135, var_mErrorMessage_4202  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i31_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("declaration-type-map.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 104)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("declaration-type-map.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i32_ (GGS_mapAccessorListAST & ioArgument_ioMapReplaceMethodListAST,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas", 111)) ;
  GGS_lstring var_mMethodName_4514 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 114)) ;
  GGS_lstring var_mErrorMessage_4581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 115)) ;
  ioArgument_ioMapReplaceMethodListAST.addAssignOperation (var_mMethodName_4514, var_mErrorMessage_4581  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i32_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 115)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i33_ (GGS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("declaration-type-map.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas", 124)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssignOperation (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 125))  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 125)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i33_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("declaration-type-map.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas", 124)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("declaration-type-map.galgas", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i34_ (GGS_insertSetterListAST & ioArgument_ioMapMethodList,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas", 131)) ;
  GGS_lstring var_mMethodName_5203 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 134)) ;
  GGS_lstring var_mErrorMessage_5270 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 135)) ;
  GGS_lstring var_mShadowErrorMessage_5301 ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5301 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 138)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 140)) ;
    var_mShadowErrorMessage_5301 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssignOperation (var_mMethodName_5203, var_mErrorMessage_5270, var_mShadowErrorMessage_5301  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i34_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 135)) ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 140)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 135)) ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 140)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 27)) ;
  GGS_lstring var_sortedListTypeName_1549 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 28)) ;
  GGS_bool var_isEquatable_1641 ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    var_isEquatable_1641 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 33)) ;
    var_isEquatable_1641 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 36)) ;
  GGS_propertyInCollectionListAST var_attributeList_1794 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_42 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_attributeList_1794, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 43)) ;
  GGS_sortedListSortDescriptorListAST var_sortDescriptorList_1967 = GGS_sortedListSortDescriptorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_1967, inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_43 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 50)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_sortedListDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_sortedListTypeName_1549, var_attributeList_1794, var_sortDescriptorList_1967, var_isEquatable_1641, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_42 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 43)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_43 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_42 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 43)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_43 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i36_ (GGS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mSortedAttributeName_2563 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 63)) ;
  GGS_bool var_mAscending_2598 ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 66)) ;
    var_mAscending_2598 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 69)) ;
    var_mAscending_2598 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssignOperation (var_mSortedAttributeName_2563, var_mAscending_2598  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i36_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 63)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 66)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 69)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 63)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 66)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 69)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 25)) ;
  GGS_lstring var_structTypeName_1441 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 26)) ;
  GGS_structComparison var_comparison_1508 ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    var_comparison_1508 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-struct.galgas", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 31)) ;
    var_comparison_1508 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 34)) ;
    var_comparison_1508 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 37)) ;
  GGS_propertyInCollectionListAST var_propertyList_1722 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_1722, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_structTypeName_1441, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 45)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_structTypeName_1441, var_propertyList_1722, GGS_string::makeEmptyString (), var_comparison_1508, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 26)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 26)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  GGS_lstring var_typeName_1447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
      GGS_lstring var_t_1552 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 31)) ;
      var_typeName_1447 = function_makeEmbeddedTypeLName (var_typeName_1447, var_t_1552, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_1652 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 34)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_1743 ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_1743, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_1743, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 41)) ;
  GGS_lstring var_returnedTypeName_2030 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_2030, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_1447, var_getterName_1652, var_formalInputParameterList_1743, var_returnedTypeName_2030, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 34)) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 41)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 25)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 34)) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 41)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i39_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
  GGS_lstring var_typeName_2503 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_49 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 60)) ;
      GGS_lstring var_t_2575 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 61)) ;
      var_typeName_2503 = function_makeEmbeddedTypeLName (var_typeName_2503, var_t_2575, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mGetterName_2675 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2767 ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_2767, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2767, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 71)) ;
  GGS_lstring var_returnedTypeName_3054 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_3054, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_2503, var_mGetterName_2675, var_formalInputParameterList_2767, var_returnedTypeName_3054, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i39_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_49 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 60)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 61)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)) ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 71)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i39_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_49 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 60)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 61)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)) ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 71)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 28)) ;
  GGS_lstring var_typeName_1560 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_51 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 32)) ;
      GGS_lstring var_t_1665 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 33)) ;
      var_typeName_1560 = function_makeEmbeddedTypeLName (var_typeName_1560, var_t_1665, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1774 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 36)) ;
  GGS_formalParameterListAST var_formalParameterList_1884 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1884, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_1560, var_methodName_1774, var_formalParameterList_1884, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_51 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 32)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 33)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 36)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_51 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 32)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 33)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 36)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i41_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) ;
  GGS_lstring var_typeName_2331 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_52 (inCompiler) == 2) {
      GGS_lstring var_t_2393 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 54)) ;
      var_typeName_2331 = function_makeEmbeddedTypeLName (var_typeName_2331, var_t_2393, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 56)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2512 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 58)) ;
  GGS_formalParameterListAST var_formalParameterList_2622 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2622, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2331, var_methodName_2512, var_formalParameterList_2622, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 56)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 58)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 56)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 58)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 28)) ;
  GGS_lstring var_className_1569 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 29)) ;
  GGS_lstring var_setterName_1656 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 30)) ;
  GGS_formalParameterListAST var_formalParameterList_1766 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1766, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_className_1569, var_setterName_1656, var_formalParameterList_1766, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 30)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 30)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i43_ (const GGS_lstring constinArgument_inClassName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 44)) ;
  GGS_lstring var_setterName_2238 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 45)) ;
  GGS_formalParameterListAST var_formalParameterList_2348 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2348, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inClassName, var_setterName_2238, var_formalParameterList_2348, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 45)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 45)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 25)) ;
  GGS_lstring var_typeName_1444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 27)) ;
  GGS_equatableComparableExtension var_theExtension_1537 ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 30)) ;
    var_theExtension_1537 = GGS_equatableComparableExtension::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 33)) ;
    var_theExtension_1537 = GGS_equatableComparableExtension::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_equatableExtensionAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_typeName_1444, var_theExtension_1537, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 30)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 30)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 33)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  GGS_lstring var_typeName_1545 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 31)) ;
      GGS_lstring var_t_1642 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 32)) ;
      var_typeName_1545 = function_makeEmbeddedTypeLName (var_typeName_1545, var_t_1642, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_1751 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_1834 ;
  switch (select_galgas_33_DeclarationsSyntax_55 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_1834, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_1834, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 42)) ;
  GGS_lstring var_mReturnedTypeName_2112 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_2112, inCompiler) ;
  GGS_lstring var_resultVariableName_2147 ;
  switch (select_galgas_33_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
    var_resultVariableName_2147 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 46)) ;
  } break ;
  case 2: {
    var_resultVariableName_2147 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 48)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 50)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2373 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2373, inCompiler) ;
  GGS_location var_endOfInstructionList_2414 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 53)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_1545, var_getterName_1751, var_formalInputParameterList_1834, var_mReturnedTypeName_2112, var_resultVariableName_2147, var_routineInstructionList_2373, var_endOfInstructionList_2414, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 31)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  switch (select_galgas_33_DeclarationsSyntax_55 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 42)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 31)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  switch (select_galgas_33_DeclarationsSyntax_55 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 42)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  GGS_lstring var_getterName_3106 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_3189 ;
  switch (select_galgas_33_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_3189, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_3189, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) ;
  GGS_lstring var_mReturnedTypeName_3467 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_3467, inCompiler) ;
  GGS_lstring var_resultVariableName_3502 ;
  switch (select_galgas_33_DeclarationsSyntax_58 (inCompiler)) {
  case 1: {
    var_resultVariableName_3502 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 82)) ;
  } break ;
  case 2: {
    var_resultVariableName_3502 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 84)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 86)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3728 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3728, inCompiler) ;
  GGS_location var_endOfInstructionList_3769 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 89)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inTypeName, var_getterName_3106, var_formalInputParameterList_3189, var_mReturnedTypeName_3467, var_resultVariableName_3502, var_routineInstructionList_3728, var_endOfInstructionList_3769, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  switch (select_galgas_33_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_58 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 82)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 89)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  switch (select_galgas_33_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_58 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 82)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  GGS_lstring var_typeName_1432 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
      GGS_lstring var_t_1529 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 30)) ;
      var_typeName_1432 = function_makeEmbeddedTypeLName (var_typeName_1432, var_t_1529, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1638 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 33)) ;
  GGS_formalParameterListAST var_formalParameterList_1740 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1740, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 35)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_1827 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1827, inCompiler) ;
  GGS_location var_endOfMethodLocation_1858 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 38)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_1432, var_methodName_1638, var_formalParameterList_1740, var_routineInstructionList_1827, var_endOfMethodLocation_1858, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 30)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 33)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 35)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 30)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 33)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 35)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  GGS_lstring var_typeName_2499 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_60 (inCompiler) == 2) {
      GGS_lstring var_t_2561 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 58)) ;
      var_typeName_2499 = function_makeEmbeddedTypeLName (var_typeName_2499, var_t_2561, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 59)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 60)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2680 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 62)) ;
  GGS_formalParameterListAST var_formalParameterList_2782 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2782, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 64)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2897 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2897, inCompiler) ;
  GGS_location var_endOfMethodLocation_2928 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 67)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_2499, var_methodName_2680, var_formalParameterList_2782, var_routineInstructionList_2897, var_endOfMethodLocation_2928, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 58)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 60)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 62)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 64)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 58)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 60)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 62)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 64)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 40)) ;
  GGS_lstring var_typeName_2162 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 44)) ;
      GGS_lstring var_t_2259 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 45)) ;
      var_typeName_2162 = function_makeEmbeddedTypeLName (var_typeName_2162, var_t_2259, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2368 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
  GGS_formalParameterListAST var_formalParameterList_2470 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2470, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 50)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2557 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2557, inCompiler) ;
  GGS_location var_endOfSetterLocation_2598 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 53)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_2162, var_setterName_2368, var_formalParameterList_2470, var_routineInstructionList_2557, var_endOfSetterLocation_2598, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 44)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 44)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
  GGS_lstring var_typeName_3185 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_62 (inCompiler) == 2) {
      GGS_lstring var_t_3247 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 72)) ;
      var_typeName_3185 = function_makeEmbeddedTypeLName (var_typeName_3185, var_t_3247, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_3366 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 76)) ;
  GGS_formalParameterListAST var_formalParameterList_3468 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_3468, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 78)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3583 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3583, inCompiler) ;
  GGS_location var_endOfSetterLocation_3624 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_3185, var_setterName_3366, var_formalParameterList_3468, var_routineInstructionList_3583, var_endOfSetterLocation_3624, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 76)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 78)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 76)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 78)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas", 25)) ;
  GGS_lstring var_typeName_1444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_63 (inCompiler) == 2) {
      GGS_lstring var_t_1539 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 30)) ;
      var_typeName_1444 = function_makeEmbeddedTypeLName (var_typeName_1444, var_t_1539, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 31)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 34)) ;
  GGS_formalInputParameterListAST var_formalParameterList_1700 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1700, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 36)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_1787 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1787, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 38)) ;
  GGS_location var_endOfMethodLocation_1826 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 39)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_1444, var_formalParameterList_1700, var_routineInstructionList_1787, var_endOfMethodLocation_1826, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 30)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 34)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 36)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 30)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 34)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 36)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_ (const GGS_lstring constinArgument_inClassName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 53)) ;
  GGS_formalInputParameterListAST var_formalParameterList_2388 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2388, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 55)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2475 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2475, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 57)) ;
  GGS_location var_endOfMethodLocation_2514 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 58)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inClassName, var_formalParameterList_2388, var_routineInstructionList_2475, var_endOfMethodLocation_2514, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 53)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 55)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 53)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 55)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 40)) ;
  GGS_lstring var_typeName_2103 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 44)) ;
      GGS_lstring var_t_2216 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 45)) ;
      var_typeName_2103 = function_makeEmbeddedTypeLName (var_typeName_2103, var_t_2216, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_2316 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2415 ;
  switch (select_galgas_33_DeclarationsSyntax_65 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_2415, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2415, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  GGS_lstring var_returnedTypeName_2693 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_2693, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_2103, var_getterName_2316, var_formalInputParameterList_2415, var_returnedTypeName_2693, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 44)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  switch (select_galgas_33_DeclarationsSyntax_65 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 44)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  switch (select_galgas_33_DeclarationsSyntax_65 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 71)) ;
  GGS_lstring var_typeName_3170 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_66 (inCompiler) == 2) {
      GGS_lstring var_t_3232 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 75)) ;
      var_typeName_3170 = function_makeEmbeddedTypeLName (var_typeName_3170, var_t_3232, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 76)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_3342 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 79)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_3441 ;
  switch (select_galgas_33_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_3441, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_3441, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 86)) ;
  GGS_lstring var_returnedTypeName_3719 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_3719, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_3170, var_getterName_3342, var_formalInputParameterList_3441, var_returnedTypeName_3719, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 75)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 79)) ;
  switch (select_galgas_33_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 86)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 75)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 79)) ;
  switch (select_galgas_33_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 86)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  GGS_lstring var_typeName_2030 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 43)) ;
      GGS_lstring var_t_2143 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)) ;
      var_typeName_2030 = function_makeEmbeddedTypeLName (var_typeName_2030, var_t_2143, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2252 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 47)) ;
  GGS_formalParameterListAST var_formalParameterList_2370 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2370, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2030, var_methodName_2252, var_formalParameterList_2370, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 43)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 43)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 62)) ;
  GGS_lstring var_methodName_2865 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 63)) ;
  GGS_formalParameterListAST var_formalParameterList_2983 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2983, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_2865, var_formalParameterList_2983, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 62)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 63)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 62)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 63)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 29)) ;
  GGS_lstring var_typeName_1575 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_69 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 33)) ;
      GGS_lstring var_t_1688 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 34)) ;
      var_typeName_1575 = function_makeEmbeddedTypeLName (var_typeName_1575, var_t_1688, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_1797 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 37)) ;
  GGS_formalParameterListAST var_formalParameterList_1915 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1915, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_1575, var_setterName_1797, var_formalParameterList_1915, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_69 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 33)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 37)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_69 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 33)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 37)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 52)) ;
  GGS_lstring var_typeName_2387 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_70 (inCompiler) == 2) {
      GGS_lstring var_t_2449 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 56)) ;
      var_typeName_2387 = function_makeEmbeddedTypeLName (var_typeName_2387, var_t_2449, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 57)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2568 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 60)) ;
  GGS_formalParameterListAST var_formalParameterList_2686 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2686, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2387, var_setterName_2568, var_formalParameterList_2686, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 62)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 60)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 60)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 43)) ;
  GGS_lstring var_typeName_2352 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_71 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 47)) ;
      GGS_lstring var_t_2457 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 48)) ;
      var_typeName_2352 = function_makeEmbeddedTypeLName (var_typeName_2352, var_t_2457, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 49)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_2566 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 51)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2657 ;
  switch (select_galgas_33_DeclarationsSyntax_72 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_2657, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2657, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  GGS_lstring var_mReturnedTypeName_2935 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_2935, inCompiler) ;
  GGS_lstring var_resultVariableName_2970 ;
  switch (select_galgas_33_DeclarationsSyntax_73 (inCompiler)) {
  case 1: {
    var_resultVariableName_2970 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 62)) ;
  } break ;
  case 2: {
    var_resultVariableName_2970 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 64)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3168 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3168, inCompiler) ;
  GGS_location var_endOfInstructionList_3209 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 69)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_2352, var_getterName_2566, var_formalInputParameterList_2657, var_mReturnedTypeName_2935, var_resultVariableName_2970, var_routineInstructionList_3168, var_endOfInstructionList_3209, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 43)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_71 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 47)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 48)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 51)) ;
  switch (select_galgas_33_DeclarationsSyntax_72 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_73 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 62)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 43)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_71 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 47)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 48)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 51)) ;
  switch (select_galgas_33_DeclarationsSyntax_72 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_73 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 62)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 87)) ;
  GGS_lstring var_typeName_3900 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_74 (inCompiler) == 2) {
      GGS_lstring var_t_3962 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 91)) ;
      var_typeName_3900 = function_makeEmbeddedTypeLName (var_typeName_3900, var_t_3962, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 92)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_4081 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 95)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_4172 ;
  switch (select_galgas_33_DeclarationsSyntax_75 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_4172, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_4172, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 102)) ;
  GGS_lstring var_mReturnedTypeName_4450 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_4450, inCompiler) ;
  GGS_lstring var_resultVariableName_4485 ;
  switch (select_galgas_33_DeclarationsSyntax_76 (inCompiler)) {
  case 1: {
    var_resultVariableName_4485 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 106)) ;
  } break ;
  case 2: {
    var_resultVariableName_4485 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 108)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 110)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4711 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_4711, inCompiler) ;
  GGS_location var_endOfInstructionList_4752 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 113)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_3900, var_getterName_4081, var_formalInputParameterList_4172, var_mReturnedTypeName_4450, var_resultVariableName_4485, var_routineInstructionList_4711, var_endOfInstructionList_4752, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 87)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_74 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 91)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 95)) ;
  switch (select_galgas_33_DeclarationsSyntax_75 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 102)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_76 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 106)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 110)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 113)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 87)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_74 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 91)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 95)) ;
  switch (select_galgas_33_DeclarationsSyntax_75 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 102)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_76 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 106)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 110)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 113)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i61_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 28)) ;
  GGS_lstring var_typeName_1560 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_77 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 32)) ;
      GGS_lstring var_t_1675 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 33)) ;
      var_typeName_1560 = function_makeEmbeddedTypeLName (var_typeName_1560, var_t_1675, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 36)) ;
  GGS_formalParameterListAST var_formalParameterList_1894 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1894, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 38)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_1981 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1981, inCompiler) ;
  GGS_location var_endOfMethodLocation_2012 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 41)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_1560, var_methodName_1784, var_formalParameterList_1894, var_routineInstructionList_1981, var_endOfMethodLocation_2012, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i61_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_77 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 32)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 33)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 36)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 38)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i61_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_77 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 32)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 33)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 36)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 38)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i62_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  GGS_lstring var_typeName_2645 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_78 (inCompiler) == 2) {
      GGS_lstring var_t_2707 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 61)) ;
      var_typeName_2645 = function_makeEmbeddedTypeLName (var_typeName_2645, var_t_2707, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 62)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 63)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2826 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 65)) ;
  GGS_formalParameterListAST var_formalParameterList_2936 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2936, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 67)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3051 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3051, inCompiler) ;
  GGS_location var_endOfMethodLocation_3092 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 70)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_2645, var_methodName_2826, var_formalParameterList_2936, var_routineInstructionList_3051, var_endOfMethodLocation_3092, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i62_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_78 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 61)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 63)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 65)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 67)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 70)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_78 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 61)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 63)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 65)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 67)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i63_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 41)) ;
  GGS_lstring var_typeName_2217 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_79 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 45)) ;
      GGS_lstring var_t_2332 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 46)) ;
      var_typeName_2217 = function_makeEmbeddedTypeLName (var_typeName_2217, var_t_2332, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2441 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 49)) ;
  GGS_formalParameterListAST var_formalParameterList_2551 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2551, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 51)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2638 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2638, inCompiler) ;
  GGS_location var_endOfSetterLocation_2679 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_2217, var_setterName_2441, var_formalParameterList_2551, var_routineInstructionList_2638, var_endOfSetterLocation_2679, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i63_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_79 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 45)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 49)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 51)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i63_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_79 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 45)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 49)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 51)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i64_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 71)) ;
  GGS_lstring var_typeName_3324 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_80 (inCompiler) == 2) {
      GGS_lstring var_t_3386 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 75)) ;
      var_typeName_3324 = function_makeEmbeddedTypeLName (var_typeName_3324, var_t_3386, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 76)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_3505 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 79)) ;
  GGS_formalParameterListAST var_formalParameterList_3615 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_3615, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 81)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3730 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3730, inCompiler) ;
  GGS_location var_endOfSetterLocation_3771 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 84)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_typeName_3324, var_setterName_3505, var_formalParameterList_3615, var_routineInstructionList_3730, var_endOfSetterLocation_3771, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 85)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i64_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_80 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 75)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 79)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 81)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 84)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i64_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_80 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 75)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 79)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 81)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 84)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i65_ (GGS_AccessControlAST & outArgument_outAccessControl,
                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_33_DeclarationsSyntax_81 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 31)) ;
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_82 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedAccess (SOURCE_FILE ("accessControl.galgas", 36)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 38)) ;
      GGS_lstring var_value_1791 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 39)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::notEqual, var_value_1791.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_1791.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 41)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 43)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedSetAccess (SOURCE_FILE ("accessControl.galgas", 44)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 47)) ;
    switch (select_galgas_33_DeclarationsSyntax_83 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateAccess (SOURCE_FILE ("accessControl.galgas", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 51)) ;
      GGS_lstring var_value_2103 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 52)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_value_2103.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_2103.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 54)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 56)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateSetAccess (SOURCE_FILE ("accessControl.galgas", 57)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_84 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 62))  COMMA_SOURCE_FILE ("accessControl.galgas", 62)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 64)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 65))  COMMA_SOURCE_FILE ("accessControl.galgas", 65)) ;
      GGS_lstring var_value_2530 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 66)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, var_value_2530.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_2530.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 68)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 70)) ;
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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i65_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_82 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 43)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 47)) ;
    switch (select_galgas_33_DeclarationsSyntax_83 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 52)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_84 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 66)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 70)) ;
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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i65_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_82 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 43)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 47)) ;
    switch (select_galgas_33_DeclarationsSyntax_83 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 52)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 56)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_84 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 66)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 70)) ;
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 45)) ;
  GGS_lstring var_lexiqueComponentName_2470 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 48)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_2560 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_2624 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_2687 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_2743 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_2802 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_2874 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_2949 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_3010 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_3057 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_2560, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_2624, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (var_lexicalAttributeList_2687, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__ (var_lexicalStyleList_2743, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__ (var_terminalDeclarationList_2802, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (var_lexicalListDeclarationList_2949, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_3010, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_3010, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (var_lexicalMessageDeclarationList_2874, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (var_indexingListAST_3057, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_2470, GGS_bool (false), var_templateDelimitorList_2560, var_templateReplacementList_2624, var_lexicalAttributeList_2687, var_lexicalStyleList_2743, var_terminalDeclarationList_2802, var_lexicalMessageDeclarationList_2874, var_lexicalListDeclarationList_2949, var_lexicalRuleList_3010, var_indexingListAST_3057, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 48)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 102)) ;
  GGS_lstring var_lexiqueComponentName_4508 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 105)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_4598 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_4662 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_4725 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_4781 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_4840 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_4912 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_4987 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_5048 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_5095 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_4598, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_4662, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (var_lexicalAttributeList_4725, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__ (var_lexicalStyleList_4781, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__ (var_terminalDeclarationList_4840, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (var_lexicalListDeclarationList_4987, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_5048, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_5048, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (var_lexicalMessageDeclarationList_4912, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (var_indexingListAST_5095, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 138)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_4508, GGS_bool (true), var_templateDelimitorList_4598, var_templateReplacementList_4662, var_lexicalAttributeList_4725, var_lexicalStyleList_4781, var_terminalDeclarationList_4840, var_lexicalMessageDeclarationList_4912, var_lexicalListDeclarationList_4987, var_lexicalRuleList_5048, var_indexingListAST_5095, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 139)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 138)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 105)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_ (GGS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 158)) ;
  GGS_lstring var_indexName_6516 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 160)) ;
  GGS_lstring var_indexComment_6595 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 161)) ;
  ioArgument_ioIndexingListAST.addAssignOperation (var_indexName_6516, var_indexComment_6595  COMMA_SOURCE_FILE ("lexique-component.galgas", 162)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 158)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 161)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 158)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_ (GGS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 169)) ;
  GGS_lstring var_messageName_6926 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 171)) ;
  GGS_lstring var_messageValue_6975 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 172)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssignOperation (var_messageName_6926, var_messageValue_6975  COMMA_SOURCE_FILE ("lexique-component.galgas", 173)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 169)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 171)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 172)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 169)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 171)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 172)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 180)) ;
  GGS_lstring var_listName_7300 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 181)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssignOperation (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_7300, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 182)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 180)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 181)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 180)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 181)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 188)) ;
  GGS_lexicalExpressionAST var_lexicalRuleExpression_7635 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_7635, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 190)) ;
  GGS_lexicalInstructionListAST var_instructionList_7700 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_7700, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 196)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssignOperation (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_7635, var_instructionList_7700, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 197)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 188)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 190)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 196)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 188)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 190)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 196)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 203)) ;
  GGS_lexicalInstructionAST var_instruction_8160 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_8160, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_instruction_8160  COMMA_SOURCE_FILE ("lexique-component.galgas", 205)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 203)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 203)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_ (GGS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 211)) ;
  GGS_lexicalExpressionAST var_whileExpression_8466 ;
  nt_lexical_5F_expression_ (var_whileExpression_8466, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 213)) ;
  GGS_lexicalInstructionListAST var_whileInstructionList_8525 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_8525, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssignOperation (var_whileExpression_8466, var_whileInstructionList_8525  COMMA_SOURCE_FILE ("lexique-component.galgas", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 211)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 213)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 211)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 213)) ;
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
  GGS_lchar var_character_8950 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 225)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_8950, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 225)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 225)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lbigint var_unsignedValue_9278 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 232)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_9278, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 232)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 232)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_location var_currentLocation_9599 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 239)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 240)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_9599, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 240)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 240)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lstring var_idf_9971 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 247)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_9971, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 251)) ;
    GGS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_10125 = GGS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 255)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_10292 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_10292, inCompiler) ;
        var_functionActualArgumentList_10125.addAssignOperation (var_arg_10292  COMMA_SOURCE_FILE ("lexique-component.galgas", 257)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 259)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_9971, var_functionActualArgumentList_10125, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 247)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 251)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 255)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 259)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 247)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 251)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 255)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 259)) ;
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_lexical_5F_term_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 276)) ;
      GGS_lexicalExpressionAST var_rightExpression_10935 ;
      nt_lexical_5F_factor_ (var_rightExpression_10935, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_10935, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_lexical_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 276)) ;
      nt_lexical_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 276)) ;
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
  GGS_lstring var_string_11228 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 285)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_11228, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 285)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 285)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 292)) ;
  GGS_lstring var_string_11486 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 294)) ;
  GGS_lstring var_errorMessage_11527 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 295)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_11486, var_errorMessage_11527, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 295)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 295)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_character_11805 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 302)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_11805, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 306)) ;
    GGS_lchar var_upperBound_11932 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 307)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_11805, var_upperBound_11932, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 302)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 306)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 307)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 302)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 306)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 307)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_characterSet_12233 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 315)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_12233, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 315)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 315)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_ (GGS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 322)) ;
  GGS_lstring var_name_12554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 323)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_12596 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      GGS_lstring var_selector_12665 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 327)) ;
      GGS_lstring var_sentAttribute_12698 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 328)) ;
      var_sentAttributeList_12596.addAssignOperation (var_selector_12665, var_sentAttribute_12698  COMMA_SOURCE_FILE ("lexique-component.galgas", 329)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_theStyle_12789 ;
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 333)) ;
    var_theStyle_12789 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 334)) ;
  } break ;
  case 2: {
    var_theStyle_12789 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 336)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 338)) ;
  GGS_lstring var_errorMessage_12997 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 339)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 340)) ;
  GGS_lexicalListEntryListAST var_entryList_13026 = GGS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_13026, inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 345)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 347)) ;
  ioArgument_ioLexicalListDeclarationList.addAssignOperation (var_name_12554, var_theStyle_12789, var_errorMessage_12997, var_sentAttributeList_12596, var_entryList_13026  COMMA_SOURCE_FILE ("lexique-component.galgas", 348)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 322)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 323)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 327)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 328)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 333)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 334)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 339)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 340)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 345)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 347)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 322)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 323)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 327)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 328)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 333)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 334)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 339)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 340)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 345)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 347)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_ (GGS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_entrySpelling_13464 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 354)) ;
  GGS_bool var_isTemplateEndMark_13486 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_13520 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 359)) ;
      var_isTemplateEndMark_13486 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 362)) ;
      var_nonAtomicSelection_13520 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_13719 ;
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 367)) ;
    var_terminalSpelling_13719 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 368)) ;
  } break ;
  case 2: {
    var_terminalSpelling_13719 = var_entrySpelling_13464 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssignOperation (var_entrySpelling_13464, var_terminalSpelling_13719, var_nonAtomicSelection_13520, var_isTemplateEndMark_13486  COMMA_SOURCE_FILE ("lexique-component.galgas", 372)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 354)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 359)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 362)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 367)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 368)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 354)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 359)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 362)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 367)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 368)) ;
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
  GGS_lstring var_typeName_14248 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 382)) ;
  GGS_lstring var_name_14288 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 383)) ;
  ioArgument_ioLexicalAttributeList.addAssignOperation (var_typeName_14248, var_name_14288  COMMA_SOURCE_FILE ("lexique-component.galgas", 384)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 382)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 383)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 382)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 383)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_ (GGS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_name_14572 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 390)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_14614 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 394)) ;
      GGS_lstring var_selector_14707 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 395)) ;
      GGS_lstring var_sentAttribute_14752 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 396)) ;
      var_sentAttributeList_14614.addAssignOperation (var_selector_14707, var_sentAttribute_14752  COMMA_SOURCE_FILE ("lexique-component.galgas", 397)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_theStyle_14843 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas", 399)) ;
  GGS_bool var_nonAtomicSelection_14902 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_14937 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 404)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_14843.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 406)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 406)) ;
        }
      }
      var_theStyle_14843 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 408)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 410)) ;
      var_nonAtomicSelection_14902 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 413)) ;
      var_templateEndMark_14937 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 416)) ;
  GGS_lstring var_errorMessage_15327 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 417)) ;
  ioArgument_ioTerminalDeclarationList.addAssignOperation (var_name_14572, var_sentAttributeList_14614, var_errorMessage_15327, var_theStyle_14843, var_nonAtomicSelection_14902, var_templateEndMark_14937  COMMA_SOURCE_FILE ("lexique-component.galgas", 418)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 390)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 394)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 396)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 404)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 408)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 410)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 413)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 417)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 390)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 394)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 396)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 404)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 408)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 410)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 413)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 416)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 417)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_ (GGS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 430)) ;
  GGS_lstring var_styleIdentifier_15762 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 431)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_styleIdentifier_15762.readProperty_string ().getter_containsCharacter (GGS_char (TO_UNICODE (95)) COMMA_SOURCE_FILE ("lexique-component.galgas", 432)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_15762.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas", 433)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_styleIdentifier_15762.readProperty_string ().getter_containsCharacterInRange (GGS_char (TO_UNICODE (48)), GGS_char (TO_UNICODE (57)) COMMA_SOURCE_FILE ("lexique-component.galgas", 435)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_15762.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 436)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 438)) ;
  GGS_lstring var_comment_16198 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 439)) ;
  ioArgument_ioLexicalStyleList.addAssignOperation (var_styleIdentifier_15762, var_comment_16198  COMMA_SOURCE_FILE ("lexique-component.galgas", 440)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 430)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 431)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 438)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 439)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 430)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 431)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 438)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 439)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 39)) ;
  GGS_lstring var_lexiqueComponentName_2047 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 42)) ;
  GGS_lstring var_lexiqueSuperComponentName_2107 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 45)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_2202 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_2266 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_2202, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_2266, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_2047, var_lexiqueSuperComponentName_2107, var_templateDelimitorList_2202, var_templateReplacementList_2266, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_ (GGS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                            Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 67)) ;
  GGS_lstring var_startString_2945 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 68)) ;
  GGS_bool var_nonAtomicSelection_2965 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_3000 = GGS_bool (false) ;
  GGS_bool var_preserved_3032 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 74)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_nonAtomicSelection_2965.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 76)), GGS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 76)) ;
        }
      }
      var_nonAtomicSelection_2965 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 80)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_templateEndMark_3000.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 82)), GGS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 82)) ;
        }
      }
      var_templateEndMark_3000 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 86)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_preserved_3032.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 88)), GGS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 88)) ;
        }
      }
      var_preserved_3032 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 92)) ;
  GGS_lstring var_endString_3594 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 93)) ;
  ioArgument_ioTemplateDelimitorList.addAssignOperation (var_startString_2945, var_nonAtomicSelection_2965, var_templateEndMark_3000, var_preserved_3032, var_endString_3594  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 74)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 80)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 86)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 74)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 80)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 86)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_ (GGS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas", 105)) ;
  GGS_lstring var_matchString_3996 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 106)) ;
  GGS_lstring var_replacementString_4025 ;
  GGS_lstring var_replacementFunction_4060 ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 110)) ;
    var_replacementString_4025 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 112)) ;
    var_replacementFunction_4060 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 115)) ;
    var_replacementString_4025 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 116)) ;
    var_replacementFunction_4060 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 117)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssignOperation (var_matchString_3996, var_replacementString_4025, var_replacementFunction_4060  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 106)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 112)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 106)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 112)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lexicalSendSearchListAST var_lexicalSendSearchList_1979 = GGS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_attributeName_2064 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 41)) ;
    GGS_lstring var_searchListName_2122 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 42)) ;
    var_lexicalSendSearchList_1979.addAssignOperation (var_attributeName_2064, var_searchListName_2122  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 43)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 44)) ;
    if (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_2285 ;
  switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
  case 1: {
    GGS_lstring var_defaultSentTerminal_2356 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 50)) ;
    var_lexicalSendDefaultAction_2285 = GGS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_2356, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 53)) ;
    GGS_lstring var_defaultErrorMessageName_2519 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 54)) ;
    var_lexicalSendDefaultAction_2285 = GGS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_2519, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_1979, var_lexicalSendDefaultAction_2285, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 41)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 42)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 44)) ;
    if (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 41)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 42)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 44)) ;
    if (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 36)) ;
  GGS_lstring var_terminalName_1878 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalDropInstructionAST::init_21_ (var_terminalName_1878, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 36)) ;
  GGS_lstring var_errorMessageName_1882 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_1882, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 35)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 38)) ;
  GGS_lexicalInstructionListAST var_repeatedInstructionList_2021 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  GGS_location var_location_2059 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_2021, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalWhileBranchListAST var_lexicalWhileBranchList_2203 = GGS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_2203, inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 50)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_2021, var_lexicalWhileBranchList_2203, var_location_2059, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_parse (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 37)) ;
  GGS_lstring var_tagName_1919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 39)) ;
  GGS_lstring var_terminalName_1962 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 40)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_1919, var_terminalName_1962, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_actionName_2974 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 62)) ;
  GGS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_3034 = GGS_lexicalRoutineCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 67)) ;
      GGS_location var_passingModeLocation_3108 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 68)) ;
      GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_3240 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_3240, inCompiler) ;
      var_actualArgumentList_3034.addAssignOperation (GGS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_3108, var_arg_3240, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 70)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 72)) ;
      GGS_location var_passingModeLocation_3363 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 73)) ;
      GGS_lstring var_attributeName_3433 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 74)) ;
      GGS_lexicalAttributeInputOutputArgumentAST var_arg_3457 = GGS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_3363, var_attributeName_3433, inCompiler COMMA_HERE) ;
      var_actualArgumentList_3034.addAssignOperation (var_arg_3457  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 76)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstringlist var_errorMessageList_3603 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 81)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_errorMessageName_3706 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 83)) ;
      var_errorMessageList_3603.addAssignOperation (var_errorMessageName_3706  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 84)) ;
      if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 86)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 89)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_2974, var_actualArgumentList_3034, var_errorMessageList_3603, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 67)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 81)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 83)) ;
      if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 86)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 89)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 67)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 81)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 83)) ;
      if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 86)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 37)) ;
  GGS_lexicalSelectBranchListAST var_lexicalWhileBranchList_1989 = GGS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 40)) ;
    GGS_lexicalExpressionAST var_selectExpression_2096 ;
    nt_lexical_5F_expression_ (var_selectExpression_2096, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 42)) ;
    GGS_lexicalInstructionListAST var_selectInstructionList_2160 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_2160, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_1989.addAssignOperation (var_selectExpression_2096, var_selectInstructionList_2160  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 48)) ;
    if (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 51)) ;
  GGS_lexicalInstructionListAST var_defaultInstructionList_2417 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_2417, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 57)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_1989, var_defaultInstructionList_2417, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 40)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 42)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler) == 2) {
        nt_lexical_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 51)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 40)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 42)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler) == 2) {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 51)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_sentTerminal_1879 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 36)) ;
  outArgument_outInstruction = GGS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_1879, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 36)) ;
  GGS_lstring var_tagName_1876 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalTagInstructionAST::init_21_ (var_tagName_1876, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 36)) ;
  GGS_lstring var_warningMessageName_1888 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 37)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_1888, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 37)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  GGS_lstring var_optionComponentName_2619 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  GGS_commandLineOptionListAST var_options_2681 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_2681, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 66)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_2619, var_options_2681, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_3142 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 77)) ;
  GGS_lstring var_mOptionInternalName_3189 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 79)) ;
  GGS_lchar var_mOptionInvocationLetter_3242 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  GGS_lstring var_mOptionInvocationString_3303 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 83)) ;
  GGS_lstring var_mOptionComment_3365 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 84)) ;
  GGS_lstring var_defaultValue_3388 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 85)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_3469 ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_3469 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 90)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_3388 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 92)) ;
      var_optionDefaultValueKind_3469 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 93)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_3762 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
      var_defaultValue_3388 = GGS_lstring::init_21__21_ (var_v_3762.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 96)), var_v_3762.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_3469 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 97)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_3142, var_mOptionInternalName_3189, var_mOptionInvocationLetter_3242, var_mOptionInvocationString_3303, var_mOptionComment_3365, var_defaultValue_3388, var_optionDefaultValueKind_3469  COMMA_SOURCE_FILE ("optionCompilation.galgas", 100)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 84)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 90)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 92)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 84)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 90)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 92)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 121)) ;
  GGS_lstring var_mGUIName_4673 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 123)) ;
  GGS_lstringlist var_importedOptionList_4711 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleGlobalAttributes_4771 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_withLexiqueListAST var_withLexiqueList_4828 = GGS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GGS_projectIndexingDescriptorList var_projectExtensionList_4889 = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)) ;
      GGS_lstring var_fileExtension_4975 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 133)) ;
      GGS_lstring var_indexingPathSuffix_5039 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 134)) ;
      var_projectExtensionList_4889.addAssignOperation (var_fileExtension_4975, var_indexingPathSuffix_5039  COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_4771, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_4711, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_4828, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 144)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssignOperation (var_mGUIName_4673, var_importedOptionList_4711, var_simpleGlobalAttributes_4771, var_withLexiqueList_4828, var_projectExtensionList_4889  COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
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

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 156)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 157)) ;
  GGS_lstring var_lexiqueReference_5743 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
  GGS_guiLabelListAST var_labels_5785 = GGS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleAttributes_5833 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiCompoundAttributeListAST var_compoundAttributes_5893 = GGS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 162)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 165)) ;
      GGS_uint var_displayStyle_5977 ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_5977 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 170)) ;
        var_displayStyle_5977 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS_terminalLabelListAST var_terminalList_6116 = GGS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_6186 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 175)) ;
        GGS_uint var_displayFlags_6213 ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_6213 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
          var_displayFlags_6213 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 183)) ;
          GGS_lbigint var_leadingStrip_6406 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_6406.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_6406.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 188)) ;
          GGS_lbigint var_endingStrip_6581 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 189)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_6581.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_6581.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
            }
          }
          var_displayFlags_6213 = var_leadingStrip_6406.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)).operator_or (var_endingStrip_6581.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_6116.addAssignOperation (var_terminal_6186, var_displayFlags_6213  COMMA_SOURCE_FILE ("guiCompilation.galgas", 196)) ;
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 198)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_5785.addAssignOperation (var_displayStyle_5977, var_terminalList_6116, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 200))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_6984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 202)) ;
      GGS_lstring var_name_7019 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
      GGS_lstring var_value_7044 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 205)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_7129 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 207)) ;
        var_value_7044 = GGS_lstring::init_21__21_ (var_value_7044.readProperty_string ().add_operation (var_v_7129.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)), var_v_7129.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_5893.addAssignOperation (var_key_6984, var_name_7019, var_value_7044  COMMA_SOURCE_FILE ("guiCompilation.galgas", 211)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_7306 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 213)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 214)) ;
      GGS_lstring var_value_7352 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 215)) ;
      var_simpleAttributes_5833.addAssignOperation (var_name_7306, var_value_7352  COMMA_SOURCE_FILE ("guiCompilation.galgas", 216)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 218)) ;
  ioArgument_ioWithLexiqueList.addAssignOperation (var_lexiqueReference_5743, var_labels_5785, var_simpleAttributes_5833, var_compoundAttributes_5893  COMMA_SOURCE_FILE ("guiCompilation.galgas", 219)) ;
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

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 225)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 226)) ;
  GGS_lstring var_optionReference_7740 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)) ;
  ioArgument_ioImportedOptionList.addAssignOperation (var_optionReference_7740  COMMA_SOURCE_FILE ("guiCompilation.galgas", 228)) ;
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

void cParser_galgas_33_GuiComponentSyntax::rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mKey_8019 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 235)) ;
  GGS_lstring var_mValue_8040 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 236)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_8113 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 238)) ;
    var_mValue_8040 = GGS_lstring::init_21__21_ (var_mValue_8040.readProperty_string ().add_operation (var_value_8113.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 239)), var_value_8113.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssignOperation (var_mKey_8019, var_mValue_8040  COMMA_SOURCE_FILE ("guiCompilation.galgas", 242)) ;
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
            test_1 = var_separator_7885.getter_containsCharacter (GGS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 199)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 199)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
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
  GGS_lstring var_mLabelName_1500 ;
  switch (select_galgas_33_SyntaxComponentSyntax_10 (inCompiler)) {
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
  switch (select_galgas_33_SyntaxComponentSyntax_11 (inCompiler)) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 39)) ;
  GGS_location var_mRepeatInstructionLocation_2114 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 40)) ;
  GGS_syntaxInstructionList var_mRepeatedInstructionList_2238 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_2238, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_2271 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 42)) ;
  GGS_listOfSyntaxInstructionList var_mRepeatBranchList_2324 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 45)) ;
    GGS_syntaxInstructionList var_mInstructionList_2483 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_2483, inCompiler) ;
    var_mRepeatBranchList_2324.addAssignOperation (var_mInstructionList_2483, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 47))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 47)) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 50)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_2598 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 51)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_2114, var_mRepeatedInstructionList_2238, var_endOf_5F_repeated_5F_instructions_2271, var_mRepeatBranchList_2324, var_endOf_5F_repeat_5F_instruction_2598, inCompiler COMMA_HERE) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                         GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 37)) ;
  GGS_location var_mSelectInstructionLocation_1990 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 38)) ;
  GGS_listOfSyntaxInstructionList var_mSelectBranchList_2042 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_2174 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2174, inCompiler) ;
  var_mSelectBranchList_2042.addAssignOperation (var_il_2174, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 41))  COMMA_SOURCE_FILE ("instruction-select.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 43)) ;
    GGS_syntaxInstructionList var_instructionList_2326 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2326, inCompiler) ;
    var_mSelectBranchList_2042.addAssignOperation (var_instructionList_2326, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 45))  COMMA_SOURCE_FILE ("instruction-select.galgas", 45)) ;
    if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 48)) ;
  GGS_location var_endOf_5F_select_5F_instruction_2438 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 49)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_1990, var_mSelectBranchList_2042, var_endOf_5F_select_5F_instruction_2438, inCompiler COMMA_HERE) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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
  switch (select_galgas_33_SyntaxComponentSyntax_14 (inCompiler)) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GGS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
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
      switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
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
      if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
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
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 64)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
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
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 64)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_SyntaxComponentSyntax_16 (inCompiler) == 2) {
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 41)) ;
  GGS_location var_instructionLocation_2189 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 43)) ;
  GGS_semanticExpressionAST var_variantExpression_2304 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_variantExpression_2304, inCompiler) ;
  GGS_location var_endOfVariantExpression_2330 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 46)) ;
  GGS_semanticExpressionAST var_whileExpression_2449 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whileExpression_2449, inCompiler) ;
  GGS_location var_endOfWhileExpression_2473 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 49)) ;
  GGS_syntaxInstructionList var_instructionList_2600 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2600, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 51)) ;
  GGS_location var_endOfInstructionList_2634 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 52)) ;
  outArgument_outInstruction = GGS_parseLoopInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_2189, var_variantExpression_2304, var_endOfVariantExpression_2330, var_whileExpression_2449, var_endOfWhileExpression_2473, var_instructionList_2600, var_endOfInstructionList_2634, inCompiler COMMA_HERE) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 38)) ;
  GGS_location var_instructionLocation_2001 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 40)) ;
  GGS_listOfSyntaxInstructionList var_mParseDoBranchList_2055 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_2188 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2188, inCompiler) ;
  var_mParseDoBranchList_2055.addAssignOperation (var_il_2188, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 43))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 45)) ;
    GGS_syntaxInstructionList var_instructionList_2345 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2345, inCompiler) ;
    var_mParseDoBranchList_2055.addAssignOperation (var_instructionList_2345, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 47))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 47)) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 50)) ;
  GGS_location var_endOfInstruction_2458 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 51)) ;
  outArgument_outInstruction = GGS_parseRewindInstruction::init_21__21__21_ (var_instructionLocation_2001, var_mParseDoBranchList_2055, var_endOfInstruction_2458, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 40)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 40)) ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 45)) ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_syntaxInstructionList & outArgument_outElseInstructionList,
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 49)) ;
  GGS_location var_instructionLocation_2577 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 50)) ;
  GGS_semanticExpressionAST var_whenExpression_2658 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenExpression_2658, inCompiler) ;
  GGS_location var_endOfWhenExpression_2681 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 53)) ;
  GGS_syntaxInstructionList var_whenInstructionList_2783 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenInstructionList_2783, inCompiler) ;
  GGS_location var_endOfWhenInstructions_2811 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 55)) ;
  GGS_syntaxInstructionList var_elseInstructionList_2926 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_2926, inCompiler) ;
  GGS_location var_endOfElseInstructions_2954 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 58)) ;
  outArgument_outElseInstructionList = GGS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  outArgument_outElseInstructionList.addAssignOperation (GGS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_2577, var_whenExpression_2658, var_endOfWhenExpression_2681, var_whenInstructionList_2783, var_endOfWhenInstructions_2811, var_elseInstructionList_2926, var_endOfElseInstructions_2954, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 60)) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 75)) ;
  GGS_location var_instructionLocation_3547 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 77)) ;
  GGS_semanticExpressionAST var_whenExpression_3662 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenExpression_3662, inCompiler) ;
  GGS_location var_endOfWhenExpression_3685 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 80)) ;
  GGS_syntaxInstructionList var_whenInstructionList_3810 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenInstructionList_3810, inCompiler) ;
  GGS_location var_endOfWhenInstructions_3838 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 82)) ;
  GGS_syntaxInstructionList var_elseInstructionList_3976 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_3976, inCompiler) ;
  GGS_location var_endOfElseInstructions_4004 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 86)) ;
  outArgument_outInstruction = GGS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_3547, var_whenExpression_3662, var_endOfWhenExpression_3685, var_whenInstructionList_3810, var_endOfWhenInstructions_3838, var_elseInstructionList_3976, var_endOfElseInstructions_4004, inCompiler COMMA_HERE) ;
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

void cParser_galgas_33_SyntaxComponentSyntax::rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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
          TC_Array <FixItDescription> fixItArray2 ;
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
      TC_Array <FixItDescription> fixItArray1 ;
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
        TC_Array <FixItDescription> fixItArray3 ;
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



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 66)) ;
  nt_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 66)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 68)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 66)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                   GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5674 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 135)) ;
      GGS_semanticExpressionAST var_leftOperand_5729 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5792 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_5792, inCompiler) ;
      outArgument_outExpression = GGS_leftShiftExpressionAST::init_21__21__21_ (var_operatorLocation_5674, var_leftOperand_5729, var_rightOperand_5792, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5918 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 140)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 141)) ;
      GGS_semanticExpressionAST var_leftOperand_5973 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6036 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6036, inCompiler) ;
      outArgument_outExpression = GGS_rightShiftExpressionAST::init_21__21__21_ (var_operatorLocation_5918, var_leftOperand_5973, var_rightOperand_6036, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_6163 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 146)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 147)) ;
      GGS_semanticExpressionAST var_leftOperand_6217 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6280 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6280, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionAST::init_21__21__21_ (var_operatorLocation_6163, var_leftOperand_6217, var_rightOperand_6280, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6400 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 152)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 153)) ;
      GGS_semanticExpressionAST var_leftOperand_6455 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6518 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6518, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6400, var_leftOperand_6455, var_rightOperand_6518, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6648 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 158)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 159)) ;
      GGS_semanticExpressionAST var_leftOperand_6702 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6765 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6765, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionAST::init_21__21__21_ (var_operatorLocation_6648, var_leftOperand_6702, var_rightOperand_6765, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_6885 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 164)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 165)) ;
      GGS_semanticExpressionAST var_leftOperand_6940 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7003 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_7003, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6885, var_leftOperand_6940, var_rightOperand_7003, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3508 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 78)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 79)) ;
      GGS_semanticExpressionAST var_leftOperand_3562 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3659 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_3659, inCompiler) ;
      outArgument_outExpression = GGS_andExpressionAST::init_21__21__21_ (var_operatorLocation_3508, var_leftOperand_3562, var_rightOperand_3659, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3779 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 84)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 85)) ;
      GGS_semanticExpressionAST var_leftOperand_3834 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3931 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_3931, inCompiler) ;
      outArgument_outExpression = GGS_andShortExpressionAST::init_21__21__21_ (var_operatorLocation_3779, var_leftOperand_3834, var_rightOperand_3931, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                         GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_location var_endOfReceiverExpression_4033 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 111)) ;
    GGS_lstring var_typeName_4104 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 112)) ;
    outArgument_outExpression = GGS_testDynamicClassInExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_4033, GGS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("expression-is-as.galgas", 117)), var_typeName_4104, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_location var_endOfReceiverExpression_4346 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 121)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 122)) ;
    GGS_lstring var_typeName_4474 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 124)) ;
    outArgument_outExpression = GGS_castInExpressionAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_4346, var_typeName_4474, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_or_parse (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5216 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5271 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5347 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5347, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5216, var_leftOperand_5271, GGS_comparison::class_func_equal (SOURCE_FILE ("expression-comparison.galgas", 124)), var_rightOperand_5347, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5482 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5537 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5613 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5613, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5482, var_leftOperand_5537, GGS_comparison::class_func_notEqual (SOURCE_FILE ("expression-comparison.galgas", 130)), var_rightOperand_5613, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5751 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5806 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5882 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5882, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5751, var_leftOperand_5806, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 136)), var_rightOperand_5882, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6024 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6079 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6155 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6155, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6024, var_leftOperand_6079, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 142)), var_rightOperand_6155, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6299 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6353 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6429 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6429, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6299, var_leftOperand_6353, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 148)), var_rightOperand_6429, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_6570 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 150)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 151)) ;
      GGS_semanticExpressionAST var_leftOperand_6624 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6700 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6700, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6570, var_leftOperand_6624, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 154)), var_rightOperand_6700, inCompiler COMMA_HERE) ;
    } break ;
    case 8: {
      GGS_location var_operatorLocation_6839 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 156)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 157)) ;
      GGS_semanticExpressionAST var_leftOperand_6895 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6971 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6971, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6839, var_leftOperand_6895, GGS_comparison::class_func_sameInstance (SOURCE_FILE ("expression-comparison.galgas", 160)), var_rightOperand_6971, inCompiler COMMA_HERE) ;
    } break ;
    case 9: {
      GGS_location var_operatorLocation_7113 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 162)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 163)) ;
      GGS_semanticExpressionAST var_leftOperand_7169 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7245 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_7245, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_7113, var_leftOperand_7169, GGS_comparison::class_func_differentInstances (SOURCE_FILE ("expression-comparison.galgas", 166)), var_rightOperand_7245, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_3 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_3 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_3480 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 83)) ;
  GGS_actualOutputArgumentList var_expressionList_3600 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3600, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 85)) ;
  outArgument_outExpression = GGS_functionCallExpressionAST::init_21__21_ (var_functionName_3480, var_expressionList_3600, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 83)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 83)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 85)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_3797 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3797, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_ (var_typeName_3797, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 94)) ;
    switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
    case 1: {
      GGS_lstring var_classFuncName_3958 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas", 96)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (var_typeName_3797, var_classFuncName_3958, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (var_typeName_3797, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 94)) ;
    switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas", 96)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_parse (inCompiler) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 94)) ;
    switch (select_galgas_34_ExpressionSyntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas", 96)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i7_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                              GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_t_4595 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4595, inCompiler) ;
  GGS_lstring var_typeName_4605 = function_makeEmbeddedTypeLName (constinArgument_inTypeName, var_t_4595, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 111)) ;
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_ (var_typeName_4605, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 115)) ;
    switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
    case 1: {
      GGS_lstring var_classFuncName_4821 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas", 117)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (var_typeName_4605, var_classFuncName_4821, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (var_typeName_4605, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 115)) ;
    switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas", 117)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_parse (inCompiler) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 115)) ;
    switch (select_galgas_34_ExpressionSyntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas", 117)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 131)) ;
  GGS_location var_initLocation_5421 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 132)) ;
  GGS_actualOutputArgumentList var_expressionList_5502 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_5502, inCompiler) ;
  GGS_location var_endOfExpression_5525 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 135)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_initLocation_5421, inCompiler COMMA_HERE), var_expressionList_5502, var_endOfExpression_5525, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 131)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 135)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 131)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 149)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 149)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 149)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i10_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                  GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 158)) ;
  GGS_actualOutputArgumentList var_expressionList_6492 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_6492, inCompiler) ;
  GGS_location var_endOfExpression_6515 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 161)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_6492, var_endOfExpression_6515, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 158)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 161)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 158)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 173)) ;
  GGS_location var_endOfExpression_6910 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 174)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 175)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_endOfExpression_6910, inCompiler COMMA_HERE), GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE), var_endOfExpression_6910, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 173)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 175)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 173)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 175)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 83)) ;
      GGS_actualOutputArgumentList var_expressionList_3283 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3283, inCompiler) ;
      outArgument_outExpression = GGS_subscriptReadAccessExpressionAST::init_21__21__21_ (outArgument_outExpression, var_expressionList_3283, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 90)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 92)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 94)) ;
      GGS_lstring var_structFieldName_3480 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 95)) ;
      switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
      case 1: {
        outArgument_outExpression = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_structFieldName_3480.readProperty_location (), outArgument_outExpression, var_structFieldName_3480, inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        GGS_lstring var_getterName_3709 = var_structFieldName_3480 ;
        GGS_location var_startLocation_3750 = GGS_location::class_func_next (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 104)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 105)) ;
        GGS_actualOutputArgumentList var_expressionList_3874 ;
        nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3874, inCompiler) ;
        GGS_location var_endLocation_3901 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 107)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 108)) ;
        outArgument_outExpression = GGS_getterCallExpressionAST::init_21_errorOnGetterCallInsteadOfPropertyRead_21__21__21__21_ (GGS_bool (true), outArgument_outExpression, var_getterName_3709, var_expressionList_3874, var_startLocation_3750.getter_union (var_endLocation_3901, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 114)), inCompiler COMMA_HERE) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 83)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 92)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 94)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 95)) ;
      switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 105)) ;
        nt_output_5F_expression_5F_list_parse (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 108)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 83)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 92)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 94)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 95)) ;
      switch (select_galgas_34_ExpressionSyntax_9 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 105)) ;
        nt_output_5F_expression_5F_list_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 108)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_classFuncName_3108 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas", 76)) ;
  GGS_location var_startOfExpression_3155 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 78)) ;
  GGS_actualOutputArgumentList var_expressionList_3224 ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    var_expressionList_3224 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 83)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3224, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_3384 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 87)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startOfExpression_3155, inCompiler COMMA_HERE), var_classFuncName_3108, var_expressionList_3224, var_startOfExpression_3155.getter_union (var_endOfExpression_3384, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 92)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas", 76)) ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 83)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas", 76)) ;
  switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 83)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i14_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                                 const GGS_lstring constinArgument_inClassFunctionName,
                                                                                                                                 GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_actualOutputArgumentList var_expressionList_4059 ;
  GGS_location var_startOfExpression_4082 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 104)) ;
  switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
    var_expressionList_4059 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 108)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4059, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_4262 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 112)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (constinArgument_inTypeName, constinArgument_inClassFunctionName, var_expressionList_4059, var_startOfExpression_4082.getter_union (var_endOfExpression_4262, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 117)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 108)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 108)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2590 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 56)) ;
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 58)) ;
  outArgument_outExpression = GGS_bangExpressionAST::init_21__21_ (var_operatorLocation_2590, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_startLocation_2331 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 55)) ;
  GGS_collectionValueElementList var_expressionList_2406 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_2524 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_2524, inCompiler) ;
      var_expressionList_2406.addAssignOperation (var_expression_2524, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 61))  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 61)) ;
      if (select_galgas_34_ExpressionSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startLocation_2331, inCompiler COMMA_HERE), var_expressionList_2406, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 66)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 55)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_parse (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 55)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i17_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                  GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 75)) ;
  GGS_collectionValueElementList var_expressionList_3076 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_3194 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_3194, inCompiler) ;
      var_expressionList_3076.addAssignOperation (var_expression_3194, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 81))  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 81)) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_3076, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 86)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i17_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 75)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_parse (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 87)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 75)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 92)) ;
  GGS_lstring var_filewrapperName_3725 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_filewrapperObjectInstanciationInExpressionAST::init_21_ (var_filewrapperName_3725, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      GGS_lstring var_filePath_3933 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 99)) ;
      outArgument_outExpression = GGS_filewrapperInExpressionAST::init_21__21_ (var_filewrapperName_3725, var_filePath_3933, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_filewrapperTemplateName_4097 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 106)) ;
      GGS_actualOutputArgumentList var_expressionList_4214 ;
      nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4214, inCompiler) ;
      outArgument_outExpression = GGS_filewrapperTemplateInExpressionAST::init_21__21__21_ (var_filewrapperName_3725, var_filewrapperTemplateName_4097, var_expressionList_4214, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 92)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 99)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 106)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 115)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 92)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 93)) ;
  switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 97)) ;
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 99)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 106)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas", 67)) ;
  GGS_semanticExpressionAST var_ifExpression_2939 ;
  nt_expression_ (ioArgument_ioDeclarations, var_ifExpression_2939, inCompiler) ;
  GGS_location var_operatorLocation_2960 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas", 70)) ;
  GGS_semanticExpressionAST var_thenExpression_3044 ;
  nt_expression_ (ioArgument_ioDeclarations, var_thenExpression_3044, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas", 72)) ;
  GGS_semanticExpressionAST var_elseExpression_3109 ;
  nt_expression_ (ioArgument_ioDeclarations, var_elseExpression_3109, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas", 74)) ;
  outArgument_outExpression = GGS_ifExpressionAST::init_21__21__21__21_ (var_operatorLocation_2960, var_ifExpression_2939, var_thenExpression_3044, var_elseExpression_3109, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas", 67)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas", 72)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas", 74)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas", 67)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas", 70)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas", 72)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 59)) ;
  GGS_lstring var_lexiqueName_2655 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 61)) ;
  GGS_lstring var_getterName_2697 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 62)) ;
  outArgument_outExpression = GGS_lexiqueIntrospectionExpressionAST::init_21__21_ (var_lexiqueName_2655, var_getterName_2697, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 64)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_2483 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 52)) ;
  outArgument_outExpression = GGS_literalCharExpressionAST::init_21_ (var_literalChar_2483, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ldouble var_literalDouble_2507 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas", 53)) ;
  outArgument_outExpression = GGS_literalDoubleExpressionAST::init_21_ (var_literalDouble_2507, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_3287 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 76)) ;
  outArgument_outExpression = GGS_literalBigIntExpressionAST::init_21_ (var_literalInt_3287, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_stringlist var_literalStringList_2669 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_literalString_2726 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 60)) ;
    var_literalStringList_2669.addAssignOperation (var_literalString_2726.readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 61)) ;
    if (select_galgas_34_ExpressionSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GGS_literalStringExpressionAST::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 64)), var_literalStringList_2669, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_parse (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 60)) ;
    if (select_galgas_34_ExpressionSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 60)) ;
    if (select_galgas_34_ExpressionSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 53)) ;
  GGS_lstring var_typeName_2507 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 54)) ;
  outArgument_outExpression = GGS_literalTypeInExpressionAST::init_21_ (var_typeName_2507, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas", 52)) ;
  outArgument_outExpression = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas", 53)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 44)) ;
  outArgument_outExpression = GGS_nilExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 45)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 44)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 74)) ;
  GGS_lstring var_optionComponentName_3197 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 76)) ;
  GGS_lstring var_optionName_3281 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 78)) ;
  GGS_lstring var_getterName_3322 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 79)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (var_optionComponentName_3197, var_optionName_3281, var_getterName_3322, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 74)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 74)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 89)) ;
  GGS_lstring var_optionName_3699 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 91)) ;
  GGS_lstring var_getterName_3740 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 92)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("galgas_builtin_options"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 93)), inCompiler COMMA_HERE), var_optionName_3699, var_getterName_3740, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 94)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 66)) ;
  outArgument_outExpression = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 67)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i31_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 74)) ;
  outArgument_outExpression = GGS_falseExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 75)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i31_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 74)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i32_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_2050 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas", 42)) ;
  outArgument_outExpression = GGS_varInExpressionAST::init_21_ (var_identifier_2050, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i32_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                    GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5165 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5219 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5307 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5307, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionAST::init_21__21__21_ (var_operatorLocation_5165, var_leftOperand_5219, var_rightOperand_5307, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5438 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5493 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5581 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5581, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_5438, var_leftOperand_5493, var_rightOperand_5581, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5722 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5776 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5841 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5841, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionAST::init_21__21__21_ (var_operatorLocation_5722, var_leftOperand_5776, var_rightOperand_5841, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_5966 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6021 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6086 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6086, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_5966, var_leftOperand_6021, var_rightOperand_6086, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6221 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6277 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6342 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6342, inCompiler) ;
      outArgument_outExpression = GGS_moduloExpressionAST::init_21__21__21_ (var_operatorLocation_6221, var_leftOperand_6277, var_rightOperand_6342, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i33_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2576 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_notExpressionAST::init_21__21_ (var_operatorLocation_2576, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i34_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 56)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5157 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5211 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5284 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5284, inCompiler) ;
      outArgument_outExpression = GGS_orExpressionAST::init_21__21__21_ (var_operatorLocation_5157, var_leftOperand_5211, var_rightOperand_5284, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5403 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5458 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5531 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5531, inCompiler) ;
      outArgument_outExpression = GGS_orShortExpressionAST::init_21__21__21_ (var_operatorLocation_5403, var_leftOperand_5458, var_rightOperand_5531, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5655 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5709 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5782 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5782, inCompiler) ;
      outArgument_outExpression = GGS_xorExpressionAST::init_21__21__21_ (var_operatorLocation_5655, var_leftOperand_5709, var_rightOperand_5782, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_5902 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_5958 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6031 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6031, inCompiler) ;
      outArgument_outExpression = GGS_closedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_5902, var_leftOperand_5958, var_rightOperand_6031, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6159 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6215 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6288 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6288, inCompiler) ;
      outArgument_outExpression = GGS_openedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_6159, var_leftOperand_6215, var_rightOperand_6288, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i35_parse (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                            GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_4880 ;
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
        var_selector_4880 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 126)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 128)) ;
        var_selector_4880 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 129)) ;
      } break ;
      case 3: {
        var_selector_4880 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 131)) ;
      } break ;
      default:
        break ;
      }
      GGS_semanticExpressionAST var_expression_5113 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_5113, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (var_selector_4880, var_expression_5113, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 134))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 134)) ;
      if (select_galgas_34_ExpressionSyntax_22 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 136)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i36_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 126)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 128)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_expression_parse (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_22 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 136)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 126)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 128)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_22 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 136)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                            GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_selector_5566 ;
    switch (select_galgas_34_ExpressionSyntax_25 (inCompiler)) {
    case 1: {
      var_selector_5566 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 150)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 152)) ;
      var_selector_5566 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 153)) ;
    } break ;
    case 3: {
      var_selector_5566 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 155)) ;
    } break ;
    default:
      break ;
    }
    GGS_semanticExpressionAST var_expression_5781 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_5781, inCompiler) ;
    outArgument_outExpressionList.addAssignOperation (var_selector_5566, var_expression_5781, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 158))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 158)) ;
    if (select_galgas_34_ExpressionSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i37_parse (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 150)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 152)) ;
    } break ;
    case 3: {
    } break ;
    default:
      break ;
    }
    nt_expression_parse (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 150)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 152)) ;
    } break ;
    case 3: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2106 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 45)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_tildeExpressionAST::init_21__21_ (var_operatorLocation_2106, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i38_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 45)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 45)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2588 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryMinusExpressionAST::init_21__21_ (var_operatorLocation_2588, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i39_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 56)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2586 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryPlusExpressionAST::init_21__21_ (var_operatorLocation_2586, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i40_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 56)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i41_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2605 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryWrappingMinusExpressionAST::init_21__21_ (var_operatorLocation_2605, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i41_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 56)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

