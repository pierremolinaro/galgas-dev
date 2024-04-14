#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_AccessControlAST var_accessControl_3217 ;
  nt_acces_5F_control_ (var_accessControl_3217, inCompiler) ;
  GALGAS_bool var_isConstant_3245 ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 64)) ;
    var_isConstant_3245 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 67)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_3217, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 68)) ;
    var_isConstant_3245 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_3459 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyTypeName_3459, inCompiler) ;
  GALGAS_lstring var_propertyName_3498 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 72)) ;
  GALGAS_bool var_selectorAttribute_3525 ;
  GALGAS_propertyInCollectionInitializationAST var_initialization_3590 ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    var_initialization_3590 = GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 76)) ;
    var_selectorAttribute_3525 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 79)) ;
    var_initialization_3590 = GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 80)) ;
    var_selectorAttribute_3525 = GALGAS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 83)) ;
    GALGAS_semanticExpressionAST var_expression_3829 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3829, inCompiler) ;
    var_initialization_3590 = GALGAS_propertyInCollectionInitializationAST::class_func_some (var_expression_3829  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 85)) ;
    var_selectorAttribute_3525 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_isConstant_3245, var_propertyTypeName_3459, var_propertyName_3498, var_accessControl_3217, var_selectorAttribute_3525, var_initialization_3590  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 72)) ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 79)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 83)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 72)) ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 79)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 83)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                     GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_propertyTypeName_4440 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 101)) ;
  GALGAS_lstring var_propertyName_4521 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 102)) ;
  ioArgument_ioAttributeInCollectionList.addAssign_operation (GALGAS_bool (false), var_propertyTypeName_4440, var_propertyName_4521, GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 107)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 109))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 103)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location var_errorLocation_4803 = var_propertyTypeName_4440.readProperty_location ().getter_union (var_propertyName_4521.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 111)) ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_errorLocation_4803, GALGAS_string ("old style property declaration (due to '--error-old-style-property-declaration' option)"), fixItArray1  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 112)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 123)) ;
  GALGAS_lstring var_mFilewrapperName_5358 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 125)) ;
  GALGAS_lstring var_mFilewrapperPath_5444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 126)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_5495 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_5495, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_5564 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_5564, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_5649 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_5649, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 133)), var_mFilewrapperName_5358, var_mFilewrapperPath_5444, var_filewrapperTextFileExtensionList_5495, var_filewrapperBinaryFileExtensionList_5564, var_filewrapperTemplateList_5649, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 130)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 123)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 126)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 123)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 124)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 125)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 126)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
  GALGAS_lstring var_mFilewrapperName_6253 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 147)) ;
  GALGAS_lstring var_mFilewrapperPath_6339 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 148)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_6390 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_6390, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_6459 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_6459, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_6544 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_6544, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (true), GALGAS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 155)), var_mFilewrapperName_6253, var_mFilewrapperPath_6339, var_filewrapperTextFileExtensionList_6390, var_filewrapperBinaryFileExtensionList_6459, var_filewrapperTemplateList_6544, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 148)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 147)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 148)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 168)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_7219 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 172)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_7219  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 173)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 175)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 178)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 168)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 172)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 175)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 178)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 168)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 172)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 175)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 178)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 185)) ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_7657 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 189)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_7657  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 190)) ;
      if (select_galgas_33_DeclarationsSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 192)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 195)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 185)) ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 189)) ;
      if (select_galgas_33_DeclarationsSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 192)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 195)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 185)) ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 189)) ;
      if (select_galgas_33_DeclarationsSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 192)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 195)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 202)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 206)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_8155 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 207)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_8202 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 208)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_8274 = GALGAS_formalTemplateInputParameterListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_8371 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 212)) ;
          GALGAS_lstring var_typeName_8433 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_8433, inCompiler) ;
          GALGAS_bool var_isUnused_8460 ;
          switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
            var_isUnused_8460 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 218)) ;
            var_isUnused_8460 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_8605 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 221)) ;
          var_filewrapperTemplateFormalInputParameters_8274.addAssign_operation (var_selector_8371, var_typeName_8433, var_argumentName_8605, var_isUnused_8460  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 222)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 224)) ;
          GALGAS_lstring var_selector_8750 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 225)) ;
          GALGAS_lstring var_typeName_8824 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_8824, inCompiler) ;
          GALGAS_bool var_isUnused_8851 ;
          switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
          case 1: {
            var_isUnused_8851 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 231)) ;
            var_isUnused_8851 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_8996 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 234)) ;
          var_filewrapperTemplateFormalInputParameters_8274.addAssign_operation (var_selector_8750, var_typeName_8824, var_argumentName_8996, var_isUnused_8851  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 235)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_8155, var_mFilewrapperTemplatePath_8202, var_filewrapperTemplateFormalInputParameters_8274  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 237)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 242)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 202)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 206)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 208)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 212)) ;
          nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 218)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 221)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 224)) ;
          nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 231)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 234)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 242)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 202)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 206)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 207)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 208)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 212)) ;
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 218)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 221)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 224)) ;
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 231)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 234)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 242)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 36)) ;
  GALGAS_lstring var_boolsetTypeName_1878 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 38)) ;
  GALGAS_lstringlist var_slotList_1949 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_slotName_1998 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 41)) ;
    var_slotList_1949.addAssign_operation (var_slotName_1998  COMMA_SOURCE_FILE ("type-boolset.galgas", 42)) ;
    if (select_galgas_33_DeclarationsSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 44)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_boolsetDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (false), var_boolsetTypeName_1878, var_slotList_1949, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-boolset.galgas", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 36)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 41)) ;
    if (select_galgas_33_DeclarationsSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 44)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 36)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 41)) ;
    if (select_galgas_33_DeclarationsSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 44)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_bool var_isAbstract_1654 ;
  GALGAS_bool var_clonable_1679 ;
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    var_isAbstract_1654 = GALGAS_bool (false) ;
    var_clonable_1679 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 37)) ;
    var_isAbstract_1654 = GALGAS_bool (true) ;
    var_clonable_1679 = GALGAS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
    var_isAbstract_1654 = GALGAS_bool (false) ;
    var_clonable_1679 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isReference_1912 ;
  switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
    var_isReference_1912 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_valueclass COMMA_SOURCE_FILE ("type-class.galgas", 50)) ;
    var_isReference_1912 = GALGAS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
    var_isReference_1912 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_className_2109 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 56)) ;
  GALGAS_lstring var_superClassName_2161 ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
    var_superClassName_2161 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 59)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 61)) ;
    var_superClassName_2161 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_generateInSeparateFile_2356 ;
  switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_2356 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 68)) ;
    var_generateInSeparateFile_2356 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 71)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2580 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2580, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_className_2109, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 80)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GALGAS_bool (false), var_isAbstract_1654, var_isReference_1912, var_className_2109, var_superClassName_2161, var_generateInSeparateFile_2356, var_propertyList_2580, var_clonable_1679, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 81)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isReference_1912.boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, var_superClassName_2161.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = var_superClassName_2161 ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_lstring::init_21__21_ (var_superClassName_2161.readProperty_string ().add_operation (GALGAS_string ("-weak"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 98)), var_superClassName_2161.readProperty_location (), inCompiler COMMA_HERE) ;
      }
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_weakReferenceDeclarationAST::init_21_isPredefined_21__21__21__21__21_ (GALGAS_bool (false), var_className_2109, GALGAS_lstring::init_21__21_ (var_className_2109.readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 95)), var_className_2109.readProperty_location (), inCompiler COMMA_HERE), temp_2, var_generateInSeparateFile_2356, var_propertyList_2580, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 92)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_valueclass COMMA_SOURCE_FILE ("type-class.galgas", 50)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 56)) ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 61)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 68)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_valueclass COMMA_SOURCE_FILE ("type-class.galgas", 50)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 56)) ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 61)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("type-class.galgas", 68)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 44)) ;
  GALGAS_lstring var_mEnumTypeName_2171 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 45)) ;
  GALGAS_structComparison var_comparison_2235 ;
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
    var_comparison_2235 = GALGAS_structComparison::class_func_none (SOURCE_FILE ("type-enum.galgas", 48)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("type-enum.galgas", 50)) ;
    var_comparison_2235 = GALGAS_structComparison::class_func_comparable (SOURCE_FILE ("type-enum.galgas", 51)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-enum.galgas", 53)) ;
    var_comparison_2235 = GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("type-enum.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 56)) ;
  GALGAS_enumConstantList var_mConstantList_2438 = GALGAS_enumConstantList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 59)) ;
    GALGAS_lstring var_constantName_2505 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 60)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_2542 = GALGAS__32_lstringlist::init (inCompiler COMMA_HERE) ;
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 64)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_2675 ;
        nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_associatedValueType_2675, inCompiler) ;
        GALGAS_lstring var_associatedValueName_2723 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 67)) ;
        var_associatedValueTypeList_2542.addAssign_operation (var_associatedValueType_2675, var_associatedValueName_2723  COMMA_SOURCE_FILE ("type-enum.galgas", 68)) ;
        if (select_galgas_33_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 71)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_2438.addAssign_operation (var_constantName_2505, var_associatedValueTypeList_2542  COMMA_SOURCE_FILE ("type-enum.galgas", 73)) ;
    if (select_galgas_33_DeclarationsSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_method_5F_declaration_5F_ggs_33__ (var_mEnumTypeName_2171, ioArgument_ioDeclarations, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 80)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::init_21_isPredefined_21__21__21_comparison (GALGAS_bool (false), var_mEnumTypeName_2171, var_mConstantList_2438, var_comparison_2235, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 45)) ;
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("type-enum.galgas", 50)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-enum.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 59)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 64)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 67)) ;
        if (select_galgas_33_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 71)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_DeclarationsSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 45)) ;
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("type-enum.galgas", 50)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-enum.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 59)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 64)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 67)) ;
        if (select_galgas_33_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 71)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_DeclarationsSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 27)) ;
  GALGAS_lstring var_externTypeName_1530 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 28)) ;
  GALGAS_string var_cppPredeclarationCode_1616 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_1616, inCompiler) ;
  GALGAS_string var_cppClassCode_1681 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_1681, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 31)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_1737 = GALGAS_externTypeConstructorList::init (inCompiler COMMA_HERE) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_1799 = GALGAS_externTypeGetterList::init (inCompiler COMMA_HERE) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_1855 = GALGAS_externTypeSetterList::init (inCompiler COMMA_HERE) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_1911 = GALGAS_externTypeMethodList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeConstructorList_1737, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeGetterList_1799, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeSetterList_1855, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeMethodList_1911, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GALGAS_bool (false), var_externTypeName_1530, var_cppPredeclarationCode_1616, var_cppClassCode_1681, var_externTypeConstructorList_1737, var_externTypeGetterList_1799, var_externTypeSetterList_1855, var_externTypeMethodList_1911, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 28)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 28)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 62)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_23 (inCompiler) == 2) {
      GALGAS_lstring var_cppPredeclarationCodeElement_2881 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 66)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_2881.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 69)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 75)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      GALGAS_lstring var_cppPredeclarationCodeElement_3254 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 79)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_3254.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 80)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 82)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i14_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("type-extern.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-extern.galgas", 90)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_3697 = GALGAS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_3764 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 94)) ;
      GALGAS_lstring var_argumentTypeName_3824 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_3824, inCompiler) ;
      GALGAS_lstring var_argumentName_3874 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 96)) ;
      var_argumentTypeList_3697.addAssign_operation (var_selector_3764, var_argumentTypeName_3824, var_argumentName_3874  COMMA_SOURCE_FILE ("type-extern.galgas", 97)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
      GALGAS_lstring var_selector_3985 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 100)) ;
      GALGAS_lstring var_argumentTypeName_4057 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_4057, inCompiler) ;
      GALGAS_lstring var_argumentName_4107 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 102)) ;
      var_argumentTypeList_3697.addAssign_operation (var_selector_3985, var_argumentTypeName_4057, var_argumentName_4107  COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-extern.galgas", 105)) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_argumentTypeList_3697  COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("type-extern.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-extern.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 94)) ;
      nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 96)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
      nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 102)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-extern.galgas", 105)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("type-extern.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-extern.galgas", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 94)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 96)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 102)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-extern.galgas", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i15_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 113)) ;
  GALGAS_lstring var_getterName_4558 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 114)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_4610 = GALGAS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4677 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 118)) ;
      GALGAS_lstring var_argumentTypeName_4737 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_4737, inCompiler) ;
      GALGAS_lstring var_argumentName_4787 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 120)) ;
      var_argumentTypeList_4610.addAssign_operation (var_selector_4677, var_argumentTypeName_4737, var_argumentName_4787  COMMA_SOURCE_FILE ("type-extern.galgas", 121)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 123)) ;
      GALGAS_lstring var_selector_4898 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 124)) ;
      GALGAS_lstring var_argumentTypeName_4970 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_4970, inCompiler) ;
      GALGAS_lstring var_argumentName_5020 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
      var_argumentTypeList_4610.addAssign_operation (var_selector_4898, var_argumentTypeName_4970, var_argumentName_5020  COMMA_SOURCE_FILE ("type-extern.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 129)) ;
  GALGAS_lstring var_resultTypeName_5176 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_resultTypeName_5176, inCompiler) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_4558, var_resultTypeName_5176, var_argumentTypeList_4610  COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 118)) ;
      nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 120)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 123)) ;
      nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 129)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("type-extern.galgas", 118)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 120)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 123)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 129)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i16_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 138)) ;
  GALGAS_lstring var_setterName_5568 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 139)) ;
  GALGAS_formalParameterListAST var_formalParameterList_5658 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_5658, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_5568, var_formalParameterList_5658  COMMA_SOURCE_FILE ("type-extern.galgas", 141)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 139)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 139)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i17_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
  GALGAS_lstring var_methodName_6042 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6132 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_6132, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_6042, var_formalParameterList_6132, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 151))  COMMA_SOURCE_FILE ("type-extern.galgas", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 44)) ;
  GALGAS_lstring var_graphTypeName_2157 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 46)) ;
  GALGAS_lstring var_associatedListTypeName_2253 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_associatedListTypeName_2253, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 49)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_2300 = GALGAS_graphInsertModifierList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 53)) ;
      GALGAS_lstring var_insertName_2423 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 55)) ;
      GALGAS_lstring var_errorMessage_2491 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 56)) ;
      var_graphInsertModifierList_2300.addAssign_operation (var_insertName_2423, var_errorMessage_2491  COMMA_SOURCE_FILE ("type-graph.galgas", 57)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 59)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_graphTypeName_2157, var_associatedListTypeName_2253, var_graphInsertModifierList_2300, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 46)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 49)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 53)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 56)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 59)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 46)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 49)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 53)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 54)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 56)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 38)) ;
  GALGAS_lstring var_listTypeName_1979 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 39)) ;
  GALGAS_bool var_isUsefull_2053 = GALGAS_bool (false) ;
  GALGAS_bool var_isEquatable_2079 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-list.galgas", 44)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isEquatable_2079.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 46)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 46)) ;
        }
      }
      var_isEquatable_2079 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_isUsefull_2053.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 52)), GALGAS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
        }
      }
      var_isUsefull_2053 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 56)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2459 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2459, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_listTypeName_1979, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::equal, var_propertyList_2459.getter_count (SOURCE_FILE ("type-list.galgas", 64)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 65)), GALGAS_string ("a list declaration must declare at least one property"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 65)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 67)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GALGAS_bool (false), var_listTypeName_1979, var_propertyList_2459, var_isUsefull_2053, var_isEquatable_2079, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 38)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-list.galgas", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 56)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 38)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-list.galgas", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 56)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 37)) ;
  GALGAS_lstring var_mListmapTypeName_1932 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  GALGAS_bool var_isEquatable_1990 ;
  switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
    var_isEquatable_1990 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
    var_isEquatable_1990 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
  GALGAS_lstring var_associatedListTypeName_2155 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_associatedListTypeName_2155, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 48)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::init_21_isPredefined_21__21__21_equatable (GALGAS_bool (false), var_mListmapTypeName_1932, var_associatedListTypeName_2155, var_isEquatable_1990, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 37)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 37)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 46)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 44)) ;
  GALGAS_lstring var_mDictTypeName_2192 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 46)) ;
  GALGAS_bool var_equatable_2272 ;
  switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
  case 1: {
    var_equatable_2272 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-dict.galgas", 51)) ;
    var_equatable_2272 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 54)) ;
  GALGAS_lstring var_keyTypeName_2431 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_keyTypeName_2431, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 57)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2481 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2481, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mDictTypeName_2192, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 65)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GALGAS_bool (false), var_mDictTypeName_2192, var_keyTypeName_2431, var_propertyList_2481, var_equatable_2272, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 46)) ;
  switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-dict.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 54)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 65)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 46)) ;
  switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-dict.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 54)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 75)) ;
  GALGAS_lstring var_mapTypeName_3348 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 76)) ;
  GALGAS_bool var_isEquatable_3426 ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
    var_isEquatable_3426 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-map.galgas", 81)) ;
    var_isEquatable_3426 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 84)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_3550 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_3605 = GALGAS_insertMethodListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_3681 = GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_3736 = GALGAS_mapRemoveMethodListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_3802 = GALGAS_insertOrReplaceDeclarationListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_3550, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_3605, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_3681, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_3736, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_3802, inCompiler) ;
    } break ;
    case 7: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mapTypeName_3348, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 104)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_equatable (GALGAS_bool (false), var_mapTypeName_3348, var_propertyList_3550, var_mInsertMethodList_3605, var_mSearchMethodList_3681, var_mRemoveMethodList_3736, var_insertOrReplaceDeclarationListAST_3802, var_isEquatable_3426, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 75)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 76)) ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-map.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
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
      nt_method_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 104)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 75)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 76)) ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-map.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
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
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 120)) ;
  GALGAS_lstring var_methodName_4813 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  GALGAS_lstring var_errorMessage_4877 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_4813, var_errorMessage_4877  COMMA_SOURCE_FILE ("type-map.galgas", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  GALGAS_lstring var_mMethodName_5199 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  GALGAS_lstring var_mErrorMessage_5266 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 134)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_5199, var_mErrorMessage_5266  COMMA_SOURCE_FILE ("type-map.galgas", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 134)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 144))  COMMA_SOURCE_FILE ("type-map.galgas", 144)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 150)) ;
  GALGAS_lstring var_mMethodName_5883 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 153)) ;
  GALGAS_lstring var_mErrorMessage_5950 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 154)) ;
  GALGAS_lstring var_mShadowErrorMessage_5981 ;
  switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5981 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 157)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
    var_mShadowErrorMessage_5981 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_5883, var_mErrorMessage_5950, var_mShadowErrorMessage_5981  COMMA_SOURCE_FILE ("type-map.galgas", 162)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 154)) ;
  switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 153)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 154)) ;
  switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
  GALGAS_lstring var_sortedListTypeName_2225 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 46)) ;
  GALGAS_bool var_isEquatable_2317 ;
  switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    var_isEquatable_2317 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-sorted-list.galgas", 51)) ;
    var_isEquatable_2317 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 54)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_2470 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_37 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_attributeList_2470, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 61)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_2642 = GALGAS_sortedListSortDescriptorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_2642, inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 66)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 68)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GALGAS_bool (false), var_sortedListTypeName_2225, var_attributeList_2470, var_sortDescriptorList_2642, var_isEquatable_2317, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 46)) ;
  switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-sorted-list.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_37 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 66)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 68)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 46)) ;
  switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-sorted-list.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_37 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 66)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_3234 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 81)) ;
  GALGAS_bool var_mAscending_3269 ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
    var_mAscending_3269 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
    var_mAscending_3269 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_3234, var_mAscending_3269  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 81)) ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 81)) ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 25)) ;
  GALGAS_lstring var_structTypeName_1420 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
  GALGAS_structComparison var_comparison_1487 ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    var_comparison_1487 = GALGAS_structComparison::class_func_none (SOURCE_FILE ("type-struct.galgas", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("type-struct.galgas", 31)) ;
    var_comparison_1487 = GALGAS_structComparison::class_func_comparable (SOURCE_FILE ("type-struct.galgas", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-struct.galgas", 34)) ;
    var_comparison_1487 = GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("type-struct.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 37)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1701 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_1701, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_structTypeName_1420, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 45)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison (GALGAS_bool (false), var_structTypeName_1420, var_propertyList_1701, GALGAS_string::makeEmptyString (), var_comparison_1487, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("type-struct.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-struct.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("type-struct.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("type-struct.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 27)) ;
  GALGAS_lstring var_aliasTypeName_1524 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 29)) ;
  GALGAS_lstring var_definedTypeName_1634 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_definedTypeName_1634, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_typealiasDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (false), var_aliasTypeName_1524, var_definedTypeName_1634, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 31)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 29)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_typealias COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_dictionaryDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 29)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i31_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                 GALGAS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i31_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 44)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GALGAS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 51)) ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  TC_Array <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 53)), GALGAS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 51)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 51)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i33_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GALGAS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 61)) ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 63)) ;
  GALGAS_lstring joker_2852 ; // Joker input parameter
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, joker_2852, inCompiler) ;
  joker_2852.drop () ; // Release temporary input variables (joker in source)
  TC_Array <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 65)), GALGAS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i33_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 61)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 63)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 61)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 63)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GALGAS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_t_3254 ;
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_t_3254, inCompiler) ;
    TC_Array <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_t_3254.readProperty_location (), GALGAS_string ("not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 77)) ;
    if (select_galgas_33_DeclarationsSyntax_42 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_42 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_42 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i35_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GALGAS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 89)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i36_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GALGAS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_43 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 100)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 102)), GALGAS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 103)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_43 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 100)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 103)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 96)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_43 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 100)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 103)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 39)) ;
  GALGAS_lstring var_className_2052 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 40)) ;
  GALGAS_lstring var_mGetterName_2130 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 41)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2275 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mFormalInputParameterList_2275, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 43)) ;
  GALGAS_lstring var_returnedTypeName_2368 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_2368, inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_2428 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 47)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2428.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), var_className_2052, var_mGetterName_2130, var_mFormalInputParameterList_2275, var_returnedTypeName_2368, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 41)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 43)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 41)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 43)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 63)) ;
  GALGAS_lstring var_mGetterName_2991 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_3136 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mFormalInputParameterList_3136, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 66)) ;
  GALGAS_lstring var_returnedTypeName_3229 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_3229, inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_3289 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 70)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_3289.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_2991, var_mFormalInputParameterList_3136, var_returnedTypeName_3229, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 63)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 66)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 63)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 66)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
  GALGAS_lstring var_className_1984 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 39)) ;
  GALGAS_lstring var_mMethodName_2071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 40)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2205 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2205, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_className_1984, var_mMethodName_2071, var_formalParameterList_2205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 40)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 40)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 54)) ;
  GALGAS_lstring var_mMethodName_2675 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 55)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2809 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2809, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_2675, var_formalParameterList_2809, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 54)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 55)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 54)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 55)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 28)) ;
  GALGAS_lstring var_className_1545 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 29)) ;
  GALGAS_lstring var_setterName_1632 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 30)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1765 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_1765, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_className_1545, var_setterName_1632, var_formalParameterList_1765, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 30)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 30)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 44)) ;
  GALGAS_lstring var_setterName_2234 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 45)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2367 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2367, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_setterName_2234, var_formalParameterList_2367, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 45)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 45)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  GALGAS_lstring var_className_1530 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 28)) ;
  GALGAS_lstring var_mMethodName_1609 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1717 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mFormalInputParameterList_1717, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 31)) ;
  GALGAS_lstring var_mReturnedTypeName_1801 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_1801, inCompiler) ;
  GALGAS_lstring var_resultVariableName_1836 ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    var_resultVariableName_1836 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  } break ;
  case 2: {
    var_resultVariableName_1836 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 37)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 39)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2067 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2067, inCompiler) ;
  GALGAS_location var_endOfInstructionList_2108 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 42)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1530, var_mMethodName_1609, var_mFormalInputParameterList_1717, var_mReturnedTypeName_1801, var_resultVariableName_1836, var_routineInstructionList_2067, var_endOfInstructionList_2108, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 31)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 39)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 31)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 39)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 59)) ;
  GALGAS_lstring var_mMethodName_2798 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 60)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2906 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mFormalInputParameterList_2906, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 62)) ;
  GALGAS_lstring var_mReturnedTypeName_2990 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_2990, inCompiler) ;
  GALGAS_lstring var_resultVariableName_3025 ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    var_resultVariableName_3025 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  } break ;
  case 2: {
    var_resultVariableName_3025 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 68)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3256 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3256, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3297 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 73)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2798, var_mFormalInputParameterList_2906, var_mReturnedTypeName_2990, var_resultVariableName_3025, var_routineInstructionList_3256, var_endOfInstructionList_3297, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 59)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 60)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 62)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 73)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 59)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 60)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 62)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  GALGAS_lstring var_className_1420 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  GALGAS_lstring var_mMethodName_1499 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 27)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1625 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_1625, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1740 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1740, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1771 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 32)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1420, var_mMethodName_1499, var_formalParameterList_1625, var_routineInstructionList_1740, var_endOfMethodLocation_1771, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 27)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 27)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 48)) ;
  GALGAS_lstring var_mMethodName_2435 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 49)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2561 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2561, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 51)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2676 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2676, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_2707 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2435, var_formalParameterList_2561, var_routineInstructionList_2676, var_endOfMethodLocation_2707, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 48)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 49)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 51)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 48)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 49)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 51)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 40)) ;
  GALGAS_lstring var_className_2145 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 41)) ;
  GALGAS_lstring var_setterName_2224 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 42)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2349 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2349, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 44)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2464 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2464, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_2505 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 47)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_2145, var_setterName_2224, var_formalParameterList_2349, var_routineInstructionList_2464, var_endOfSetterLocation_2505, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 42)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 44)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 47)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 42)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 44)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 62)) ;
  GALGAS_lstring var_setterName_3135 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 63)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3260 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_3260, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3375 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3375, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_3416 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_setterName_3135, var_formalParameterList_3260, var_routineInstructionList_3375, var_endOfSetterLocation_3416, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 62)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 63)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 62)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 63)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas", 25)) ;
  GALGAS_lstring var_className_1423 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 28)) ;
  GALGAS_formalInputParameterListAST var_formalParameterList_1552 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1552, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 30)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1639 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1639, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 32)) ;
  GALGAS_location var_endOfMethodLocation_1678 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 33)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_initializerAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), var_className_1423, var_formalParameterList_1552, var_routineInstructionList_1639, var_endOfMethodLocation_1678, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 28)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 30)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 28)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 30)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 47)) ;
  GALGAS_formalInputParameterListAST var_formalParameterList_2238 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2238, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 49)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2325 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2325, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 51)) ;
  GALGAS_location var_endOfMethodLocation_2364 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 52)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_initializerAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_formalParameterList_2238, var_routineInstructionList_2325, var_endOfMethodLocation_2364, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 47)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 49)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas", 47)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 49)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 40)) ;
  GALGAS_lstring var_className_2077 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 41)) ;
  GALGAS_lstring var_getterName_2163 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 42)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_2315 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_2315, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 44)) ;
  GALGAS_lstring var_returnedTypeName_2398 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_2398, inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_2451 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 47)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2451.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), var_className_2077, var_getterName_2163, var_formalInputParameterList_2315, var_returnedTypeName_2398, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 42)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 44)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 47)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 42)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 44)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 47)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 65)) ;
  GALGAS_lstring var_getterName_3044 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 66)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_3196 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_3196, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 68)) ;
  GALGAS_lstring var_returnedTypeName_3279 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_3279, inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_3332 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 71)) ;
    TC_Array <FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_3332.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 72)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_getterName_3044, var_formalInputParameterList_3196, var_returnedTypeName_3279, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 65)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 66)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 68)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 71)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 65)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 66)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 68)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 71)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  GALGAS_lstring var_className_2013 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  GALGAS_lstring var_mMethodName_2108 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 41)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2250 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2250, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_className_2013, var_mMethodName_2108, var_formalParameterList_2250, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 41)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 41)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 56)) ;
  GALGAS_lstring var_mMethodName_2745 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 57)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2887 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2887, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_2745, var_formalParameterList_2887, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 56)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 56)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 57)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 29)) ;
  GALGAS_lstring var_className_1560 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 30)) ;
  GALGAS_lstring var_setterName_1655 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 31)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1796 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_1796, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), var_className_1560, var_setterName_1655, var_formalParameterList_1796, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 30)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 31)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 30)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 31)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 46)) ;
  GALGAS_lstring var_setterName_2290 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 47)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2431 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2431, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (false), constinArgument_inClassName, var_setterName_2290, var_formalParameterList_2431, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 46)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 46)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 43)) ;
  GALGAS_lstring var_className_2335 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 44)) ;
  GALGAS_lstring var_mMethodName_2422 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 45)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_2538 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_2538, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 47)) ;
  GALGAS_lstring var_mReturnedTypeName_2621 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_2621, inCompiler) ;
  GALGAS_lstring var_resultVariableName_2656 ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    var_resultVariableName_2656 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 51)) ;
  } break ;
  case 2: {
    var_resultVariableName_2656 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 53)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 55)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2887 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2887, inCompiler) ;
  GALGAS_location var_endOfInstructionList_2928 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_2335, var_mMethodName_2422, var_formalInputParameterList_2538, var_mReturnedTypeName_2621, var_resultVariableName_2656, var_routineInstructionList_2887, var_endOfInstructionList_2928, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 43)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 45)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 47)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 51)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 55)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 43)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 45)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 47)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 51)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 55)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)) ;
  GALGAS_lstring var_mMethodName_3642 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 77)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_3758 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_3758, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 79)) ;
  GALGAS_lstring var_mReturnedTypeName_3841 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_3841, inCompiler) ;
  GALGAS_lstring var_resultVariableName_3876 ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    var_resultVariableName_3876 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 83)) ;
  } break ;
  case 2: {
    var_resultVariableName_3876 = GALGAS_lstring::init_21__21_ (GALGAS_string ("result"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 85)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 87)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_4107 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_4107, inCompiler) ;
  GALGAS_location var_endOfInstructionList_4148 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 90)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_3642, var_formalInputParameterList_3758, var_mReturnedTypeName_3841, var_resultVariableName_3876, var_routineInstructionList_4107, var_endOfInstructionList_4148, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 91)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 77)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 79)) ;
  nt_type_5F_definition_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 83)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 87)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 90)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 77)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 79)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 83)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 87)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 28)) ;
  GALGAS_lstring var_className_1545 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 29)) ;
  GALGAS_lstring var_mMethodName_1642 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1776 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_1776, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 32)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1891 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1891, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1932 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 35)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1545, var_mMethodName_1642, var_formalParameterList_1776, var_routineInstructionList_1891, var_endOfMethodLocation_1932, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 51)) ;
  GALGAS_lstring var_mMethodName_2588 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 52)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2722 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2722, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2837 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2837, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_2878 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2588, var_formalParameterList_2722, var_routineInstructionList_2837, var_endOfMethodLocation_2878, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 51)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 52)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 51)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 52)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i61_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 41)) ;
  GALGAS_lstring var_className_2200 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 42)) ;
  GALGAS_lstring var_setterName_2297 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 43)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2430 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_2430, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 45)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2545 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2545, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_2586 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 48)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_2200, var_setterName_2297, var_formalParameterList_2430, var_routineInstructionList_2545, var_endOfSetterLocation_2586, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i61_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 42)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 43)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 45)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i61_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 42)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 43)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 45)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i62_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                    GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 65)) ;
  GALGAS_lstring var_setterName_3274 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 66)) ;
  GALGAS_formalParameterListAST var_formalParameterList_3407 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterList_3407, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 68)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3522 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3522, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_3563 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 71)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionSetterAST::init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_setterName_3274, var_formalParameterList_3407, var_routineInstructionList_3522, var_endOfSetterLocation_3563, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i62_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 65)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 66)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 68)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 71)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 65)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 66)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 68)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i63_ (GALGAS_AccessControlAST & outArgument_outAccessControl,
                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 31)) ;
    outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_protectedAccess (SOURCE_FILE ("accessControl.galgas", 36)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 38)) ;
      GALGAS_lstring var_value_1766 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 39)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::notEqual, var_value_1766.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_1766.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 41)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 43)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_protectedSetAccess (SOURCE_FILE ("accessControl.galgas", 44)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas", 47)) ;
    switch (select_galgas_33_DeclarationsSyntax_54 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_privateAccess (SOURCE_FILE ("accessControl.galgas", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 51)) ;
      GALGAS_lstring var_value_2078 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 52)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, var_value_2078.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_2078.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 54)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas", 56)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_privateSetAccess (SOURCE_FILE ("accessControl.galgas", 57)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_55 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_fileprivateAccess (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 62))  COMMA_SOURCE_FILE ("accessControl.galgas", 62)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas", 64)) ;
      outArgument_outAccessControl = GALGAS_AccessControlAST::class_func_fileprivateSetAccess (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas", 65))  COMMA_SOURCE_FILE ("accessControl.galgas", 65)) ;
      GALGAS_lstring var_value_2505 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas", 66)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::notEqual, var_value_2505.readProperty_string ().objectCompare (GALGAS_string ("set"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_2505.readProperty_location (), GALGAS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 68)) ;
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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i63_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
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
    switch (select_galgas_33_DeclarationsSyntax_54 (inCompiler)) {
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
    switch (select_galgas_33_DeclarationsSyntax_55 (inCompiler)) {
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

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i63_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
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
    switch (select_galgas_33_DeclarationsSyntax_54 (inCompiler)) {
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
    switch (select_galgas_33_DeclarationsSyntax_55 (inCompiler)) {
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 44)) ;
  GALGAS_lstring var_lexiqueComponentName_2442 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 47)) ;
  GALGAS_templateDelimitorListAST var_templateDelimitorList_2531 = GALGAS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_templateReplacementListAST var_templateReplacementList_2594 = GALGAS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeList_2656 = GALGAS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalStyleListAST var_lexicalStyleList_2711 = GALGAS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_terminalDeclarationListAST var_terminalDeclarationList_2769 = GALGAS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_2840 = GALGAS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationList_2914 = GALGAS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalRuleListAST var_lexicalRuleList_2974 = GALGAS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_indexingListAST var_indexingListAST_3020 = GALGAS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_2531, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_2594, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (var_lexicalAttributeList_2656, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__ (var_lexicalStyleList_2711, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__ (var_terminalDeclarationList_2769, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (var_lexicalListDeclarationList_2914, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_2974, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_2974, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (var_lexicalMessageDeclarationList_2840, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (var_indexingListAST_3020, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 80)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GALGAS_bool (false), var_lexiqueComponentName_2442, GALGAS_bool (false), var_templateDelimitorList_2531, var_templateReplacementList_2594, var_lexicalAttributeList_2656, var_lexicalStyleList_2711, var_terminalDeclarationList_2769, var_lexicalMessageDeclarationList_2840, var_lexicalListDeclarationList_2914, var_lexicalRuleList_2974, var_indexingListAST_3020, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 47)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 47)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 101)) ;
  GALGAS_lstring var_lexiqueComponentName_4487 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 104)) ;
  GALGAS_templateDelimitorListAST var_templateDelimitorList_4576 = GALGAS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_templateReplacementListAST var_templateReplacementList_4639 = GALGAS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeList_4701 = GALGAS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalStyleListAST var_lexicalStyleList_4756 = GALGAS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_terminalDeclarationListAST var_terminalDeclarationList_4814 = GALGAS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_4885 = GALGAS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationList_4959 = GALGAS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalRuleListAST var_lexicalRuleList_5019 = GALGAS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_indexingListAST var_indexingListAST_5065 = GALGAS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_4576, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_4639, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (var_lexicalAttributeList_4701, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_5F_ggs_33__ (var_lexicalStyleList_4756, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_5F_ggs_33__ (var_terminalDeclarationList_4814, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (var_lexicalListDeclarationList_4959, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_5019, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (var_lexicalRuleList_5019, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (var_lexicalMessageDeclarationList_4885, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (var_indexingListAST_5065, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 137)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GALGAS_bool (false), var_lexiqueComponentName_4487, GALGAS_bool (true), var_templateDelimitorList_4576, var_templateReplacementList_4639, var_lexicalAttributeList_4701, var_lexicalStyleList_4756, var_terminalDeclarationList_4814, var_lexicalMessageDeclarationList_4885, var_lexicalListDeclarationList_4959, var_lexicalRuleList_5019, var_indexingListAST_5065, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 104)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 137)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("lexique-component.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 104)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 137)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_ (GALGAS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 157)) ;
  GALGAS_lstring var_indexName_6481 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 158)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 159)) ;
  GALGAS_lstring var_indexComment_6560 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 160)) ;
  ioArgument_ioIndexingListAST.addAssign_operation (var_indexName_6481, var_indexComment_6560  COMMA_SOURCE_FILE ("lexique-component.galgas", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 157)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 158)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 160)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 157)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 158)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 168)) ;
  GALGAS_lstring var_messageName_6889 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 169)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 170)) ;
  GALGAS_lstring var_messageValue_6938 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 171)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssign_operation (var_messageName_6889, var_messageValue_6938  COMMA_SOURCE_FILE ("lexique-component.galgas", 172)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 168)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 169)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 171)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 168)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 169)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 171)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 178)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 179)) ;
  GALGAS_lstring var_listName_7261 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 180)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssign_operation (GALGAS_lexicalImplicitRuleAST::init_21_ (var_listName_7261, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 181)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 178)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 180)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 178)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 180)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 187)) ;
  GALGAS_lexicalExpressionAST var_lexicalRuleExpression_7594 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_7594, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 189)) ;
  GALGAS_lexicalInstructionListAST var_instructionList_7659 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_7659, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 195)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssign_operation (GALGAS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_7594, var_instructionList_7659, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 196)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 187)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 189)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 195)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 187)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 189)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 195)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 202)) ;
  GALGAS_lexicalInstructionAST var_instruction_8116 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_8116, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_instruction_8116  COMMA_SOURCE_FILE ("lexique-component.galgas", 204)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 202)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 202)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_ (GALGAS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 210)) ;
  GALGAS_lexicalExpressionAST var_whileExpression_8420 ;
  nt_lexical_5F_expression_ (var_whileExpression_8420, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 212)) ;
  GALGAS_lexicalInstructionListAST var_whileInstructionList_8479 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_8479, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssign_operation (var_whileExpression_8420, var_whileInstructionList_8479  COMMA_SOURCE_FILE ("lexique-component.galgas", 218)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 210)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 212)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 210)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 212)) ;
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_8901 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 224)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCharacterInputArgumentAST::init_21_ (var_character_8901, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 224)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 224)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lbigint var_unsignedValue_9227 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 231)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_9227, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 231)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 231)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_location var_currentLocation_9546 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 238)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 239)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_9546, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 239)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 239)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lstring var_idf_9916 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 246)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GALGAS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_9916, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 250)) ;
    GALGAS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_10070 = GALGAS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 254)) ;
        GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_10236 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_10236, inCompiler) ;
        var_functionActualArgumentList_10070.addAssign_operation (var_arg_10236  COMMA_SOURCE_FILE ("lexique-component.galgas", 256)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 258)) ;
    outArgument_outEffectiveArgument = GALGAS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_9916, var_functionActualArgumentList_10070, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 246)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 250)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 254)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 258)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 246)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 250)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 254)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 258)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
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

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 275)) ;
      GALGAS_lexicalExpressionAST var_rightExpression_10875 ;
      nt_lexical_5F_factor_ (var_rightExpression_10875, inCompiler) ;
      outArgument_outExpression = GALGAS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_10875, inCompiler COMMA_HERE) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 275)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 275)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_string_11166 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 284)) ;
  outArgument_outExpression = GALGAS_lexicalStringMatchAST::init_21_ (var_string_11166, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 284)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 284)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 291)) ;
  GALGAS_lstring var_string_11422 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 293)) ;
  GALGAS_lstring var_errorMessage_11463 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 294)) ;
  outArgument_outExpression = GALGAS_lexicalStringNotMatchAST::init_21__21_ (var_string_11422, var_errorMessage_11463, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 291)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 294)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 291)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 294)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_11739 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 301)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_lexicalCharacterMatchAST::init_21_ (var_character_11739, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 305)) ;
    GALGAS_lchar var_upperBound_11866 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 306)) ;
    outArgument_outExpression = GALGAS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_11739, var_upperBound_11866, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 301)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 305)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 306)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 301)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 305)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 306)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_characterSet_12165 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 314)) ;
  outArgument_outExpression = GALGAS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_12165, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 314)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 314)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_ (GALGAS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 321)) ;
  GALGAS_lstring var_name_12484 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 322)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_12526 = GALGAS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      GALGAS_lstring var_selector_12594 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 326)) ;
      GALGAS_lstring var_sentAttribute_12627 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 327)) ;
      var_sentAttributeList_12526.addAssign_operation (var_selector_12594, var_sentAttribute_12627  COMMA_SOURCE_FILE ("lexique-component.galgas", 328)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_theStyle_12718 ;
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 332)) ;
    var_theStyle_12718 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 333)) ;
  } break ;
  case 2: {
    var_theStyle_12718 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 335)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 337)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 337)) ;
  GALGAS_lstring var_errorMessage_12925 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 339)) ;
  GALGAS_lexicalListEntryListAST var_entryList_12954 = GALGAS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_12954, inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 344)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 346)) ;
  ioArgument_ioLexicalListDeclarationList.addAssign_operation (var_name_12484, var_theStyle_12718, var_errorMessage_12925, var_sentAttributeList_12526, var_entryList_12954  COMMA_SOURCE_FILE ("lexique-component.galgas", 347)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 321)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 322)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 326)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 327)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 332)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 333)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 337)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 337)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 339)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 344)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 346)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 321)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 322)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 326)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 327)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 332)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 333)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 337)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 337)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 339)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 344)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 346)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_ (GALGAS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_entrySpelling_13390 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 353)) ;
  GALGAS_bool var_isTemplateEndMark_13412 = GALGAS_bool (false) ;
  GALGAS_bool var_nonAtomicSelection_13446 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 358)) ;
      var_isTemplateEndMark_13412 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 361)) ;
      var_nonAtomicSelection_13446 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_terminalSpelling_13645 ;
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 366)) ;
    var_terminalSpelling_13645 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 367)) ;
  } break ;
  case 2: {
    var_terminalSpelling_13645 = var_entrySpelling_13390 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssign_operation (var_entrySpelling_13390, var_terminalSpelling_13645, var_nonAtomicSelection_13446, var_isTemplateEndMark_13412  COMMA_SOURCE_FILE ("lexique-component.galgas", 371)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 353)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 358)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 361)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 366)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 367)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 353)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 358)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 361)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 366)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 367)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_ (GALGAS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_typeName_14172 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 381)) ;
  GALGAS_lstring var_name_14212 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 382)) ;
  ioArgument_ioLexicalAttributeList.addAssign_operation (var_typeName_14172, var_name_14212  COMMA_SOURCE_FILE ("lexique-component.galgas", 383)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 381)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 382)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 381)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 382)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_ (GALGAS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_name_14494 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 389)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_14536 = GALGAS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 393)) ;
      GALGAS_lstring var_selector_14629 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 394)) ;
      GALGAS_lstring var_sentAttribute_14674 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 395)) ;
      var_sentAttributeList_14536.addAssign_operation (var_selector_14629, var_sentAttribute_14674  COMMA_SOURCE_FILE ("lexique-component.galgas", 396)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_theStyle_14765 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas", 398)) ;
  GALGAS_bool var_nonAtomicSelection_14823 = GALGAS_bool (false) ;
  GALGAS_bool var_templateEndMark_14858 = GALGAS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 403)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, var_theStyle_14765.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 405)), GALGAS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 405)) ;
        }
      }
      var_theStyle_14765 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 407)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 409)) ;
      var_nonAtomicSelection_14823 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 412)) ;
      var_templateEndMark_14858 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 415)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 415)) ;
  GALGAS_lstring var_errorMessage_15248 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 416)) ;
  ioArgument_ioTerminalDeclarationList.addAssign_operation (var_name_14494, var_sentAttributeList_14536, var_errorMessage_15248, var_theStyle_14765, var_nonAtomicSelection_14823, var_templateEndMark_14858  COMMA_SOURCE_FILE ("lexique-component.galgas", 417)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 389)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 393)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 395)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 403)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 407)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 409)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 412)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 415)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 415)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 416)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 389)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 393)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 395)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 403)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 407)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 409)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 412)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 415)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 415)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 416)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_ (GALGAS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 429)) ;
  GALGAS_lstring var_styleIdentifier_15681 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 430)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_styleIdentifier_15681.readProperty_string ().getter_containsCharacter (GALGAS_char (TO_UNICODE (95)) COMMA_SOURCE_FILE ("lexique-component.galgas", 431)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_15681.readProperty_location (), GALGAS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas", 432)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_styleIdentifier_15681.readProperty_string ().getter_containsCharacterInRange (GALGAS_char (TO_UNICODE (48)), GALGAS_char (TO_UNICODE (57)) COMMA_SOURCE_FILE ("lexique-component.galgas", 434)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_15681.readProperty_location (), GALGAS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 435)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 437)) ;
  GALGAS_lstring var_comment_16117 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 438)) ;
  ioArgument_ioLexicalStyleList.addAssign_operation (var_styleIdentifier_15681, var_comment_16117  COMMA_SOURCE_FILE ("lexique-component.galgas", 439)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 429)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 430)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 437)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 438)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 429)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 430)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 437)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 438)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 38)) ;
  GALGAS_lstring var_lexiqueComponentName_2041 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 41)) ;
  GALGAS_lstring var_lexiqueSuperComponentName_2101 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 44)) ;
  GALGAS_templateDelimitorListAST var_templateDelimitorList_2195 = GALGAS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_templateReplacementListAST var_templateReplacementList_2258 = GALGAS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_5F_ggs_33__ (var_templateDelimitorList_2195, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_5F_ggs_33__ (var_templateReplacementList_2258, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 53)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), var_lexiqueComponentName_2041, var_lexiqueSuperComponentName_2101, var_templateDelimitorList_2195, var_templateReplacementList_2258, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 44)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 44)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_ (GALGAS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                            Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 66)) ;
  GALGAS_lstring var_startString_2933 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 67)) ;
  GALGAS_bool var_nonAtomicSelection_2953 = GALGAS_bool (false) ;
  GALGAS_bool var_templateEndMark_2988 = GALGAS_bool (false) ;
  GALGAS_bool var_preserved_3020 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 73)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_nonAtomicSelection_2953.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 75)), GALGAS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 75)) ;
        }
      }
      var_nonAtomicSelection_2953 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 79)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_templateEndMark_2988.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 81)), GALGAS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 81)) ;
        }
      }
      var_templateEndMark_2988 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 85)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_preserved_3020.boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 87)), GALGAS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 87)) ;
        }
      }
      var_preserved_3020 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 91)) ;
  GALGAS_lstring var_endString_3582 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 92)) ;
  ioArgument_ioTemplateDelimitorList.addAssign_operation (var_startString_2933, var_nonAtomicSelection_2953, var_templateEndMark_2988, var_preserved_3020, var_endString_3582  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 73)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 79)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 85)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 73)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 79)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 85)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 92)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_ (GALGAS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas", 104)) ;
  GALGAS_lstring var_matchString_3982 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 105)) ;
  GALGAS_lstring var_replacementString_4011 ;
  GALGAS_lstring var_replacementFunction_4046 ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 109)) ;
    var_replacementString_4011 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 111)) ;
    var_replacementFunction_4046 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 112)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 114)) ;
    var_replacementString_4011 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 115)) ;
    var_replacementFunction_4046 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 116)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssign_operation (var_matchString_3982, var_replacementString_4011, var_replacementFunction_4046  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 118)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 105)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 109)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 112)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 105)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 109)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 112)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lexicalSendSearchListAST var_lexicalSendSearchList_1950 = GALGAS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_2034 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 39)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 40)) ;
    GALGAS_lstring var_searchListName_2092 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 41)) ;
    var_lexicalSendSearchList_1950.addAssign_operation (var_attributeName_2034, var_searchListName_2092  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 42)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 43)) ;
    if (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_2255 ;
  switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_defaultSentTerminal_2326 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 49)) ;
    var_lexicalSendDefaultAction_2255 = GALGAS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_2326, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 52)) ;
    GALGAS_lstring var_defaultErrorMessageName_2489 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 53)) ;
    var_lexicalSendDefaultAction_2255 = GALGAS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_2489, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_1950, var_lexicalSendDefaultAction_2255, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 39)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 41)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 43)) ;
    if (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 52)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 39)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 41)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 43)) ;
    if (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 52)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 35)) ;
  GALGAS_lstring var_terminalName_1849 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 36)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalDropInstructionAST::init_21_ (var_terminalName_1849, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 35)) ;
  GALGAS_lstring var_errorMessageName_1853 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 36)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_1853, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 34)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 34)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 37)) ;
  GALGAS_lexicalInstructionListAST var_repeatedInstructionList_1992 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_location var_location_2029 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_1992, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lexicalWhileBranchListAST var_lexicalWhileBranchList_2173 = GALGAS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_2173, inCompiler) ;
    if (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 49)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_1992, var_lexicalWhileBranchList_2173, var_location_2029, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 37)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 37)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 36)) ;
  GALGAS_lstring var_tagName_1890 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 38)) ;
  GALGAS_lstring var_terminalName_1933 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 39)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_1890, var_terminalName_1933, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_actionName_2946 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 61)) ;
  GALGAS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_3006 = GALGAS_lexicalRoutineCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 66)) ;
      GALGAS_location var_passingModeLocation_3079 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 67)) ;
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_3211 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_3211, inCompiler) ;
      var_actualArgumentList_3006.addAssign_operation (GALGAS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_3079, var_arg_3211, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 69)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 71)) ;
      GALGAS_location var_passingModeLocation_3334 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 72)) ;
      GALGAS_lstring var_attributeName_3404 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 73)) ;
      GALGAS_lexicalAttributeInputOutputArgumentAST var_arg_3428 = GALGAS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_3334, var_attributeName_3404, inCompiler COMMA_HERE) ;
      var_actualArgumentList_3006.addAssign_operation (var_arg_3428  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 75)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_errorMessageList_3574 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_errorMessageName_3676 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 82)) ;
      var_errorMessageList_3574.addAssign_operation (var_errorMessageName_3676  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 83)) ;
      if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 85)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 88)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_2946, var_actualArgumentList_3006, var_errorMessageList_3574, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 66)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 73)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 82)) ;
      if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 85)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 88)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 66)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 71)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 73)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 82)) ;
      if (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 85)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 36)) ;
  GALGAS_lexicalSelectBranchListAST var_lexicalWhileBranchList_1960 = GALGAS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 39)) ;
    GALGAS_lexicalExpressionAST var_selectExpression_2066 ;
    nt_lexical_5F_expression_ (var_selectExpression_2066, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 41)) ;
    GALGAS_lexicalInstructionListAST var_selectInstructionList_2130 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_2130, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_1960.addAssign_operation (var_selectExpression_2066, var_selectInstructionList_2130  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 47)) ;
    if (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 50)) ;
  GALGAS_lexicalInstructionListAST var_defaultInstructionList_2386 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_2386, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 56)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_1960, var_defaultInstructionList_2386, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 39)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 41)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 50)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 39)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 41)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 50)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_sentTerminal_1850 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 35)) ;
  outArgument_outInstruction = GALGAS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_1850, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 35)) ;
  GALGAS_lstring var_tagName_1847 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 36)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalTagInstructionAST::init_21_ (var_tagName_1847, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 35)) ;
  GALGAS_lstring var_warningMessageName_1859 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 36)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_1859, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 36)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  GALGAS_lstring var_optionComponentName_2586 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  GALGAS_commandLineOptionListAST var_options_2648 = GALGAS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_2648, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 65)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (false), var_optionComponentName_2586, var_options_2648, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 65)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 59)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GALGAS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  GALGAS_lstring var_mOptionTypeName_3106 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 76)) ;
  GALGAS_lstring var_mOptionInternalName_3153 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 78)) ;
  GALGAS_lchar var_mOptionInvocationLetter_3206 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
  GALGAS_lstring var_mOptionInvocationString_3267 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 82)) ;
  GALGAS_lstring var_mOptionComment_3329 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 83)) ;
  GALGAS_lstring var_defaultValue_3352 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 84)), inCompiler COMMA_HERE) ;
  GALGAS_optionDefaultValueEnumAST var_optionDefaultValueKind_3433 ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_3433 = GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 89)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_3352 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 91)) ;
      var_optionDefaultValueKind_3433 = GALGAS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 92)) ;
    } break ;
    case 2: {
      GALGAS_lbigint var_v_3726 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
      var_defaultValue_3352 = GALGAS_lstring::init_21__21_ (var_v_3726.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 95)), var_v_3726.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_3433 = GALGAS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 96)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssign_operation (var_mOptionTypeName_3106, var_mOptionInternalName_3153, var_mOptionInvocationLetter_3206, var_mOptionInvocationString_3267, var_mOptionComment_3329, var_defaultValue_3352, var_optionDefaultValueKind_3433  COMMA_SOURCE_FILE ("optionCompilation.galgas", 99)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_OptionComponentSyntax::rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 83)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 89)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 91)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 83)) ;
  switch (select_galgas_33_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 89)) ;
    switch (select_galgas_33_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 91)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
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
  GALGAS_lstringlist var_importedOptionList_4662 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes_4721 = GALGAS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_withLexiqueListAST var_withLexiqueList_4777 = GALGAS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_projectIndexingDescriptorList var_projectExtensionList_4837 = GALGAS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 130)) ;
      GALGAS_lstring var_fileExtension_4922 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 133)) ;
      GALGAS_lstring var_indexingPathSuffix_4986 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 134)) ;
      var_projectExtensionList_4837.addAssign_operation (var_fileExtension_4922, var_indexingPathSuffix_4986  COMMA_SOURCE_FILE ("guiCompilation.galgas", 135)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_4721, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_4662, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_4777, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 144)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssign_operation (var_mGUIName_4624, var_importedOptionList_4662, var_simpleGlobalAttributes_4721, var_withLexiqueList_4777, var_projectExtensionList_4837  COMMA_SOURCE_FILE ("guiCompilation.galgas", 145)) ;
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
  GALGAS_lstring var_lexiqueReference_5687 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 158)) ;
  GALGAS_guiLabelListAST var_labels_5729 = GALGAS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_guiSimpleAttributeListAST var_simpleAttributes_5776 = GALGAS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_guiCompoundAttributeListAST var_compoundAttributes_5835 = GALGAS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 162)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 165)) ;
      GALGAS_uint var_displayStyle_5918 ;
      switch (select_galgas_33_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_5918 = GALGAS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 170)) ;
        var_displayStyle_5918 = GALGAS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_terminalLabelListAST var_terminalList_6057 = GALGAS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_terminal_6126 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 175)) ;
        GALGAS_uint var_displayFlags_6153 ;
        switch (select_galgas_33_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_6153 = GALGAS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 180)) ;
          var_displayFlags_6153 = GALGAS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 183)) ;
          GALGAS_lbigint var_leadingStrip_6344 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 184)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_6344.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 185)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_6344.readProperty_location (), GALGAS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 186)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 188)) ;
          GALGAS_lbigint var_endingStrip_6519 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 189)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_6519.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 190)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_6519.readProperty_location (), GALGAS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 191)) ;
            }
          }
          var_displayFlags_6153 = var_leadingStrip_6344.readProperty_bigint ().left_shift_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)).operator_or (var_endingStrip_6519.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 193)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 194)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_6057.addAssign_operation (var_terminal_6126, var_displayFlags_6153  COMMA_SOURCE_FILE ("guiCompilation.galgas", 196)) ;
        if (select_galgas_33_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 198)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_5729.addAssign_operation (var_displayStyle_5918, var_terminalList_6057, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 200))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 200)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_key_6922 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 202)) ;
      GALGAS_lstring var_name_6957 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 203)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 204)) ;
      GALGAS_lstring var_value_6982 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 205)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GALGAS_lstring var_v_7067 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 207)) ;
        var_value_6982 = GALGAS_lstring::init_21__21_ (var_value_6982.readProperty_string ().add_operation (var_v_7067.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 208)), var_v_7067.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_33_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_5835.addAssign_operation (var_key_6922, var_name_6957, var_value_6982  COMMA_SOURCE_FILE ("guiCompilation.galgas", 211)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_name_7244 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 213)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 214)) ;
      GALGAS_lstring var_value_7290 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 215)) ;
      var_simpleAttributes_5776.addAssign_operation (var_name_7244, var_value_7290  COMMA_SOURCE_FILE ("guiCompilation.galgas", 216)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 218)) ;
  ioArgument_ioWithLexiqueList.addAssign_operation (var_lexiqueReference_5687, var_labels_5729, var_simpleAttributes_5776, var_compoundAttributes_5835  COMMA_SOURCE_FILE ("guiCompilation.galgas", 219)) ;
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
  GALGAS_lstring var_optionReference_7676 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 227)) ;
  ioArgument_ioImportedOptionList.addAssign_operation (var_optionReference_7676  COMMA_SOURCE_FILE ("guiCompilation.galgas", 228)) ;
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
  GALGAS_lstring var_mKey_7953 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 235)) ;
  GALGAS_lstring var_mValue_7974 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 236)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_value_8047 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 238)) ;
    var_mValue_7974 = GALGAS_lstring::init_21__21_ (var_mValue_7974.readProperty_string ().add_operation (var_value_8047.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 239)), var_value_8047.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_33_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssign_operation (var_mKey_7953, var_mValue_7974  COMMA_SOURCE_FILE ("guiCompilation.galgas", 242)) ;
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
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_2994 = GALGAS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_syntaxRuleListAST var_ruleList_3065 = GALGAS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_2994, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_3065, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 76)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssign_operation (var_syntaxComponentName_2554, var_importedLexiqueReference_2615, var_nonterminalDeclarationList_2994, var_ruleList_3065, var_hasTranslateFeature_2818  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 77)) ;
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
  GALGAS_lstring var_syntaxComponentName_3847 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 93)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_3911 = GALGAS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_syntaxRuleListAST var_ruleList_3982 = GALGAS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_3911, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_3982, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 104)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxExtensions.addAssign_operation (var_syntaxComponentName_3847.readProperty_string (), var_syntaxComponentName_3847, var_nonterminalDeclarationList_3911, var_ruleList_3982  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 105)) ;
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
  GALGAS_lstring var_mNonterminalName_4837 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 119)) ;
  GALGAS_nonTerminalLabelListAST var_labels_4911 = GALGAS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterListAST var_firstBranchFormalParameters_5002 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_5002, inCompiler) ;
  var_labels_4911.addAssign_operation (GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 122)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_5002, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 122))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 125)) ;
      GALGAS_lstring var_labelName_5168 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 126)) ;
      GALGAS_formalParameterListAST var_formalParameters_5259 ;
      nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameters_5259, inCompiler) ;
      var_labels_4911.addAssign_operation (var_labelName_5168, var_formalParameters_5259, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 128)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssign_operation (var_mNonterminalName_4837, var_labels_4911  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 130)) ;
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
  GALGAS_formalParameterListAST var_mFormalParameters_5900 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mFormalParameters_5900, inCompiler) ;
  GALGAS_location var_endOfArguments_5926 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 142)) ;
  GALGAS_syntaxInstructionList var_mSyntaxInstructionList_6046 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_6046, inCompiler) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameters_5900, var_endOfArguments_5926, var_mSyntaxInstructionList_6046, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 149))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 144)) ;
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
  GALGAS_lstring var_mNonterminalName_6471 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 157)) ;
  GALGAS_lstring var_labelName_6520 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 158)), inCompiler COMMA_HERE) ;
  GALGAS_syntaxRuleLabelListAST var_mLabelList_6571 = GALGAS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_6520, var_mLabelList_6571, inCompiler) ;
    if (select_galgas_33_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 163)) ;
      var_labelName_6520 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 164)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssign_operation (var_mNonterminalName_6471, var_mLabelList_6571  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 166)) ;
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
  outArgument_outSyntaxInstructionList = GALGAS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        GALGAS_semanticInstructionAST var_instruction_7399 ;
        nt_semantic_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7399, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_7399  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 183)) ;
      } break ;
      case 2: {
        GALGAS_syntaxInstructionAST var_instruction_7531 ;
        nt_syntax_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_7531, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_7531  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 186)) ;
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
          GALGAS_string var_separator_7672 = GALGAS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 192)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_separator_7672.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 193)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 193)).boolEnum () ;
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
  GALGAS_listOfSyntaxInstructionList var_mRepeatBranchList_2298 = GALGAS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 45)) ;
    GALGAS_syntaxInstructionList var_mInstructionList_2457 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_2457, inCompiler) ;
    var_mRepeatBranchList_2298.addAssign_operation (var_mInstructionList_2457, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 47))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 47)) ;
    if (select_galgas_33_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 50)) ;
  GALGAS_location var_endOf_5F_repeat_5F_instruction_2572 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 51)) ;
  outArgument_outInstruction = GALGAS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_2088, var_mRepeatedInstructionList_2212, var_endOf_5F_repeated_5F_instructions_2245, var_mRepeatBranchList_2298, var_endOf_5F_repeat_5F_instruction_2572, inCompiler COMMA_HERE) ;
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
  GALGAS_listOfSyntaxInstructionList var_mSelectBranchList_2016 = GALGAS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GALGAS_syntaxInstructionList var_il_2148 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2148, inCompiler) ;
  var_mSelectBranchList_2016.addAssign_operation (var_il_2148, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 41))  COMMA_SOURCE_FILE ("instruction-select.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 43)) ;
    GALGAS_syntaxInstructionList var_instructionList_2300 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2300, inCompiler) ;
    var_mSelectBranchList_2016.addAssign_operation (var_instructionList_2300, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 45))  COMMA_SOURCE_FILE ("instruction-select.galgas", 45)) ;
    if (select_galgas_33_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 48)) ;
  GALGAS_location var_endOf_5F_select_5F_instruction_2412 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 49)) ;
  outArgument_outInstruction = GALGAS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_1964, var_mSelectBranchList_2016, var_endOf_5F_select_5F_instruction_2412, inCompiler COMMA_HERE) ;
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
  outArgument_outIndexNameList = GALGAS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_indexName_3132 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 58)) ;
      GALGAS_lstring var_postfixName_3194 ;
      switch (select_galgas_33_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
        var_postfixName_3194 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 61)) ;
      } break ;
      case 2: {
        var_postfixName_3194 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 63)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssign_operation (var_indexName_3132, var_postfixName_3194  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 65)) ;
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
  GALGAS_listOfSyntaxInstructionList var_mParseDoBranchList_2026 = GALGAS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GALGAS_syntaxInstructionList var_il_2159 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_il_2159, inCompiler) ;
  var_mParseDoBranchList_2026.addAssign_operation (var_il_2159, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 42))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 44)) ;
    GALGAS_syntaxInstructionList var_instructionList_2316 ;
    nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructionList_2316, inCompiler) ;
    var_mParseDoBranchList_2026.addAssign_operation (var_instructionList_2316, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 46))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 46)) ;
    if (select_galgas_33_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 49)) ;
  GALGAS_location var_endOfInstruction_2429 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 50)) ;
  outArgument_outInstruction = GALGAS_parseRewindInstruction::init_21__21__21_ (var_instructionLocation_1972, var_mParseDoBranchList_2026, var_endOfInstruction_2429, inCompiler COMMA_HERE) ;
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
  outArgument_outElseInstructionList = GALGAS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
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
  GALGAS_location var_instructionLocation_3515 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 77)) ;
  GALGAS_semanticExpressionAST var_whenExpression_3630 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenExpression_3630, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_3653 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 80)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_3778 ;
  nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_whenInstructionList_3778, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_3806 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 82)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_3943 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_3943, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_3971 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 86)) ;
  outArgument_outInstruction = GALGAS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_3515, var_whenExpression_3630, var_endOfWhenExpression_3653, var_whenInstructionList_3778, var_endOfWhenInstructions_3806, var_elseInstructionList_3943, var_endOfElseInstructions_3971, inCompiler COMMA_HERE) ;
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
  GALGAS_lstringlist var_syntaxComponents_2430 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 57)) ;
    GALGAS_lstring var_syntaxComponent_2511 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 58)) ;
    var_syntaxComponents_2430.addAssign_operation (var_syntaxComponent_2511  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 59)) ;
    if (select_galgas_33_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mStartSymbol_2643 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 63)) ;
  GALGAS_nonTerminalLabelListAST var_mLabelList_2687 = GALGAS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 65)), inCompiler COMMA_HERE), var_mLabelList_2687, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 68)) ;
      GALGAS_lstring var_labelName_2896 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 69)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (ioArgument_ioDeclarations, var_labelName_2896, var_mLabelList_2687, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_lstringlist var_mUnusedNonterminalList_3039 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 76)) ;
      GALGAS_lstring var_nonterminalSymbolName_3153 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 77)) ;
      var_mUnusedNonterminalList_3039.addAssign_operation (var_nonterminalSymbolName_3153  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 78)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GALGAS_bool (false), var_hasIndexing_1920, var_mGrammarName_2123, var_mGrammarClass_2201, var_syntaxComponents_2430, var_mStartSymbol_2643, var_mLabelList_2687, var_mUnusedNonterminalList_3039, var_hasTranslateFeature_2254, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 82)) ;
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
  GALGAS_stringset var_argumentNameSet_3904 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_3957 = GALGAS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_GrammarComponentSyntax_5 (inCompiler) == 2) {
      GALGAS_lstring var_argumentName_4062 ;
      nt_label_5F_formal_5F_parameter_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentName_4062, var_mFormalParameterList_3957, inCompiler) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_argumentNameSet_3904.getter_hasKey (var_argumentName_4062.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 104)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_4062.readProperty_location (), GALGAS_string ("there is already an argument named '").add_operation (var_argumentName_4062.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 105)) ;
        }
      }
      var_argumentNameSet_3904.addAssign_operation (var_argumentName_4062.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 107)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameterList_3957, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 109)) ;
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
  GALGAS_lstring var_selector_4735 ;
  switch (select_galgas_33_GrammarComponentSyntax_6 (inCompiler)) {
  case 1: {
    var_selector_4735 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 119)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 121)) ;
    var_selector_4735 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 122)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_4894 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_4894, inCompiler) ;
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
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_4735, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 132)), var_mTypeName_4894, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 130)) ;
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
  GALGAS_lstring var_selector_5505 ;
  switch (select_galgas_33_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
    var_selector_5505 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 145)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 147)) ;
    var_selector_5505 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 150)) ;
  GALGAS_lstring var_mTypeName_5674 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_5674, inCompiler) ;
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
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_5505, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 159)), var_mTypeName_5674, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 157)) ;
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
  GALGAS_lstring var_selector_6293 ;
  switch (select_galgas_33_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_selector_6293 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 172)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 174)) ;
    var_selector_6293 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_6454 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_6454, inCompiler) ;
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
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_6293, GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 185)), var_mTypeName_6454, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 183)) ;
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
  GALGAS_lstring var_selector_7068 ;
  switch (select_galgas_33_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
    var_selector_7068 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 198)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 200)) ;
    var_selector_7068 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 201)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_7227 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mTypeName_7227, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 204)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_7068, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 207)), var_mTypeName_7227, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 205)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 78)) ;
    var_referenceGrammar_3308 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_selector_3483 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 82)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_selector_3483.readProperty_string ().objectCompare (GALGAS_string ("sourceFilePath"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3483.readProperty_location (), GALGAS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 84)) ;
    }
  }
  switch (select_galgas_33_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_3689 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 88)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::notEqual, var_typeName_3689.readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3689.readProperty_location (), GALGAS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 90)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isUnused_3841 ;
  switch (select_galgas_33_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_3841 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 97)) ;
    var_isUnused_3841 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSourceFileVariableName_3967 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 102)) ;
  GALGAS_semanticInstructionListAST var_mInstructionList_4093 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mInstructionList_4093, inCompiler) ;
  GALGAS_location var_endOfInstructionList_4118 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 105)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssign_operation (var_mSourceFileExtension_3186, var_mSourceFileHelp_3250, var_mSourceFileVariableName_3967, var_isUnused_3841, var_referenceGrammar_3308, var_mInstructionList_4093, var_endOfInstructionList_4118  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 106)) ;
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
  outArgument_outExpressionList = GALGAS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_selector_5247 ;
      switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_5247 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 140)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 142)) ;
        var_selector_5247 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 143)) ;
      } break ;
      case 3: {
        var_selector_5247 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 145)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_semanticExpressionAST var_expression_5480 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_5480, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_5247, var_expression_5480, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 148))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 148)) ;
      if (select_galgas_34_ExpressionSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 150)) ;
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
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 140)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 142)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_expression_parse (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 150)) ;
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
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 140)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 142)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 150)) ;
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
  outArgument_outExpressionList = GALGAS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_5930 ;
    switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
    case 1: {
      var_selector_5930 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 164)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 166)) ;
      var_selector_5930 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 167)) ;
    } break ;
    case 3: {
      var_selector_5930 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 169)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_semanticExpressionAST var_expression_6145 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_6145, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_5930, var_expression_6145, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 172))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 172)) ;
    if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 174)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 164)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 166)) ;
    } break ;
    case 3: {
    } break ;
    default:
      break ;
    }
    nt_expression_parse (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 174)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 164)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 166)) ;
    } break ;
    case 3: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 174)) ;
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
  GALGAS_stringlist var_literalStringList_2636 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_2692 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 60)) ;
    var_literalStringList_2636.addAssign_operation (var_literalString_2692.readProperty_string ()  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 61)) ;
    if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::init_21__21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)), var_literalStringList_2636, inCompiler COMMA_HERE) ;
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
  GALGAS_lstring var_typeName_4297 ;
  nt_optional_5F_type_ (var_typeName_4297, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 115)) ;
  GALGAS_actualOutputArgumentList var_expressionList_4384 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4384, inCompiler) ;
  GALGAS_location var_endOfExpression_4407 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 118)) ;
  outArgument_outExpression = GALGAS_initializerCallAST::init_21__21__21_ (var_typeName_4297, var_expressionList_4384, var_endOfExpression_4407, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 115)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 118)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 115)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 118)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_4816 ;
  nt_optional_5F_type_ (var_typeName_4816, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 132)) ;
  GALGAS_location var_endOfExpression_4852 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 133)) ;
  outArgument_outExpression = GALGAS_initializerCallAST::init_21__21__21_ (var_typeName_4816, GALGAS_actualOutputArgumentList::init (inCompiler COMMA_HERE), var_endOfExpression_4852, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 132)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("expression-initializer.galgas", 132)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 146)) ;
  GALGAS_location var_endOfExpression_5231 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 147)) ;
  outArgument_outExpression = GALGAS_initializerCallAST::init_21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("expression-initializer.galgas", 149)), GALGAS_actualOutputArgumentList::init (inCompiler COMMA_HERE), var_endOfExpression_5231, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 146)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 146)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_5617 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 161)) ;
  GALGAS_actualOutputArgumentList var_expressionList_5721 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_5721, inCompiler) ;
  GALGAS_location var_endOfExpression_5744 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 163)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 164)) ;
  outArgument_outExpression = GALGAS_initializerCallAST::init_21__21__21_ (var_typeName_5617, var_expressionList_5721, var_endOfExpression_5744, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 161)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 164)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas", 160)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 161)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 164)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i25_ (GALGAS_lstring & outArgument_outTypeName,
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i25_parse (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_optional_5F_type_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3329 ;
  nt_optional_5F_type_ (var_typeName_3329, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 87)) ;
  GALGAS_location var_startOfExpression_3354 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 88)) ;
  GALGAS_lstring var_constructorName_3444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 90)) ;
  GALGAS_actualOutputArgumentList var_expressionList_3518 ;
  switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
    var_expressionList_3518 = GALGAS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 96)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3518, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 98)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfExpression_3677 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 100)) ;
  outArgument_outExpression = GALGAS_classFuncExpressionAST::init_21__21__21__21_ (var_typeName_3329, var_constructorName_3444, var_expressionList_3518, var_startOfExpression_3354.getter_union (var_endOfExpression_3677, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 105)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_parse (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_3816 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 92)) ;
  GALGAS_actualOutputArgumentList var_expressionList_3936 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3936, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 94)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::init_21__21_ (var_functionName_3816, var_expressionList_3936, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 92)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 94)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 92)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 53)) ;
  GALGAS_lstring var_typeName_2475 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 54)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::init_21_ (var_typeName_2475, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_2339 ;
  nt_optional_5F_type_ (var_typeName_2339, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 56)) ;
  GALGAS_collectionValueElementList var_expressionList_2392 = GALGAS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_semanticExpressionAST var_expression_2509 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_2509, inCompiler) ;
      var_expressionList_2392.addAssign_operation (var_expression_2509, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 62))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 62)) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 64)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_collectionValueAST::init_21__21__21_ (var_typeName_2339, var_expressionList_2392, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 67)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 56)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_parse (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 64)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 68)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 56)) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 64)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 68)) ;
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
    switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
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
      switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 66)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 71)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 74)) ;
      switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 66)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 71)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 74)) ;
      switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
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
    switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
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
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_selector_13057 ;
      GALGAS_formalArgumentPassingModeAST var_formalParameterPassingMode_13108 ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_13057 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 402)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 404)) ;
        var_selector_13057 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 405)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 406)) ;
      } break ;
      case 3: {
        var_selector_13057 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 408)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 409)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 411)) ;
        var_selector_13057 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 412)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 413)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 414)) ;
      } break ;
      case 5: {
        var_selector_13057 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 416)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 417)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 418)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 420)) ;
        var_selector_13057 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 421)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 422)) ;
      } break ;
      case 7: {
        var_selector_13057 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 424)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 425)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 427)) ;
        var_selector_13057 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 428)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 429)) ;
      } break ;
      case 9: {
        var_selector_13057 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 431)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 432)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 434)) ;
        var_selector_13057 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 435)) ;
        var_formalParameterPassingMode_13108 = GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 436)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterTypeName_14566 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_14566, inCompiler) ;
      GALGAS_bool var_isUnused_14608 ;
      switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
      case 1: {
        var_isUnused_14608 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 443)) ;
        var_isUnused_14608 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterName_14762 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 446)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_13057, var_formalParameterPassingMode_13108, var_formalParameterTypeName_14566, var_formalParameterName_14762, var_isUnused_14608  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 447)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 454)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 457)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 404)) ;
      } break ;
      case 3: {
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 411)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 413)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 416)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 417)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 420)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 424)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 427)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 431)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 434)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 443)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 446)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 454)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 457)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 394)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 401)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 404)) ;
      } break ;
      case 3: {
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 411)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 413)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 416)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 417)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 420)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 424)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 427)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 431)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 434)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 443)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 446)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 454)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 457)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                                 GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 466)) ;
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_ (ioArgument_ioDeclarations, outArgument_outActualParameterList, inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 473)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 476)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 466)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_parse (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 473)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 476)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 466)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 473)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 476)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_selector_16033 ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    var_selector_16033 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 487)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 489)) ;
    var_selector_16033 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 490)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 493)) ;
    GALGAS_lstringlist var_poisonedVarNameList_16186 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_16186, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::init_21__21_ (var_selector_16033, var_poisonedVarNameList_16186, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 495)) ;
  } break ;
  case 2: {
    GALGAS_lbigint var_count_16338 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 497)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 498)) ;
    GALGAS_uint var_n_16364 = var_count_16338.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 499)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, var_selector_16033.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?")) ;
        inCompiler->emitSemanticError (var_selector_16033.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 501)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, var_n_16364.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_count_16338.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 504)) ;
      }
    }
    if (kBoolFalse == test_2) {
      if (var_n_16364.isValid ()) {
        uint32_t variant_16603 = var_n_16364.uintValue () ;
        bool loop_16603 = true ;
        while (loop_16603) {
          loop_16603 = GALGAS_bool (ComparisonKind::greaterThan, var_n_16364.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
          if (loop_16603) {
            loop_16603 = GALGAS_bool (ComparisonKind::greaterThan, var_n_16364.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
          }
          if (loop_16603 && (0 == variant_16603)) {
            loop_16603 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 506)) ;
          }
          if (loop_16603) {
            variant_16603 -- ;
            ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::init_21__21_ (var_selector_16033.readProperty_location (), var_n_16364, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 508)) ;
            var_n_16364.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 509)) ;
          }
        }
      }
    }
  } break ;
  case 3: {
    GALGAS_lstring var_inputActualParameterName_16795 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 513)) ;
    GALGAS_lstringlist var_poisonedVarNameList_16851 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_16851, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::init_21__21__21_ (var_selector_16033, var_inputActualParameterName_16795, var_poisonedVarNameList_16851, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 515)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 521)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 522)) ;
    GALGAS_lstring var_inputActualParameterName_17122 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 523)) ;
    GALGAS_lstringlist var_poisonedVarNameList_17178 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_17178, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualSelfPropertyParameterAST::init_21__21__21_ (var_selector_16033, var_inputActualParameterName_17122, var_poisonedVarNameList_17178, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 525)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 531)) ;
    GALGAS_lstringlist var_poisonedVarNameList_17433 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_17433, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualSelfParameterAST::init_21__21__21_ (var_selector_16033, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 535)), var_poisonedVarNameList_17433, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 533)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 539)) ;
    GALGAS_lstring var_declarationTypeName_17656 ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
      var_declarationTypeName_17656 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 542)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_17656, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_inputActualParameterName_17839 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 546)) ;
    GALGAS_lstringlist var_poisonedVarNameList_17895 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_17895, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_16033, var_declarationTypeName_17656, var_inputActualParameterName_17839, var_poisonedVarNameList_17895, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 548)) ;
  } break ;
  case 7: {
    GALGAS_lstring var_declarationTypeName_18203 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_18203, inCompiler) ;
    GALGAS_lstring var_inputActualParameterName_18247 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 556)) ;
    GALGAS_lstringlist var_poisonedVarNameList_18303 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_18303, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_16033, var_declarationTypeName_18203, var_inputActualParameterName_18247, var_poisonedVarNameList_18303, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 558)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 565)) ;
    GALGAS_lstring var_declarationTypeName_18581 ;
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 1: {
      var_declarationTypeName_18581 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 568)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_18581, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GALGAS_bool var_markedAsUnused_18756 ;
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
      var_markedAsUnused_18756 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 576)) ;
      var_markedAsUnused_18756 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_inputActualParameterName_18905 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 579)) ;
    GALGAS_lstringlist var_poisonedVarNameList_18961 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_18961, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::init_21__21__21__21__21_ (var_selector_16033, var_declarationTypeName_18581, var_inputActualParameterName_18905, var_markedAsUnused_18756, var_poisonedVarNameList_18961, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 581)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 487)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 489)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 493)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 497)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 498)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 513)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 521)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 522)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 523)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 531)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 539)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 546)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 7: {
    nt_type_5F_definition_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 556)) ;
    nt_poisoned_5F_var_5F_list_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 565)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 576)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 579)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 487)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 489)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 493)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 497)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 498)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 513)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 521)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 522)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 523)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 531)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 539)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 546)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 7: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 556)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 565)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 576)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 579)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_selector_19598 ;
  switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
  case 1: {
    var_selector_19598 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 599)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 601)) ;
    var_selector_19598 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 602)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_outputInputActualParameterName_19736 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 605)) ;
    GALGAS_lstringlist var_structAttributeList_19777 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 609)) ;
        GALGAS_lstring var_structAttributeName_19878 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 610)) ;
        var_structAttributeList_19777.addAssign_operation (var_structAttributeName_19878  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 611)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::init_21__21__21_ (var_selector_19598, var_outputInputActualParameterName_19736, var_structAttributeList_19777, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 613)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_from COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 619)) ;
    GALGAS_semanticExpressionAST var_initializerCall_20182 ;
    nt_expression_ (ioArgument_ioDeclarations, var_initializerCall_20182, inCompiler) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::init_21__21_ (var_selector_19598, var_initializerCall_20182, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 621)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 623)) ;
    ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputInputSelfParameterAST::init_21_ (var_selector_19598, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 624)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 599)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 601)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 605)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 609)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 610)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_from COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 619)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 623)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 599)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 601)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 605)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 609)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 610)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_from COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 619)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 623)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GALGAS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_selector_20778 ;
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
    var_selector_20778 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 636)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 638)) ;
    var_selector_20778 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 639)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticExpressionAST var_e_20941 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_20941, inCompiler) ;
  GALGAS_location var_endOfExpressionLocation_20961 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 642)) ;
  ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::init_21__21__21_ (var_selector_20778, var_e_20941, var_endOfExpressionLocation_20961, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 643)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 636)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 638)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 636)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 638)) ;
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
  GALGAS_lstring var_selector_21914 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 669)) ;
  GALGAS_semanticExpressionAST var_e_21997 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_21997, inCompiler) ;
  GALGAS_location var_endOfExpressionLocation_22017 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 671)) ;
  ioArgument_ioActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::init_21__21__21_ (var_selector_21914, var_e_21997, var_endOfExpressionLocation_22017, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 672)) ;
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
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 686)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_selector_22705 ;
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        var_selector_22705 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 692)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 694)) ;
        var_selector_22705 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 695)) ;
      } break ;
      case 3: {
        var_selector_22705 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 697)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_isConstant_22890 ;
      switch (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler)) {
      case 1: {
        var_isConstant_22890 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 703)) ;
        var_isConstant_22890 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterTypeName_23060 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_23060, inCompiler) ;
      GALGAS_bool var_isUnused_23102 ;
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
        var_isUnused_23102 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 711)) ;
        var_isUnused_23102 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterName_23256 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 714)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_22705, var_formalParameterTypeName_23060, var_formalParameterName_23256, var_isUnused_23102, var_isConstant_22890  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 715)) ;
      if (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 722)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 725)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 686)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 692)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 694)) ;
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
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 703)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_parse (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 711)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 714)) ;
      if (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 722)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 725)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 686)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 692)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 694)) ;
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
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 703)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 711)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 714)) ;
      if (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 722)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 725)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_ (GALGAS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
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
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 738)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 739)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_varName_23955 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 741)) ;
    outArgument_outPoisonedVarNameList.addAssign_operation (var_varName_23955  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 742)) ;
    if (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 744)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 746)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 738)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 739)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 741)) ;
    if (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 744)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 746)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 738)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 739)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 741)) ;
    if (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 744)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 746)) ;
}

