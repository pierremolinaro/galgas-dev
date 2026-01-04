#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 225)) ;
  GGS_lstring var_mFilewrapperName_9037 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
  GGS_lstring var_mFilewrapperPath_9123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 228)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_9174 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_9174, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_9243 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_9243, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_9328 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_9328, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (false), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 235)), var_mFilewrapperName_9037, var_mFilewrapperPath_9123, var_filewrapperTextFileExtensionList_9174, var_filewrapperBinaryFileExtensionList_9243, var_filewrapperTemplateList_9328, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 232)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 225)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 228)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 225)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 226)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 228)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 246)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 247)) ;
  GGS_lstring var_mFilewrapperName_9931 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 249)) ;
  GGS_lstring var_mFilewrapperPath_10017 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 250)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_10068 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_10068, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_10137 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_10137, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_10222 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_10222, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 257)), var_mFilewrapperName_9931, var_mFilewrapperPath_10017, var_filewrapperTextFileExtensionList_10068, var_filewrapperBinaryFileExtensionList_10137, var_filewrapperTemplateList_10222, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 254)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 246)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 247)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 249)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 250)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 246)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 247)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 249)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 250)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 270)) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_10902 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 274)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssignOperation (var_pathExtension_10902  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 275)) ;
      if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 277)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 270)) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 274)) ;
      if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 277)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 280)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 270)) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 274)) ;
      if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 277)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 287)) ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_11343 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 291)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssignOperation (var_pathExtension_11343  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 292)) ;
      if (select_galgas_34_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 294)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 297)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 287)) ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 291)) ;
      if (select_galgas_34_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 294)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 297)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 287)) ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 291)) ;
      if (select_galgas_34_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 294)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 297)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 304)) ;
  outArgument_outFilewrapperTemplateList = GGS_filewrapperTemplateListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 308)) ;
      GGS_lstring var_mFilewrapperTemplateName_11844 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 309)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 310)) ;
      GGS_lstring var_mFilewrapperTemplatePath_11901 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 311)) ;
      GGS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_11973 = GGS_formalTemplateInputParameterListAST::init (inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 313)) ;
      switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          GGS_lstring var_selector_12090 ;
          switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
            var_selector_12090 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 321)) ;
            var_selector_12090 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 322)) ;
          } break ;
          case 3: {
            var_selector_12090 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 324)) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_typeName_12329 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_12329, inCompiler) ;
          GGS_bool var_isUnused_12358 ;
          switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
            var_isUnused_12358 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 331)) ;
            var_isUnused_12358 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_argumentName_12517 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 334)) ;
          var_filewrapperTemplateFormalInputParameters_11973.addAssignOperation (var_selector_12090, var_typeName_12329, var_argumentName_12517, var_isUnused_12358  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 335)) ;
          if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 337)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
      outArgument_outFilewrapperTemplateList.addAssignOperation (var_mFilewrapperTemplateName_11844, var_mFilewrapperTemplatePath_11901, var_filewrapperTemplateFormalInputParameters_11973  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 346)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 304)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 308)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 309)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 310)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 311)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 313)) ;
      switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 321)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 324)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_parse (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 331)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 334)) ;
          if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 337)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 346)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 304)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 308)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 309)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 310)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 311)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 313)) ;
      switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 321)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 324)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 331)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 334)) ;
          if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 337)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 346)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_6208 ;
  nt_acces_5F_control_ (var_accessControl_6208, inCompiler) ;
  GGS_propertyMutability var_mutability_6250 ;
  switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 162)) ;
    var_mutability_6250 = GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-property.galgas", 163)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 165)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_6208, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 166)) ;
    var_mutability_6250 = GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-property.galgas", 167)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_6483 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_propertyTypeName_6483, inCompiler) ;
  GGS_lstring var_propertyName_6522 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 170)) ;
  GGS_bool var_selectorAttribute_6543 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 174)) ;
      var_selectorAttribute_6543 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_propertyInCollectionInitializationAST var_initialization_6698 ;
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    var_initialization_6698 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas", 179)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 181)) ;
    GGS_semanticExpressionAST var_expression_6811 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_6811, inCompiler) ;
    var_initialization_6698 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_6811  COMMA_SOURCE_FILE ("declaration-property.galgas", 183)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssignOperation (var_mutability_6250, var_propertyTypeName_6483, var_propertyName_6522, var_accessControl_6208, var_selectorAttribute_6543, var_initialization_6698  COMMA_SOURCE_FILE ("declaration-property.galgas", 185)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 162)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 165)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 170)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 174)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 181)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 162)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 165)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 170)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 174)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 181)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_7383 ;
  nt_acces_5F_control_ (var_accessControl_7383, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas", 199)) ;
  switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 201)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 203)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas", 204)), GGS_string ("a weak property is mutable, should be declared with 'var'"), fixItArray0  COMMA_SOURCE_FILE ("declaration-property.galgas", 204)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_7582 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_propertyTypeName_7582, inCompiler) ;
  GGS_lstring var_propertyName_7621 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 207)) ;
  GGS_bool var_selectorAttribute_7642 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_DeclarationsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 211)) ;
      var_selectorAttribute_7642 = GGS_bool (true) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_propertyInCollectionInitializationAST var_initialization_7797 ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    var_initialization_7797 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas", 216)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 218)) ;
    GGS_semanticExpressionAST var_expression_7910 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_7910, inCompiler) ;
    var_initialization_7797 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_7910  COMMA_SOURCE_FILE ("declaration-property.galgas", 220)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyWeakTypeName_7992 = function_makeWeakTypeLName (var_propertyTypeName_7582, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas", 222)) ;
  ioArgument_ioAttributeInCollectionList.addAssignOperation (GGS_propertyMutability::class_func_weakProperty (SOURCE_FILE ("declaration-property.galgas", 228)), var_propertyWeakTypeName_7992, var_propertyName_7621, var_accessControl_7383, var_selectorAttribute_7642, var_initialization_7797  COMMA_SOURCE_FILE ("declaration-property.galgas", 227)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas", 199)) ;
  switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 201)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 203)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 207)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 211)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 218)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas", 199)) ;
  switch (select_galgas_34_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas", 201)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas", 203)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas", 207)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas", 211)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas", 218)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                     GGS_lstring & outArgument_outTypeName,
                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 207)) ;
      GGS_lstring var_typeName_8327 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_8327, inCompiler) ;
      outArgument_outTypeName = function_makeEmbeddedTypeLName (outArgument_outTypeName, var_typeName_8327, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 209)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 211)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_t_8498 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_t_8498, inCompiler) ;
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_t_8498.readProperty_location (), GGS_string ("not handled yet"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 214)) ;
        if (select_galgas_34_DeclarationsSyntax_17 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 216)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 218)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 223)) ;
    GGS_lstring var_unwrappedTypeName_8645 = outArgument_outTypeName ;
    {
    extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, outArgument_outTypeName, var_unwrappedTypeName_8645, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 225)) ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 207)) ;
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 211)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_type_5F_definition_parse (inCompiler) ;
        if (select_galgas_34_DeclarationsSyntax_17 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 216)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 218)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 223)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 207)) ;
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 211)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_type_5F_definition_indexing (inCompiler) ;
        if (select_galgas_34_DeclarationsSyntax_17 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 216)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 218)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 223)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i9_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                               GGS_lstring & outArgument_outTypeName,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 233)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 233)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 233)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 240)) ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
    GGS_lstring var_elementTypeName_9381 = outArgument_outTypeName ;
    outArgument_outTypeName = function_makeArrayTypeLName (var_elementTypeName_9381, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 244)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outTypeName.readProperty_string () COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 245)).operator_not (SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 245)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 246)) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21__21__21_isUsefull_21_equatable (GGS_bool (false), outArgument_outTypeName, var_elementTypeName_9381, GGS_bool (true), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 247)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 256)) ;
    GGS_lstring joker_9919 ; // Joker input parameter
    nt_type_5F_definition_ (ioArgument_ioDeclarations, joker_9919, inCompiler) ;
    joker_9919.drop () ; // Release temporary input variables (joker in source)
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 258)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 258)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 260)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 240)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 256)) ;
    nt_type_5F_definition_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 260)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 240)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 256)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 260)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 271)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 273)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 273)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_parse (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 271)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 274)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 271)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 69)) ;
  GGS_lstring var_boolsetTypeName_2730 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 70)) ;
  GGS_bool var_isEquatable_2786 ;
  switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
  case 1: {
    var_isEquatable_2786 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 75)) ;
    var_isEquatable_2786 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 78)) ;
  GGS_lstringlist var_slotList_2923 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 82)) ;
      GGS_lstring var_slotName_2996 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 83)) ;
      var_slotList_2923.addAssignOperation (var_slotName_2996  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 84)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_boolsetTypeName_2730, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 88)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_slotList_2923.getter_count (SOURCE_FILE ("declaration-type-boolset.galgas", 89)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_boolsetTypeName_2730.readProperty_location (), GGS_string ("a boolset type must define at least one case constant"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 90)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_boolsetDeclarationAST::init_21_isPredefined_21__21__21_isEquatable (GGS_bool (false), var_boolsetTypeName_2730, var_slotList_2923, var_isEquatable_2786, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 92)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 69)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 70)) ;
  switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 82)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 83)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 88)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 69)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 70)) ;
  switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 82)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 83)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  GGS_bool var_isAbstract_3925 ;
  GGS_bool var_clonable_3950 ;
  GGS_bool var_finalClass_3973 ;
  switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    var_isAbstract_3925 = GGS_bool (false) ;
    var_clonable_3950 = GGS_bool (false) ;
    var_finalClass_3973 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas", 127)) ;
    var_isAbstract_3925 = GGS_bool (true) ;
    var_clonable_3950 = GGS_bool (false) ;
    var_finalClass_3973 = GGS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas", 132)) ;
    var_isAbstract_3925 = GGS_bool (false) ;
    var_clonable_3950 = GGS_bool (false) ;
    var_finalClass_3973 = GGS_bool (true) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas", 137)) ;
    var_isAbstract_3925 = GGS_bool (false) ;
    var_clonable_3950 = GGS_bool (true) ;
    var_finalClass_3973 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas", 142)) ;
  GGS_lstring var_className_4400 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 143)) ;
  GGS_lstring var_superClassName_4452 ;
  switch (select_galgas_34_DeclarationsSyntax_24 (inCompiler)) {
  case 1: {
    var_superClassName_4452 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas", 146)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 148)) ;
    var_superClassName_4452 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_generateInSeparateFile_4648 ;
  switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_4648 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas", 155)) ;
    var_generateInSeparateFile_4648 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 158)) ;
  GGS_propertyInCollectionListAST var_propertyList_4873 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_4873, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_className_4400, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 167)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_classDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_isAbstract_3925, GGS_bool (true), var_finalClass_3973, var_className_4400, var_superClassName_4452, var_generateInSeparateFile_4648, var_propertyList_4873, var_clonable_3950, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 168)) ;
  GGS_lstring temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_superClassName_4452.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = var_superClassName_4452 ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = function_makeWeakTypeLName (var_superClassName_4452, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 186)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_weakReferenceDeclarationAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_className_4400, function_makeWeakTypeLName (var_className_4400, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 183)), temp_1, var_generateInSeparateFile_4648, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 180)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas", 127)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas", 132)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas", 137)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas", 142)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 143)) ;
  switch (select_galgas_34_DeclarationsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 148)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 158)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 167)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas", 127)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas", 132)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas", 137)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas", 142)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 143)) ;
  switch (select_galgas_34_DeclarationsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 148)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas", 155)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 158)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas", 167)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 104)) ;
  GGS_lstring var_enumTypeName_3795 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 105)) ;
  GGS_structComparison var_comparison_3858 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas", 106)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 109)) ;
      switch (var_comparison_3858.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_3858 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas", 112)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 114)), GGS_string ("duplicated attribute"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 114)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 116)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 116)) ;
        }
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 119)) ;
      switch (var_comparison_3858.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_3858 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas", 122)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 124)), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 124)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 126)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 126)) ;
        }
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 129)) ;
  GGS_enumConstantList var_constantList_4490 = GGS_enumConstantList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 133)) ;
      GGS_lstring var_constantName_4567 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 134)) ;
      GGS__5B_associatedValue_5D_ var_associatedValueTypeList_4609 = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_HERE) ;
      switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 138)) ;
        bool repeatFlag_6 = true ;
        while (repeatFlag_6) {
          GGS_bool var_weakQualifier_4708 ;
          switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
          case 1: {
            var_weakQualifier_4708 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 144)) ;
            var_weakQualifier_4708 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_associatedValueType_4902 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedValueType_4902, inCompiler) ;
          GGS_lstring var_associatedValueName_4950 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 148)) ;
          {
          var_associatedValueTypeList_4609.setter_append (GGS_associatedValue::init_21__21__21_ (var_weakQualifier_4708, var_associatedValueType_4902, var_associatedValueName_4950, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 149)) ;
          }
          if (select_galgas_34_DeclarationsSyntax_30 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 151)) ;
          }else{
            repeatFlag_6 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 153)) ;
      } break ;
      default:
        break ;
      }
      var_constantList_4490.addAssignOperation (var_constantName_4567, var_associatedValueTypeList_4609  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 155)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_enumTypeName_3795, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 159)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, var_constantList_4490.getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (var_enumTypeName_3795.readProperty_location (), GGS_string ("an enumerated type must define at least one case constant"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 161)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_enumDeclarationAST::init_21_isPredefined_21__21__21_comparison (GGS_bool (false), var_enumTypeName_3795, var_constantList_4490, var_comparison_3858, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 163)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 104)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 109)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 119)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 129)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 134)) ;
      switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 138)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 144)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_parse (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 148)) ;
          if (select_galgas_34_DeclarationsSyntax_30 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 151)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 153)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 159)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 104)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 109)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 119)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 129)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 134)) ;
      switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 138)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 144)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 148)) ;
          if (select_galgas_34_DeclarationsSyntax_30 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 151)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 153)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 159)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 165)) ;
  GGS_lstring var_externTypeName_6679 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 166)) ;
  GGS_string var_cppPredeclarationCode_6765 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_6765, inCompiler) ;
  GGS_string var_cppClassCode_6830 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_6830, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 169)) ;
  GGS_externTypeConstructorList var_externTypeConstructorList_6886 = GGS_externTypeConstructorList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeGetterList var_externTypeGetterList_6948 = GGS_externTypeGetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeSetterList var_externTypeSetterList_7005 = GGS_externTypeSetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeMethodList var_externTypeMethodList_7062 = GGS_externTypeMethodList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (ioArgument_ioDeclarations, var_externTypeConstructorList_6886, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (ioArgument_ioDeclarations, var_externTypeGetterList_6948, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (ioArgument_ioDeclarations, var_externTypeSetterList_7005, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (ioArgument_ioDeclarations, var_externTypeMethodList_7062, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 184)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externTypeDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_externTypeName_6679, var_cppPredeclarationCode_6765, var_cppClassCode_6830, var_externTypeConstructorList_6886, var_externTypeGetterList_6948, var_externTypeSetterList_7005, var_externTypeMethodList_7062, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 185)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 165)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 166)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 184)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 165)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 166)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 184)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i16_ (GGS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 200)) ;
  outArgument_outCppPredeclarationCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_33 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_8017 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 204)) ;
      outArgument_outCppPredeclarationCode.plusAssignOperation(var_cppPredeclarationCodeElement_8017.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 205)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 204)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 207)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 204)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 207)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i17_ (GGS_string & outArgument_outCppClassCode,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 213)) ;
  outArgument_outCppClassCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_8392 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 217)) ;
      outArgument_outCppClassCode.plusAssignOperation(var_cppPredeclarationCodeElement_8392.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 218)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 220)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i17_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 213)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 217)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 220)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 213)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 217)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 220)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 228)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_8827 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
      case 1: {
        GGS_lstring var_selector_8924 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 234)) ;
        GGS_lstring var_argumentTypeName_8983 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_8983, inCompiler) ;
        GGS_lstring var_argumentName_9028 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 236)) ;
        var_argumentTypeList_8827.addAssignOperation (var_selector_8924, var_argumentTypeName_8983, var_argumentName_9028  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 237)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 239)) ;
        GGS_lstring var_selector_9152 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 240)) ;
        GGS_lstring var_argumentTypeName_9223 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_9223, inCompiler) ;
        GGS_lstring var_argumentName_9268 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 242)) ;
        var_argumentTypeList_8827.addAssignOperation (var_selector_9152, var_argumentTypeName_9223, var_argumentName_9268  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 243)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_36 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 246)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 249)) ;
  ioArgument_ioExternTypeConstructorList.addAssignOperation (var_argumentTypeList_8827  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 250)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i18_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 228)) ;
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 234)) ;
        nt_type_5F_definition_parse (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 236)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 239)) ;
        nt_type_5F_definition_parse (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 242)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_36 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 246)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 249)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 227)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 228)) ;
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 234)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 236)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 239)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 242)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_36 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 246)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 249)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 257)) ;
  GGS_lstring var_getterName_9759 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 258)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_9811 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_9879 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 262)) ;
      GGS_lstring var_argumentTypeName_9934 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_9934, inCompiler) ;
      GGS_lstring var_argumentName_9984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 264)) ;
      var_argumentTypeList_9811.addAssignOperation (var_selector_9879, var_argumentTypeName_9934, var_argumentName_9984  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 265)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 267)) ;
      GGS_lstring var_selector_10095 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 268)) ;
      GGS_lstring var_argumentTypeName_10162 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_10162, inCompiler) ;
      GGS_lstring var_argumentName_10212 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 270)) ;
      var_argumentTypeList_9811.addAssignOperation (var_selector_10095, var_argumentTypeName_10162, var_argumentName_10212  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 271)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 273)) ;
  GGS_lstring var_resultTypeName_10354 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_10354, inCompiler) ;
  ioArgument_ioExternTypeGetterList.addAssignOperation (var_getterName_9759, var_resultTypeName_10354, var_argumentTypeList_9811  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 275)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i19_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 258)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 262)) ;
      nt_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 264)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 267)) ;
      nt_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 270)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 273)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 258)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 262)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 264)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 267)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 270)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 273)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 282)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 283)) ;
  GGS_lstring var_setterName_10756 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 284)) ;
  GGS_formalParameterListAST var_formalParameterList_10841 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_10841, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssignOperation (var_setterName_10756, var_formalParameterList_10841  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 286)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i20_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 282)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 283)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 284)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 282)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 283)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 284)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 293)) ;
  GGS_lstring var_methodName_11215 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 294)) ;
  GGS_formalParameterListAST var_formalParameterList_11300 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_11300, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssignOperation (var_methodName_11215, var_formalParameterList_11300, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 296))  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 296)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i21_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 294)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 294)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 63)) ;
  GGS_lstring var_graphTypeName_2638 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 65)) ;
  GGS_lstring var_associatedListTypeName_2729 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedListTypeName_2729, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 68)) ;
  GGS_graphInsertModifierList var_graphInsertModifierList_2776 = GGS_graphInsertModifierList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 72)) ;
      GGS_lstring var_insertName_2906 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 74)) ;
      GGS_lstring var_errorMessage_2970 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 75)) ;
      var_graphInsertModifierList_2776.addAssignOperation (var_insertName_2906, var_errorMessage_2970  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 76)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 78)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_graphDeclarationAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_graphTypeName_2638, var_associatedListTypeName_2729, var_graphInsertModifierList_2776, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 63)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 65)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 78)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 63)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 65)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas", 88)) ;
  GGS_lstring var_listTypeName_3456 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas", 89)) ;
  GGS_bool var_isUsefull_3530 = GGS_bool (false) ;
  GGS_bool var_isEquatable_3556 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas", 94)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isEquatable_3556.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 96)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 96)) ;
        }
      }
      var_isEquatable_3556 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas", 100)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_3530.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 102)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 102)) ;
        }
      }
      var_isUsefull_3530 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 106)) ;
  GGS_propertyInCollectionListAST var_propertyList_3936 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_3936, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_listTypeName_3456, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 114)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (false), var_listTypeName_3456, var_propertyList_3936, var_isUsefull_3530, var_isEquatable_3556, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i23_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas", 88)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 106)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 114)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas", 88)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 106)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 86)) ;
  GGS_lstring var_mDictTypeName_3413 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 88)) ;
  GGS_bool var_equatable_3493 ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    var_equatable_3493 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 93)) ;
    var_equatable_3493 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 96)) ;
  GGS_lstring var_keyTypeName_3647 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_keyTypeName_3647, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 99)) ;
  GGS_propertyInCollectionListAST var_propertyList_3698 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_3698, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_mDictTypeName_3413, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 107)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_dictDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_mDictTypeName_3413, var_keyTypeName_3647, var_propertyList_3698, var_equatable_3493, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i24_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 86)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 88)) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 93)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 96)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 107)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 86)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 88)) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 93)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 96)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas", 160)) ;
  GGS_lstring var_mapTypeName_6003 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas", 161)) ;
  GGS_bool var_isEquatable_6081 ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    var_isEquatable_6081 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas", 166)) ;
    var_isEquatable_6081 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 169)) ;
  GGS_propertyInCollectionListAST var_propertyList_6205 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertSetterListAST var_mInsertSetterList_6260 = GGS_insertSetterListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mSearchMethodList_6332 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mRemoveSetterList_6384 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_replaceMethodList_6436 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_6503 = GGS_insertOrReplaceDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_searchSubscriptListAST_6571 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_6205, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertSetterList_6260, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_ (var_mSearchMethodList_6332, inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subscript_5F_declaration_ (var_searchSubscriptListAST_6571, inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_ (var_mRemoveSetterList_6384, inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_ (var_replaceMethodList_6436, inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_6503, inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_ (var_mapTypeName_6003, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 195)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_mapDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (GGS_bool (false), var_mapTypeName_6003, var_propertyList_6205, var_mInsertSetterList_6260, var_mSearchMethodList_6332, var_searchSubscriptListAST_6571, var_mRemoveSetterList_6384, var_replaceMethodList_6436, var_insertOrReplaceDeclarationListAST_6503, var_isEquatable_6081, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 196)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i25_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas", 160)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas", 161)) ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas", 166)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
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
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 195)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas", 160)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas", 161)) ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas", 166)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
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
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 195)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i26_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("declaration-type-map.galgas", 213)) ;
  GGS_lstring var_methodName_7781 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 214)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 215)) ;
  GGS_lstring var_errorMessage_7841 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 216)) ;
  ioArgument_ioMapSearchMethodListAST.addAssignOperation (var_methodName_7781, var_errorMessage_7841  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 217)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i26_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("declaration-type-map.galgas", 213)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 214)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 215)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 216)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("declaration-type-map.galgas", 213)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 214)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 215)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 216)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i27_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchSubscriptListAST,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas", 223)) ;
  GGS_lstring var_methodName_8185 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 225)) ;
  GGS_lstring var_errorMessage_8245 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 226)) ;
  ioArgument_ioMapSearchSubscriptListAST.addAssignOperation (var_methodName_8185, var_errorMessage_8245  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 227)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i27_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas", 223)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 225)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 226)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas", 223)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 225)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 226)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i28_ (GGS_mapAccessorListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 233)) ;
  GGS_lstring var_mMethodName_8583 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 235)) ;
  GGS_lstring var_mErrorMessage_8644 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 236)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssignOperation (var_mMethodName_8583, var_mErrorMessage_8644  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 237)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i28_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 233)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 236)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 233)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 236)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i29_ (GGS_mapAccessorListAST & ioArgument_ioMapReplaceMethodListAST,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 243)) ;
  GGS_lstring var_mMethodName_8963 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 245)) ;
  GGS_lstring var_mErrorMessage_9024 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 246)) ;
  ioArgument_ioMapReplaceMethodListAST.addAssignOperation (var_mMethodName_8963, var_mErrorMessage_9024  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 247)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i29_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 243)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 245)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 246)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 243)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 245)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 246)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i30_ (GGS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 253)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssignOperation (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 254))  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 254)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i30_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 253)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 253)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i31_ (GGS_insertSetterListAST & ioArgument_ioMapMethodList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 260)) ;
  GGS_lstring var_mMethodName_9646 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 261)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 262)) ;
  GGS_lstring var_mErrorMessage_9707 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 263)) ;
  GGS_lstring var_mShadowErrorMessage_9738 ;
  switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_9738 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 266)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 268)) ;
    var_mShadowErrorMessage_9738 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 269)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssignOperation (var_mMethodName_9646, var_mErrorMessage_9707, var_mShadowErrorMessage_9738  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 271)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i31_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 260)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 261)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 262)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 263)) ;
  switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 268)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 269)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas", 260)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas", 261)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas", 262)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 263)) ;
  switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 268)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas", 269)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 86)) ;
  GGS_lstring var_sortedListTypeName_3232 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 87)) ;
  GGS_bool var_isEquatable_3324 ;
  switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    var_isEquatable_3324 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 92)) ;
    var_isEquatable_3324 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 95)) ;
  GGS_propertyInCollectionListAST var_attributeList_3477 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_48 (inCompiler) == 2) {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_attributeList_3477, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 102)) ;
  GGS_sortedListSortDescriptorListAST var_sortDescriptorList_3646 = GGS_sortedListSortDescriptorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_3646, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_49 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 107)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 109)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_sortedListDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_sortedListTypeName_3232, var_attributeList_3477, var_sortDescriptorList_3646, var_isEquatable_3324, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 110)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 86)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 87)) ;
  switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 92)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_48 (inCompiler) == 2) {
      nt_property_5F_declaration_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 102)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_49 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 107)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 109)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 86)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 87)) ;
  switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 92)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_48 (inCompiler) == 2) {
      nt_property_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 102)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_49 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 107)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_ (GGS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mSortedAttributeName_4242 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 122)) ;
  GGS_bool var_mAscending_4277 ;
  switch (select_galgas_34_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 125)) ;
    var_mAscending_4277 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 128)) ;
    var_mAscending_4277 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssignOperation (var_mSortedAttributeName_4242, var_mAscending_4277  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 122)) ;
  switch (select_galgas_34_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 122)) ;
  switch (select_galgas_34_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 67)) ;
  GGS_lstring var_structTypeName_2637 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 68)) ;
  GGS_structComparison var_comparison_2704 ;
  switch (select_galgas_34_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    var_comparison_2704 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-struct.galgas", 71)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 73)) ;
    var_comparison_2704 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas", 74)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 76)) ;
    var_comparison_2704 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 79)) ;
  GGS_propertyInCollectionListAST var_propertyList_2918 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_52 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_2918, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_structTypeName_2637, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 87)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_structTypeName_2637, var_propertyList_2918, GGS_string::makeEmptyString (), var_comparison_2704, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i34_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 67)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 68)) ;
  switch (select_galgas_34_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 73)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_52 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 87)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 67)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 68)) ;
  switch (select_galgas_34_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 73)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_52 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 94)) ;
  GGS_lstring var_typeName_3785 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3785, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_53 (inCompiler) == 2) {
      GGS_lstring var_t_3876 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3876, inCompiler) ;
      var_typeName_3785 = function_makeEmbeddedTypeLName (var_typeName_3785, var_t_3876, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 100)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 101)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mGetterName_3986 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 103)) ;
  GGS_formalInputParameterListAST var_mFormalInputParameterList_4126 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_4126, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)) ;
  GGS_lstring var_returnedTypeName_4205 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4205, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_3785, var_mGetterName_3986, var_mFormalInputParameterList_4126, var_returnedTypeName_4205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 94)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_53 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 101)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 103)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 94)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_53 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 101)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 103)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i36_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)) ;
  GGS_lstring var_mGetterName_4715 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)) ;
  GGS_formalInputParameterListAST var_mFormalInputParameterList_4855 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_4855, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)) ;
  GGS_lstring var_returnedTypeName_4934 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4934, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_mGetterName_4715, var_mFormalInputParameterList_4855, var_returnedTypeName_4934, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i36_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 80)) ;
  GGS_lstring var_typeName_3335 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3335, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_54 (inCompiler) == 2) {
      GGS_lstring var_t_3426 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3426, inCompiler) ;
      var_typeName_3335 = function_makeEmbeddedTypeLName (var_typeName_3335, var_t_3426, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 86)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 87)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mMethodName_3545 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 89)) ;
  GGS_formalParameterListAST var_formalParameterList_3674 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3674, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_3335, var_mMethodName_3545, var_formalParameterList_3674, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 91)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 80)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_54 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 87)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 89)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 80)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_54 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 87)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 89)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i38_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 104)) ;
  GGS_lstring var_methodName_4166 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)) ;
  GGS_formalParameterListAST var_formalParameterList_4294 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4294, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_4166, var_formalParameterList_4294, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i38_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 104)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 104)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 54)) ;
  GGS_lstring var_typeName_2303 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_2303, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 56)) ;
  GGS_equatableComparableExtension var_theExtension_2358 ;
  switch (select_galgas_34_DeclarationsSyntax_55 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 59)) ;
    var_theExtension_2358 = GGS_equatableComparableExtension::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 62)) ;
    var_theExtension_2358 = GGS_equatableComparableExtension::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_equatableExtensionAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_typeName_2303, var_theExtension_2358, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i39_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 54)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 56)) ;
  switch (select_galgas_34_DeclarationsSyntax_55 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 59)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 54)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 56)) ;
  switch (select_galgas_34_DeclarationsSyntax_55 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 59)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 114)) ;
  GGS_lstring var_typeName_4703 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4703, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_56 (inCompiler) == 2) {
      GGS_lstring var_t_4794 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4794, inCompiler) ;
      var_typeName_4703 = function_makeEmbeddedTypeLName (var_typeName_4703, var_t_4794, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 121)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_4913 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 123)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_5015 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_5015, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 125)) ;
  GGS_lstring var_returnedTypeName_5093 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5093, inCompiler) ;
  GGS_lstring var_resultVariableName_5127 ;
  switch (select_galgas_34_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
    var_resultVariableName_5127 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 129)) ;
  } break ;
  case 2: {
    var_resultVariableName_5127 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 131)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 133)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5348 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5348, inCompiler) ;
  GGS_location var_endOfInstructionList_5389 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 136)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), var_typeName_4703, var_getterName_4913, var_formalInputParameterList_5015, var_returnedTypeName_5093, var_resultVariableName_5127, var_routineInstructionList_5348, var_endOfInstructionList_5389, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 137)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 114)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_56 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 121)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 123)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 125)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 129)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 133)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 136)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 114)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_56 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 121)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 123)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 125)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 129)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 133)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 136)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 154)) ;
  GGS_lstring var_typeName_6019 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_58 (inCompiler) == 2) {
      GGS_lstring var_t_6115 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_6115, inCompiler) ;
      var_typeName_6019 = function_makeEmbeddedTypeLName (var_typeName_6019, var_t_6115, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 159)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_6234 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 162)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_6336 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_6336, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 164)) ;
  GGS_lstring var_returnedTypeName_6414 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_6414, inCompiler) ;
  GGS_lstring var_resultVariableName_6448 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 166)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 167)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_6579 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_6579, inCompiler) ;
  GGS_location var_endOfInstructionList_6620 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 169)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 170)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), var_typeName_6019, var_getterName_6234, var_formalInputParameterList_6336, var_returnedTypeName_6414, var_resultVariableName_6448, var_routineInstructionList_6579, var_endOfInstructionList_6620, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 171)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 154)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_58 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 162)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 164)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 167)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 170)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas", 154)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_58 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 160)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 162)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 164)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 167)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 170)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 90)) ;
  GGS_lstring var_typeName_3802 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3802, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 92)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_59 (inCompiler) == 2) {
      GGS_lstring var_t_3893 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3893, inCompiler) ;
      var_typeName_3802 = function_makeEmbeddedTypeLName (var_typeName_3802, var_t_3893, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 96)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 97)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_4012 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 99)) ;
  GGS_formalParameterListAST var_formalParameterList_4132 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4132, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 101)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4242 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4242, inCompiler) ;
  GGS_location var_endOfMethodLocation_4273 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 104)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), var_typeName_3802, var_methodName_4012, var_formalParameterList_4132, var_routineInstructionList_4242, var_endOfMethodLocation_4273, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i42_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 90)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 92)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_59 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 97)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 99)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 101)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 104)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 90)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 92)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_59 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas", 97)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 99)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 101)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 120)) ;
  GGS_lstring var_methodName_4869 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 121)) ;
  GGS_formalParameterListAST var_formalParameterList_4989 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4989, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 123)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5099 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5099, inCompiler) ;
  GGS_location var_endOfMethodLocation_5130 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 125)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 126)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), constinArgument_inTypeName, var_methodName_4869, var_formalParameterList_4989, var_routineInstructionList_5099, var_endOfMethodLocation_5130, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 127)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 120)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 121)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 123)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 126)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas", 120)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 121)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 123)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 105)) ;
  GGS_lstring var_typeName_4492 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4492, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 107)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_60 (inCompiler) == 2) {
      GGS_lstring var_t_4583 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4583, inCompiler) ;
      var_typeName_4492 = function_makeEmbeddedTypeLName (var_typeName_4492, var_t_4583, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 111)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 112)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_4702 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 114)) ;
  GGS_formalParameterListAST var_formalParameterList_4822 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4822, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 116)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4932 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4932, inCompiler) ;
  GGS_location var_endOfSetterLocation_4973 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 119)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), var_typeName_4492, var_setterName_4702, var_formalParameterList_4822, var_routineInstructionList_4932, var_endOfSetterLocation_4973, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 120)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i44_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 105)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 107)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_60 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 112)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 114)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 116)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 119)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 105)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 107)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_60 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas", 112)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 114)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 116)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 136)) ;
  GGS_lstring var_setterName_5584 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 137)) ;
  GGS_formalParameterListAST var_formalParameterList_5704 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_5704, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 139)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5814 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5814, inCompiler) ;
  GGS_location var_endOfSetterLocation_5855 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 142)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), constinArgument_inTypeName, var_setterName_5584, var_formalParameterList_5704, var_routineInstructionList_5814, var_endOfSetterLocation_5855, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 136)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 137)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 139)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 142)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas", 136)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 137)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 139)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 142)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas", 79)) ;
  GGS_lstring var_typeName_3255 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3255, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 81)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_61 (inCompiler) == 2) {
      GGS_lstring var_t_3346 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3346, inCompiler) ;
      var_typeName_3255 = function_makeEmbeddedTypeLName (var_typeName_3255, var_t_3346, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 88)) ;
  GGS_location var_initLocation_3453 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 89)) ;
  GGS_formalInputParameterListAST var_formalParameterList_3539 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3539, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 91)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3621 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3621, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 93)) ;
  GGS_location var_endOfMethodLocation_3660 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 94)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), GGS_lstring::init_21__21_ (var_typeName_3255.readProperty_string (), var_initLocation_3453, inCompiler COMMA_HERE), var_formalParameterList_3539, var_routineInstructionList_3621, var_endOfMethodLocation_3660, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas", 79)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 81)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_61 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 88)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 91)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas", 79)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 81)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_61 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 88)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 91)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 108)) ;
  GGS_location var_initLocation_4183 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 109)) ;
  GGS_formalInputParameterListAST var_formalParameterList_4269 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4269, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 111)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4351 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4351, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 113)) ;
  GGS_location var_endOfMethodLocation_4390 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 114)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), GGS_lstring::init_21__21_ (constinArgument_inTypeName.readProperty_string (), var_initLocation_4183, inCompiler COMMA_HERE), var_formalParameterList_4269, var_routineInstructionList_4351, var_endOfMethodLocation_4390, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 108)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 111)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 113)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 108)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 111)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 113)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 110)) ;
  GGS_lstring var_typeName_4453 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4453, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_62 (inCompiler) == 2) {
      GGS_lstring var_t_4544 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4544, inCompiler) ;
      var_typeName_4453 = function_makeEmbeddedTypeLName (var_typeName_4453, var_t_4544, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 116)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_4654 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_4801 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_4801, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 121)) ;
  GGS_lstring var_returnedTypeName_4879 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4879, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_4453, var_getterName_4654, var_formalInputParameterList_4801, var_returnedTypeName_4879, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 123)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 110)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_62 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 121)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 110)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_62 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 121)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i49_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 138)) ;
  GGS_lstring var_getterName_5412 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 139)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_5559 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_5559, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 141)) ;
  GGS_lstring var_returnedTypeName_5637 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5637, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_getterName_5412, var_formalInputParameterList_5559, var_returnedTypeName_5637, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i49_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 138)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 139)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 141)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i49_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 138)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 139)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 141)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 86)) ;
  GGS_lstring var_typeName_3714 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3714, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 88)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_63 (inCompiler) == 2) {
      GGS_lstring var_t_3805 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3805, inCompiler) ;
      var_typeName_3714 = function_makeEmbeddedTypeLName (var_typeName_3714, var_t_3805, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_3924 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)) ;
  GGS_formalParameterListAST var_formalParameterList_4059 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4059, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_3714, var_methodName_3924, var_formalParameterList_4059, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 97)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 86)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 88)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_63 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 86)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 88)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_63 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i51_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 111)) ;
  GGS_lstring var_typeName_4552 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_64 (inCompiler) == 2) {
      GGS_lstring var_t_4648 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4648, inCompiler) ;
      var_typeName_4552 = function_makeEmbeddedTypeLName (var_typeName_4552, var_t_4648, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 116)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_4767 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)) ;
  GGS_formalParameterListAST var_formalParameterList_4903 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4903, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_4552, var_methodName_4767, var_formalParameterList_4903, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 121)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i51_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_64 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i51_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 109)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 110)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_64 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i52_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 139)) ;
  GGS_lstring var_typeName_5700 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_5700, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 141)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_65 (inCompiler) == 2) {
      GGS_lstring var_t_5791 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_5791, inCompiler) ;
      var_typeName_5700 = function_makeEmbeddedTypeLName (var_typeName_5700, var_t_5791, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 145)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_5910 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 148)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_6020 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_6020, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  GGS_lstring var_returnedTypeName_6098 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_6098, inCompiler) ;
  GGS_lstring var_resultVariableName_6132 ;
  switch (select_galgas_34_DeclarationsSyntax_66 (inCompiler)) {
  case 1: {
    var_resultVariableName_6132 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)) ;
  } break ;
  case 2: {
    var_resultVariableName_6132 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 156)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 158)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_6353 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_6353, inCompiler) ;
  GGS_location var_endOfInstructionList_6394 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 161)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), var_typeName_5700, var_getterName_5910, var_formalInputParameterList_6020, var_returnedTypeName_6098, var_resultVariableName_6132, var_routineInstructionList_6353, var_endOfInstructionList_6394, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 162)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i52_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 139)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 141)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_65 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 148)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_66 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 158)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 161)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i52_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 139)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 141)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_65 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 146)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 148)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_66 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 158)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i53_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 180)) ;
  GGS_lstring var_getterName_7042 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 181)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_7152 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_7152, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 183)) ;
  GGS_lstring var_returnedTypeName_7230 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_7230, inCompiler) ;
  GGS_lstring var_resultVariableName_7264 ;
  switch (select_galgas_34_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
    var_resultVariableName_7264 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 187)) ;
  } break ;
  case 2: {
    var_resultVariableName_7264 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 189)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 191)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_7485 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_7485, inCompiler) ;
  GGS_location var_endOfInstructionList_7526 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 193)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 194)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), constinArgument_inTypeName, var_getterName_7042, var_formalInputParameterList_7152, var_returnedTypeName_7230, var_resultVariableName_7264, var_routineInstructionList_7485, var_endOfInstructionList_7526, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 195)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i53_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 180)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 181)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 183)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 187)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 191)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 194)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i53_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 180)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 181)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 183)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 187)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 191)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 194)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i54_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 94)) ;
  GGS_lstring var_typeName_3982 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3982, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_68 (inCompiler) == 2) {
      GGS_lstring var_t_4073 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4073, inCompiler) ;
      var_typeName_3982 = function_makeEmbeddedTypeLName (var_typeName_3982, var_t_4073, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 100)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 101)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_4192 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 103)) ;
  GGS_formalParameterListAST var_formalParameterList_4320 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4320, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4430 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4430, inCompiler) ;
  GGS_location var_endOfMethodLocation_4471 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 108)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), var_typeName_3982, var_methodName_4192, var_formalParameterList_4320, var_routineInstructionList_4430, var_endOfMethodLocation_4471, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i54_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 94)) ;
  nt_simple_5F_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_68 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 101)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 103)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 108)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i54_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 94)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_68 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 101)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 103)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i55_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 125)) ;
  GGS_lstring var_methodName_5071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 126)) ;
  GGS_formalParameterListAST var_formalParameterList_5199 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_5199, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 128)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5309 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5309, inCompiler) ;
  GGS_location var_endOfMethodLocation_5350 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 130)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), constinArgument_inTypeName, var_methodName_5071, var_formalParameterList_5199, var_routineInstructionList_5309, var_endOfMethodLocation_5350, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 132)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i55_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 125)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 126)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 128)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i55_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 125)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 126)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 128)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i56_ (GGS_AccessControlAST & outArgument_outAccessControl,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_34_DeclarationsSyntax_69 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 89)) ;
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 90)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_70 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedAccess (SOURCE_FILE ("accessControl.galgas", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 96)) ;
      GGS_lstring var_value_3339 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 97)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::notEqual, var_value_3339.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_3339.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 99)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 101)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedSetAccess (SOURCE_FILE ("accessControl.galgas", 102)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 105)) ;
    switch (select_galgas_34_DeclarationsSyntax_71 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateAccess (SOURCE_FILE ("accessControl.galgas", 107)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 109)) ;
      GGS_lstring var_value_3651 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 110)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_value_3651.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_3651.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 112)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 114)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateSetAccess (SOURCE_FILE ("accessControl.galgas", 115)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 118)) ;
    switch (select_galgas_34_DeclarationsSyntax_72 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 120))  COMMA_SOURCE_FILE ("accessControl.galgas", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 122)) ;
      GGS_lstring var_value_4002 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 123)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 124))  COMMA_SOURCE_FILE ("accessControl.galgas", 124)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, var_value_4002.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_4002.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 126)) ;
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
  switch (select_galgas_34_DeclarationsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 89)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_70 (inCompiler)) {
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
    switch (select_galgas_34_DeclarationsSyntax_71 (inCompiler)) {
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
    switch (select_galgas_34_DeclarationsSyntax_72 (inCompiler)) {
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
  switch (select_galgas_34_DeclarationsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 89)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_70 (inCompiler)) {
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
    switch (select_galgas_34_DeclarationsSyntax_71 (inCompiler)) {
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
    switch (select_galgas_34_DeclarationsSyntax_72 (inCompiler)) {
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



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 454)) ;
  GGS_lstring var_lexiqueComponentName_16767 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 457)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_16857 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_16921 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_16984 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_17040 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_17099 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_17171 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_17246 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_17307 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_17354 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_16857, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_16921, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_16984, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_ (var_lexicalStyleList_17040, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_17099, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_17246, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_17307, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_17307, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_17171, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_17354, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_16767, GGS_bool (false), var_templateDelimitorList_16857, var_templateReplacementList_16921, var_lexicalAttributeList_16984, var_lexicalStyleList_17040, var_terminalDeclarationList_17099, var_lexicalMessageDeclarationList_17171, var_lexicalListDeclarationList_17246, var_lexicalRuleList_17307, var_indexingListAST_17354, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 491)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 454)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 457)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_parse (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_parse (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 454)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 457)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GGS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  GGS_lstring var_indexName_18721 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  GGS_lstring var_indexComment_18800 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 513)) ;
  ioArgument_ioIndexingListAST.addAssignOperation (var_indexName_18721, var_indexComment_18800  COMMA_SOURCE_FILE ("lexique-component.galgas", 514)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 513)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 513)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GGS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  GGS_lstring var_messageName_19132 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
  GGS_lstring var_messageValue_19181 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 524)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssignOperation (var_messageName_19132, var_messageValue_19181  COMMA_SOURCE_FILE ("lexique-component.galgas", 525)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 524)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 524)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 532)) ;
  GGS_lstring var_listName_19501 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 533)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssignOperation (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_19501, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 534)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 532)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 533)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 532)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 533)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 540)) ;
  GGS_lexicalExpressionAST var_lexicalRuleExpression_19831 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_19831, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  GGS_lexicalInstructionListAST var_instructionList_19896 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_19896, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 548)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssignOperation (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_19831, var_instructionList_19896, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 549)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 540)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 548)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 540)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 548)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 555)) ;
  GGS_lexicalInstructionAST var_instruction_20356 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_20356, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_instruction_20356  COMMA_SOURCE_FILE ("lexique-component.galgas", 557)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 555)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 555)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GGS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 563)) ;
  GGS_lexicalExpressionAST var_whileExpression_20662 ;
  nt_lexical_5F_expression_ (var_whileExpression_20662, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 565)) ;
  GGS_lexicalInstructionListAST var_whileInstructionList_20721 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_20721, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssignOperation (var_whileExpression_20662, var_whileInstructionList_20721  COMMA_SOURCE_FILE ("lexique-component.galgas", 571)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 563)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 565)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 563)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 565)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lchar var_character_21146 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 577)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_21146, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 577)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 577)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lbigint var_unsignedValue_21474 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 584)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_21474, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 584)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 584)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_location var_currentLocation_21795 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 591)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 592)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_21795, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 592)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 592)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lstring var_idf_22167 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_22167, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 603)) ;
    GGS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_22321 = GGS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 607)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_22488 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_22488, inCompiler) ;
        var_functionActualArgumentList_22321.addAssignOperation (var_arg_22488  COMMA_SOURCE_FILE ("lexique-component.galgas", 609)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 611)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_22167, var_functionActualArgumentList_22321, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 603)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 607)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 611)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 603)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 607)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 611)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_term_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 628)) ;
      GGS_lexicalExpressionAST var_rightExpression_23131 ;
      nt_lexical_5F_factor_ (var_rightExpression_23131, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_23131, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 628)) ;
      nt_lexical_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 628)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_string_23424 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 637)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_23424, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 637)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 637)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 644)) ;
  GGS_lstring var_string_23682 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
  GGS_lstring var_errorMessage_23723 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 647)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_23682, var_errorMessage_23723, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 647)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 647)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_character_24001 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_24001, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
    GGS_lchar var_upperBound_24128 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 659)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_24001, var_upperBound_24128, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 659)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 659)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_characterSet_24429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_24429, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GGS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  GGS_lstring var_name_24745 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_24787 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_24856 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
      GGS_lstring var_sentAttribute_24889 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
      var_sentAttributeList_24787.addAssignOperation (var_selector_24856, var_sentAttribute_24889  COMMA_SOURCE_FILE ("lexique-component.galgas", 681)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 683)) ;
      GGS_lstring var_selector_24985 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 684)) ;
      GGS_lstring var_sentAttribute_25030 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 685)) ;
      var_sentAttributeList_24787.addAssignOperation (var_selector_24985, var_sentAttribute_25030  COMMA_SOURCE_FILE ("lexique-component.galgas", 686)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_25121 ;
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
    var_theStyle_25121 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 691)) ;
  } break ;
  case 2: {
    var_theStyle_25121 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 693)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  GGS_lstring var_errorMessage_25325 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 697)) ;
  GGS_lexicalListEntryListAST var_entryList_25354 = GGS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_25354, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 704)) ;
  ioArgument_ioLexicalListDeclarationList.addAssignOperation (var_name_24745, var_theStyle_25121, var_errorMessage_25325, var_sentAttributeList_24787, var_entryList_25354  COMMA_SOURCE_FILE ("lexique-component.galgas", 705)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 683)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 685)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 691)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 697)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 704)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 683)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 685)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 691)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 697)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 704)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GGS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_entrySpelling_25792 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 711)) ;
  GGS_bool var_isTemplateEndMark_25814 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_25848 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 716)) ;
      var_isTemplateEndMark_25814 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 719)) ;
      var_nonAtomicSelection_25848 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_26047 ;
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
    var_terminalSpelling_26047 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 725)) ;
  } break ;
  case 2: {
    var_terminalSpelling_26047 = var_entrySpelling_25792 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssignOperation (var_entrySpelling_25792, var_terminalSpelling_26047, var_nonAtomicSelection_25848, var_isTemplateEndMark_25814  COMMA_SOURCE_FILE ("lexique-component.galgas", 729)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 711)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 716)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 719)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 725)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 711)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 716)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 719)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 725)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_ (GGS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_typeName_26571 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  GGS_lstring var_name_26611 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
  ioArgument_ioLexicalAttributeList.addAssignOperation (var_typeName_26571, var_name_26611  COMMA_SOURCE_FILE ("lexique-component.galgas", 741)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GGS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_name_26890 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_26932 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_27029 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
      GGS_lstring var_sentAttribute_27062 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 752)) ;
      var_sentAttributeList_26932.addAssignOperation (var_selector_27029, var_sentAttribute_27062  COMMA_SOURCE_FILE ("lexique-component.galgas", 753)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
      GGS_lstring var_selector_27158 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 756)) ;
      GGS_lstring var_sentAttribute_27203 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 757)) ;
      var_sentAttributeList_26932.addAssignOperation (var_selector_27158, var_sentAttribute_27203  COMMA_SOURCE_FILE ("lexique-component.galgas", 758)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_27294 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas", 760)) ;
  GGS_bool var_nonAtomicSelection_27353 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_27388 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 765)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_27294.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 767)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 767)) ;
        }
      }
      var_theStyle_27294 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 771)) ;
      var_nonAtomicSelection_27353 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 774)) ;
      var_templateEndMark_27388 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
  GGS_lstring var_errorMessage_27774 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 778)) ;
  ioArgument_ioTerminalDeclarationList.addAssignOperation (var_name_26890, var_sentAttributeList_26932, var_errorMessage_27774, var_theStyle_27294, var_nonAtomicSelection_27353, var_templateEndMark_27388  COMMA_SOURCE_FILE ("lexique-component.galgas", 779)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 752)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 757)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 765)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 771)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 774)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 778)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 752)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 757)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 765)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 771)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 774)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 778)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_ (GGS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 791)) ;
  GGS_lstring var_styleIdentifier_28204 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 792)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_styleIdentifier_28204.readProperty_string ().getter_containsCharacter (GGS_char (utf32 (95)) COMMA_SOURCE_FILE ("lexique-component.galgas", 793)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28204.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas", 794)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_styleIdentifier_28204.readProperty_string ().getter_containsCharacterInRange (GGS_char (utf32 (48)), GGS_char (utf32 (57)) COMMA_SOURCE_FILE ("lexique-component.galgas", 796)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28204.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 797)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
  GGS_lstring var_comment_28640 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 800)) ;
  ioArgument_ioLexicalStyleList.addAssignOperation (var_styleIdentifier_28204, var_comment_28640  COMMA_SOURCE_FILE ("lexique-component.galgas", 801)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 791)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 792)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 800)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 791)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 792)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 800)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 134)) ;
  GGS_lstring var_lexiqueComponentName_4909 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 137)) ;
  GGS_lstring var_lexiqueSuperComponentName_4969 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 140)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_5064 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_5128 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_5064, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_5128, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_4909, var_lexiqueSuperComponentName_4969, var_templateDelimitorList_5064, var_templateReplacementList_5128, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 150)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i22_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 140)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 140)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_ (GGS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 162)) ;
  GGS_lstring var_startString_5792 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 163)) ;
  GGS_bool var_nonAtomicSelection_5812 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_5847 = GGS_bool (false) ;
  GGS_bool var_preserved_5879 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 169)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_nonAtomicSelection_5812.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 171)), GGS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 171)) ;
        }
      }
      var_nonAtomicSelection_5812 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 175)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_templateEndMark_5847.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 177)), GGS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 177)) ;
        }
      }
      var_templateEndMark_5847 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 181)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_preserved_5879.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 183)), GGS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 183)) ;
        }
      }
      var_preserved_5879 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 187)) ;
  GGS_lstring var_endString_6441 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 188)) ;
  ioArgument_ioTemplateDelimitorList.addAssignOperation (var_startString_5792, var_nonAtomicSelection_5812, var_templateEndMark_5847, var_preserved_5879, var_endString_6441  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 189)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 162)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 169)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 175)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 187)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 188)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 162)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 169)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 175)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 187)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 188)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_ (GGS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas", 200)) ;
  GGS_lstring var_matchString_6851 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 201)) ;
  GGS_lstring var_replacementString_6880 ;
  GGS_lstring var_replacementFunction_6915 ;
  switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 205)) ;
    var_replacementString_6880 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 207)) ;
    var_replacementFunction_6915 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 210)) ;
    var_replacementString_6880 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 211)) ;
    var_replacementFunction_6915 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 212)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssignOperation (var_matchString_6851, var_replacementString_6880, var_replacementFunction_6915  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 214)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 201)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 207)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 210)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 211)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 201)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 207)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 210)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 211)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lexicalSendSearchListAST var_lexicalSendSearchList_3237 = GGS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_attributeName_3329 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 78)) ;
    GGS_lstring var_searchListName_3387 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 79)) ;
    var_lexicalSendSearchList_3237.addAssignOperation (var_attributeName_3329, var_searchListName_3387  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 80)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_3557 ;
  switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
    GGS_lstring var_defaultSentTerminal_3628 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 87)) ;
    var_lexicalSendDefaultAction_3557 = GGS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_3628, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 90)) ;
    GGS_lstring var_defaultErrorMessageName_3791 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 91)) ;
    var_lexicalSendDefaultAction_3557 = GGS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_3791, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_3237, var_lexicalSendDefaultAction_3557, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 79)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 90)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 79)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 90)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 52)) ;
  GGS_lstring var_terminalName_2437 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalDropInstructionAST::init_21_ (var_terminalName_2437, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 52)) ;
  GGS_lstring var_errorMessageName_2449 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_2449, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 50)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 69)) ;
  GGS_location var_location_2927 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 70)) ;
  GGS_lexicalInstructionListAST var_repeatedInstructionList_2988 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_2988, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalWhileBranchListAST var_lexicalWhileBranchList_3136 = GGS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_3136, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 81)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_2988, var_lexicalWhileBranchList_3136, var_location_2927, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_parse (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  GGS_lstring var_tagName_2532 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 57)) ;
  GGS_lstring var_terminalName_2575 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 58)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_2532, var_terminalName_2575, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_actionName_4423 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 107)) ;
  GGS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_4483 = GGS_lexicalRoutineCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 112)) ;
      GGS_location var_passingModeLocation_4557 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 113)) ;
      GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_4689 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_4689, inCompiler) ;
      var_actualArgumentList_4483.addAssignOperation (GGS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_4557, var_arg_4689, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 115)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 117)) ;
      GGS_location var_passingModeLocation_4812 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 118)) ;
      GGS_lstring var_attributeName_4882 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 119)) ;
      GGS_lexicalAttributeInputOutputArgumentAST var_arg_4906 = GGS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_4812, var_attributeName_4882, inCompiler COMMA_HERE) ;
      var_actualArgumentList_4483.addAssignOperation (var_arg_4906  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 121)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstringlist var_errorMessageList_5052 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_errorMessageName_5155 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
      var_errorMessageList_5052.addAssignOperation (var_errorMessageName_5155  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 129)) ;
      if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 134)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_4423, var_actualArgumentList_4483, var_errorMessageList_5052, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 112)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 117)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 119)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
      if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 112)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 117)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 119)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
      if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 75)) ;
  GGS_lexicalSelectBranchListAST var_lexicalWhileBranchList_3152 = GGS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 78)) ;
    GGS_lexicalExpressionAST var_selectExpression_3259 ;
    nt_lexical_5F_expression_ (var_selectExpression_3259, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 80)) ;
    GGS_lexicalInstructionListAST var_selectInstructionList_3323 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_3323, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_3152.addAssignOperation (var_selectExpression_3259, var_selectInstructionList_3323  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 86)) ;
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 89)) ;
  GGS_lexicalInstructionListAST var_defaultInstructionList_3580 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_3580, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 95)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_3152, var_defaultInstructionList_3580, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 96)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 78)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
        nt_lexical_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 89)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 95)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 78)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 89)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_sentTerminal_2434 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 51)) ;
  outArgument_outInstruction = GGS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_2434, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 52)) ;
  GGS_lstring var_tagName_2421 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalTagInstructionAST::init_21_ (var_tagName_2421, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 52)) ;
  GGS_lstring var_warningMessageName_2463 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_2463, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 53)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 93)) ;
  GGS_lstring var_optionComponentName_3485 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
  GGS_commandLineOptionListAST var_options_3547 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_3547, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 101)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_3485, var_options_3547, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 101)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_4008 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 112)) ;
  GGS_lstring var_mOptionInternalName_4055 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 114)) ;
  GGS_lchar var_mOptionInvocationLetter_4108 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 116)) ;
  GGS_lstring var_mOptionInvocationString_4169 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  GGS_lstring var_mOptionComment_4231 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  GGS_lstring var_defaultValue_4254 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 120)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_4335 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_4335 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_4254 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
      var_optionDefaultValueKind_4335 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 128)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_4628 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 130)) ;
      var_defaultValue_4254 = GGS_lstring::init_21__21_ (var_v_4628.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 131)), var_v_4628.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_4335 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 132)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_4008, var_mOptionInternalName_4055, var_mOptionInvocationLetter_4108, var_mOptionInvocationString_4169, var_mOptionComment_4231, var_defaultValue_4254, var_optionDefaultValueKind_4335  COMMA_SOURCE_FILE ("optionCompilation.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 130)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 130)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  GGS_lstring var_mGUIName_8726 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 259)) ;
  GGS_lstringlist var_importedOptionList_8764 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleGlobalAttributes_8824 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_withLexiqueListAST var_withLexiqueList_8881 = GGS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GGS_projectIndexingDescriptorList var_projectExtensionList_8942 = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      GGS_lstring var_fileExtension_9028 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
      GGS_lstring var_indexingPathSuffix_9092 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 270)) ;
      var_projectExtensionList_8942.addAssignOperation (var_fileExtension_9028, var_indexingPathSuffix_9092  COMMA_SOURCE_FILE ("guiCompilation.galgas", 271)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_8824, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_8764, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_8881, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssignOperation (var_mGUIName_8726, var_importedOptionList_8764, var_simpleGlobalAttributes_8824, var_withLexiqueList_8881, var_projectExtensionList_8942  COMMA_SOURCE_FILE ("guiCompilation.galgas", 281)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 259)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 270)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 259)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 270)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  GGS_lstring var_lexiqueReference_9796 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  GGS_guiLabelListAST var_labels_9838 = GGS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleAttributes_9886 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiCompoundAttributeListAST var_compoundAttributes_9946 = GGS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 301)) ;
      GGS_uint var_displayStyle_10030 ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_10030 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)) ;
        var_displayStyle_10030 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS_terminalLabelListAST var_terminalList_10169 = GGS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_10239 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 311)) ;
        GGS_uint var_displayFlags_10266 ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_10266 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 316)) ;
          var_displayFlags_10266 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          GGS_lbigint var_leadingStrip_10459 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 320)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_10459.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_10459.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 322)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          GGS_lbigint var_endingStrip_10634 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 325)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_10634.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 326)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_10634.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 327)) ;
            }
          }
          var_displayFlags_10266 = var_leadingStrip_10459.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)).operator_or (var_endingStrip_10634.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_10169.addAssignOperation (var_terminal_10239, var_displayFlags_10266  COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)) ;
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_9838.addAssignOperation (var_displayStyle_10030, var_terminalList_10169, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 336))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_11037 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      GGS_lstring var_name_11072 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)) ;
      GGS_lstring var_value_11097 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 341)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_11182 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 343)) ;
        var_value_11097 = GGS_lstring::init_21__21_ (var_value_11097.readProperty_string ().add_operation (var_v_11182.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 344)), var_v_11182.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_9946.addAssignOperation (var_key_11037, var_name_11072, var_value_11097  COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_11359 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
      GGS_lstring var_value_11405 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 351)) ;
      var_simpleAttributes_9886.addAssignOperation (var_name_11359, var_value_11405  COMMA_SOURCE_FILE ("guiCompilation.galgas", 352)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
  ioArgument_ioWithLexiqueList.addAssignOperation (var_lexiqueReference_9796, var_labels_9838, var_simpleAttributes_9886, var_compoundAttributes_9946  COMMA_SOURCE_FILE ("guiCompilation.galgas", 355)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 301)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 311)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 316)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 320)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 325)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 343)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 301)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 311)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 316)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 320)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 325)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 343)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  GGS_lstring var_optionReference_11793 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 363)) ;
  ioArgument_ioImportedOptionList.addAssignOperation (var_optionReference_11793  COMMA_SOURCE_FILE ("guiCompilation.galgas", 364)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 363)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 363)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mKey_12072 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)) ;
  GGS_lstring var_mValue_12093 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 372)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_12166 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 374)) ;
    var_mValue_12093 = GGS_lstring::init_21__21_ (var_mValue_12093.readProperty_string ().add_operation (var_value_12166.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 375)), var_value_12166.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssignOperation (var_mKey_12072, var_mValue_12093  COMMA_SOURCE_FILE ("guiCompilation.galgas", 378)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 374)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 374)) ;
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
            test_1 = var_separator_15586.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 401)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 401)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
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
          GenericArray <FixItDescription> fixItArray2 ;
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
      GenericArray <FixItDescription> fixItArray1 ;
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
        GenericArray <FixItDescription> fixItArray3 ;
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
//  Map type @headerCompositionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap::GGS_headerCompositionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap::~ GGS_headerCompositionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap::GGS_headerCompositionMap (const GGS_headerCompositionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap & GGS_headerCompositionMap::operator = (const GGS_headerCompositionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
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
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerCompositionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerCompositionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerCompositionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
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
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerCompositionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_headerCompositionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::performInsert (const GGS_headerCompositionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_headerCompositionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>
GGS_headerCompositionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_headerCompositionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>>
GGS_headerCompositionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_headerCompositionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
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
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_headerCompositionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap GGS_headerCompositionMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_headerCompositionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
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
      GenericUniqueArray <String> nearestKeyArray ;
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
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_headerCompositionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_headerCompositionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_headerCompositionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> & inArray,
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
    ioString.appendString ("mInclusion:") ;
    inArray (i COMMA_HERE)->mProperty_mInclusion.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHeaderString:") ;
    inArray (i COMMA_HERE)->mProperty_mHeaderString.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> array = sortedInfoArray () ;
    GGS_headerCompositionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_headerCompositionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_headerCompositionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap ("headerCompositionMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerCompositionMap::staticTypeDescriptor (void) const {
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
//  Map type @headerRepartitionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap::GGS_headerRepartitionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap::~ GGS_headerRepartitionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap::GGS_headerRepartitionMap (const GGS_headerRepartitionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap & GGS_headerRepartitionMap::operator = (const GGS_headerRepartitionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
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
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerRepartitionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerRepartitionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_headerRepartitionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
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
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerRepartitionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_headerRepartitionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::performInsert (const GGS_headerRepartitionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_headerRepartitionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>
GGS_headerRepartitionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_headerRepartitionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>>
GGS_headerRepartitionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_headerRepartitionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
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
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_headerRepartitionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap GGS_headerRepartitionMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_headerRepartitionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
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
      GenericUniqueArray <String> nearestKeyArray ;
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
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_headerRepartitionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_headerRepartitionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> & inArray,
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
    ioString.appendString ("mHeaderFileName:") ;
    inArray (i COMMA_HERE)->mProperty_mHeaderFileName.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> array = sortedInfoArray () ;
    GGS_headerRepartitionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_headerRepartitionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_headerRepartitionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap ("headerRepartitionMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerRepartitionMap::staticTypeDescriptor (void) const {
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
//  Map type @projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap::GGS_projectQualifiedFeatureMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap::~ GGS_projectQualifiedFeatureMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap::GGS_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap & GGS_projectQualifiedFeatureMap::operator = (const GGS_projectQualifiedFeatureMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
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
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_projectQualifiedFeatureMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                               const GGS_uint & inLevel
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_projectQualifiedFeatureMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_projectQualifiedFeatureMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
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
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectQualifiedFeatureMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_projectQualifiedFeatureMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::performInsert (const GGS_projectQualifiedFeatureMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_projectQualifiedFeatureMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>
GGS_projectQualifiedFeatureMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_projectQualifiedFeatureMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>>
GGS_projectQualifiedFeatureMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_projectQualifiedFeatureMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
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
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_projectQualifiedFeatureMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap GGS_projectQualifiedFeatureMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_projectQualifiedFeatureMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
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
      GenericUniqueArray <String> nearestKeyArray ;
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
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_projectQualifiedFeatureMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_projectQualifiedFeatureMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> & inArray,
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
    ioString.appendString ("mFeatureValue:") ;
    inArray (i COMMA_HERE)->mProperty_mFeatureValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> array = sortedInfoArray () ;
    GGS_projectQualifiedFeatureMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_projectQualifiedFeatureMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_projectQualifiedFeatureMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ("projectQualifiedFeatureMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectQualifiedFeatureMap::staticTypeDescriptor (void) const {
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

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @XCodeGroupList
//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    const GGS_XCodeGroupList_2E_element element (p->mObject.mProperty_mGroupReference, p->mObject.mProperty_mGroupName, p->mObject.mProperty_mGroupPath, p->mObject.mProperty_mChildrenRefs) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GGS_string & in_mGroupReference,
                                                    const GGS_string & in_mGroupName,
                                                    const GGS_string & in_mGroupPath,
                                                    const GGS_stringlist & in_mChildrenRefs
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_XCodeGroupList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_XCodeGroupList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::description (String & ioString,
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
      ioString.appendString ("mGroupReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGroupName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGroupPath:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupPath.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mChildrenRefs:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mChildrenRefs.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusPlusAssignOperation (const GGS_XCodeGroupList_2E_element & inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                 const GGS_string & inOperand1,
                                                                 const GGS_string & inOperand2,
                                                                 const GGS_stringlist & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_XCodeGroupList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::addAssignOperation (const GGS_string & inOperand0,
                                             const GGS_string & inOperand1,
                                             const GGS_string & inOperand2,
                                             const GGS_stringlist & inOperand3
                                             COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_append (const GGS_string inOperand0,
                                        const GGS_string inOperand1,
                                        const GGS_string inOperand2,
                                        const GGS_stringlist inOperand3,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
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
  const GGS_XCodeGroupList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_XCodeGroupList::setter_removeAtIndex (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               const GGS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGroupReference ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mGroupName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mGroupPath ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mChildrenRefs ;
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

void GGS_XCodeGroupList::setter_popFirst (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_stringlist & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGroupPath ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mChildrenRefs ;
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

void GGS_XCodeGroupList::setter_popLast (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         GGS_stringlist & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGroupPath ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mChildrenRefs ;
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

void GGS_XCodeGroupList::method_first (GGS_string & outOperand0,
                                       GGS_string & outOperand1,
                                       GGS_string & outOperand2,
                                       GGS_stringlist & outOperand3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGroupPath ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mChildrenRefs ;
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

void GGS_XCodeGroupList::method_last (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      GGS_stringlist & outOperand3,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGroupPath ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mChildrenRefs ;
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

GGS_XCodeGroupList GGS_XCodeGroupList::add_operation (const GGS_XCodeGroupList & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
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

GGS_XCodeGroupList GGS_XCodeGroupList::subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
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

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListWithRange (const GGS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListToIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusAssignOperation (const GGS_XCodeGroupList inList,
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

void GGS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupReference = inOperand ;
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
  
GGS_string GGS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupReference ;
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

void GGS_XCodeGroupList::setter_setMGroupNameAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName = inOperand ;
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
  
GGS_string GGS_XCodeGroupList::getter_mGroupNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName ;
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

void GGS_XCodeGroupList::setter_setMGroupPathAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupPath = inOperand ;
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
  
GGS_string GGS_XCodeGroupList::getter_mGroupPathAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupPath ;
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

void GGS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GGS_stringlist inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mChildrenRefs = inOperand ;
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
  
GGS_stringlist GGS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mChildrenRefs ;
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
// Down Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeGroupList::DownEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element DownEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mChildrenRefs ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeGroupList::UpEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element UpEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mChildrenRefs ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeGroupList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeGroupList::staticTypeDescriptor (void) const {
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

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    const GGS_XCodeToolTargetList_2E_element element (p->mObject.mProperty_mTargetRef, p->mObject.mProperty_mTargetName, p->mObject.mProperty_mProductFileReference, p->mObject.mProperty_mProductFileName, p->mObject.mProperty_mBuildPhaseRefList, p->mObject.mProperty_mBuildPhaseRef, p->mObject.mProperty_mBuildConfigurationListRef, p->mObject.mProperty_mBuildConfigurationSettingList, p->mObject.mProperty_mBuildConfigurationRef, p->mObject.mProperty_mFrameworksFileRefList, p->mObject.mProperty_mFrameworkBuildPhaseRef) ;
    mArray.appendObject (element) ;
  }
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
  macroMyNew (p, cCollectionElement_XCodeToolTargetList (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_XCodeToolTargetList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_XCodeToolTargetList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::description (String & ioString,
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
      ioString.appendString ("mTargetRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationListRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationListRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationSettingList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworksFileRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworksFileRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworkBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_XCodeToolTargetList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeToolTargetList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::plusPlusAssignOperation (const GGS_XCodeToolTargetList_2E_element & inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
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
  const GGS_XCodeToolTargetList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  GGS_XCodeToolTargetList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
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
  const GGS_XCodeToolTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
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
  const GGS_XCodeToolTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
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
  const GGS_XCodeToolTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
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
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTargetRef ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTargetName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mProductFileName ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (idx COMMA_HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (idx COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
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
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
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
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
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
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
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
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::add_operation (const GGS_XCodeToolTargetList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
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

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
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

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::plusAssignOperation (const GGS_XCodeToolTargetList inList,
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

void GGS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef ;
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

void GGS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName ;
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

void GGS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference ;
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

void GGS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName ;
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

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList = inOperand ;
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
  
GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList ;
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

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef ;
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

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef ;
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

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList = inOperand ;
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
  
GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
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

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef ;
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

void GGS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList = inOperand ;
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
  
GGS_stringlist GGS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList ;
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

void GGS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
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
// Down Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeToolTargetList::DownEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element DownEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeToolTargetList::UpEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element UpEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeToolTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeToolTargetList::staticTypeDescriptor (void) const {
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

