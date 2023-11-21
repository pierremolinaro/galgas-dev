#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_0 (inCompiler) == 2) {
      GALGAS_stringset joker_9119 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 244)) ;
      nt_declaration_ (ioArgument_ioDeclarations, joker_9119, inCompiler) ;
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
  GALGAS_AccessControlAST var_accessControl_10783 ;
  nt_acces_5F_control_ (var_accessControl_10783, inCompiler) ;
  GALGAS_bool var_isConstant_10811 ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 278)) ;
    var_isConstant_10811 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 281)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_10783, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 282)) ;
    var_isConstant_10811 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_11052 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyTypeName_11052, inCompiler) ;
  GALGAS_lstring var_propertyName_11091 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 286)) ;
  GALGAS_lstringlist var_featureList_11112 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 287)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
      GALGAS_lstring var_featureName_11196 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 290)) ;
      var_featureList_11112.addAssign_operation (var_featureName_11196  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 291)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_propertyInCollectionInitializationAST var_initialization_11297 ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
    var_initialization_11297 = GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 295)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 297)) ;
    GALGAS_semanticExpressionAST var_expression_11393 ;
    nt_expression_ (var_expression_11393, inCompiler) ;
    var_initialization_11297 = GALGAS_propertyInCollectionInitializationAST::constructor_some (var_expression_11393  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 299)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_isConstant_10811, var_propertyTypeName_11052, var_propertyName_11091, var_accessControl_10783, var_featureList_11112, var_initialization_11297  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 301)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_acces_5F_control_parse (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 278)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 281)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 286)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 290)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 297)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 278)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 281)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 286)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 290)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 297)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 316)) ;
  GALGAS_lstring var_mFilewrapperName_12090 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 317)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 318)) ;
  GALGAS_lstring var_mFilewrapperPath_12176 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_12227 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_12227, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_12296 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_12296, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_12413 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_filewrapperTemplateList_12413, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 326)), var_mFilewrapperName_12090, var_mFilewrapperPath_12176, var_filewrapperTextFileExtensionList_12227, var_filewrapperBinaryFileExtensionList_12296, var_filewrapperTemplateList_12413  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 323))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 323)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 316)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 317)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 316)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 317)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 318)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 319)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 338)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 339)) ;
  GALGAS_lstring var_mFilewrapperName_13088 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  GALGAS_lstring var_mFilewrapperPath_13174 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_13225 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_13225, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_13294 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_13294, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_13411 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_filewrapperTemplateList_13411, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 349)), var_mFilewrapperName_13088, var_mFilewrapperPath_13174, var_filewrapperTextFileExtensionList_13225, var_filewrapperBinaryFileExtensionList_13294, var_filewrapperTemplateList_13411  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 346))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 346)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 338)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 339)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 338)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 339)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 340)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 341)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 342)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_14098 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 366)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_14098  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 367)) ;
      if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 369)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 372)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 366)) ;
      if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 369)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 372)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 362)) ;
  switch (select_galgas_34_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 366)) ;
      if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 369)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 372)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 378)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 379)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_14558 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 383)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_14558  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 384)) ;
      if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 386)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 389)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 379)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 383)) ;
      if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 386)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 389)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 379)) ;
  switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 383)) ;
      if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 386)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 389)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                           GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 397)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 398)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 401)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_15152 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_15209 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 404)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_15281 = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 405)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 406)) ;
      switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          GALGAS_lstring var_selector_15397 ;
          switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
          case 1: {
            var_selector_15397 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 412)) ;
          } break ;
          case 2: {
            var_selector_15397 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 414)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              GALGAS_bool test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnUselessSelector.readProperty_value ()) ;
              if (kBoolTrue == test_3.boolEnum ()) {
                test_3 = GALGAS_bool (kIsEqual, var_selector_15397.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
              }
              test_2 = test_3.boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (var_selector_15397.readProperty_location (), GALGAS_string ("check no useless selector: this selector should be removed"), fixItArray4  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 416)) ;
              }
            }
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_typeName_15815 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_typeName_15815, inCompiler) ;
          GALGAS_bool var_isUnused_15844 ;
          switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
            var_isUnused_15844 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 424)) ;
            var_isUnused_15844 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_16003 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 427)) ;
          var_filewrapperTemplateFormalInputParameters_15281.addAssign_operation (var_selector_15397, var_typeName_15815, var_argumentName_16003, var_isUnused_15844  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 428)) ;
          if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 430)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 433)) ;
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_15152, var_mFilewrapperTemplatePath_15209, var_filewrapperTemplateFormalInputParameters_15281  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 434)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 439)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 397)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 401)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 404)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 406)) ;
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
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 414)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_parse (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 424)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 427)) ;
          if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 430)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 433)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 439)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 397)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 401)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 402)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 403)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 404)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 406)) ;
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
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 414)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 424)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 427)) ;
          if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 430)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 433)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 439)) ;
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
  GALGAS_bool var_isAbstract_3250 ;
  switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
    var_isAbstract_3250 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 102)) ;
    var_isAbstract_3250 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 105)) ;
  GALGAS_lstring var_className_3391 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 106)) ;
  GALGAS_lstring var_superClassName_3443 ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    var_superClassName_3443 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 109)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 111)) ;
    var_superClassName_3443 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList_3632 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_16 (inCompiler) == 2) {
      GALGAS_lstring var_classFeatureName_3721 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
      var_classFeatureList_3632.addAssign_operation (var_classFeatureName_3721  COMMA_SOURCE_FILE ("type-class.galgas", 118)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_3859 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 122)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyList_3859, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_className_3391, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_isAbstract_3250, GALGAS_bool (true), var_className_3391, var_superClassName_3443, var_classFeatureList_3632, var_propertyList_3859  COMMA_SOURCE_FILE ("type-class.galgas", 130))  COMMA_SOURCE_FILE ("type-class.galgas", 130)) ;
  GALGAS_lstring temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_superClassName_3443.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = var_superClassName_3443 ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_lstring::constructor_new (var_superClassName_3443.readProperty_string ().add_operation (GALGAS_string ("-weak"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 146)), var_superClassName_3443.readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 146)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool (false), var_className_3391, GALGAS_lstring::constructor_new (var_className_3391.readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 143)), var_className_3391.readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 143)), temp_2, var_classFeatureList_3632, var_propertyList_3859  COMMA_SOURCE_FILE ("type-class.galgas", 140))  COMMA_SOURCE_FILE ("type-class.galgas", 140)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 102)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 105)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 106)) ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 111)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 102)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 105)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 106)) ;
  switch (select_galgas_34_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 111)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
  GALGAS_lstring var_mEnumTypeName_2831 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 83)) ;
  GALGAS_enumConstantList var_mConstantList_2903 = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
    GALGAS_lstring var_constantName_2970 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 87)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_3007 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 88)) ;
    switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 91)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_3108 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
        GALGAS_lstring var_associatedValueName_3156 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
        var_associatedValueTypeList_3007.addAssign_operation (var_associatedValueType_3108, var_associatedValueName_3156  COMMA_SOURCE_FILE ("type-enum.galgas", 95)) ;
        if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 98)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_2903.addAssign_operation (var_constantName_2970, var_associatedValueTypeList_3007  COMMA_SOURCE_FILE ("type-enum.galgas", 100)) ;
    if (select_galgas_34_DeclarationsSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_method_5F_declaration_ (var_mEnumTypeName_2831, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 114)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName_2831, var_mConstantList_2903, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-enum.galgas", 119))  COMMA_SOURCE_FILE ("type-enum.galgas", 115))  COMMA_SOURCE_FILE ("type-enum.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 83)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 87)) ;
    switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 91)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
        if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 98)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 114)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 83)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 86)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 87)) ;
    switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 91)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 93)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
        if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 98)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 114)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  GALGAS_lstring var_graphTypeName_2474 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  GALGAS_lstring var_associatedListTypeName_2547 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 69)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_2594 = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      GALGAS_lstring var_insertName_2717 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
      GALGAS_lstring var_errorMessage_2789 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 77)) ;
      var_graphInsertModifierList_2594.addAssign_operation (var_insertName_2717, var_errorMessage_2789  COMMA_SOURCE_FILE ("type-graph.galgas", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName_2474, var_associatedListTypeName_2547, var_graphInsertModifierList_2594  COMMA_SOURCE_FILE ("type-graph.galgas", 81))  COMMA_SOURCE_FILE ("type-graph.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 74)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 76)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
  GALGAS_lstring var_listTypeName_1989 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 53)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2100 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyList_2100, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_listTypeName_1989, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 61)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_listTypeName_1989, var_propertyList_2100  COMMA_SOURCE_FILE ("type-list.galgas", 62))  COMMA_SOURCE_FILE ("type-list.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 61)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 71)) ;
  GALGAS_lstring var_mDictTypeName_2656 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 75)) ;
  GALGAS_lstring var_keyTypeName_2773 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 76)) ;
  GALGAS_lstringlist var_mapAttributeList_2828 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_29 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_2895 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 81)) ;
      var_mapAttributeList_2828.addAssign_operation (var_attribute_2895  COMMA_SOURCE_FILE ("type-dict.galgas", 82)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 85)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2988 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 86)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyList_2988, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_mDictTypeName_2656, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool (false), var_mDictTypeName_2656, var_keyTypeName_2773, var_mapAttributeList_2828, var_propertyList_2988  COMMA_SOURCE_FILE ("type-dict.galgas", 94))  COMMA_SOURCE_FILE ("type-dict.galgas", 94)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 71)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 75)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 76)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 81)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 85)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 71)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 75)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 76)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 81)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 85)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 178)) ;
  GALGAS_lstring var_mMapTypeName_6489 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 180)) ;
  GALGAS_lstringlist var_mapAttributeList_6597 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 182)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_31 (inCompiler) == 2) {
      GALGAS_lstring var_attribute_6664 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 185)) ;
      var_mapAttributeList_6597.addAssign_operation (var_attribute_6664  COMMA_SOURCE_FILE ("type-map.galgas", 186)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 189)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_6757 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 190)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_6812 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 191)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_6888 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 192)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_6943 = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 193)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_7009 = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 194)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_propertyList_6757, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_6812, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_6888, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_6943, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_7009, inCompiler) ;
    } break ;
    case 7: {
      nt_method_5F_declaration_ (var_mMapTypeName_6489, ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 209)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_6489, var_mapAttributeList_6597, var_propertyList_6757, var_mInsertMethodList_6812, var_mSearchMethodList_6888, var_mRemoveMethodList_6943, var_insertOrReplaceDeclarationListAST_7009  COMMA_SOURCE_FILE ("type-map.galgas", 210))  COMMA_SOURCE_FILE ("type-map.galgas", 210)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 178)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 180)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 185)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 189)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
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
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 209)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 178)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 180)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 185)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 189)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
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
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 209)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 225)) ;
  GALGAS_lstring var_methodName_8084 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 226)) ;
  GALGAS_bool var_locationAttribute_8109 ;
  switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
    var_locationAttribute_8109 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_attribute_8201 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 231)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_attribute_8201.readProperty_string ().objectCompare (GALGAS_string ("location"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_locationAttribute_8109 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%location")) ;
      inCompiler->emitSemanticError (var_attribute_8201.readProperty_location (), GALGAS_string ("only the %location is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-map.galgas", 235)) ;
      var_locationAttribute_8109.drop () ; // Release error dropped variable
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 239)) ;
  GALGAS_lstring var_errorMessage_8486 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_8084, var_errorMessage_8486, var_locationAttribute_8109  COMMA_SOURCE_FILE ("type-map.galgas", 241)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 225)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 226)) ;
  switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 231)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 239)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_declaration_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 225)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 226)) ;
  switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 231)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 239)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  GALGAS_lstring var_mMethodName_8828 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 249)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 250)) ;
  GALGAS_lstring var_mErrorMessage_8895 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 251)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_8828, var_mErrorMessage_8895  COMMA_SOURCE_FILE ("type-map.galgas", 252)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 249)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 250)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 251)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_declaration_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 249)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 250)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 251)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 260)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 261))  COMMA_SOURCE_FILE ("type-map.galgas", 261)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 260)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 267)) ;
  GALGAS_lstring var_mMethodName_9556 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 269)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 270)) ;
  GALGAS_lstring var_mErrorMessage_9623 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 271)) ;
  GALGAS_lstring var_mShadowErrorMessage_9654 ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_9654 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 274))  COMMA_SOURCE_FILE ("type-map.galgas", 274)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 276)) ;
    var_mShadowErrorMessage_9654 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 277)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_9556, var_mErrorMessage_9623, var_mShadowErrorMessage_9654  COMMA_SOURCE_FILE ("type-map.galgas", 279)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 267)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 269)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 270)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 271)) ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 276)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 277)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 267)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 269)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 270)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 271)) ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 276)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 277)) ;
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
    if (select_galgas_34_DeclarationsSyntax_35 (inCompiler) == 2) {
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
    if (select_galgas_34_DeclarationsSyntax_36 (inCompiler) == 2) {
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
    if (select_galgas_34_DeclarationsSyntax_35 (inCompiler) == 2) {
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
    if (select_galgas_34_DeclarationsSyntax_36 (inCompiler) == 2) {
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
    if (select_galgas_34_DeclarationsSyntax_35 (inCompiler) == 2) {
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
    if (select_galgas_34_DeclarationsSyntax_36 (inCompiler) == 2) {
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
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
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
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
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
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
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
    switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
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
    switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
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
    switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
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
  GALGAS_lstring var_selector_4021 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 93)) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 94)), GALGAS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 94)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_selector_4021.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_selector_4021.readProperty_location (), GALGAS_string ("only '\?' is allowed here"), fixItArray2  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 96)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 93)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                      GALGAS_lstring & outArgument_outTypeName,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 109)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 111)), GALGAS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 111)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_parse (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 109)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 112)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 109)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i35_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 78)) ;
  GALGAS_lstring var_className_3209 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 80)) ;
  GALGAS_lstring var_mGetterName_3295 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 81)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_3418 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_3418, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 83)) ;
  GALGAS_lstring var_returnedTypeName_3529 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_3529, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_3589 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 87)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_3589.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_3209, var_mGetterName_3295, var_mFormalInputParameterList_3418, var_returnedTypeName_3529  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 90))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 90)) ;
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
  GALGAS_lstring var_mGetterName_4256 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 106)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_4379 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_4379, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 108)) ;
  GALGAS_lstring var_returnedTypeName_4490 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_4490, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_4550 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 112)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_4550.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 113)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_4256, var_mFormalInputParameterList_4379, var_returnedTypeName_4490  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 115))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 115)) ;
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
    var_resultVariableName_4366 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 108))  COMMA_SOURCE_FILE ("extension-getter.galgas", 108)) ;
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
  GALGAS_lstring var_resultVariableName_5632 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 137))  COMMA_SOURCE_FILE ("extension-getter.galgas", 137)) ;
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
  GALGAS_lstring var_className_3308 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 83)) ;
  GALGAS_lstring var_mGetterName_3402 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 84)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_3533 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_3533, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 86)) ;
  GALGAS_lstring var_returnedTypeName_3644 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_3644, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_3697 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 89)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_3697.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 90)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_3308, var_mGetterName_3402, var_mFormalInputParameterList_3533, var_returnedTypeName_3644  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 93))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 93)) ;
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
  GALGAS_lstring var_mGetterName_4396 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 110)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_4527 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_4527, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)) ;
  GALGAS_lstring var_returnedTypeName_4638 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_returnedTypeName_4638, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_4691 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 115)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_4691.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 116)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_4396, var_mFormalInputParameterList_4527, var_returnedTypeName_4638  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119)) ;
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
    var_resultVariableName_4526 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 111))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 111)) ;
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
    var_resultVariableName_5814 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 145))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 145)) ;
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



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 433)) ;
  GALGAS_lstring var_lexiqueComponentName_16821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 435)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 436)) ;
  GALGAS_templateDelimitorListAST var_templateDelimitorList_16910 = GALGAS_templateDelimitorListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 438)) ;
  GALGAS_templateReplacementListAST var_templateReplacementList_16973 = GALGAS_templateReplacementListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 439)) ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeList_17035 = GALGAS_lexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 440)) ;
  GALGAS_lexicalStyleListAST var_lexicalStyleList_17090 = GALGAS_lexicalStyleListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 441)) ;
  GALGAS_terminalDeclarationListAST var_terminalDeclarationList_17148 = GALGAS_terminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 442)) ;
  GALGAS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_17219 = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 443)) ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationList_17293 = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 444)) ;
  GALGAS_lexicalRuleListAST var_lexicalRuleList_17353 = GALGAS_lexicalRuleListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 445)) ;
  GALGAS_indexingListAST var_indexingListAST_17399 = GALGAS_indexingListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 446)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_16910, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_16973, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_17035, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_ (var_lexicalStyleList_17090, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_17148, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_17293, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_17353, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_17353, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_17219, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_17399, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 469)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_lexiqueComponentAST::constructor_new (GALGAS_bool (false), var_lexiqueComponentName_16821, GALGAS_bool (false), var_templateDelimitorList_16910, var_templateReplacementList_16973, var_lexicalAttributeList_17035, var_lexicalStyleList_17090, var_terminalDeclarationList_17148, var_lexicalMessageDeclarationList_17219, var_lexicalListDeclarationList_17293, var_lexicalRuleList_17353, var_indexingListAST_17399  COMMA_SOURCE_FILE ("lexique-component.galgas", 470))  COMMA_SOURCE_FILE ("lexique-component.galgas", 470)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 433)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 435)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 436)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 469)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 433)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 435)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 436)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 469)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GALGAS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 489)) ;
  GALGAS_lstring var_indexName_18779 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 491)) ;
  GALGAS_lstring var_indexComment_18858 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 492)) ;
  ioArgument_ioIndexingListAST.addAssign_operation (var_indexName_18779, var_indexComment_18858  COMMA_SOURCE_FILE ("lexique-component.galgas", 493)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 489)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 491)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 492)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 489)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 491)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 492)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 500)) ;
  GALGAS_lstring var_messageName_19204 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 501)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 502)) ;
  GALGAS_lstring var_messageValue_19253 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 503)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssign_operation (var_messageName_19204, var_messageValue_19253  COMMA_SOURCE_FILE ("lexique-component.galgas", 504)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 500)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 501)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 502)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 503)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 500)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 501)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 502)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 503)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  GALGAS_lstring var_listName_19593 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssign_operation (GALGAS_lexicalImplicitRuleAST::constructor_new (var_listName_19593  COMMA_SOURCE_FILE ("lexique-component.galgas", 513))  COMMA_SOURCE_FILE ("lexique-component.galgas", 513)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 519)) ;
  GALGAS_lexicalExpressionAST var_lexicalRuleExpression_19947 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_19947, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  GALGAS_lexicalInstructionListAST var_instructionList_20012 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 522)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_20012, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 527)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssign_operation (GALGAS_lexicalExplicitRuleAST::constructor_new (var_lexicalRuleExpression_19947, var_instructionList_20012  COMMA_SOURCE_FILE ("lexique-component.galgas", 528))  COMMA_SOURCE_FILE ("lexique-component.galgas", 528)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 519)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 527)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 519)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 527)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 534)) ;
  GALGAS_lexicalInstructionAST var_instruction_20495 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_20495, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_instruction_20495  COMMA_SOURCE_FILE ("lexique-component.galgas", 536)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 534)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 534)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GALGAS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  GALGAS_lexicalExpressionAST var_whileExpression_20821 ;
  nt_lexical_5F_expression_ (var_whileExpression_20821, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 544)) ;
  GALGAS_lexicalInstructionListAST var_whileInstructionList_20880 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 545)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_20880, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssign_operation (var_whileExpression_20821, var_whileInstructionList_20880  COMMA_SOURCE_FILE ("lexique-component.galgas", 550)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 544)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 544)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_21324 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 556)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCharacterInputArgumentAST::constructor_new (var_character_21324  COMMA_SOURCE_FILE ("lexique-component.galgas", 557)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 556)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 556)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lbigint var_unsignedValue_21676 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 563)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (var_unsignedValue_21676  COMMA_SOURCE_FILE ("lexique-component.galgas", 564)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 563)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 563)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_location var_currentLocation_22021 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 570)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 571)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (var_currentLocation_22021  COMMA_SOURCE_FILE ("lexique-component.galgas", 572)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 571)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 571)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lstring var_idf_22417 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 578)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GALGAS_lexicalAttributeInputArgumentAST::constructor_new (var_idf_22417  COMMA_SOURCE_FILE ("lexique-component.galgas", 580)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 582)) ;
    GALGAS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_22575 = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 583)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        GALGAS_lstring var_selector_22649 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 586)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_22649.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("!")) ;
            inCompiler->emitSemanticError (var_selector_22649.readProperty_location (), GALGAS_string ("the selector should be '!'"), fixItArray2  COMMA_SOURCE_FILE ("lexique-component.galgas", 588)) ;
          }
        }
        GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_22883 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_22883, inCompiler) ;
        var_functionActualArgumentList_22575.addAssign_operation (var_arg_22883  COMMA_SOURCE_FILE ("lexique-component.galgas", 591)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 593)) ;
    outArgument_outEffectiveArgument = GALGAS_lexicalFunctionInputArgumentAST::constructor_new (var_idf_22417, var_functionActualArgumentList_22575  COMMA_SOURCE_FILE ("lexique-component.galgas", 594)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 578)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 582)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 586)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 593)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 578)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 582)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 586)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 593)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_lexical_5F_term_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 610)) ;
      GALGAS_lexicalExpressionAST var_rightExpression_23570 ;
      nt_lexical_5F_factor_ (var_rightExpression_23570, inCompiler) ;
      outArgument_outExpression = GALGAS_lexicalOrExpressionAST::constructor_new (outArgument_outExpression, var_rightExpression_23570  COMMA_SOURCE_FILE ("lexique-component.galgas", 612)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_lexical_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 610)) ;
      nt_lexical_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 610)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_string_23887 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 619)) ;
  outArgument_outExpression = GALGAS_lexicalStringMatchAST::constructor_new (var_string_23887  COMMA_SOURCE_FILE ("lexique-component.galgas", 620)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 619)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 619)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 626)) ;
  GALGAS_lstring var_string_24169 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 627)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 628)) ;
  GALGAS_lstring var_errorMessage_24210 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 629)) ;
  outArgument_outExpression = GALGAS_lexicalStringNotMatchAST::constructor_new (var_string_24169, var_errorMessage_24210  COMMA_SOURCE_FILE ("lexique-component.galgas", 630)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 626)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 627)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 628)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 629)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 626)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 627)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 628)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 629)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_24512 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 636)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_lexicalCharacterMatchAST::constructor_new (var_character_24512  COMMA_SOURCE_FILE ("lexique-component.galgas", 638)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 640)) ;
    GALGAS_lchar var_upperBound_24643 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 641)) ;
    outArgument_outExpression = GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (var_character_24512, var_upperBound_24643  COMMA_SOURCE_FILE ("lexique-component.galgas", 642)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 636)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 640)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 641)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 636)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 640)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 641)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_characterSet_24968 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 649)) ;
  outArgument_outExpression = GALGAS_lexicalCharacterSetMatchAST::constructor_new (var_characterSet_24968  COMMA_SOURCE_FILE ("lexique-component.galgas", 650)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 649)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 649)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GALGAS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 656)) ;
  GALGAS_lstring var_name_25308 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 657)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_25350 = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 658)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler) == 2) {
      GALGAS_lstring var_selector_25409 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 661)) ;
      GALGAS_lstring var_sentAttribute_25442 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 662)) ;
      var_sentAttributeList_25350.addAssign_operation (var_selector_25409, var_sentAttribute_25442  COMMA_SOURCE_FILE ("lexique-component.galgas", 663)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_theStyle_25533 ;
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
    var_theStyle_25533 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 668)) ;
  } break ;
  case 2: {
    var_theStyle_25533 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 670))  COMMA_SOURCE_FILE ("lexique-component.galgas", 670)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 672)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 673)) ;
  GALGAS_lstring var_errorMessage_25746 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  GALGAS_lexicalListEntryListAST var_entryList_25775 = GALGAS_lexicalListEntryListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 676)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_25775, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 682)) ;
  ioArgument_ioLexicalListDeclarationList.addAssign_operation (var_name_25308, var_theStyle_25533, var_errorMessage_25746, var_sentAttributeList_25350, var_entryList_25775  COMMA_SOURCE_FILE ("lexique-component.galgas", 683)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 656)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 657)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 661)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 662)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 668)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 672)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 673)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 682)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 656)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 657)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 661)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 662)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 668)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 672)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 673)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 682)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GALGAS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_entrySpelling_26233 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 689)) ;
  GALGAS_lstringlist var_optionList_26268 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 690)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_optionName_26335 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("lexique-component.galgas", 693)) ;
    var_optionList_26268.addAssign_operation (var_optionName_26335  COMMA_SOURCE_FILE ("lexique-component.galgas", 694)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_terminalSpelling_26403 ;
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 698)) ;
    var_terminalSpelling_26403 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 699)) ;
  } break ;
  case 2: {
    var_terminalSpelling_26403 = var_entrySpelling_26233 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssign_operation (var_entrySpelling_26233, var_terminalSpelling_26403, var_optionList_26268  COMMA_SOURCE_FILE ("lexique-component.galgas", 703)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 689)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("lexique-component.galgas", 693)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 698)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 699)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 689)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("lexique-component.galgas", 693)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 698)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 699)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_ (GALGAS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_typeName_26855 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 709)) ;
  GALGAS_lstring var_name_26895 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 710)) ;
  ioArgument_ioLexicalAttributeList.addAssign_operation (var_typeName_26855, var_name_26895  COMMA_SOURCE_FILE ("lexique-component.galgas", 711)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 709)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 710)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 709)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 710)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GALGAS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_name_27194 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 717)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_27236 = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 718)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler) == 2) {
      GALGAS_lstring var_selector_27324 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 721)) ;
      GALGAS_lstring var_sentAttribute_27357 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 722)) ;
      var_sentAttributeList_27236.addAssign_operation (var_selector_27324, var_sentAttribute_27357  COMMA_SOURCE_FILE ("lexique-component.galgas", 723)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_theStyle_27448 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas", 725)) ;
  GALGAS_lstringlist var_optionList_27519 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("lexique-component.galgas", 726)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 729)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, var_theStyle_27448.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 731)), GALGAS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 731)) ;
        }
      }
      var_theStyle_27448 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 733)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_optionName_27749 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("lexique-component.galgas", 735)) ;
      var_optionList_27519.addAssign_operation (var_optionName_27749  COMMA_SOURCE_FILE ("lexique-component.galgas", 736)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 738)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  GALGAS_lstring var_errorMessage_27855 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
  ioArgument_ioTerminalDeclarationList.addAssign_operation (var_name_27194, var_sentAttributeList_27236, var_errorMessage_27855, var_theStyle_27448, var_optionList_27519  COMMA_SOURCE_FILE ("lexique-component.galgas", 741)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 717)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 721)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 722)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 729)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 733)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("lexique-component.galgas", 735)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 738)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 717)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 721)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 722)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 729)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 733)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("lexique-component.galgas", 735)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 738)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_ (GALGAS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  GALGAS_lstring var_styleIdentifier_28203 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 748)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_styleIdentifier_28203.readProperty_string ().getter_containsCharacter (GALGAS_char (TO_UNICODE (95)) COMMA_SOURCE_FILE ("lexique-component.galgas", 749)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28203.readProperty_location (), GALGAS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas", 750)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_styleIdentifier_28203.readProperty_string ().getter_containsCharacterInRange (GALGAS_char (TO_UNICODE (48)), GALGAS_char (TO_UNICODE (57)) COMMA_SOURCE_FILE ("lexique-component.galgas", 752)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28203.readProperty_location (), GALGAS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 753)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
  GALGAS_lstring var_comment_28641 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 756)) ;
  ioArgument_ioLexicalStyleList.addAssign_operation (var_styleIdentifier_28203, var_comment_28641  COMMA_SOURCE_FILE ("lexique-component.galgas", 757)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 748)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 756)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 748)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 756)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i22_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                       GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 105)) ;
  GALGAS_lstring var_lexiqueComponentName_4233 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 108)) ;
  GALGAS_lstring var_lexiqueSuperComponentName_4293 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 111)) ;
  GALGAS_templateDelimitorListAST var_templateDelimitorList_4387 = GALGAS_templateDelimitorListAST::constructor_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 112)) ;
  GALGAS_templateReplacementListAST var_templateReplacementList_4450 = GALGAS_templateReplacementListAST::constructor_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 113)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_4387, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_4450, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 120)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_templateLexiqueComponentAST::constructor_new (GALGAS_bool (false), var_lexiqueComponentName_4233, var_lexiqueSuperComponentName_4293, var_templateDelimitorList_4387, var_templateReplacementList_4450  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 121))  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 121)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 111)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 120)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 107)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 108)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 109)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 111)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_ (GALGAS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  GALGAS_lstring var_startString_5124 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 134)) ;
  GALGAS_lstringlist var_optionList_5144 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 135)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler) == 2) {
      GALGAS_lstring var_optionName_5227 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("template-lexique-component.galgas", 138)) ;
      var_optionList_5144.addAssign_operation (var_optionName_5227  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 139)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 141)) ;
  GALGAS_lstring var_endString_5317 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 142)) ;
  ioArgument_ioTemplateDelimitorList.addAssign_operation (var_startString_5124, var_optionList_5144, var_endString_5317  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 134)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("template-lexique-component.galgas", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 142)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 134)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("template-lexique-component.galgas", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 141)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 142)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_ (GALGAS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                   C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
  GALGAS_lstring var_matchString_5648 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 150)) ;
  GALGAS_lstring var_replacementString_5677 ;
  GALGAS_lstring var_replacementFunction_5712 ;
  switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 154)) ;
    var_replacementString_5677 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 155)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 156)) ;
    var_replacementFunction_5712 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 159)) ;
    var_replacementString_5677 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 160)) ;
    var_replacementFunction_5712 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 161))  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 161)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssign_operation (var_matchString_5648, var_replacementString_5677, var_replacementFunction_5712  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 163)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 150)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 154)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 155)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 156)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 159)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 150)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 154)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 155)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 156)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 159)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lexicalSendSearchListAST var_lexicalSendSearchList_2321 = GALGAS_lexicalSendSearchListAST::constructor_emptyList (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_2405 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 59)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 60)) ;
    GALGAS_lstring var_searchListName_2463 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 61)) ;
    var_lexicalSendSearchList_2321.addAssign_operation (var_attributeName_2405, var_searchListName_2463  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 62)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 63)) ;
    if (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_2626 ;
  switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_defaultSentTerminal_2697 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 69)) ;
    var_lexicalSendDefaultAction_2626 = GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (var_defaultSentTerminal_2697  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 70)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 72)) ;
    GALGAS_lstring var_defaultErrorMessageName_2864 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 73)) ;
    var_lexicalSendDefaultAction_2626 = GALGAS_lexicalErrorByDefaultAST::constructor_new (var_defaultErrorMessageName_2864  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_lexicalStructuredSendInstructionAST::constructor_new (var_lexicalSendSearchList_2321, var_lexicalSendDefaultAction_2626  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 59)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 60)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 61)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 63)) ;
    if (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 69)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 72)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 59)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 60)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 61)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 63)) ;
    if (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 69)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 72)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 73)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 34)) ;
  GALGAS_lstring var_terminalName_1514 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 35)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalDropInstructionAST::constructor_new (var_terminalName_1514  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 36))  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 34)) ;
  GALGAS_lstring var_errorMessageName_1526 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 35)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalErrorInstructionAST::constructor_new (var_errorMessageName_1526  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 36))  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 32)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalLogInstructionAST::constructor_new (SOURCE_FILE ("lexique-instruction-log.galgas", 33))  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 51)) ;
  GALGAS_location var_location_2002 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 52)) ;
  GALGAS_lexicalInstructionListAST var_repeatedInstructionList_2063 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexique-instruction-repeat.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_2063, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lexicalWhileBranchListAST var_lexicalWhileBranchList_2210 = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (SOURCE_FILE ("lexique-instruction-repeat.galgas", 58)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_2210, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 63)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRepeatInstructionAST::constructor_new (var_repeatedInstructionList_2063, var_lexicalWhileBranchList_2210, var_location_2002  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 64))  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 64)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 51)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 63)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 51)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 37)) ;
  GALGAS_lstring var_tagName_1609 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 39)) ;
  GALGAS_lstring var_terminalName_1652 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 40)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRewindInstructionAST::constructor_new (var_tagName_1609, var_terminalName_1652  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 41))  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_actionName_3868 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 95)) ;
  GALGAS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_3928 = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_3996 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 100)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_selector_3996.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("!")) ;
          inCompiler->emitSemanticError (var_selector_3996.readProperty_location (), GALGAS_string ("the selector should be '!'"), fixItArray2  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 102)) ;
        }
      }
      GALGAS_location var_passingModeLocation_4137 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 104)) ;
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_4269 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_4269, inCompiler) ;
      var_actualArgumentList_3928.addAssign_operation (GALGAS_lexicalFormalInputArgumentAST::constructor_new (var_passingModeLocation_4137, var_arg_4269  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 106))  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 106)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_4391 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 108)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_selector_4391.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          appendFixItActions (fixItArray4, kFixItReplace, GALGAS_string ("!\?")) ;
          inCompiler->emitSemanticError (var_selector_4391.readProperty_location (), GALGAS_string ("the selector should be '!\?'"), fixItArray4  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 110)) ;
        }
      }
      GALGAS_location var_passingModeLocation_4534 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 112)) ;
      GALGAS_lstring var_attributeName_4604 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 113)) ;
      GALGAS_lexicalAttributeInputOutputArgumentAST var_arg_4628 = GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (var_passingModeLocation_4534, var_attributeName_4604  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 114)) ;
      var_actualArgumentList_3928.addAssign_operation (var_arg_4628  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 115)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_errorMessageList_4777 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 117)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 120)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName_4879 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 122)) ;
      var_errorMessageList_4777.addAssign_operation (var_errorMessageName_4879  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 123)) ;
      if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 125)) ;
      }else{
        repeatFlag_5 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRoutineCallInstructionAST::constructor_new (var_actionName_3868, var_actualArgumentList_3928, var_errorMessageList_4777  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 129))  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 100)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 113)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 120)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 122)) ;
      if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 125)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 100)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 113)) ;
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
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 120)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 122)) ;
      if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 125)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 57)) ;
  GALGAS_lexicalSelectBranchListAST var_lexicalWhileBranchList_2226 = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (SOURCE_FILE ("lexique-instruction-select.galgas", 58)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 60)) ;
    GALGAS_lexicalExpressionAST var_selectExpression_2332 ;
    nt_lexical_5F_expression_ (var_selectExpression_2332, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 62)) ;
    GALGAS_lexicalInstructionListAST var_selectInstructionList_2396 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexique-instruction-select.galgas", 63)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_2396, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_2226.addAssign_operation (var_selectExpression_2332, var_selectInstructionList_2396  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 68)) ;
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 71)) ;
  GALGAS_lexicalInstructionListAST var_defaultInstructionList_2652 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("lexique-instruction-select.galgas", 72)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_2652, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 77)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalSelectInstructionAST::constructor_new (var_lexicalWhileBranchList_2226, var_defaultInstructionList_2652  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 78))  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 60)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 62)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 71)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 60)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 62)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 71)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_sentTerminal_1511 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 33)) ;
  outArgument_outInstruction = GALGAS_lexicalSimpleSendInstructionAST::constructor_new (var_sentTerminal_1511  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 34)) ;
  GALGAS_lstring var_tagName_1498 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 35)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalTagInstructionAST::constructor_new (var_tagName_1498  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 36))  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 34)) ;
  GALGAS_lstring var_warningMessageName_1540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 35)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalWarningInstructionAST::constructor_new (var_warningMessageName_1540  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 36))  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 35)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 102)) ;
  GALGAS_lstring var_optionComponentName_3806 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 103)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 104)) ;
  GALGAS_commandLineOptionListAST var_options_3868 = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("optionCompilation.galgas", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_3868, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 110)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool (false), var_optionComponentName_3806, var_options_3868  COMMA_SOURCE_FILE ("optionCompilation.galgas", 111))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 102)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 103)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 110)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 102)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 103)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 110)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GALGAS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_mOptionTypeName_4339 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 121)) ;
  GALGAS_lstring var_mOptionInternalName_4386 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)) ;
  GALGAS_lchar var_mOptionInvocationLetter_4439 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
  GALGAS_lstring var_mOptionInvocationString_4500 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
  GALGAS_lstring var_mOptionComment_4562 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 128)) ;
  GALGAS_lstring var_defaultValue_4585 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 129))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 129)) ;
  GALGAS_optionDefaultValueEnumAST var_optionDefaultValueKind_4669 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_4669 = GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 132)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 134)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_4585 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 136)) ;
      var_optionDefaultValueKind_4669 = GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 137)) ;
    } break ;
    case 2: {
      GALGAS_lbigint var_v_4962 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 139)) ;
      var_defaultValue_4585 = GALGAS_lstring::constructor_new (var_v_4962.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 140)), var_v_4962.readProperty_location ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 140)) ;
      var_optionDefaultValueKind_4669 = GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 141)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssign_operation (var_mOptionTypeName_4339, var_mOptionInternalName_4386, var_mOptionInvocationLetter_4439, var_mOptionInvocationString_4500, var_mOptionComment_4562, var_defaultValue_4585, var_optionDefaultValueKind_4669  COMMA_SOURCE_FILE ("optionCompilation.galgas", 144)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 128)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 134)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 136)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 139)) ;
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

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 128)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 134)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 136)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 139)) ;
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

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 240)) ;
  GALGAS_lstring var_mGUIName_8143 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 241)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 242)) ;
  GALGAS_lstringlist var_importedOptionList_8181 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 243)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes_8240 = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 244)) ;
  GALGAS_withLexiqueListAST var_withLexiqueList_8296 = GALGAS_withLexiqueListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 245)) ;
  GALGAS_projectIndexingDescriptorList var_projectExtensionList_8356 = GALGAS_projectIndexingDescriptorList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 246)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 249)) ;
      GALGAS_lstring var_fileExtension_8441 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 250)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 251)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 252)) ;
      GALGAS_lstring var_indexingPathSuffix_8505 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 253)) ;
      var_projectExtensionList_8356.addAssign_operation (var_fileExtension_8441, var_indexingPathSuffix_8505  COMMA_SOURCE_FILE ("guiCompilation.galgas", 254)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_8240, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_8181, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_8296, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 263)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssign_operation (var_mGUIName_8143, var_importedOptionList_8181, var_simpleGlobalAttributes_8240, var_withLexiqueList_8296, var_projectExtensionList_8356  COMMA_SOURCE_FILE ("guiCompilation.galgas", 264)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 240)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 241)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 242)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 249)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 250)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 251)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 252)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 253)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 263)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 240)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 241)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 242)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 249)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 250)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 251)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 252)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 253)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 263)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GALGAS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 275)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 276)) ;
  GALGAS_lstring var_lexiqueReference_9232 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 277)) ;
  GALGAS_guiLabelListAST var_labels_9274 = GALGAS_guiLabelListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 278)) ;
  GALGAS_guiSimpleAttributeListAST var_simpleAttributes_9321 = GALGAS_guiSimpleAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 279)) ;
  GALGAS_guiCompoundAttributeListAST var_compoundAttributes_9380 = GALGAS_guiCompoundAttributeListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 280)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 281)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 284)) ;
      GALGAS_uint var_displayStyle_9463 ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_9463 = GALGAS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 289)) ;
        var_displayStyle_9463 = GALGAS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_terminalLabelListAST var_terminalList_9602 = GALGAS_terminalLabelListAST::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 292)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_terminal_9671 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
        GALGAS_uint var_displayFlags_9698 ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_9698 = GALGAS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 299)) ;
          var_displayFlags_9698 = GALGAS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 302)) ;
          GALGAS_lbigint var_leadingStrip_9889 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 303)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsSupOrEqual, var_leadingStrip_9889.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 304)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_9889.readProperty_location (), GALGAS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)) ;
            }
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)) ;
          GALGAS_lbigint var_endingStrip_10064 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 308)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsSupOrEqual, var_endingStrip_10064.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 309)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_10064.readProperty_location (), GALGAS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)) ;
            }
          }
          var_displayFlags_9698 = var_leadingStrip_9889.readProperty_bigint ().left_shift_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 312)).operator_or (var_endingStrip_10064.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 312)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 312)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 313)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_9602.addAssign_operation (var_terminal_9671, var_displayFlags_9698  COMMA_SOURCE_FILE ("guiCompilation.galgas", 315)) ;
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 317)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_9274.addAssign_operation (var_displayStyle_9463, var_terminalList_9602, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 319))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_key_10467 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)) ;
      GALGAS_lstring var_name_10502 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 322)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 323)) ;
      GALGAS_lstring var_value_10527 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 324))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GALGAS_lstring var_v_10615 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 326)) ;
        var_value_10527 = GALGAS_lstring::constructor_new (var_value_10527.readProperty_string ().add_operation (var_v_10615.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 327)), var_v_10615.readProperty_location ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 327)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_9380.addAssign_operation (var_key_10467, var_name_10502, var_value_10527  COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_name_10796 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 333)) ;
      GALGAS_lstring var_value_10842 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
      var_simpleAttributes_9321.addAssign_operation (var_name_10796, var_value_10842  COMMA_SOURCE_FILE ("guiCompilation.galgas", 335)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
  ioArgument_ioWithLexiqueList.addAssign_operation (var_lexiqueReference_9232, var_labels_9274, var_simpleAttributes_9321, var_compoundAttributes_9380  COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 275)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 276)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 281)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 284)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 289)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 299)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 302)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 303)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 308)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 313)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 317)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 322)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 323)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 326)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 333)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 275)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 276)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 281)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 284)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 289)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 299)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 302)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 303)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 308)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 313)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 317)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 322)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 323)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 326)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 333)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GALGAS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 344)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 345)) ;
  GALGAS_lstring var_optionReference_11254 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 346)) ;
  ioArgument_ioImportedOptionList.addAssign_operation (var_optionReference_11254  COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 344)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 345)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 346)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 344)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 345)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 346)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GALGAS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_mKey_11555 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 353)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
  GALGAS_lstring var_mValue_11576 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 355))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 355)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_value_11653 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 357)) ;
    var_mValue_11576 = GALGAS_lstring::constructor_new (var_mValue_11576.readProperty_string ().add_operation (var_value_11653.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 358)), var_value_11653.readProperty_location ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 358)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssign_operation (var_mKey_11555, var_mValue_11576  COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 353)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 357)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 353)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 357)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 229)) ;
  GALGAS_lstring var_syntaxComponentName_9806 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 230)) ;
  GALGAS_lstring var_importedLexiqueReference_9867 ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_9867 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 234)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 236)) ;
    var_importedLexiqueReference_9867 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 237)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 238)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasTranslateFeature_10070 ;
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_10070 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_featureName_10175 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 245)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_featureName_10175.readProperty_string ().objectCompare (GALGAS_string ("translate"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_featureName_10175.readProperty_location (), GALGAS_string ("only 'feature translate' can be declared here"), fixItArray1  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 247)) ;
      }
    }
    var_hasTranslateFeature_10070 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 251)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_10405 = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 253)) ;
  GALGAS_syntaxRuleListAST var_ruleList_10476 = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 254)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_nonterminalDeclarationList_10405, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_ruleList_10476, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 262)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssign_operation (var_syntaxComponentName_9806, var_importedLexiqueReference_9867, var_nonterminalDeclarationList_10405, var_ruleList_10476, var_hasTranslateFeature_10070  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 263)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 229)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 230)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 236)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 237)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 238)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 245)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 251)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 262)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 229)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 230)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 236)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 237)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 238)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 245)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 251)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 262)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
  GALGAS_lstring var_syntaxComponentName_11431 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 279)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 280)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_11495 = GALGAS_nonterminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 282)) ;
  GALGAS_syntaxRuleListAST var_ruleList_11566 = GALGAS_syntaxRuleListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 283)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_nonterminalDeclarationList_11495, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_ruleList_11566, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 291)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxExtensions.addAssign_operation (var_syntaxComponentName_11431.readProperty_string (), var_syntaxComponentName_11431, var_nonterminalDeclarationList_11495, var_ruleList_11566  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 292)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 279)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 280)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 291)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 279)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 280)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 291)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                                   GALGAS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
  GALGAS_lstring var_mNonterminalName_12610 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 307)) ;
  GALGAS_nonTerminalLabelListAST var_labels_12684 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 308)) ;
  GALGAS_formalParameterListAST var_firstBranchFormalParameters_12802 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_firstBranchFormalParameters_12802, inCompiler) ;
  var_labels_12684.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 310))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 310)), var_firstBranchFormalParameters_12802, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 310))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 310)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 313)) ;
      GALGAS_lstring var_labelName_12967 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 314)) ;
      GALGAS_formalParameterListAST var_formalParameters_13085 ;
      nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_formalParameters_13085, inCompiler) ;
      var_labels_12684.addAssign_operation (var_labelName_12967, var_formalParameters_13085, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 316))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 316)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssign_operation (var_mNonterminalName_12610, var_labels_12684  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 318)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 307)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 313)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 314)) ;
      nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 307)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 313)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 314)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                                const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                GALGAS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  GALGAS_formalParameterListAST var_mFormalParameters_13842 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mFormalParameters_13842, inCompiler) ;
  GALGAS_location var_endOfArguments_13868 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 329)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330)) ;
  GALGAS_syntaxInstructionList var_mSyntaxInstructionList_14015 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mSyntaxInstructionList_14015, inCompiler) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameters_13842, var_endOfArguments_13868, var_mSyntaxInstructionList_14015, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 337))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 332)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 338)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 338)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 338)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                                      GALGAS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 346)) ;
  GALGAS_lstring var_mNonterminalName_14571 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 347)) ;
  GALGAS_lstring var_labelName_14620 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 348))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 348)) ;
  GALGAS_syntaxRuleLabelListAST var_mLabelList_14674 = GALGAS_syntaxRuleLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 349)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_labelName_14620, var_mLabelList_14674, inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 353)) ;
      var_labelName_14620 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 354)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssign_operation (var_mNonterminalName_14571, var_mLabelList_14674  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 356)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 346)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 347)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 353)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 354)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 346)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 347)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 353)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 354)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                                      GALGAS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GALGAS_syntaxInstructionList::constructor_emptyList (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 368)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        GALGAS_semanticInstructionAST var_instruction_15676 ;
        nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_instruction_15676, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_15676  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 374)) ;
      } break ;
      case 2: {
        GALGAS_syntaxInstructionAST var_instruction_15835 ;
        nt_syntax_5F_instruction_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_instruction_15835, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_15835  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 377)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 381)) ;
        } break ;
        case 2: {
          GALGAS_string var_separator_15976 = GALGAS_string::constructor_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 383)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_separator_15976.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 384)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 384)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 385)), GALGAS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 385)) ;
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (C_Lexique_galgasScanner * inCompiler) {
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
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 381)) ;
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
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
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 381)) ;
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                              GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                              GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mLabelName_2813 ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_mLabelName_2813 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 67)) ;
    var_mLabelName_2813 = GALGAS_lstring::constructor_new (GALGAS_string ("parse"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 68))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 68)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 70)) ;
    var_mLabelName_2813 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mNonterminalName_3091 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 73)) ;
  GALGAS_actualParameterListAST var_mActualParameterList_3207 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (var_mActualParameterList_3207, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_3348 ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_3348 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 78)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 80)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_3348, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_nonterminalCallInstruction::constructor_new (var_mNonterminalName_3091.readProperty_location (), var_mNonterminalName_3091, var_mLabelName_2813, var_mActualParameterList_3207, var_grammarInstructionSyntaxDirectedTranslationResult_3348  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 67)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 73)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 80)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 67)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 73)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 80)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                              GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 64)) ;
  GALGAS_location var_mRepeatInstructionLocation_2640 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 65)) ;
  GALGAS_syntaxInstructionList var_mRepeatedInstructionList_2790 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mRepeatedInstructionList_2790, inCompiler) ;
  GALGAS_location var_endOf_5F_repeated_5F_instructions_2823 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 67)) ;
  GALGAS_listOfSyntaxInstructionList var_mRepeatBranchList_2876 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 70)) ;
    GALGAS_syntaxInstructionList var_mInstructionList_3062 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mInstructionList_3062, inCompiler) ;
    var_mRepeatBranchList_2876.addAssign_operation (var_mInstructionList_3062, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 72))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 72)) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 75)) ;
  GALGAS_location var_endOf_5F_repeat_5F_instruction_3177 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 76)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3270 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_3270.readProperty_string ().objectCompare (GALGAS_string ("repeat"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%repeat")) ;
        inCompiler->emitSemanticError (var_terminator_3270.readProperty_location (), GALGAS_string ("the terminator attribute should be '%repeat'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 81)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_repeatInstruction::constructor_new (var_mRepeatInstructionLocation_2640, var_mRepeatedInstructionList_2790, var_endOf_5F_repeated_5F_instructions_2823, var_mRepeatBranchList_2876, var_endOf_5F_repeat_5F_instruction_3177  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 64)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 70)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 75)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 64)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 70)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 75)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                              GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 60)) ;
  GALGAS_location var_mSelectInstructionLocation_2413 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 61)) ;
  GALGAS_listOfSyntaxInstructionList var_mSelectBranchList_2465 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 62)) ;
  GALGAS_syntaxInstructionList var_il_2624 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_il_2624, inCompiler) ;
  var_mSelectBranchList_2465.addAssign_operation (var_il_2624, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 64))  COMMA_SOURCE_FILE ("instruction-select.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 66)) ;
    GALGAS_syntaxInstructionList var_instructionList_2803 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_instructionList_2803, inCompiler) ;
    var_mSelectBranchList_2465.addAssign_operation (var_instructionList_2803, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 68))  COMMA_SOURCE_FILE ("instruction-select.galgas", 68)) ;
    if (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 71)) ;
  GALGAS_location var_endOf_5F_select_5F_instruction_2915 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 72)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3008 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_3008.readProperty_string ().objectCompare (GALGAS_string ("select"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%select")) ;
        inCompiler->emitSemanticError (var_terminator_3008.readProperty_location (), GALGAS_string ("the terminator attribute should be '%select'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-select.galgas", 77)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_selectInstruction::constructor_new (var_mSelectInstructionLocation_2413, var_mSelectBranchList_2465, var_endOf_5F_select_5F_instruction_2915  COMMA_SOURCE_FILE ("instruction-select.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 60)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 66)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 71)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 60)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 66)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 71)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                              GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                              GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_terminalName_3844 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 81)) ;
  GALGAS_actualInputParameterListAST var_actualInputParameterList_3923 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (var_actualInputParameterList_3923, inCompiler) ;
  GALGAS__32_lstringlist var_indexNameList_3989 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_3989, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4123 ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4253 ;
  switch (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4123 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 88)) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4253 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 91)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4123, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4253, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_terminalCheckInstruction::constructor_new (var_terminalName_3844.readProperty_location (), var_terminalName_3844, var_actualInputParameterList_3923, var_indexNameList_3989, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4123, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4253  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 81)) ;
  nt_actual_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 91)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 81)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 91)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GALGAS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 108)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 111)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 112)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_indexName_5431 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 114)) ;
      GALGAS_lstring var_postfixName_5493 ;
      switch (select_galgas_34_SyntaxComponentSyntax_19 (inCompiler)) {
      case 1: {
        var_postfixName_5493 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 117)) ;
      } break ;
      case 2: {
        var_postfixName_5493 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 119)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssign_operation (var_indexName_5431, var_postfixName_5493  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 121)) ;
      if (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 125)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 111)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 112)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 114)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 119)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 125)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 111)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 112)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 114)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_19 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 119)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 125)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                               GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 66)) ;
  GALGAS_location var_instructionLocation_2675 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 67)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 68)) ;
  GALGAS_semanticExpressionAST var_variantExpression_2768 ;
  nt_expression_ (var_variantExpression_2768, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_2794 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 71)) ;
  GALGAS_semanticExpressionAST var_whileExpression_2891 ;
  nt_expression_ (var_whileExpression_2891, inCompiler) ;
  GALGAS_location var_endOfWhileExpression_2915 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 74)) ;
  GALGAS_syntaxInstructionList var_instructionList_3069 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_instructionList_3069, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  GALGAS_location var_endOfInstructionList_3103 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 77)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3192 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 80)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_3192.readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%parse")) ;
        inCompiler->emitSemanticError (var_terminator_3192.readProperty_location (), GALGAS_string ("the terminator attribute should be '%parse'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 82)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseLoopInstruction::constructor_new (var_instructionLocation_2675, var_variantExpression_2768, var_endOfVariantExpression_2794, var_whileExpression_2891, var_endOfWhileExpression_2915, var_instructionList_3069, var_endOfInstructionList_3103  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 68)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 71)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 74)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 80)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 68)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 71)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 74)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 80)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                               GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 60)) ;
  GALGAS_location var_instructionLocation_2405 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 62)) ;
  GALGAS_listOfSyntaxInstructionList var_mParseDoBranchList_2459 = GALGAS_listOfSyntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 63)) ;
  GALGAS_syntaxInstructionList var_il_2619 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_il_2619, inCompiler) ;
  var_mParseDoBranchList_2459.addAssign_operation (var_il_2619, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 65))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 67)) ;
    GALGAS_syntaxInstructionList var_instructionList_2803 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_instructionList_2803, inCompiler) ;
    var_mParseDoBranchList_2459.addAssign_operation (var_instructionList_2803, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 69))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 69)) ;
    if (select_galgas_34_SyntaxComponentSyntax_21 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 72)) ;
  GALGAS_location var_endOfInstruction_2916 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 73)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3001 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 76)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_3001.readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%parse")) ;
        inCompiler->emitSemanticError (var_terminator_3001.readProperty_location (), GALGAS_string ("the terminator attribute should be '%parse'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 78)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseRewindInstruction::constructor_new (var_instructionLocation_2405, var_mParseDoBranchList_2459, var_endOfInstruction_2916  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 62)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 67)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_21 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 72)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 62)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 67)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_21 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 72)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                                       GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 98)) ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, outArgument_outElseInstructionList, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 98)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 98)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                                       GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 107)) ;
  GALGAS_location var_instructionLocation_4428 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 108)) ;
  GALGAS_semanticExpressionAST var_whenExpression_4487 ;
  nt_expression_ (var_whenExpression_4487, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_4510 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 111)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_4639 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_whenInstructionList_4639, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_4667 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 113)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_4813 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_elseInstructionList_4813, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_4841 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 116)) ;
  outArgument_outElseInstructionList = GALGAS_syntaxInstructionList::constructor_emptyList (SOURCE_FILE ("instruction-parse-when.galgas", 117)) ;
  outArgument_outElseInstructionList.addAssign_operation (GALGAS_parseWhenInstruction::constructor_new (var_instructionLocation_4428, var_whenExpression_4487, var_endOfWhenExpression_4510, var_whenInstructionList_4639, var_endOfWhenInstructions_4667, var_elseInstructionList_4813, var_endOfElseInstructions_4841  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 107)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 111)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 107)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 111)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                               GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 134)) ;
  GALGAS_location var_instructionLocation_5522 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 136)) ;
  GALGAS_semanticExpressionAST var_whenExpression_5615 ;
  nt_expression_ (var_whenExpression_5615, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_5638 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 138)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 139)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_5790 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_whenInstructionList_5790, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_5818 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 141)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_5987 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_elseInstructionList_5987, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_6015 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 145)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_6115 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 148)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_6115.readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%parse")) ;
        inCompiler->emitSemanticError (var_terminator_6115.readProperty_location (), GALGAS_string ("the terminator attribute should be '%parse'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 150)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_parseWhenInstruction::constructor_new (var_instructionLocation_5522, var_whenExpression_5615, var_endOfWhenExpression_5638, var_whenInstructionList_5790, var_endOfWhenInstructions_5818, var_elseInstructionList_5987, var_endOfElseInstructions_6015  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 134)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 136)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 139)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 145)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 134)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 136)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 139)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 145)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                               GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                               GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 40)) ;
  GALGAS_location var_instructionLocation_1749 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 41)) ;
  GALGAS_semanticExpressionAST var_sentExpression_1831 ;
  nt_expression_ (var_sentExpression_1831, inCompiler) ;
  outArgument_outInstruction = GALGAS_syntaxSendInstruction::constructor_new (var_instructionLocation_1749, var_sentExpression_1831  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 40)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 40)) ;
  nt_expression_indexing (inCompiler) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lbool var_hasIndexing_6942 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_6942 = GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 193))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 193)) ;
  } break ;
  case 2: {
    var_hasIndexing_6942 = GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 195))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 195)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 196)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 198)) ;
  GALGAS_lstring var_mGrammarName_7153 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 199)) ;
  GALGAS_lstring var_mGrammarClass_7231 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 200)) ;
  GALGAS_bool var_hasTranslateFeature_7284 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_7284 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_featureName_7389 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 206)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_featureName_7389.readProperty_string ().objectCompare (GALGAS_string ("translate"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_featureName_7389.readProperty_location (), GALGAS_string ("only 'feature translate' can be declared here"), fixItArray1  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 208)) ;
      }
    }
    var_hasTranslateFeature_7284 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 212)) ;
  GALGAS_lstringlist var_syntaxComponents_7619 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 214)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 216)) ;
    GALGAS_lstring var_syntaxComponent_7700 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 217)) ;
    var_syntaxComponents_7619.addAssign_operation (var_syntaxComponent_7700  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 218)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  GALGAS_lstring var_startSymbol_7831 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 222)) ;
  GALGAS_nonTerminalLabelListAST var_mLabelList_7874 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 223)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 224))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 224)), var_mLabelList_7874, inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 227)) ;
      GALGAS_lstring var_labelName_8065 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 228)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (var_labelName_8065, var_mLabelList_7874, inCompiler) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  GALGAS_lstringlist var_mUnusedNonterminalList_8186 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 232)) ;
  bool repeatFlag_4 = true ;
  while (repeatFlag_4) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 235)) ;
      GALGAS_lstring var_nonterminalSymbolName_8300 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 236)) ;
      var_mUnusedNonterminalList_8186.addAssign_operation (var_nonterminalSymbolName_8300  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 237)) ;
    }else{
      repeatFlag_4 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 240)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_galgas_33_GrammarComponentAST::constructor_new (GALGAS_bool (false), var_hasIndexing_6942, var_mGrammarName_7153, var_mGrammarClass_7231, var_syntaxComponents_7619, var_startSymbol_7831, var_mLabelList_7874, var_mUnusedNonterminalList_8186, var_hasTranslateFeature_7284  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 196)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 198)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 199)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 200)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 206)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 212)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 216)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 217)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 222)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 227)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 228)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 235)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 236)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 240)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 196)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 198)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 199)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 200)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 206)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 212)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 216)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 217)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 222)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 227)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 228)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 235)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 236)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  GALGAS_stringset var_argumentNameSet_8972 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 257)) ;
  GALGAS_formalParameterListAST var_formalParameterList_9025 = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 258)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_argumentName_9127 ;
      nt_label_5F_formal_5F_parameter_ (var_argumentName_9127, var_formalParameterList_9025, inCompiler) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_argumentNameSet_8972.getter_hasKey (var_argumentName_9127.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 264)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_9127.readProperty_location (), GALGAS_string ("there is already an argument named '").add_operation (var_argumentName_9127.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 265)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 265)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 265)) ;
        }
      }
      var_argumentNameSet_8972.addAssign_operation (var_argumentName_9127.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 267)) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 272)) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_formalParameterList_9025, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 273))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 273)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_parse (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 272)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 272)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_9780 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 280)) ;
  GALGAS_lstring var_mTypeName_9815 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 281)) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 284)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 286)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_9780, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 289)), var_mTypeName_9815, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 287)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 280)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 281)) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 284)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 286)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 280)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 281)) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 284)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 286)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_10358 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 299)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 300)) ;
  GALGAS_lstring var_mTypeName_10403 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 301)) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 304)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 306)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_10358, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 309)), var_mTypeName_10403, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 307)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 299)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 300)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 301)) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 304)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 306)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 299)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 300)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 301)) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 304)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 306)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_10955 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 319)) ;
  GALGAS_lstring var_mTypeName_10990 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 320)) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 323)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_10955, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 328)), var_mTypeName_10990, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 326)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 319)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 320)) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 323)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 319)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 320)) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 323)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_11536 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 338)) ;
  GALGAS_lstring var_mTypeName_11571 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 339)) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 340)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_11536, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 343)), var_mTypeName_11571, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 341)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 338)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 339)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 340)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 338)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 339)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 340)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 129)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_5406 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_prologueInstructionList_5406, inCompiler) ;
  GALGAS_location var_endOfPrologue_5438 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 132)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssign_operation (var_prologueInstructionList_5406, var_endOfPrologue_5438  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 133)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 129)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 132)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 129)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 145)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_6131 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_prologueInstructionList_6131, inCompiler) ;
  GALGAS_location var_endOfPrologue_6163 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 147)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 148)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssign_operation (var_prologueInstructionList_6131, var_endOfPrologue_6163  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 145)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 148)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 145)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 148)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 161)) ;
  GALGAS_lstring var_mSourceFileExtension_6770 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 163)) ;
  GALGAS_lstring var_mSourceFileHelp_6834 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  GALGAS_lstring var_referenceGrammar_6892 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_6892 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 170)) ;
    var_referenceGrammar_6892 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 171)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_selector_7058 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_7058.readProperty_string ().objectCompare (GALGAS_string ("sourceFilePath"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_7058.readProperty_location (), GALGAS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 176)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_7264 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, var_typeName_7264.readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_7264.readProperty_location (), GALGAS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 182)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isUnused_7416 ;
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_7416 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 189)) ;
    var_isUnused_7416 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSourceFileVariableName_7542 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 194)) ;
  GALGAS_semanticInstructionListAST var_mInstructionList_7695 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mInstructionList_7695, inCompiler) ;
  GALGAS_location var_endOfInstructionList_7720 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 197)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssign_operation (var_mSourceFileExtension_6770, var_mSourceFileHelp_6834, var_mSourceFileVariableName_7542, var_isUnused_7416, var_referenceGrammar_6892, var_mInstructionList_7695, var_endOfInstructionList_7720  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 163)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 170)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 171)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 189)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 194)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 197)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 163)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 170)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 171)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 189)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 194)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 197)) ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_headerCompositionMap::cMapElement_headerCompositionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_stringset & in_mInclusion,
                                                                    const GALGAS_string & in_mHeaderString
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInclusion (in_mInclusion),
mProperty_mHeaderString (in_mHeaderString) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_headerCompositionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_headerCompositionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_headerCompositionMap (mProperty_lkey, mProperty_mInclusion, mProperty_mHeaderString COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_headerCompositionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInclusion" ":" ;
  mProperty_mInclusion.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderString" ":" ;
  mProperty_mHeaderString.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_headerCompositionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_headerCompositionMap * operand = (cMapElement_headerCompositionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInclusion.objectCompare (operand->mProperty_mInclusion) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHeaderString.objectCompare (operand->mProperty_mHeaderString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap::GALGAS_headerCompositionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap::GALGAS_headerCompositionMap (const GALGAS_headerCompositionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap & GALGAS_headerCompositionMap::operator = (const GALGAS_headerCompositionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_headerCompositionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::constructor_mapWithMapToOverride (const GALGAS_headerCompositionMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_headerCompositionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_headerCompositionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_stringset & inArgument0,
                                                       const GALGAS_string & inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_headerCompositionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerCompositionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@headerCompositionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::add_operation (const GALGAS_headerCompositionMap & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_headerCompositionMap result = *this ;
  cEnumerator_headerCompositionMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInclusion (HERE), enumerator.current_mHeaderString (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_stringset inArgument0,
                                                    GALGAS_string inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_headerCompositionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerCompositionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_headerCompositionMap_searchKey = "there is no '%K' key" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_stringset & outArgument0,
                                                    GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_headerCompositionMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    outArgument0 = p->mProperty_mInclusion ;
    outArgument1 = p->mProperty_mHeaderString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_headerCompositionMap::getter_mInclusionForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) attributes ;
  GALGAS_stringset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    result = p->mProperty_mInclusion ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_headerCompositionMap::getter_mHeaderStringForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    result = p->mProperty_mHeaderString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::setter_setMInclusionForKey (GALGAS_stringset inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_headerCompositionMap * p = (cMapElement_headerCompositionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    p->mProperty_mInclusion = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::setter_setMHeaderStringForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_headerCompositionMap * p = (cMapElement_headerCompositionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    p->mProperty_mHeaderString = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_headerCompositionMap * GALGAS_headerCompositionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_headerCompositionMap * result = (cMapElement_headerCompositionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_headerCompositionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_headerCompositionMap::cEnumerator_headerCompositionMap (const GALGAS_headerCompositionMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element cEnumerator_headerCompositionMap::current (LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
  return GALGAS_headerCompositionMap_2D_element (p->mProperty_lkey, p->mProperty_mInclusion, p->mProperty_mHeaderString) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_headerCompositionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset cEnumerator_headerCompositionMap::current_mInclusion (LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
  return p->mProperty_mInclusion ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_headerCompositionMap::current_mHeaderString (LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
  return p->mProperty_mHeaderString ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerCompositionMap::optional_searchKey (const GALGAS_string & inKey,
                                                      GALGAS_stringset & outArgument0,
                                                      GALGAS_string & outArgument1) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    outArgument0 = p->mProperty_mInclusion ;
    outArgument1 = p->mProperty_mHeaderString ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @headerCompositionMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerCompositionMap ("headerCompositionMap",
                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerCompositionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerCompositionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerCompositionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_headerCompositionMap result ;
  const GALGAS_headerCompositionMap * p = (const GALGAS_headerCompositionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_headerCompositionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_headerRepartitionMap::cMapElement_headerRepartitionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_string & in_mHeaderFileName
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mHeaderFileName (in_mHeaderFileName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_headerRepartitionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_headerRepartitionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_headerRepartitionMap (mProperty_lkey, mProperty_mHeaderFileName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_headerRepartitionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderFileName" ":" ;
  mProperty_mHeaderFileName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_headerRepartitionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_headerRepartitionMap * operand = (cMapElement_headerRepartitionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mHeaderFileName.objectCompare (operand->mProperty_mHeaderFileName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap::GALGAS_headerRepartitionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap::GALGAS_headerRepartitionMap (const GALGAS_headerRepartitionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap & GALGAS_headerRepartitionMap::operator = (const GALGAS_headerRepartitionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_headerRepartitionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::constructor_mapWithMapToOverride (const GALGAS_headerRepartitionMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_headerRepartitionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_string & inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_headerRepartitionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerRepartitionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@headerRepartitionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::add_operation (const GALGAS_headerRepartitionMap & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_headerRepartitionMap result = *this ;
  cEnumerator_headerRepartitionMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mHeaderFileName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_string inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_headerRepartitionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerRepartitionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_headerRepartitionMap_searchKey = "there is no '%K' key" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_string & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_headerRepartitionMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
    outArgument0 = p->mProperty_mHeaderFileName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_headerRepartitionMap::getter_mHeaderFileNameForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
    result = p->mProperty_mHeaderFileName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::setter_setMHeaderFileNameForKey (GALGAS_string inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_headerRepartitionMap * p = (cMapElement_headerRepartitionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
    p->mProperty_mHeaderFileName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_headerRepartitionMap * GALGAS_headerRepartitionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_headerRepartitionMap * result = (cMapElement_headerRepartitionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_headerRepartitionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_headerRepartitionMap::cEnumerator_headerRepartitionMap (const GALGAS_headerRepartitionMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element cEnumerator_headerRepartitionMap::current (LOCATION_ARGS) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
  return GALGAS_headerRepartitionMap_2D_element (p->mProperty_lkey, p->mProperty_mHeaderFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_headerRepartitionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_headerRepartitionMap::current_mHeaderFileName (LOCATION_ARGS) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
  return p->mProperty_mHeaderFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_headerRepartitionMap::optional_searchKey (const GALGAS_string & inKey,
                                                      GALGAS_string & outArgument0) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
    outArgument0 = p->mProperty_mHeaderFileName ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @headerRepartitionMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerRepartitionMap ("headerRepartitionMap",
                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerRepartitionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerRepartitionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerRepartitionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap result ;
  const GALGAS_headerRepartitionMap * p = (const GALGAS_headerRepartitionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_headerRepartitionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_projectQualifiedFeatureMap::cMapElement_projectQualifiedFeatureMap (const GALGAS_lstring & inKey,
                                                                                const GALGAS_lstring & in_mFeatureValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFeatureValue (in_mFeatureValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_projectQualifiedFeatureMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_projectQualifiedFeatureMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_projectQualifiedFeatureMap (mProperty_lkey, mProperty_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_projectQualifiedFeatureMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureValue" ":" ;
  mProperty_mFeatureValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_projectQualifiedFeatureMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_projectQualifiedFeatureMap * operand = (cMapElement_projectQualifiedFeatureMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFeatureValue.objectCompare (operand->mProperty_mFeatureValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap::GALGAS_projectQualifiedFeatureMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap::GALGAS_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap & GALGAS_projectQualifiedFeatureMap::operator = (const GALGAS_projectQualifiedFeatureMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::constructor_mapWithMapToOverride (const GALGAS_projectQualifiedFeatureMap & inMapToOverride
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_projectQualifiedFeatureMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                             const GALGAS_lstring & inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_projectQualifiedFeatureMap * p = nullptr ;
  macroMyNew (p, cMapElement_projectQualifiedFeatureMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@projectQualifiedFeatureMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::add_operation (const GALGAS_projectQualifiedFeatureMap & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_projectQualifiedFeatureMap result = *this ;
  cEnumerator_projectQualifiedFeatureMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFeatureValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::setter_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_lstring inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_projectQualifiedFeatureMap * p = nullptr ;
  macroMyNew (p, cMapElement_projectQualifiedFeatureMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_projectQualifiedFeatureMap_searchKey = "the '%K' attribute is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::method_searchKey (GALGAS_lstring inKey,
                                                          GALGAS_lstring & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_projectQualifiedFeatureMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
    outArgument0 = p->mProperty_mFeatureValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_projectQualifiedFeatureMap::getter_mFeatureValueForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
    result = p->mProperty_mFeatureValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::setter_setMFeatureValueForKey (GALGAS_lstring inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_projectQualifiedFeatureMap * p = (cMapElement_projectQualifiedFeatureMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
    p->mProperty_mFeatureValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_projectQualifiedFeatureMap * GALGAS_projectQualifiedFeatureMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_projectQualifiedFeatureMap * result = (cMapElement_projectQualifiedFeatureMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_projectQualifiedFeatureMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_projectQualifiedFeatureMap::cEnumerator_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element cEnumerator_projectQualifiedFeatureMap::current (LOCATION_ARGS) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
  return GALGAS_projectQualifiedFeatureMap_2D_element (p->mProperty_lkey, p->mProperty_mFeatureValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_projectQualifiedFeatureMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_projectQualifiedFeatureMap::current_mFeatureValue (LOCATION_ARGS) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
  return p->mProperty_mFeatureValue ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_projectQualifiedFeatureMap::optional_searchKey (const GALGAS_string & inKey,
                                                            GALGAS_lstring & outArgument0) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
    outArgument0 = p->mProperty_mFeatureValue ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @projectQualifiedFeatureMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ("projectQualifiedFeatureMap",
                                                   nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_projectQualifiedFeatureMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_projectQualifiedFeatureMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectQualifiedFeatureMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap result ;
  const GALGAS_projectQualifiedFeatureMap * p = (const GALGAS_projectQualifiedFeatureMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_projectQualifiedFeatureMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeGroupList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public: GALGAS_XCodeGroupList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                             const GALGAS_string & in_mGroupName,
                                             const GALGAS_string & in_mGroupPath,
                                             const GALGAS_stringlist & in_mChildrenRefs
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                                                      const GALGAS_string & in_mGroupName,
                                                                      const GALGAS_string & in_mGroupPath,
                                                                      const GALGAS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeGroupList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupReference" ":" ;
  mObject.mProperty_mGroupReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupName" ":" ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupPath" ":" ;
  mObject.mProperty_mGroupPath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mChildrenRefs" ":" ;
  mObject.mProperty_mChildrenRefs.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_XCodeGroupList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeGroupList * operand = (cCollectionElement_XCodeGroupList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeGroupList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                        const GALGAS_string & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_stringlist & inOperand3
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeGroupList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_string & in_mGroupReference,
                                                       const GALGAS_string & in_mGroupName,
                                                       const GALGAS_string & in_mGroupPath,
                                                       const GALGAS_stringlist & in_mChildrenRefs
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (in_mGroupReference,
                                                    in_mGroupName,
                                                    in_mGroupPath,
                                                    in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::addAssign_operation (const GALGAS_string & inOperand0,
                                                 const GALGAS_string & inOperand1,
                                                 const GALGAS_string & inOperand2,
                                                 const GALGAS_stringlist & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_append (GALGAS_XCodeGroupList_2D_element inElement,
                                           C_Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeGroupList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                  const GALGAS_string inOperand1,
                                                  const GALGAS_string inOperand2,
                                                  const GALGAS_stringlist inOperand3,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_stringlist & outOperand3,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
        outOperand0 = p->mObject.mProperty_mGroupReference ;
        outOperand1 = p->mObject.mProperty_mGroupName ;
        outOperand2 = p->mObject.mProperty_mGroupPath ;
        outOperand3 = p->mObject.mProperty_mChildrenRefs ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_popFirst (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_stringlist & outOperand3,
                                             C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_popLast (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            GALGAS_stringlist & outOperand3,
                                            C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::method_first (GALGAS_string & outOperand0,
                                          GALGAS_string & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_stringlist & outOperand3,
                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::method_last (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         GALGAS_stringlist & outOperand3,
                                         C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::plusAssign_operation (const GALGAS_XCodeGroupList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupReference ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupNameAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupPathAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupPath = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupPathAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupPath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GALGAS_stringlist inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mChildrenRefs = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mChildrenRefs ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_XCodeGroupList::cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element cEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @XCodeGroupList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                       nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  const GALGAS_XCodeGroupList * p = (const GALGAS_XCodeGroupList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeGroupList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeToolTargetList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeToolTargetList : public cCollectionElement {
  public: GALGAS_XCodeToolTargetList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
                                                  const GALGAS_string & in_mTargetName,
                                                  const GALGAS_string & in_mProductFileReference,
                                                  const GALGAS_string & in_mProductFileName,
                                                  const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const GALGAS_string & in_mBuildPhaseRef,
                                                  const GALGAS_string & in_mBuildConfigurationListRef,
                                                  const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const GALGAS_string & in_mBuildConfigurationRef,
                                                  const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
                                                                                const GALGAS_string & in_mTargetName,
                                                                                const GALGAS_string & in_mProductFileReference,
                                                                                const GALGAS_string & in_mProductFileName,
                                                                                const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                                const GALGAS_string & in_mBuildPhaseRef,
                                                                                const GALGAS_string & in_mBuildConfigurationListRef,
                                                                                const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                                const GALGAS_string & in_mBuildConfigurationRef,
                                                                                const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                                const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeToolTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_XCodeToolTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeToolTargetList * operand = (cCollectionElement_XCodeToolTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeToolTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2,
                                                                                  const GALGAS_string & inOperand3,
                                                                                  const GALGAS_stringlist & inOperand4,
                                                                                  const GALGAS_string & inOperand5,
                                                                                  const GALGAS_string & inOperand6,
                                                                                  const GALGAS_stringlist & inOperand7,
                                                                                  const GALGAS_string & inOperand8,
                                                                                  const GALGAS_stringlist & inOperand9,
                                                                                  const GALGAS_string & inOperand10
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeToolTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mTargetRef,
                                                            const GALGAS_string & in_mTargetName,
                                                            const GALGAS_string & in_mProductFileReference,
                                                            const GALGAS_string & in_mProductFileName,
                                                            const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                            const GALGAS_string & in_mBuildPhaseRef,
                                                            const GALGAS_string & in_mBuildConfigurationListRef,
                                                            const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                            const GALGAS_string & in_mBuildConfigurationRef,
                                                            const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                            const GALGAS_string & in_mFrameworkBuildPhaseRef
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_string & inOperand1,
                                                      const GALGAS_string & inOperand2,
                                                      const GALGAS_string & inOperand3,
                                                      const GALGAS_stringlist & inOperand4,
                                                      const GALGAS_string & inOperand5,
                                                      const GALGAS_string & inOperand6,
                                                      const GALGAS_stringlist & inOperand7,
                                                      const GALGAS_string & inOperand8,
                                                      const GALGAS_stringlist & inOperand9,
                                                      const GALGAS_string & inOperand10
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_append (GALGAS_XCodeToolTargetList_2D_element inElement,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeToolTargetList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                       const GALGAS_string inOperand1,
                                                       const GALGAS_string inOperand2,
                                                       const GALGAS_string inOperand3,
                                                       const GALGAS_stringlist inOperand4,
                                                       const GALGAS_string inOperand5,
                                                       const GALGAS_string inOperand6,
                                                       const GALGAS_stringlist inOperand7,
                                                       const GALGAS_string inOperand8,
                                                       const GALGAS_stringlist inOperand9,
                                                       const GALGAS_string inOperand10,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       GALGAS_string & outOperand3,
                                                       GALGAS_stringlist & outOperand4,
                                                       GALGAS_string & outOperand5,
                                                       GALGAS_string & outOperand6,
                                                       GALGAS_stringlist & outOperand7,
                                                       GALGAS_string & outOperand8,
                                                       GALGAS_stringlist & outOperand9,
                                                       GALGAS_string & outOperand10,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      drop () ;    
    }
  }else{
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_popFirst (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_string & outOperand3,
                                                  GALGAS_stringlist & outOperand4,
                                                  GALGAS_string & outOperand5,
                                                  GALGAS_string & outOperand6,
                                                  GALGAS_stringlist & outOperand7,
                                                  GALGAS_string & outOperand8,
                                                  GALGAS_stringlist & outOperand9,
                                                  GALGAS_string & outOperand10,
                                                  C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_popLast (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_stringlist & outOperand4,
                                                 GALGAS_string & outOperand5,
                                                 GALGAS_string & outOperand6,
                                                 GALGAS_stringlist & outOperand7,
                                                 GALGAS_string & outOperand8,
                                                 GALGAS_stringlist & outOperand9,
                                                 GALGAS_string & outOperand10,
                                                 C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_string & outOperand2,
                                               GALGAS_string & outOperand3,
                                               GALGAS_stringlist & outOperand4,
                                               GALGAS_string & outOperand5,
                                               GALGAS_string & outOperand6,
                                               GALGAS_stringlist & outOperand7,
                                               GALGAS_string & outOperand8,
                                               GALGAS_stringlist & outOperand9,
                                               GALGAS_string & outOperand10,
                                               C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_stringlist & outOperand4,
                                              GALGAS_string & outOperand5,
                                              GALGAS_string & outOperand6,
                                              GALGAS_stringlist & outOperand7,
                                              GALGAS_string & outOperand8,
                                              GALGAS_stringlist & outOperand9,
                                              GALGAS_string & outOperand10,
                                              C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::plusAssign_operation (const GALGAS_XCodeToolTargetList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_XCodeToolTargetList::cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element cEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @XCodeToolTargetList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                            nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  const GALGAS_XCodeToolTargetList * p = (const GALGAS_XCodeToolTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeToolTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeAppTargetList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public: GALGAS_XCodeAppTargetList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
                                                 const GALGAS_string & in_mTargetName,
                                                 const GALGAS_string & in_mProductFileReference,
                                                 const GALGAS_string & in_mProductFileName,
                                                 const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const GALGAS_string & in_mBuildPhaseRef,
                                                 const GALGAS_string & in_mBuildConfigurationListRef,
                                                 const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const GALGAS_string & in_mBuildConfigurationRef,
                                                 const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                 const GALGAS__32_stringlist & in_mDependentTargets,
                                                 const GALGAS_string & in_mResourceBuildRef,
                                                 const GALGAS_stringlist & in_mResourceFileBuildRefs
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
                                                                              const GALGAS_string & in_mTargetName,
                                                                              const GALGAS_string & in_mProductFileReference,
                                                                              const GALGAS_string & in_mProductFileName,
                                                                              const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                              const GALGAS_string & in_mBuildPhaseRef,
                                                                              const GALGAS_string & in_mBuildConfigurationListRef,
                                                                              const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                              const GALGAS_string & in_mBuildConfigurationRef,
                                                                              const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                              const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                                              const GALGAS__32_stringlist & in_mDependentTargets,
                                                                              const GALGAS_string & in_mResourceBuildRef,
                                                                              const GALGAS_stringlist & in_mResourceFileBuildRefs
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeAppTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependentTargets" ":" ;
  mObject.mProperty_mDependentTargets.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceBuildRef" ":" ;
  mObject.mProperty_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceFileBuildRefs" ":" ;
  mObject.mProperty_mResourceFileBuildRefs.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_XCodeAppTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeAppTargetList * operand = (cCollectionElement_XCodeAppTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeAppTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_string & inOperand2,
                                                                                const GALGAS_string & inOperand3,
                                                                                const GALGAS_stringlist & inOperand4,
                                                                                const GALGAS_string & inOperand5,
                                                                                const GALGAS_string & inOperand6,
                                                                                const GALGAS_stringlist & inOperand7,
                                                                                const GALGAS_string & inOperand8,
                                                                                const GALGAS_stringlist & inOperand9,
                                                                                const GALGAS_string & inOperand10,
                                                                                const GALGAS__32_stringlist & inOperand11,
                                                                                const GALGAS_string & inOperand12,
                                                                                const GALGAS_stringlist & inOperand13
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_XCodeAppTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_string & in_mTargetRef,
                                                           const GALGAS_string & in_mTargetName,
                                                           const GALGAS_string & in_mProductFileReference,
                                                           const GALGAS_string & in_mProductFileName,
                                                           const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                           const GALGAS_string & in_mBuildPhaseRef,
                                                           const GALGAS_string & in_mBuildConfigurationListRef,
                                                           const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                           const GALGAS_string & in_mBuildConfigurationRef,
                                                           const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                           const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                           const GALGAS__32_stringlist & in_mDependentTargets,
                                                           const GALGAS_string & in_mResourceBuildRef,
                                                           const GALGAS_stringlist & in_mResourceFileBuildRefs
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::addAssign_operation (const GALGAS_string & inOperand0,
                                                     const GALGAS_string & inOperand1,
                                                     const GALGAS_string & inOperand2,
                                                     const GALGAS_string & inOperand3,
                                                     const GALGAS_stringlist & inOperand4,
                                                     const GALGAS_string & inOperand5,
                                                     const GALGAS_string & inOperand6,
                                                     const GALGAS_stringlist & inOperand7,
                                                     const GALGAS_string & inOperand8,
                                                     const GALGAS_stringlist & inOperand9,
                                                     const GALGAS_string & inOperand10,
                                                     const GALGAS__32_stringlist & inOperand11,
                                                     const GALGAS_string & inOperand12,
                                                     const GALGAS_stringlist & inOperand13
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_append (GALGAS_XCodeAppTargetList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeAppTargetList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                      const GALGAS_string inOperand1,
                                                      const GALGAS_string inOperand2,
                                                      const GALGAS_string inOperand3,
                                                      const GALGAS_stringlist inOperand4,
                                                      const GALGAS_string inOperand5,
                                                      const GALGAS_string inOperand6,
                                                      const GALGAS_stringlist inOperand7,
                                                      const GALGAS_string inOperand8,
                                                      const GALGAS_stringlist inOperand9,
                                                      const GALGAS_string inOperand10,
                                                      const GALGAS__32_stringlist inOperand11,
                                                      const GALGAS_string inOperand12,
                                                      const GALGAS_stringlist inOperand13,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      GALGAS_string & outOperand2,
                                                      GALGAS_string & outOperand3,
                                                      GALGAS_stringlist & outOperand4,
                                                      GALGAS_string & outOperand5,
                                                      GALGAS_string & outOperand6,
                                                      GALGAS_stringlist & outOperand7,
                                                      GALGAS_string & outOperand8,
                                                      GALGAS_stringlist & outOperand9,
                                                      GALGAS_string & outOperand10,
                                                      GALGAS__32_stringlist & outOperand11,
                                                      GALGAS_string & outOperand12,
                                                      GALGAS_stringlist & outOperand13,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      drop () ;    
    }
  }else{
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
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_popFirst (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_stringlist & outOperand4,
                                                 GALGAS_string & outOperand5,
                                                 GALGAS_string & outOperand6,
                                                 GALGAS_stringlist & outOperand7,
                                                 GALGAS_string & outOperand8,
                                                 GALGAS_stringlist & outOperand9,
                                                 GALGAS_string & outOperand10,
                                                 GALGAS__32_stringlist & outOperand11,
                                                 GALGAS_string & outOperand12,
                                                 GALGAS_stringlist & outOperand13,
                                                 C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_popLast (GALGAS_string & outOperand0,
                                                GALGAS_string & outOperand1,
                                                GALGAS_string & outOperand2,
                                                GALGAS_string & outOperand3,
                                                GALGAS_stringlist & outOperand4,
                                                GALGAS_string & outOperand5,
                                                GALGAS_string & outOperand6,
                                                GALGAS_stringlist & outOperand7,
                                                GALGAS_string & outOperand8,
                                                GALGAS_stringlist & outOperand9,
                                                GALGAS_string & outOperand10,
                                                GALGAS__32_stringlist & outOperand11,
                                                GALGAS_string & outOperand12,
                                                GALGAS_stringlist & outOperand13,
                                                C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::method_first (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_stringlist & outOperand4,
                                              GALGAS_string & outOperand5,
                                              GALGAS_string & outOperand6,
                                              GALGAS_stringlist & outOperand7,
                                              GALGAS_string & outOperand8,
                                              GALGAS_stringlist & outOperand9,
                                              GALGAS_string & outOperand10,
                                              GALGAS__32_stringlist & outOperand11,
                                              GALGAS_string & outOperand12,
                                              GALGAS_stringlist & outOperand13,
                                              C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::method_last (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_string & outOperand3,
                                             GALGAS_stringlist & outOperand4,
                                             GALGAS_string & outOperand5,
                                             GALGAS_string & outOperand6,
                                             GALGAS_stringlist & outOperand7,
                                             GALGAS_string & outOperand8,
                                             GALGAS_stringlist & outOperand9,
                                             GALGAS_string & outOperand10,
                                             GALGAS__32_stringlist & outOperand11,
                                             GALGAS_string & outOperand12,
                                             GALGAS_stringlist & outOperand13,
                                             C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GALGAS__32_stringlist inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependentTargets = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mDependentTargets ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceBuildRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceBuildRef ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceFileBuildRefs = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_XCodeAppTargetList::cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element cEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @XCodeAppTargetList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  const GALGAS_XCodeAppTargetList * p = (const GALGAS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

