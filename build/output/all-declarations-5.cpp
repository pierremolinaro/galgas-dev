#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"




//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticsComponent::rule_semanticsComponent_semantics_5F_component_5F_start_5F_symbol_i0_ (GALGAS_semanticsComponentAST & outArgument_outSemanticsComponentRoot,
                                                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                                                        C_Lexique_galgas_32_Scanner * inCompiler) {
  outArgument_outSemanticsComponentRoot.drop () ; // Release 'out' argument
  const GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_semantics) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 36)) ;
  if (var_sep.isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.stringValue () ;
  }
  GALGAS_lstring var_mSemanticsComponentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 40)) ;
  GALGAS_lstringlist var_mImportedComponentFileNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticsComponent.galgas", 42)) ;
  GALGAS_semanticDeclarationListAST var_mSemanticDeclarations = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("semanticsComponent.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticsComponent_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_import) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 46)) ;
      GALGAS_lstring var_importedComponentFileName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 47)) ;
      var_mImportedComponentFileNameList.addAssign_operation (var_importedComponentFileName  COMMA_SOURCE_FILE ("semanticsComponent.galgas", 48)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 49)) ;
    } break ;
    case 3: {
      C_String syntaxDirectedTranslationResult_3550 ;
      nt_semantic_5F_declaration_ (var_mSemanticDeclarations, syntaxDirectedTranslationResult_3550, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3550 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  const GALGAS_string var_sepf (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 54)) ;
  if (var_sepf.isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sepf.stringValue () ;
  }
  GALGAS_location var_endOfSourceFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsComponent.galgas", 56)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_semantics) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 57)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 58)) ;
  outArgument_outSemanticsComponentRoot = GALGAS_semanticsComponentAST::constructor_new (var_mSemanticsComponentName, var_mImportedComponentFileNameList, var_mSemanticDeclarations, var_endOfSourceFile  COMMA_SOURCE_FILE ("semanticsComponent.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticsComponent::rule_semanticsComponent_semantics_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                             C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_semantics) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 36)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 39)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticsComponent_0 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_import) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 46)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 47)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 49)) ;
    } break ;
    case 3: {
      C_String syntaxDirectedTranslationResult_3550 ;
      nt_semantic_5F_declaration_parse (syntaxDirectedTranslationResult_3550, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_3550 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 54)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_semantics) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 57)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticsComponent::rule_semanticsComponent_semantics_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_semantics) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 36)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticsComponent_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_import) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 46)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 47)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 49)) ;
    } break ;
    case 3: {
      nt_semantic_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 54)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_semantics) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 57)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticsComponent.galgas", 58)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_attribute_5F_declaration_i0_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_lstring var_mAttributeTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 47)) ;
  GALGAS_lstring var_mAttributeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 48)) ;
  GALGAS_lstringlist var_featureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 49)) ;
  switch (select_semanticDeclarationsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 52)) ;
    if (var_sep.isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.stringValue () ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_semanticDeclarationsSyntax_2 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_featureName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 56)) ;
        if (GALGAS_string ("%").add_operation (var_featureName.reader_string (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 57)).isValid ()) {
          ioSyntaxDirectedTranslationResult << GALGAS_string ("%").add_operation (var_featureName.reader_string (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 57)).stringValue () ;
        }
        var_featureList.addAssign_operation (var_featureName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 58)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_setter) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 60)) ;
        if (GALGAS_string ("%setter").isValid ()) {
          ioSyntaxDirectedTranslationResult << GALGAS_string ("%setter").stringValue () ;
        }
        var_featureList.addAssign_operation (GALGAS_lstring::constructor_new (GALGAS_string ("setter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 62))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 62))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 62)) ;
      } break ;
      default:
        break ;
      }
      switch (select_semanticDeclarationsSyntax_1 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 65)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 68)) ;
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_mAttributeTypeName, var_mAttributeName, var_featureList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_attribute_5F_declaration_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 47)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 48)) ;
  switch (select_semanticDeclarationsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_semanticDeclarationsSyntax_2 (inCompiler)) {
      case 1: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 56)) ;
      } break ;
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_setter) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 60)) ;
      } break ;
      default:
        break ;
      }
      switch (select_semanticDeclarationsSyntax_1 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 65)) ;
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
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 68)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_attribute_5F_declaration_i0_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 48)) ;
  switch (select_semanticDeclarationsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 52)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_semanticDeclarationsSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 56)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_setter) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 60)) ;
      } break ;
      default:
        break ;
      }
      switch (select_semanticDeclarationsSyntax_1 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 65)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i1_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                                                      C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 84)) ;
  GALGAS_lstring var_mListmapTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_listmapDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 86)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 87)) ;
  GALGAS_lstring var_mAssociatedListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 88)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 89)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 90)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName, var_mAssociatedListTypeName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 91))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 84)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_listmapDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 86)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 87)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 88)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 89)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 90)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i1_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 84)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 86)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 87)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 88)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 89)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 90)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i2_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                                                      C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_array) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 105)) ;
  GALGAS_lstring var_arrayTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_arrayTypeDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 107)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 108)) ;
  GALGAS_lstring var_elementListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_arrayElementTypeReference, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 109)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 110)) ;
  GALGAS_luint var_dimension = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 111)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 112)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 113)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName, var_elementListTypeName, var_dimension  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 114))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_array) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 105)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_arrayTypeDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 107)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 108)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_arrayElementTypeReference, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 109)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 110)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 111)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 112)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 113)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i2_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_array) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 105)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 107)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 108)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 109)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 110)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unsigned_5F_literal_5F_integer) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 111)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 112)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_insert_5F_method_5F_declaration_i3_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                                                              C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 128)) ;
  GALGAS_lstring var_stateName ;
  switch (select_semanticDeclarationsSyntax_3 (inCompiler)) {
  case 1: {
    var_stateName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 131))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 131)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_state) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 133)) ;
    var_stateName = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 134)) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 136)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 137)) ;
  GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 138)) ;
  GALGAS_lstring var_mShadowErrorMessage ;
  switch (select_semanticDeclarationsSyntax_4 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 141))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 141)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 143)) ;
    var_mShadowErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 144)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 146)) ;
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage, var_mShadowErrorMessage, var_stateName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_insert_5F_method_5F_declaration_i3_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                                   C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 128)) ;
  switch (select_semanticDeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_state) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 133)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 134)) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 136)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 137)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 138)) ;
  switch (select_semanticDeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 143)) ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 144)) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 146)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_insert_5F_method_5F_declaration_i3_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 128)) ;
  switch (select_semanticDeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_state) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 133)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 134)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 136)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 137)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 138)) ;
  switch (select_semanticDeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 143)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 144)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 146)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i4_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                                                      C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_map) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 158)) ;
  GALGAS_lstring var_mMapTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "-element") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 160)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 162)) ;
  GALGAS_propertyInCollectionListAST var_mAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 163)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 164)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 165)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 166)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 167)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_5 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_8429 ;
      nt_attribute_5F_declaration_ (var_mAttributeList, syntaxDirectedTranslationResult_8429, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_8429 ;
    } break ;
    case 3: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 172)) ;
      C_String syntaxDirectedTranslationResult_8500 ;
      nt_insert_5F_method_5F_declaration_ (var_mInsertMethodList, syntaxDirectedTranslationResult_8500, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_8500 ;
    } break ;
    case 4: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 175)) ;
      GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 176)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 177)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 178)) ;
      GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 179)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 180)) ;
      var_mSearchMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 184))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 184))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 181)) ;
    } break ;
    case 5: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_remove) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 186)) ;
      GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 187)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 188)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 189)) ;
      GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 191)) ;
      var_mRemoveMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 192)) ;
    } break ;
    case 6: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 196)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_or) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 197)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_replace) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 198)) ;
      var_insertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 199))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 199)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 202)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 206)), var_mAttributeList, var_mInsertMethodList, var_mSearchMethodList, var_mRemoveMethodList, var_insertOrReplaceDeclarationListAST  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 203))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 203)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i4_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_map) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 158)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "-element") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 160)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 162)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_5 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_8429 ;
      nt_attribute_5F_declaration_parse (syntaxDirectedTranslationResult_8429, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_8429 ;
    } break ;
    case 3: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 172)) ;
      C_String syntaxDirectedTranslationResult_8500 ;
      nt_insert_5F_method_5F_declaration_parse (syntaxDirectedTranslationResult_8500, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_8500 ;
    } break ;
    case 4: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 175)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 176)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 177)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 178)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 179)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 180)) ;
    } break ;
    case 5: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_remove) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 186)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 187)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 188)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 189)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 190)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 191)) ;
    } break ;
    case 6: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 196)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_or) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 197)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_replace) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 198)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 202)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i4_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_map) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 158)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 160)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 162)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_5 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 172)) ;
      nt_insert_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 175)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 176)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 178)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 179)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 180)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_remove) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 186)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 187)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 188)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 189)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 191)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 196)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_or) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 197)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_replace) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 198)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 202)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i5_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                                                      C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 218)) ;
  GALGAS_lstring var_mMapTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 220)) ;
  GALGAS_lstring var_mapProxyTypeName = GALGAS_lstring::constructor_new (var_mMapTypeName.mAttribute_string.add_operation (GALGAS_string ("-proxy"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 221)), var_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 221)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 223)) ;
  GALGAS_propertyInCollectionListAST var_propertyList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 224)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 225)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 226)) ;
  GALGAS_mapStateList var_mapStateList = GALGAS_mapStateList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 227)) ;
  GALGAS_mapOverrideBlockListAST var_mapOverrideBlockListAST = GALGAS_mapOverrideBlockListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 228)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_6 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_state) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 231)) ;
      GALGAS_lstring var_stateName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 232)) ;
      GALGAS_mapAutomatonMessageKind var_stateMessageKind ;
      GALGAS_lstring var_stateMessage ;
      switch (select_semanticDeclarationsSyntax_7 (inCompiler)) {
      case 1: {
        var_stateMessageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 236)) ;
        var_stateMessage = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 237))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 237)) ;
      } break ;
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 239)) ;
        var_stateMessage = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 240)) ;
        var_stateMessageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 241)) ;
      } break ;
      case 3: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 243)) ;
        var_stateMessage = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 244)) ;
        var_stateMessageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 245)) ;
      } break ;
      default:
        break ;
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 247)) ;
      GALGAS_mapStateTransitionList var_transitionList = GALGAS_mapStateTransitionList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 248)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_semanticDeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_actionName = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 251)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 252)) ;
          GALGAS_lstring var_targetStateName = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 253)) ;
          GALGAS_mapAutomatonMessageKind var_transitionMessageKind ;
          GALGAS_lstring var_transitionMessage ;
          switch (select_semanticDeclarationsSyntax_9 (inCompiler)) {
          case 1: {
            var_transitionMessageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 257)) ;
            var_transitionMessage = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 258))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 258)) ;
          } break ;
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 260)) ;
            var_transitionMessage = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 261)) ;
            var_transitionMessageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 262)) ;
          } break ;
          case 3: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 264)) ;
            var_transitionMessage = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 265)) ;
            var_transitionMessageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 266)) ;
          } break ;
          default:
            break ;
          }
          var_transitionList.addAssign_operation (var_actionName, var_targetStateName, var_transitionMessageKind, var_transitionMessage  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 268)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      var_mapStateList.addAssign_operation (var_stateName, var_stateMessageKind, var_stateMessage, var_transitionList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 274)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 279)) ;
    } break ;
    case 3: {
      C_String syntaxDirectedTranslationResult_11667 ;
      nt_attribute_5F_declaration_ (var_propertyList, syntaxDirectedTranslationResult_11667, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_11667 ;
    } break ;
    case 4: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 283)) ;
      C_String syntaxDirectedTranslationResult_11736 ;
      nt_insert_5F_method_5F_declaration_ (var_mInsertMethodList, syntaxDirectedTranslationResult_11736, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_11736 ;
    } break ;
    case 5: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 286)) ;
      GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 287)) ;
      GALGAS_lstring var_actionName ;
      switch (select_semanticDeclarationsSyntax_10 (inCompiler)) {
      case 1: {
        var_actionName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 290))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 290)) ;
      } break ;
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_do) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 292)) ;
        var_actionName = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 293)) ;
      } break ;
      default:
        break ;
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 295)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 296)) ;
      GALGAS_lstring var_mErrorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 297)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 298)) ;
      var_mSearchMethodList.addAssign_operation (var_mMethodName, var_mErrorMessage, var_actionName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 299)) ;
    } break ;
    case 6: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 304)) ;
      GALGAS_lstring var_overrideBlockName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 305)) ;
      GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_31_AST = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 306)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 307)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_semanticDeclarationsSyntax_11 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_sourceState_31_ = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 310)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 311)) ;
          GALGAS_lstring var_sourceState_32_ = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 312)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 313)) ;
          GALGAS_lstring var_targetState = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 314)) ;
          GALGAS_mapAutomatonMessageKind var_messageKind ;
          GALGAS_lstring var_messageText ;
          switch (select_semanticDeclarationsSyntax_12 (inCompiler)) {
          case 1: {
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 318)) ;
            var_messageText = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 319))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 319)) ;
          } break ;
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 321)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 322)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 323)) ;
          } break ;
          case 3: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 325)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 326)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 327)) ;
          } break ;
          default:
            break ;
          }
          var_mapOverrideBlockDescriptor_31_AST.addAssign_operation (var_sourceState_31_, var_sourceState_32_, var_targetState, var_messageKind, var_messageText  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 329)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 331)) ;
      GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_32_AST = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 332)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 333)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_semanticDeclarationsSyntax_13 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_sourceState_31_ = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 336)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 337)) ;
          GALGAS_lstring var_sourceState_32_ = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 338)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 339)) ;
          GALGAS_lstring var_targetState = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 340)) ;
          GALGAS_mapAutomatonMessageKind var_messageKind ;
          GALGAS_lstring var_messageText ;
          switch (select_semanticDeclarationsSyntax_14 (inCompiler)) {
          case 1: {
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 344)) ;
            var_messageText = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 345))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 345)) ;
          } break ;
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 347)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 348)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 349)) ;
          } break ;
          case 3: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 351)) ;
            var_messageKind = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 352)) ;
            var_messageText = inCompiler->synthetizedAttribute_tokenString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 353)) ;
          } break ;
          default:
            break ;
          }
          var_mapOverrideBlockDescriptor_32_AST.addAssign_operation (var_sourceState_31_, var_sourceState_32_, var_targetState, var_messageKind, var_messageText  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 355)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 357)) ;
      var_mapOverrideBlockListAST.addAssign_operation (var_overrideBlockName, var_mapOverrideBlockDescriptor_31_AST, var_mapOverrideBlockDescriptor_32_AST  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 358)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 360)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 365)), var_propertyList, var_mInsertMethodList, var_mSearchMethodList, var_mapStateList, var_mapOverrideBlockListAST  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 362))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 362)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_mapProxyDeclarationAST::constructor_new (GALGAS_bool (false), var_mapProxyTypeName, var_mMapTypeName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 372))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 372)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i5_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 218)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 220)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 223)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_6 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_state) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 231)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 232)) ;
      switch (select_semanticDeclarationsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 239)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 240)) ;
      } break ;
      case 3: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 243)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 244)) ;
      } break ;
      default:
        break ;
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 247)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_semanticDeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 251)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 252)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 253)) ;
          switch (select_semanticDeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 260)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 261)) ;
          } break ;
          case 3: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 264)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 265)) ;
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
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 279)) ;
    } break ;
    case 3: {
      C_String syntaxDirectedTranslationResult_11667 ;
      nt_attribute_5F_declaration_parse (syntaxDirectedTranslationResult_11667, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_11667 ;
    } break ;
    case 4: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 283)) ;
      C_String syntaxDirectedTranslationResult_11736 ;
      nt_insert_5F_method_5F_declaration_parse (syntaxDirectedTranslationResult_11736, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_11736 ;
    } break ;
    case 5: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 286)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 287)) ;
      switch (select_semanticDeclarationsSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_do) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 292)) ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 293)) ;
      } break ;
      default:
        break ;
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 295)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 296)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 297)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 298)) ;
    } break ;
    case 6: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 304)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 305)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 307)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_semanticDeclarationsSyntax_11 (inCompiler)) {
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 310)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 311)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 312)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 313)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 314)) ;
          switch (select_semanticDeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 321)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 323)) ;
          } break ;
          case 3: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 325)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 327)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 331)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 333)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_semanticDeclarationsSyntax_13 (inCompiler)) {
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 336)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 337)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 338)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 339)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 340)) ;
          switch (select_semanticDeclarationsSyntax_14 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 347)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 349)) ;
          } break ;
          case 3: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 351)) ;
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 353)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 357)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 360)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i5_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 218)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 220)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 223)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_state) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 231)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 232)) ;
      switch (select_semanticDeclarationsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 239)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 240)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 243)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 244)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 247)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_semanticDeclarationsSyntax_8 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 251)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 252)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 253)) ;
          switch (select_semanticDeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 260)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 261)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 264)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 265)) ;
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
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 279)) ;
    } break ;
    case 3: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 283)) ;
      nt_insert_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_search) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 286)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 287)) ;
      switch (select_semanticDeclarationsSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_do) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 292)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 293)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 295)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 296)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 297)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 298)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 304)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 305)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 307)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        switch (select_semanticDeclarationsSyntax_11 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 310)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 311)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 312)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 313)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 314)) ;
          switch (select_semanticDeclarationsSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 321)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 323)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 325)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 327)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 331)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 333)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_semanticDeclarationsSyntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 336)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 337)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 338)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 339)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 340)) ;
          switch (select_semanticDeclarationsSyntax_14 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_warning) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 347)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 349)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 351)) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 353)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 357)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 360)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i6_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                                                      C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_bool var_mIsAbstract ;
  switch (select_semanticDeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    var_mIsAbstract = GALGAS_bool (false) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 390)) ;
    var_mIsAbstract = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_class) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 393)) ;
  GALGAS_lstringlist var_classNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 394)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_classDefinition, "") ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 396)) ;
    var_classNameList.addAssign_operation (var_className  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 397)) ;
    switch (select_semanticDeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 399)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_mSuperClassName ;
  switch (select_semanticDeclarationsSyntax_17 (inCompiler)) {
  case 1: {
    var_mSuperClassName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 403)) ;
  } break ;
  case 2: {
    const GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_extends) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 405)) ;
    if (var_sep.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 406)).isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 406)).stringValue () ;
    }
    var_mSuperClassName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 407)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 409)) ;
  switch (select_semanticDeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 412)) ;
    if (var_sep.isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.stringValue () ;
    }
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_classFeatureName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 415)) ;
      if (GALGAS_string ("%").add_operation (var_classFeatureName.reader_string (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 416)).isValid ()) {
        ioSyntaxDirectedTranslationResult << GALGAS_string ("%").add_operation (var_classFeatureName.reader_string (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 416)).stringValue () ;
      }
      var_classFeatureList.addAssign_operation (var_classFeatureName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 417)) ;
      switch (select_semanticDeclarationsSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 419)) ;
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
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 422)) ;
  GALGAS_string var_mClassMessage = GALGAS_string::makeEmptyString () ;
  GALGAS_propertyInCollectionListAST var_mAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 425)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_semanticDeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_16140 ;
      nt_attribute_5F_declaration_ (var_mAttributeList, syntaxDirectedTranslationResult_16140, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_16140 ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 430)) ;
  cEnumerator_lstringlist enumerator_16196 (var_classNameList, kEnumeration_up) ;
  while (enumerator_16196.hasCurrentObject ()) {
    ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_mIsAbstract, enumerator_16196.current_mValue (HERE), var_mSuperClassName, var_classFeatureList, var_mAttributeList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 432))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 432)) ;
    enumerator_16196.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i6_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  switch (select_semanticDeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 390)) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_class) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 393)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_classDefinition, "") ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 396)) ;
    switch (select_semanticDeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 399)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_semanticDeclarationsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_extends) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 405)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 407)) ;
  } break ;
  default:
    break ;
  }
  switch (select_semanticDeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 412)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 415)) ;
      switch (select_semanticDeclarationsSyntax_19 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 419)) ;
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
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 422)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_semanticDeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_16140 ;
      nt_attribute_5F_declaration_parse (syntaxDirectedTranslationResult_16140, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_16140 ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 430)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i6_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  switch (select_semanticDeclarationsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 390)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_class) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 393)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 396)) ;
    switch (select_semanticDeclarationsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 399)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_semanticDeclarationsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_extends) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 405)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 407)) ;
  } break ;
  default:
    break ;
  }
  switch (select_semanticDeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_feature) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 412)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 415)) ;
      switch (select_semanticDeclarationsSyntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 419)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 422)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_semanticDeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 430)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i7_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                                                      C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_struct) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 451)) ;
  GALGAS_lstring var_mListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 452)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 453)) ;
  GALGAS_propertyInCollectionListAST var_mAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 454)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_17312 ;
      nt_attribute_5F_declaration_ (var_mAttributeList, syntaxDirectedTranslationResult_17312, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_17312 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 459)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_mListTypeName, var_mAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 460))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 460)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i7_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_struct) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 451)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 452)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 453)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_17312 ;
      nt_attribute_5F_declaration_parse (syntaxDirectedTranslationResult_17312, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_17312 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 459)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i7_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_struct) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 451)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 452)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 453)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 459)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i8_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                                                      C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_list) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 475)) ;
  GALGAS_lstring var_mListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "-element") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 476)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 477)) ;
  GALGAS_propertyInCollectionListAST var_mAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 478)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_18389 ;
      nt_attribute_5F_declaration_ (var_mAttributeList, syntaxDirectedTranslationResult_18389, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_18389 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 483)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_mListTypeName, var_mAttributeList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 484))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 484)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i8_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                           C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_list) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 475)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "-element") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 476)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 477)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_18389 ;
      nt_attribute_5F_declaration_parse (syntaxDirectedTranslationResult_18389, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_18389 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 483)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i8_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_list) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 475)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 476)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 477)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 483)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i9_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                               C_String & ioSyntaxDirectedTranslationResult,
                                                                                                               C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 499)) ;
  GALGAS_bool var_mAscending ;
  switch (select_semanticDeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 502)) ;
    var_mAscending = GALGAS_bool (true) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 505)) ;
    var_mAscending = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName, var_mAscending  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 508)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i9_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                                    C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 499)) ;
  switch (select_semanticDeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 502)) ;
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 505)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i9_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 499)) ;
  switch (select_semanticDeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 502)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 505)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i10_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 515)) ;
  GALGAS_lstring var_mSortedListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "-element") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 516)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 517)) ;
  GALGAS_propertyInCollectionListAST var_mAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 518)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_20058 ;
      nt_attribute_5F_declaration_ (var_mAttributeList, syntaxDirectedTranslationResult_20058, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_20058 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 523)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 524)) ;
  GALGAS_sortedListSortDescriptorListAST var_mSortDescriptorList = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 525)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    C_String syntaxDirectedTranslationResult_20208 ;
    nt_sortedlist_5F_sort_5F_descriptor_ (var_mSortDescriptorList, syntaxDirectedTranslationResult_20208, inCompiler) ;
    ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_20208 ;
    switch (select_semanticDeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 529)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 531)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_mSortedListTypeName, var_mAttributeList, var_mSortDescriptorList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 532))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 532)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i10_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 515)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "-element") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 516)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 517)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      C_String syntaxDirectedTranslationResult_20058 ;
      nt_attribute_5F_declaration_parse (syntaxDirectedTranslationResult_20058, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_20058 ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 523)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 524)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    C_String syntaxDirectedTranslationResult_20208 ;
    nt_sortedlist_5F_sort_5F_descriptor_parse (syntaxDirectedTranslationResult_20208, inCompiler) ;
    ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_20208 ;
    switch (select_semanticDeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 529)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 531)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i10_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 515)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 516)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 517)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_24 (inCompiler)) {
    case 2: {
      nt_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 523)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 524)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    switch (select_semanticDeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 529)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 531)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i11_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_enum) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 549)) ;
  GALGAS_lstring var_mEnumTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_enumDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 550)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 551)) ;
  GALGAS_enumConstantList var_mConstantList = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 552)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName = inCompiler->synthetizedAttribute_tokenString () ;
    GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 554)) ;
    if (var_sep.add_operation (GALGAS_string ("case "), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 555)).add_operation (var_constantName.reader_string (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 555)).isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("case "), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 555)).add_operation (var_constantName.reader_string (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 555)).stringValue () ;
    }
    GALGAS__32_lstringlist var_associatedValueTypeList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 556)) ;
    switch (select_semanticDeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 559)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType = inCompiler->synthetizedAttribute_tokenString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 561)) ;
        GALGAS_lstring var_associatedValueName ;
        switch (select_semanticDeclarationsSyntax_29 (inCompiler)) {
        case 1: {
          var_associatedValueName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 564)) ;
        } break ;
        case 2: {
          var_associatedValueName = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 566)) ;
        } break ;
        default:
          break ;
        }
        var_associatedValueTypeList.addAssign_operation (var_associatedValueType, var_associatedValueName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 568)) ;
        switch (select_semanticDeclarationsSyntax_28 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 570)) ;
          if (GALGAS_string (" ").isValid ()) {
            ioSyntaxDirectedTranslationResult << GALGAS_string (" ").stringValue () ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 573)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList.addAssign_operation (var_constantName, var_associatedValueTypeList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 575)) ;
    switch (select_semanticDeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 577)) ;
      if (GALGAS_string (" ").isValid ()) {
        ioSyntaxDirectedTranslationResult << GALGAS_string (" ").stringValue () ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 580)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName, var_mConstantList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 581))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 581)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i11_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_enum) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 549)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_enumDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 550)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 551)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 554)) ;
    switch (select_semanticDeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 559)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 561)) ;
        switch (select_semanticDeclarationsSyntax_29 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 566)) ;
        } break ;
        default:
          break ;
        }
        switch (select_semanticDeclarationsSyntax_28 (inCompiler)) {
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 570)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 573)) ;
    } break ;
    default:
      break ;
    }
    switch (select_semanticDeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 577)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 580)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i11_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_enum) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 549)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 550)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 551)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 554)) ;
    switch (select_semanticDeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 559)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 561)) ;
        switch (select_semanticDeclarationsSyntax_29 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 566)) ;
        } break ;
        default:
          break ;
        }
        switch (select_semanticDeclarationsSyntax_28 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 570)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 573)) ;
    } break ;
    default:
      break ;
    }
    switch (select_semanticDeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 577)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 580)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i12_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_bool var_isInternal ;
  switch (select_semanticDeclarationsSyntax_30 (inCompiler)) {
  case 1: {
    var_isInternal = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_local) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 599)) ;
    if (var_sep.add_operation (GALGAS_string ("private"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 600)).isValid ()) {
      ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("private"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 600)).stringValue () ;
    }
    var_isInternal = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 603)) ;
  GALGAS_lstring var_mFilewrapperName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_filewrapperDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 604)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_in) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 605)) ;
  GALGAS_lstring var_mFilewrapperPath = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 606)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 607)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 608)) ;
  switch (select_semanticDeclarationsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 612)) ;
      var_filewrapperTextFileExtensionList.addAssign_operation (var_pathExtension  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 613)) ;
      switch (select_semanticDeclarationsSyntax_32 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 615)) ;
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
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 618)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 619)) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 620)) ;
  switch (select_semanticDeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_pathExtension = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 624)) ;
      var_filewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 625)) ;
      switch (select_semanticDeclarationsSyntax_34 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 627)) ;
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
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 630)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 631)) ;
  GALGAS_filewrapperTemplateListAST var_mFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 632)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_semanticDeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_template) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 635)) ;
      GALGAS_lstring var_mFilewrapperTemplateName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 636)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 637)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 638)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_semanticDeclarationsSyntax_36 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 641)) ;
          GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 642)) ;
          GALGAS_bool var_isUnused ;
          switch (select_semanticDeclarationsSyntax_37 (inCompiler)) {
          case 1: {
            var_isUnused = GALGAS_bool (false) ;
          } break ;
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unused) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 647)) ;
            var_isUnused = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 650)) ;
          var_filewrapperTemplateFormalInputParameters.addAssign_operation (var_selector, var_typeName, var_argumentName, var_isUnused  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 651)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 653)) ;
      var_mFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName, var_mFilewrapperTemplatePath, var_filewrapperTemplateFormalInputParameters  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 654)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 659)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), var_isInternal, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 663)), var_mFilewrapperName, var_mFilewrapperPath, var_filewrapperTextFileExtensionList, var_filewrapperBinaryFileExtensionList, var_mFilewrapperTemplateList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 660))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 660)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i12_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  switch (select_semanticDeclarationsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
    ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_local) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 599)) ;
  } break ;
  default:
    break ;
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 603)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_filewrapperDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 604)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_in) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 605)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 606)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 607)) ;
  switch (select_semanticDeclarationsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 612)) ;
      switch (select_semanticDeclarationsSyntax_32 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 615)) ;
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
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 618)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 619)) ;
  switch (select_semanticDeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 624)) ;
      switch (select_semanticDeclarationsSyntax_34 (inCompiler)) {
      case 2: {
        ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
        ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 627)) ;
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
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 630)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 631)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_semanticDeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_template) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 635)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 636)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 637)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_semanticDeclarationsSyntax_36 (inCompiler)) {
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 641)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 642)) ;
          switch (select_semanticDeclarationsSyntax_37 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
            ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unused) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 647)) ;
          } break ;
          default:
            break ;
          }
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 650)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 653)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 659)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i12_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  switch (select_semanticDeclarationsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_local) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 599)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 603)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 604)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_in) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 605)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 606)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 607)) ;
  switch (select_semanticDeclarationsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 612)) ;
      switch (select_semanticDeclarationsSyntax_32 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 615)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 618)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 619)) ;
  switch (select_semanticDeclarationsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 624)) ;
      switch (select_semanticDeclarationsSyntax_34 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 627)) ;
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 630)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 631)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_semanticDeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_template) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 635)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 636)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 637)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_semanticDeclarationsSyntax_36 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 641)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 642)) ;
          switch (select_semanticDeclarationsSyntax_37 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_unused) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 647)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 650)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 653)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 659)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i13_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 679)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 680)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceAbstractCategoryMethod, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 681)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_abstractCategoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 682)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  C_String syntaxDirectedTranslationResult_25725 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_25725, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_25725 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 684)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_abstractCategoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 685))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 685)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i13_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 679)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 680)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceAbstractCategoryMethod, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 681)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_abstractCategoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 682)) ;
  C_String syntaxDirectedTranslationResult_25725 ;
  nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_25725, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_25725 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 684)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i13_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 679)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 680)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 681)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_abstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 682)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 684)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i14_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 700)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 701)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 702)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryMethod, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 703)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideAbstractCategoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 704)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  C_String syntaxDirectedTranslationResult_26880 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_26880, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_26880 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 706)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_overridingAbstractCategoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 707))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 707)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i14_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 700)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 701)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 702)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryMethod, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 703)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideAbstractCategoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 704)) ;
  C_String syntaxDirectedTranslationResult_26880 ;
  nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_26880, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_26880 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 706)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i14_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 700)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 701)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 702)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 703)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideAbstractCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 704)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 706)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i15_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 726)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceCategoryMethod, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 727)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_categoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 728)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  C_String syntaxDirectedTranslationResult_28132 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_28132, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_28132 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 730)) ;
  if (GALGAS_string (" {").isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" {").stringValue () ;
  }
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  C_String syntaxDirectedTranslationResult_28238 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, syntaxDirectedTranslationResult_28238, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_28238 ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 733)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 734)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 734)).stringValue () ;
  }
  GALGAS_location var_endOfMethodLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 735)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 736)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 737)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_categoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList, var_routineInstructionList, var_endOfMethodLocation  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 738))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 738)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i15_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 726)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceCategoryMethod, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 727)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_categoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 728)) ;
  C_String syntaxDirectedTranslationResult_28132 ;
  nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_28132, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_28132 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 730)) ;
  C_String syntaxDirectedTranslationResult_28238 ;
  nt_semantic_5F_instruction_5F_list_parse (syntaxDirectedTranslationResult_28238, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_28238 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 733)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 736)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 737)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i15_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 726)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceCategoryMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 727)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_categoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 728)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 730)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 733)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 736)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 737)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i16_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 759)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 760)) ;
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideCategoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 761)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideCategoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 762)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  C_String syntaxDirectedTranslationResult_29677 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_29677, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_29677 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 764)) ;
  if (GALGAS_string (" {").isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" {").stringValue () ;
  }
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  C_String syntaxDirectedTranslationResult_29783 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, syntaxDirectedTranslationResult_29783, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_29783 ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 767)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 768)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 768)).stringValue () ;
  }
  GALGAS_location var_endOfMethodLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 769)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 770)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 771)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_overridingCategoryMethodAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_formalParameterList, var_routineInstructionList, var_endOfMethodLocation  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 772))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 772)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i16_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 759)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 760)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideCategoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 761)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideCategoryMethodDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 762)) ;
  C_String syntaxDirectedTranslationResult_29677 ;
  nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_29677, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_29677 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 764)) ;
  C_String syntaxDirectedTranslationResult_29783 ;
  nt_semantic_5F_instruction_5F_list_parse (syntaxDirectedTranslationResult_29783, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_29783 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 767)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 770)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 771)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i16_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 759)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 760)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 761)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideCategoryMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 762)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 764)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 767)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 770)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 771)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i17_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 793)) ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 794)) ;
  if (var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 795)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 795)).stringValue () ;
  }
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 796)) ;
  GALGAS_lstring var_mReaderName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_abstractCategoryReaderDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 797)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  C_String syntaxDirectedTranslationResult_31222 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, syntaxDirectedTranslationResult_31222, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_31222 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 799)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 800)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 801)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 802)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_abstractCategoryReaderAST::constructor_new (GALGAS_bool (false), var_className, var_mReaderName, var_mFormalInputParameterList, var_mReturnedTypeName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 803))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 803)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i17_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 793)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 794)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 796)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_abstractCategoryReaderDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 797)) ;
  C_String syntaxDirectedTranslationResult_31222 ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_31222, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_31222 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 799)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 800)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 801)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 802)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i17_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 793)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 794)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 796)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_abstractCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 797)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 799)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 800)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 801)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 802)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i18_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 823)) ;
  if (var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 824)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 824)).stringValue () ;
  }
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 825)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_categoryReaderDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 826)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  C_String syntaxDirectedTranslationResult_32644 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, syntaxDirectedTranslationResult_32644, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_32644 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 829)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 830)) ;
  GALGAS_lstring var_mReturnedVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 831)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 832)) ;
  if (GALGAS_string (" {").isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" {").stringValue () ;
  }
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  C_String syntaxDirectedTranslationResult_32835 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, syntaxDirectedTranslationResult_32835, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_32835 ;
  var_sep = GALGAS_string (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 835)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 836)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 836)).stringValue () ;
  }
  GALGAS_location var_endOfInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 837)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 838)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 839)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_categoryReaderAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_mFormalInputParameterList, var_mReturnedTypeName, var_mReturnedVariableName, var_routineInstructionList, var_endOfInstructionList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 840))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 840)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i18_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 823)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 825)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_categoryReaderDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 826)) ;
  C_String syntaxDirectedTranslationResult_32644 ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_32644, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_32644 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 829)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 830)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 831)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 832)) ;
  C_String syntaxDirectedTranslationResult_32835 ;
  nt_semantic_5F_instruction_5F_list_parse (syntaxDirectedTranslationResult_32835, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_32835 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 835)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 838)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 839)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i18_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 823)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 825)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_categoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 826)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 829)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 830)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 831)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 832)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 835)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 838)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 839)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i19_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 863)) ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 864)) ;
  if (var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 865)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 865)).stringValue () ;
  }
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 866)) ;
  GALGAS_lstring var_mMethodName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideCategoryReaderDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 867)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  C_String syntaxDirectedTranslationResult_34385 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, syntaxDirectedTranslationResult_34385, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_34385 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 870)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 871)) ;
  GALGAS_lstring var_mReturnedVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 872)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 873)) ;
  if (GALGAS_string (" {").isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" {").stringValue () ;
  }
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  C_String syntaxDirectedTranslationResult_34576 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, syntaxDirectedTranslationResult_34576, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_34576 ;
  var_sep = GALGAS_string (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 876)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 877)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 877)).stringValue () ;
  }
  GALGAS_location var_endOfInstructionList = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 878)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 879)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 880)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_overridingCategoryReaderAST::constructor_new (GALGAS_bool (false), var_className, var_mMethodName, var_mFormalInputParameterList, var_mReturnedTypeName, var_mReturnedVariableName, var_routineInstructionList, var_endOfInstructionList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 881))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 881)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i19_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 863)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 864)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 866)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideCategoryReaderDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 867)) ;
  C_String syntaxDirectedTranslationResult_34385 ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_34385, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_34385 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 870)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 871)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 872)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 873)) ;
  C_String syntaxDirectedTranslationResult_34576 ;
  nt_semantic_5F_instruction_5F_list_parse (syntaxDirectedTranslationResult_34576, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_34576 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 876)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 879)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 880)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i19_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 863)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 864)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 866)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 867)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 870)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 871)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 872)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 873)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 876)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 879)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 880)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i20_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 904)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 905)) ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 906)) ;
  if (var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 907)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 907)).stringValue () ;
  }
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 908)) ;
  GALGAS_lstring var_mReaderName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideAbstractCategoryReaderDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 909)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList ;
  C_String syntaxDirectedTranslationResult_36154 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList, syntaxDirectedTranslationResult_36154, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_36154 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 912)) ;
  GALGAS_lstring var_mReturnedTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 913)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 914)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 915)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_overridingAbstractCategoryReaderAST::constructor_new (GALGAS_bool (false), var_className, var_mReaderName, var_mFormalInputParameterList, var_mReturnedTypeName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 916))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 916)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i20_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 904)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 905)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 906)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 908)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideAbstractCategoryReaderDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 909)) ;
  C_String syntaxDirectedTranslationResult_36154 ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_36154, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_36154 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 912)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 913)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 914)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 915)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i20_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 904)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 905)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 906)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 908)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideAbstractCategoryReaderDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 909)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 912)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 913)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 914)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 915)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i21_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 936)) ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 937)) ;
  if (var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 938)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 938)).stringValue () ;
  }
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceAbstractCategoryModifier, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 939)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_abstractCategoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 940)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  C_String syntaxDirectedTranslationResult_37563 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_37563, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_37563 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 942)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_abstractCategoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 943))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 943)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i21_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 936)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 937)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceAbstractCategoryModifier, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 939)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_abstractCategoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 940)) ;
  C_String syntaxDirectedTranslationResult_37563 ;
  nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_37563, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_37563 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 942)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i21_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 936)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 937)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 939)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_abstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 940)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 942)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i22_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 962)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 963)) ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 964)) ;
  if (var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 965)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 965)).stringValue () ;
  }
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryModifier, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 966)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideAbstractCategoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 967)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  C_String syntaxDirectedTranslationResult_38924 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_38924, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_38924 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 969)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_overridingAbstractCategoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 970))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 970)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i22_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 962)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 963)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 964)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryModifier, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 966)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideAbstractCategoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 967)) ;
  C_String syntaxDirectedTranslationResult_38924 ;
  nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_38924, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_38924 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 969)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i22_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 962)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 963)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 964)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideAbstractCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 966)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideAbstractCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 967)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 969)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i23_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 989)) ;
  if (var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 990)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 990)).stringValue () ;
  }
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceCategoryModifier, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 991)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_categoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 992)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  C_String syntaxDirectedTranslationResult_40229 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_40229, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_40229 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 994)) ;
  if (GALGAS_string (" {").isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" {").stringValue () ;
  }
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  C_String syntaxDirectedTranslationResult_40335 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, syntaxDirectedTranslationResult_40335, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_40335 ;
  var_sep = GALGAS_string (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 997)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 998)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 998)).stringValue () ;
  }
  GALGAS_location var_endOfModifierLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 999)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1000)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1001)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_categoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList, var_routineInstructionList, var_endOfModifierLocation  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1002))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1002)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i23_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 989)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceCategoryModifier, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 991)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_categoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 992)) ;
  C_String syntaxDirectedTranslationResult_40229 ;
  nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_40229, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_40229 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 994)) ;
  C_String syntaxDirectedTranslationResult_40335 ;
  nt_semantic_5F_instruction_5F_list_parse (syntaxDirectedTranslationResult_40335, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_40335 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 997)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1000)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1001)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i23_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 989)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceCategoryModifier, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 991)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_categoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 992)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 994)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 997)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1000)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1001)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i24_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1023)) ;
  GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1024)) ;
  if (var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1025)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1025)).stringValue () ;
  }
  GALGAS_lstring var_className = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideCategoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1026)) ;
  GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideCategoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1027)) ;
  GALGAS_formalParameterListAST var_formalParameterList ;
  C_String syntaxDirectedTranslationResult_41847 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_41847, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_41847 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1029)) ;
  if (GALGAS_string (" {").isValid ()) {
    ioSyntaxDirectedTranslationResult << GALGAS_string (" {").stringValue () ;
  }
  GALGAS_semanticInstructionListAST var_routineInstructionList ;
  C_String syntaxDirectedTranslationResult_41953 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList, syntaxDirectedTranslationResult_41953, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_41953 ;
  var_sep = GALGAS_string (inCompiler->preceedingSeparatorString ()) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1032)) ;
  if (var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1033)).isValid ()) {
    ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1033)).stringValue () ;
  }
  GALGAS_location var_endOfModifierLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1034)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1035)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1036)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_overridingCategoryModifierAST::constructor_new (GALGAS_bool (false), var_className, var_modifierName, var_formalParameterList, var_routineInstructionList, var_endOfModifierLocation  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1037))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1037)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i24_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1023)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1024)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideCategoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1026)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideCategoryModifierDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1027)) ;
  C_String syntaxDirectedTranslationResult_41847 ;
  nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_41847, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_41847 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1029)) ;
  C_String syntaxDirectedTranslationResult_41953 ;
  nt_semantic_5F_instruction_5F_list_parse (syntaxDirectedTranslationResult_41953, inCompiler) ;
  ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_41953 ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1032)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1035)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1036)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i24_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_override) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1023)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1024)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_typeReferenceOverrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1026)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_overrideCategoryModifierDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1027)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1029)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_end) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1032)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1035)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1036)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i25_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_graph) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1058)) ;
  GALGAS_lstring var_graphTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_graphDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1059)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1060)) ;
  GALGAS_lstring var_associatedListTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1061)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1062)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1063)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1064)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1067)) ;
      GALGAS_lstring var_insertName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1068)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1069)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1070)) ;
      GALGAS_lstring var_errorMessage = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1071)) ;
      var_graphInsertModifierList.addAssign_operation (var_insertName, var_errorMessage  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1072)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1073)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1075)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName, var_associatedListTypeName, var_graphInsertModifierList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1076))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1076)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i25_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_graph) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1058)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_graphDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1059)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1060)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1061)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1062)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1063)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1067)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1068)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1069)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1070)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1071)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1073)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1075)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i25_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_graph) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1058)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1059)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__28_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1060)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1061)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__29_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1062)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1063)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_insert) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1067)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1068)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_error) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1069)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_message) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1070)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1071)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1073)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1075)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarations,
                                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                                       C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_extern) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1091)) ;
  GALGAS_lstring var_externTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_externTypeDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1092)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1093)) ;
  GALGAS_string var_cppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1097)) ;
      var_cppPredeclarationCode.dotAssign_operation (var_cppPredeclarationCodeElement.mAttribute_string  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1098)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1100)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1101)) ;
  GALGAS_string var_cppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_semanticDeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppClassCodeElement = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1105)) ;
      var_cppClassCode.dotAssign_operation (var_cppClassCodeElement.mAttribute_string  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1106)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1108)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1109)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1110)) ;
  GALGAS_externTypeReaderList var_externTypeReaderList = GALGAS_externTypeReaderList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1111)) ;
  GALGAS_externTypeModifierList var_externTypeModifierList = GALGAS_externTypeModifierList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1112)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1113)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_semanticDeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1116)) ;
      GALGAS_lstring var_constructorName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1117)) ;
      GALGAS_typeNameFormalParameterNameList var_argumentTypeList = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1118)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_semanticDeclarationsSyntax_42 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1121)) ;
          GALGAS_lstring var_argumentTypeName = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1122)) ;
          GALGAS_lstring var_argumentName = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1123)) ;
          var_argumentTypeList.addAssign_operation (var_selector, var_argumentTypeName, var_argumentName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1124)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1126)) ;
      GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1127)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1128)) ;
      var_externTypeConstructorList.addAssign_operation (var_constructorName, var_resultTypeName, var_argumentTypeList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1129)) ;
    } break ;
    case 3: {
      GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1134)) ;
      if (var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1135)).isValid ()) {
        ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("getter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1135)).stringValue () ;
      }
      GALGAS_lstring var_readerName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1136)) ;
      GALGAS_typeNameFormalParameterNameList var_argumentTypeList = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1137)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_semanticDeclarationsSyntax_43 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1140)) ;
          GALGAS_lstring var_argumentTypeName = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1141)) ;
          GALGAS_lstring var_argumentName = inCompiler->synthetizedAttribute_tokenString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1142)) ;
          var_argumentTypeList.addAssign_operation (var_selector, var_argumentTypeName, var_argumentName  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1143)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1145)) ;
      GALGAS_lstring var_resultTypeName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1146)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1147)) ;
      var_externTypeReaderList.addAssign_operation (var_readerName, var_resultTypeName, var_argumentTypeList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1148)) ;
    } break ;
    case 4: {
      GALGAS_string var_sep (inCompiler->preceedingSeparatorString ()) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1153)) ;
      if (var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1154)).isValid ()) {
        ioSyntaxDirectedTranslationResult << var_sep.add_operation (GALGAS_string ("setter"), inCompiler COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1154)).stringValue () ;
      }
      GALGAS_lstring var_modifierName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1155)) ;
      GALGAS_formalParameterListAST var_formalParameterList ;
      C_String syntaxDirectedTranslationResult_46482 ;
      nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_46482, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_46482 ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1157)) ;
      var_externTypeModifierList.addAssign_operation (var_modifierName, var_formalParameterList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1158)) ;
    } break ;
    case 5: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1162)) ;
      GALGAS_lstring var_methodName = inCompiler->synthetizedAttribute_tokenString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1163)) ;
      GALGAS_formalParameterListAST var_formalParameterList ;
      C_String syntaxDirectedTranslationResult_46717 ;
      nt_formal_5F_parameter_5F_list_ (var_formalParameterList, syntaxDirectedTranslationResult_46717, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_46717 ;
      var_externTypeMethodList.addAssign_operation (var_methodName, var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1168))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1165)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1169)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1171)) ;
  ioArgument_ioSemanticDeclarations.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName, var_cppPredeclarationCode, var_cppClassCode, var_externTypeConstructorList, var_externTypeReaderList, var_externTypeModifierList, var_externTypeMethodList  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1172))  COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i26_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                            C_Lexique_galgas_32_Scanner * inCompiler) {
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_extern) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1091)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_externTypeDefinition, "") ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1092)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1093)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1097)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1100)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1101)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_semanticDeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1105)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1108)) ;
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1109)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_semanticDeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1116)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1117)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_semanticDeclarationsSyntax_42 (inCompiler)) {
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1121)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1122)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1123)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1126)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1127)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1128)) ;
    } break ;
    case 3: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1134)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1136)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_semanticDeclarationsSyntax_43 (inCompiler)) {
        case 2: {
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1140)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1141)) ;
          ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
          ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1142)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1145)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1146)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1147)) ;
    } break ;
    case 4: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1153)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1155)) ;
      C_String syntaxDirectedTranslationResult_46482 ;
      nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_46482, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_46482 ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1157)) ;
    } break ;
    case 5: {
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1162)) ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1163)) ;
      C_String syntaxDirectedTranslationResult_46717 ;
      nt_formal_5F_parameter_5F_list_parse (syntaxDirectedTranslationResult_46717, inCompiler) ;
      ioSyntaxDirectedTranslationResult << syntaxDirectedTranslationResult_46717 ;
      ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
      ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1169)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioSyntaxDirectedTranslationResult << inCompiler->preceedingSeparatorString () ;
  ioSyntaxDirectedTranslationResult << inCompiler->tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1171)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_semanticDeclarationsSyntax::rule_semanticDeclarationsSyntax_semantic_5F_declaration_i26_indexing (C_Lexique_galgas_32_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_extern) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1091)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_32_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1092)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1093)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_semanticDeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1097)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1100)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1101)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_semanticDeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_literal_5F_string) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1105)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1108)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1109)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_semanticDeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1116)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1117)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_semanticDeclarationsSyntax_42 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1121)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1122)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1123)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1126)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1127)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1128)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_reader) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1134)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1136)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_semanticDeclarationsSyntax_43 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1140)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1141)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1142)) ;
        } break ;
        default:
          repeatFlag_4 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1145)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_type_5F_name) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1146)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1147)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_modifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1153)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1155)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1157)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_method) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1162)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1163)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1169)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_32_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("semanticDeclarationsSyntax.galgas", 1171)) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@functionSignature' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_functionSignature : public cCollectionElement {
  public : GALGAS_functionSignature_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_functionSignature (const GALGAS_lstring & in_mFormalSelector,
                                                 const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                 const GALGAS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_functionSignature::cCollectionElement_functionSignature (const GALGAS_lstring & in_mFormalSelector,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                            const GALGAS_string & in_mFormalArgumentName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_functionSignature::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_functionSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_functionSignature (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalArgumentType, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_functionSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mAttribute_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_functionSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionSignature * operand = (cCollectionElement_functionSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature::GALGAS_functionSignature (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature::GALGAS_functionSignature (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_functionSignature result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_string & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_functionSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mFormalSelector,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                          const GALGAS_string & in_mFormalArgumentName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_functionSignature (in_mFormalSelector,
                                                       in_mFormalArgumentType,
                                                       in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                    const GALGAS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                       const GALGAS_string inOperand2,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_functionSignature) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::modifier_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                             GALGAS_string & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                            GALGAS_string & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::operator_concat (const GALGAS_functionSignature & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::add_operation (const GALGAS_functionSignature & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::reader_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature::dotAssign_operation (const GALGAS_functionSignature inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionSignature::reader_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionSignature::reader_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionSignature::reader_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionSignature::cEnumerator_functionSignature (const GALGAS_functionSignature & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element cEnumerator_functionSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_functionSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_functionSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_functionSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @functionSignature type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionSignature ("functionSignature",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionSignature (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionSignature::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature result ;
  const GALGAS_functionSignature * p = (const GALGAS_functionSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@unifiedTypeMapProxyList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_unifiedTypeMapProxyList : public cCollectionElement {
  public : GALGAS_unifiedTypeMapProxyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_unifiedTypeMapProxyList::cCollectionElement_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_unifiedTypeMapProxyList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_unifiedTypeMapProxyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_unifiedTypeMapProxyList (mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_unifiedTypeMapProxyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_unifiedTypeMapProxyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_unifiedTypeMapProxyList * operand = (cCollectionElement_unifiedTypeMapProxyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_unifiedTypeMapProxyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList::GALGAS_unifiedTypeMapProxyList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList::GALGAS_unifiedTypeMapProxyList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_unifiedTypeMapProxyList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapProxyList * p = NULL ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapProxyList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapProxyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapProxyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
      outOperand0 = p->mObject.mAttribute_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::operator_concat (const GALGAS_unifiedTypeMapProxyList & inOperand
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::add_operation (const GALGAS_unifiedTypeMapProxyList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList::dotAssign_operation (const GALGAS_unifiedTypeMapProxyList inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMapProxyList::reader_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyList * p = (cCollectionElement_unifiedTypeMapProxyList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMapProxyList::cEnumerator_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMapProxyList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element cEnumerator_unifiedTypeMapProxyList::current (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyList * p = (const cCollectionElement_unifiedTypeMapProxyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMapProxyList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyList * p = (const cCollectionElement_unifiedTypeMapProxyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyList) ;
  return p->mObject.mAttribute_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @unifiedTypeMapProxyList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ("unifiedTypeMapProxyList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapProxyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMapProxyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapProxyList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_unifiedTypeMapProxyList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList result ;
  const GALGAS_unifiedTypeMapProxyList * p = (const GALGAS_unifiedTypeMapProxyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapProxyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapProxyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@unifiedTypeMapProxyAndParameterList' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_unifiedTypeMapProxyAndParameterList : public cCollectionElement {
  public : GALGAS_unifiedTypeMapProxyAndParameterList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_unifiedTypeMapProxyAndParameterList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                   const GALGAS_string & in_mFormalArgumentName
                                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_unifiedTypeMapProxyAndParameterList::cCollectionElement_unifiedTypeMapProxyAndParameterList (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                                                                const GALGAS_string & in_mFormalArgumentName
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_unifiedTypeMapProxyAndParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_unifiedTypeMapProxyAndParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_unifiedTypeMapProxyAndParameterList (mObject.mAttribute_mType, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_unifiedTypeMapProxyAndParameterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_unifiedTypeMapProxyAndParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_unifiedTypeMapProxyAndParameterList * operand = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList::GALGAS_unifiedTypeMapProxyAndParameterList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList::GALGAS_unifiedTypeMapProxyAndParameterList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_unifiedTypeMapProxyAndParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                            const GALGAS_string & in_mFormalArgumentName
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_unifiedTypeMapProxyAndParameterList (in_mType,
                                                                         in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                      const GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapProxyAndParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                                         const GALGAS_string inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_unifiedTypeMapProxyAndParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
      outOperand0 = p->mObject.mAttribute_mType ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::operator_concat (const GALGAS_unifiedTypeMapProxyAndParameterList & inOperand
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::add_operation (const GALGAS_unifiedTypeMapProxyAndParameterList & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyAndParameterList result = GALGAS_unifiedTypeMapProxyAndParameterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyAndParameterList result = GALGAS_unifiedTypeMapProxyAndParameterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList::dotAssign_operation (const GALGAS_unifiedTypeMapProxyAndParameterList inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMapProxyAndParameterList::reader_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMapProxyAndParameterList::reader_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (cCollectionElement_unifiedTypeMapProxyAndParameterList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMapProxyAndParameterList::cEnumerator_unifiedTypeMapProxyAndParameterList (const GALGAS_unifiedTypeMapProxyAndParameterList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList_2D_element cEnumerator_unifiedTypeMapProxyAndParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (const cCollectionElement_unifiedTypeMapProxyAndParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMapProxyAndParameterList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (const cCollectionElement_unifiedTypeMapProxyAndParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
  return p->mObject.mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_unifiedTypeMapProxyAndParameterList::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_unifiedTypeMapProxyAndParameterList * p = (const cCollectionElement_unifiedTypeMapProxyAndParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_unifiedTypeMapProxyAndParameterList) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @unifiedTypeMapProxyAndParameterList type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndParameterList ("unifiedTypeMapProxyAndParameterList",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapProxyAndParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMapProxyAndParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapProxyAndParameterList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList GALGAS_unifiedTypeMapProxyAndParameterList::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndParameterList result ;
  const GALGAS_unifiedTypeMapProxyAndParameterList * p = (const GALGAS_unifiedTypeMapProxyAndParameterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapProxyAndParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapProxyAndParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constructorMap::cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_functionSignature & in_mArgumentTypeList,
                                                        const GALGAS_bool & in_mHasCompilerArgument,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mArgumentTypeList (in_mArgumentTypeList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mReturnedType (in_mReturnedType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_constructorMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mArgumentTypeList.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mReturnedType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_constructorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constructorMap (mAttribute_lkey, mAttribute_mArgumentTypeList, mAttribute_mHasCompilerArgument, mAttribute_mReturnedType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_constructorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentTypeList" ":" ;
  mAttribute_mArgumentTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedType" ":" ;
  mAttribute_mReturnedType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_constructorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constructorMap * operand = (cMapElement_constructorMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mArgumentTypeList.objectCompare (operand->mAttribute_mArgumentTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnedType.objectCompare (operand->mAttribute_mReturnedType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap::GALGAS_constructorMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap::GALGAS_constructorMap (const GALGAS_constructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap & GALGAS_constructorMap::operator = (const GALGAS_constructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::constructor_mapWithMapToOverride (const GALGAS_constructorMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_functionSignature & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 const GALGAS_unifiedTypeMap_2D_proxy & inArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_functionSignature inArgument0,
                                                GALGAS_bool inArgument1,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constructor has been already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_constructorMap_searchKey = "the '%K' constuctor is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_functionSignature & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_constructorMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    outArgument0 = p->mAttribute_mArgumentTypeList ;
    outArgument1 = p->mAttribute_mHasCompilerArgument ;
    outArgument2 = p->mAttribute_mReturnedType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_insertOrReplace (GALGAS_lstring inKey,
                                                      GALGAS_functionSignature inArgument0,
                                                      GALGAS_bool inArgument1,
                                                      GALGAS_unifiedTypeMap_2D_proxy inArgument2
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_constructorMap::reader_mArgumentTypeListForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mAttribute_mArgumentTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_constructorMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_constructorMap::reader_mReturnedTypeForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mAttribute_mReturnedType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_setMArgumentTypeListForKey (GALGAS_functionSignature inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mAttribute_mArgumentTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap::modifier_setMReturnedTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mAttribute_mReturnedType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constructorMap * GALGAS_constructorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constructorMap::cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GALGAS_constructorMap_2D_element (p->mAttribute_lkey, p->mAttribute_mArgumentTypeList, p->mAttribute_mHasCompilerArgument, p->mAttribute_mReturnedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_constructorMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mAttribute_mArgumentTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_constructorMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_constructorMap::current_mReturnedType (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mAttribute_mReturnedType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @constructorMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_constructorMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  const GALGAS_constructorMap * p = (const GALGAS_constructorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier::GALGAS_methodQualifier (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isAbstract (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isAbstract ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isBasic (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isBasic ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isBasicFinal (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isBasicFinal ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isInherited (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isInherited ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isOverriding (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isOverriding ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::constructor_isOverridingAbstract (UNUSED_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  result.mEnum = kEnum_isOverridingAbstract ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_methodQualifier [7] = {
  "(not built)",
  "isAbstract",
  "isBasic",
  "isBasicFinal",
  "isInherited",
  "isOverriding",
  "isOverridingAbstract"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsAbstract (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isAbstract == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsBasic (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isBasic == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsBasicFinal (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isBasicFinal == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsInherited (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isInherited == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsOverriding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isOverriding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodQualifier::reader_isIsOverridingAbstract (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isOverridingAbstract == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodQualifier::description (C_String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString << "<enum @methodQualifier: " << gEnumNameArrayFor_methodQualifier [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_methodQualifier::objectCompare (const GALGAS_methodQualifier & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @methodQualifier type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodQualifier ("methodQualifier",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_methodQualifier::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_methodQualifier::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodQualifier (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_methodQualifier::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_methodQualifier result ;
  const GALGAS_methodQualifier * p = (const GALGAS_methodQualifier *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodQualifier *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodQualifier", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind::GALGAS_methodKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_methodKind::constructor_definedAsMember (UNUSED_LOCATION_ARGS) {
  GALGAS_methodKind result ;
  result.mEnum = kEnum_definedAsMember ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_methodKind::constructor_definedAsCategory (UNUSED_LOCATION_ARGS) {
  GALGAS_methodKind result ;
  result.mEnum = kEnum_definedAsCategory ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_methodKind [3] = {
  "(not built)",
  "definedAsMember",
  "definedAsCategory"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodKind::reader_isDefinedAsMember (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_definedAsMember == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodKind::reader_isDefinedAsCategory (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_definedAsCategory == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @methodKind: " << gEnumNameArrayFor_methodKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_methodKind::objectCompare (const GALGAS_methodKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @methodKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodKind ("methodKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_methodKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_methodKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_methodKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_methodKind result ;
  const GALGAS_methodKind * p = (const GALGAS_methodKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_getterMap::cMapElement_getterMap (const GALGAS_lstring & inKey,
                                              const GALGAS_methodKind & in_mKind,
                                              const GALGAS_functionSignature & in_mArgumentTypeList,
                                              const GALGAS_location & in_mDeclarationLocation,
                                              const GALGAS_bool & in_mHasCompilerArgument,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType,
                                              const GALGAS_methodQualifier & in_mQualifier,
                                              const GALGAS_string & in_mErrorMessage
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mKind (in_mKind),
mAttribute_mArgumentTypeList (in_mArgumentTypeList),
mAttribute_mDeclarationLocation (in_mDeclarationLocation),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mReturnedType (in_mReturnedType),
mAttribute_mQualifier (in_mQualifier),
mAttribute_mErrorMessage (in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_getterMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mArgumentTypeList.isValid () && mAttribute_mDeclarationLocation.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mReturnedType.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_getterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_getterMap (mAttribute_lkey, mAttribute_mKind, mAttribute_mArgumentTypeList, mAttribute_mDeclarationLocation, mAttribute_mHasCompilerArgument, mAttribute_mReturnedType, mAttribute_mQualifier, mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_getterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mAttribute_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentTypeList" ":" ;
  mAttribute_mArgumentTypeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclarationLocation" ":" ;
  mAttribute_mDeclarationLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedType" ":" ;
  mAttribute_mReturnedType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mQualifier" ":" ;
  mAttribute_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mAttribute_mErrorMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_getterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_getterMap * operand = (cMapElement_getterMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (operand->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mArgumentTypeList.objectCompare (operand->mAttribute_mArgumentTypeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDeclarationLocation.objectCompare (operand->mAttribute_mDeclarationLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnedType.objectCompare (operand->mAttribute_mReturnedType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mQualifier.objectCompare (operand->mAttribute_mQualifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessage.objectCompare (operand->mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap::GALGAS_getterMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap::GALGAS_getterMap (const GALGAS_getterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap & GALGAS_getterMap::operator = (const GALGAS_getterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_getterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_getterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_getterMap::constructor_mapWithMapToOverride (const GALGAS_getterMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_getterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_getterMap::reader_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_getterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_methodKind & inArgument0,
                                            const GALGAS_functionSignature & inArgument1,
                                            const GALGAS_location & inArgument2,
                                            const GALGAS_bool & inArgument3,
                                            const GALGAS_unifiedTypeMap_2D_proxy & inArgument4,
                                            const GALGAS_methodQualifier & inArgument5,
                                            const GALGAS_string & inArgument6,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * p = NULL ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@getterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_insertKey (GALGAS_lstring inKey,
                                           GALGAS_methodKind inArgument0,
                                           GALGAS_functionSignature inArgument1,
                                           GALGAS_location inArgument2,
                                           GALGAS_bool inArgument3,
                                           GALGAS_unifiedTypeMap_2D_proxy inArgument4,
                                           GALGAS_methodQualifier inArgument5,
                                           GALGAS_string inArgument6,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * p = NULL ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' reader is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_getterMap_searchKey = "the '%K' reader is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_methodKind & outArgument0,
                                         GALGAS_functionSignature & outArgument1,
                                         GALGAS_location & outArgument2,
                                         GALGAS_bool & outArgument3,
                                         GALGAS_unifiedTypeMap_2D_proxy & outArgument4,
                                         GALGAS_methodQualifier & outArgument5,
                                         GALGAS_string & outArgument6,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_getterMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_getterMap) ;
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mArgumentTypeList ;
    outArgument2 = p->mAttribute_mDeclarationLocation ;
    outArgument3 = p->mAttribute_mHasCompilerArgument ;
    outArgument4 = p->mAttribute_mReturnedType ;
    outArgument5 = p->mAttribute_mQualifier ;
    outArgument6 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_insertOrReplace (GALGAS_lstring inKey,
                                                 GALGAS_methodKind inArgument0,
                                                 GALGAS_functionSignature inArgument1,
                                                 GALGAS_location inArgument2,
                                                 GALGAS_bool inArgument3,
                                                 GALGAS_unifiedTypeMap_2D_proxy inArgument4,
                                                 GALGAS_methodQualifier inArgument5,
                                                 GALGAS_string inArgument6
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_getterMap * p = NULL ;
  macroMyNew (p, cMapElement_getterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_getterMap::reader_mKindForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_getterMap::reader_mArgumentTypeListForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mArgumentTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_getterMap::reader_mDeclarationLocationForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mDeclarationLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_getterMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_getterMap::reader_mReturnedTypeForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mReturnedType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_getterMap::reader_mQualifierForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mQualifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getterMap::reader_mErrorMessageForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    result = p->mAttribute_mErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMArgumentTypeListForKey (GALGAS_functionSignature inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mArgumentTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMDeclarationLocationForKey (GALGAS_location inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mDeclarationLocation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMReturnedTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mReturnedType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mQualifier = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap::modifier_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_getterMap * p = (cMapElement_getterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_getterMap) ;
    p->mAttribute_mErrorMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_getterMap * GALGAS_getterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_getterMap * result = (cMapElement_getterMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_getterMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_getterMap::cEnumerator_getterMap (const GALGAS_getterMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap_2D_element cEnumerator_getterMap::current (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return GALGAS_getterMap_2D_element (p->mAttribute_lkey, p->mAttribute_mKind, p->mAttribute_mArgumentTypeList, p->mAttribute_mDeclarationLocation, p->mAttribute_mHasCompilerArgument, p->mAttribute_mReturnedType, p->mAttribute_mQualifier, p->mAttribute_mErrorMessage) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_getterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cEnumerator_getterMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_getterMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mArgumentTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_getterMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mDeclarationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_getterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_getterMap::current_mReturnedType (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mReturnedType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier cEnumerator_getterMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_getterMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_getterMap * p = (const cMapElement_getterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_getterMap) ;
  return p->mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @getterMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterMap ("getterMap",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_getterMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_getterMap result ;
  const GALGAS_getterMap * p = (const GALGAS_getterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@formalParameterSignature' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_formalParameterSignature : public cCollectionElement {
  public : GALGAS_formalParameterSignature_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_formalParameterSignature (const GALGAS_lstring & in_mFormalSelector,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                        const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                        const GALGAS_string & in_mFormalArgumentName
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_formalParameterSignature::cCollectionElement_formalParameterSignature (const GALGAS_lstring & in_mFormalSelector,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                          const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                          const GALGAS_string & in_mFormalArgumentName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentPassingMode, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_formalParameterSignature::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_formalParameterSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalParameterSignature (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalArgumentType, mObject.mAttribute_mFormalArgumentPassingMode, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_formalParameterSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mAttribute_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_formalParameterSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterSignature * operand = (cCollectionElement_formalParameterSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature::GALGAS_formalParameterSignature (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature::GALGAS_formalParameterSignature (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formalParameterSignature result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                            const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                            const GALGAS_string & inOperand3
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_formalParameterSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mFormalSelector,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                 const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                 const GALGAS_string & in_mFormalArgumentName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_formalParameterSignature (in_mFormalSelector,
                                                              in_mFormalArgumentType,
                                                              in_mFormalArgumentPassingMode,
                                                              in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                           const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                           const GALGAS_string & inOperand3
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalParameterSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                              const GALGAS_formalArgumentPassingModeAST inOperand2,
                                                              const GALGAS_string inOperand3,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalParameterSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                              GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
      outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                         GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::modifier_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                        GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                        GALGAS_string & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                    GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                    GALGAS_string & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                   GALGAS_formalArgumentPassingModeAST & outOperand2,
                                                   GALGAS_string & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::operator_concat (const GALGAS_formalParameterSignature & inOperand
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::add_operation (const GALGAS_formalParameterSignature & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result = GALGAS_formalParameterSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature result = GALGAS_formalParameterSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature::dotAssign_operation (const GALGAS_formalParameterSignature inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterSignature::reader_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_formalParameterSignature::reader_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterSignature::reader_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalParameterSignature::reader_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterSignature * p = (cCollectionElement_formalParameterSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalParameterSignature::cEnumerator_formalParameterSignature (const GALGAS_formalParameterSignature & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature_2D_element cEnumerator_formalParameterSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_formalParameterSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_formalParameterSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterSignature * p = (const cCollectionElement_formalParameterSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterSignature) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @formalParameterSignature type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterSignature ("formalParameterSignature",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalParameterSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalParameterSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterSignature (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_formalParameterSignature::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterSignature result ;
  const GALGAS_formalParameterSignature * p = (const GALGAS_formalParameterSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_setterMap::cMapElement_setterMap (const GALGAS_lstring & inKey,
                                              const GALGAS_methodKind & in_mKind,
                                              const GALGAS_formalParameterSignature & in_mParameterList,
                                              const GALGAS_bool & in_mHasCompilerArgument,
                                              const GALGAS_methodQualifier & in_mQualifier,
                                              const GALGAS_string & in_mErrorMessage
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mKind (in_mKind),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mQualifier (in_mQualifier),
mAttribute_mErrorMessage (in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_setterMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_setterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_setterMap (mAttribute_lkey, mAttribute_mKind, mAttribute_mParameterList, mAttribute_mHasCompilerArgument, mAttribute_mQualifier, mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_setterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mAttribute_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mAttribute_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mQualifier" ":" ;
  mAttribute_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mAttribute_mErrorMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_setterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_setterMap * operand = (cMapElement_setterMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (operand->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (operand->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mQualifier.objectCompare (operand->mAttribute_mQualifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessage.objectCompare (operand->mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap::GALGAS_setterMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap::GALGAS_setterMap (const GALGAS_setterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap & GALGAS_setterMap::operator = (const GALGAS_setterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_setterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::constructor_mapWithMapToOverride (const GALGAS_setterMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_setterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::reader_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_setterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_methodKind & inArgument0,
                                            const GALGAS_formalParameterSignature & inArgument1,
                                            const GALGAS_bool & inArgument2,
                                            const GALGAS_methodQualifier & inArgument3,
                                            const GALGAS_string & inArgument4,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * p = NULL ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@setterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_insertKey (GALGAS_lstring inKey,
                                           GALGAS_methodKind inArgument0,
                                           GALGAS_formalParameterSignature inArgument1,
                                           GALGAS_bool inArgument2,
                                           GALGAS_methodQualifier inArgument3,
                                           GALGAS_string inArgument4,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * p = NULL ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' setter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_setterMap_searchKey = "the '%K' setter is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_methodKind & outArgument0,
                                         GALGAS_formalParameterSignature & outArgument1,
                                         GALGAS_bool & outArgument2,
                                         GALGAS_methodQualifier & outArgument3,
                                         GALGAS_string & outArgument4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_setterMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_setterMap) ;
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mParameterList ;
    outArgument2 = p->mAttribute_mHasCompilerArgument ;
    outArgument3 = p->mAttribute_mQualifier ;
    outArgument4 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_insertOrReplace (GALGAS_lstring inKey,
                                                 GALGAS_methodKind inArgument0,
                                                 GALGAS_formalParameterSignature inArgument1,
                                                 GALGAS_bool inArgument2,
                                                 GALGAS_methodQualifier inArgument3,
                                                 GALGAS_string inArgument4
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_setterMap * p = NULL ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_setterMap::reader_mKindForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_setterMap::reader_mParameterListForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_setterMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_setterMap::reader_mQualifierForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mQualifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_setterMap::reader_mErrorMessageForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mQualifier = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::modifier_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mErrorMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_setterMap * GALGAS_setterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * result = (cMapElement_setterMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_setterMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_setterMap::cEnumerator_setterMap (const GALGAS_setterMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap_2D_element cEnumerator_setterMap::current (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return GALGAS_setterMap_2D_element (p->mAttribute_lkey, p->mAttribute_mKind, p->mAttribute_mParameterList, p->mAttribute_mHasCompilerArgument, p->mAttribute_mQualifier, p->mAttribute_mErrorMessage) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_setterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cEnumerator_setterMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_setterMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_setterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier cEnumerator_setterMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_setterMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @setterMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterMap ("setterMap",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_setterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_setterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_setterMap result ;
  const GALGAS_setterMap * p = (const GALGAS_setterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_instanceMethodMap::cMapElement_instanceMethodMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_methodKind & in_mKind,
                                                              const GALGAS_formalParameterSignature & in_mParameterList,
                                                              const GALGAS_location & in_mDeclarationLocation,
                                                              const GALGAS_bool & in_mHasCompilerArgument,
                                                              const GALGAS_methodQualifier & in_mQualifier,
                                                              const GALGAS_string & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mKind (in_mKind),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mDeclarationLocation (in_mDeclarationLocation),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mQualifier (in_mQualifier),
mAttribute_mErrorMessage (in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_instanceMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mDeclarationLocation.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_instanceMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_instanceMethodMap (mAttribute_lkey, mAttribute_mKind, mAttribute_mParameterList, mAttribute_mDeclarationLocation, mAttribute_mHasCompilerArgument, mAttribute_mQualifier, mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_instanceMethodMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mAttribute_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mAttribute_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclarationLocation" ":" ;
  mAttribute_mDeclarationLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mQualifier" ":" ;
  mAttribute_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mAttribute_mErrorMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_instanceMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_instanceMethodMap * operand = (cMapElement_instanceMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (operand->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (operand->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDeclarationLocation.objectCompare (operand->mAttribute_mDeclarationLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mQualifier.objectCompare (operand->mAttribute_mQualifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessage.objectCompare (operand->mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap::GALGAS_instanceMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap::GALGAS_instanceMethodMap (const GALGAS_instanceMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap & GALGAS_instanceMethodMap::operator = (const GALGAS_instanceMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::constructor_mapWithMapToOverride (const GALGAS_instanceMethodMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_instanceMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_methodKind & inArgument0,
                                                    const GALGAS_formalParameterSignature & inArgument1,
                                                    const GALGAS_location & inArgument2,
                                                    const GALGAS_bool & inArgument3,
                                                    const GALGAS_methodQualifier & inArgument4,
                                                    const GALGAS_string & inArgument5,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_instanceMethodMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanceMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_methodKind inArgument0,
                                                   GALGAS_formalParameterSignature inArgument1,
                                                   GALGAS_location inArgument2,
                                                   GALGAS_bool inArgument3,
                                                   GALGAS_methodQualifier inArgument4,
                                                   GALGAS_string inArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_instanceMethodMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' instance method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_instanceMethodMap_searchKey = "the '%K' instance method is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_methodKind & outArgument0,
                                                 GALGAS_formalParameterSignature & outArgument1,
                                                 GALGAS_location & outArgument2,
                                                 GALGAS_bool & outArgument3,
                                                 GALGAS_methodQualifier & outArgument4,
                                                 GALGAS_string & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_instanceMethodMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mParameterList ;
    outArgument2 = p->mAttribute_mDeclarationLocation ;
    outArgument3 = p->mAttribute_mHasCompilerArgument ;
    outArgument4 = p->mAttribute_mQualifier ;
    outArgument5 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_instanceMethodMap_searchInheritedKey = "as the '%K' method is tagged as 'override', it should be declared in the super class" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::method_searchInheritedKey (GALGAS_lstring inKey,
                                                          GALGAS_methodKind & outArgument0,
                                                          GALGAS_formalParameterSignature & outArgument1,
                                                          GALGAS_location & outArgument2,
                                                          GALGAS_bool & outArgument3,
                                                          GALGAS_methodQualifier & outArgument4,
                                                          GALGAS_string & outArgument5,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_instanceMethodMap_searchInheritedKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mParameterList ;
    outArgument2 = p->mAttribute_mDeclarationLocation ;
    outArgument3 = p->mAttribute_mHasCompilerArgument ;
    outArgument4 = p->mAttribute_mQualifier ;
    outArgument5 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_instanceMethodMap::reader_mKindForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_instanceMethodMap::reader_mParameterListForKey (const GALGAS_string & inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_instanceMethodMap::reader_mDeclarationLocationForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mDeclarationLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_instanceMethodMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_instanceMethodMap::reader_mQualifierForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mQualifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_instanceMethodMap::reader_mErrorMessageForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMDeclarationLocationForKey (GALGAS_location inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mDeclarationLocation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mQualifier = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::modifier_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mErrorMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_instanceMethodMap * GALGAS_instanceMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * result = (cMapElement_instanceMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_instanceMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instanceMethodMap::cEnumerator_instanceMethodMap (const GALGAS_instanceMethodMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap_2D_element cEnumerator_instanceMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return GALGAS_instanceMethodMap_2D_element (p->mAttribute_lkey, p->mAttribute_mKind, p->mAttribute_mParameterList, p->mAttribute_mDeclarationLocation, p->mAttribute_mHasCompilerArgument, p->mAttribute_mQualifier, p->mAttribute_mErrorMessage) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_instanceMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cEnumerator_instanceMethodMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_instanceMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_instanceMethodMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mDeclarationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_instanceMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier cEnumerator_instanceMethodMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_instanceMethodMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @instanceMethodMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanceMethodMap ("instanceMethodMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instanceMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instanceMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanceMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  const GALGAS_instanceMethodMap * p = (const GALGAS_instanceMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanceMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classMethodMap::cMapElement_classMethodMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_formalParameterSignature & in_mParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_classMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mHasCompilerArgument.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_classMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_classMethodMap (mAttribute_lkey, mAttribute_mParameterList, mAttribute_mHasCompilerArgument COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_classMethodMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mAttribute_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_classMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_classMethodMap * operand = (cMapElement_classMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (operand->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap::GALGAS_classMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap::GALGAS_classMethodMap (const GALGAS_classMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap & GALGAS_classMethodMap::operator = (const GALGAS_classMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::constructor_mapWithMapToOverride (const GALGAS_classMethodMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_classMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_formalParameterSignature & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_formalParameterSignature inArgument0,
                                                GALGAS_bool inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type proc is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_classMethodMap_searchKey = "the '%K' type proc is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_formalParameterSignature & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_classMethodMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    outArgument0 = p->mAttribute_mParameterList ;
    outArgument1 = p->mAttribute_mHasCompilerArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::modifier_insertOrReplace (GALGAS_lstring inKey,
                                                      GALGAS_formalParameterSignature inArgument0,
                                                      GALGAS_bool inArgument1
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_classMethodMap::reader_mParameterListForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_classMethodMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::modifier_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mAttribute_mParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classMethodMap * GALGAS_classMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * result = (cMapElement_classMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_classMethodMap::cEnumerator_classMethodMap (const GALGAS_classMethodMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap_2D_element cEnumerator_classMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return GALGAS_classMethodMap_2D_element (p->mAttribute_lkey, p->mAttribute_mParameterList, p->mAttribute_mHasCompilerArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_classMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_classMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_classMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @classMethodMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classMethodMap ("classMethodMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  const GALGAS_classMethodMap * p = (const GALGAS_classMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@enumerationDescriptorList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_enumerationDescriptorList : public cCollectionElement {
  public : GALGAS_enumerationDescriptorList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_enumerationDescriptorList (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                         const GALGAS_string & in_mEnumerationName
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_enumerationDescriptorList::cCollectionElement_enumerationDescriptorList (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                                                            const GALGAS_string & in_mEnumerationName
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumeratedType, in_mEnumerationName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_enumerationDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_enumerationDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumerationDescriptorList (mObject.mAttribute_mEnumeratedType, mObject.mAttribute_mEnumerationName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_enumerationDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratedType" ":" ;
  mObject.mAttribute_mEnumeratedType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumerationName" ":" ;
  mObject.mAttribute_mEnumerationName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_enumerationDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationDescriptorList * operand = (cCollectionElement_enumerationDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList::GALGAS_enumerationDescriptorList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList::GALGAS_enumerationDescriptorList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                              const GALGAS_string & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_enumerationDescriptorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                                  const GALGAS_string & in_mEnumerationName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumerationDescriptorList (in_mEnumeratedType,
                                                               in_mEnumerationName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                            const GALGAS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                               const GALGAS_string inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
      outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
      outOperand1 = p->mObject.mAttribute_mEnumerationName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::operator_concat (const GALGAS_enumerationDescriptorList & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::add_operation (const GALGAS_enumerationDescriptorList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::dotAssign_operation (const GALGAS_enumerationDescriptorList inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_enumerationDescriptorList::reader_mEnumeratedTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mAttribute_mEnumeratedType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumerationDescriptorList::reader_mEnumerationNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mAttribute_mEnumerationName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumerationDescriptorList::cEnumerator_enumerationDescriptorList (const GALGAS_enumerationDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList_2D_element cEnumerator_enumerationDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_enumerationDescriptorList::current_mEnumeratedType (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mAttribute_mEnumeratedType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_enumerationDescriptorList::current_mEnumerationName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mAttribute_mEnumerationName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @enumerationDescriptorList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDescriptorList ("enumerationDescriptorList",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDescriptorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  const GALGAS_enumerationDescriptorList * p = (const GALGAS_enumerationDescriptorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@typedPropertyList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_typedPropertyList : public cCollectionElement {
  public : GALGAS_typedPropertyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_typedPropertyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                 const GALGAS_lstring & in_mAttributeName,
                                                 const GALGAS_bool & in_mHasSetter,
                                                 const GALGAS_bool & in_mHasGetter
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_typedPropertyList::cCollectionElement_typedPropertyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                                            const GALGAS_lstring & in_mAttributeName,
                                                                            const GALGAS_bool & in_mHasSetter,
                                                                            const GALGAS_bool & in_mHasGetter
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeTypeProxy, in_mAttributeName, in_mHasSetter, in_mHasGetter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_typedPropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_typedPropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typedPropertyList (mObject.mAttribute_mAttributeTypeProxy, mObject.mAttribute_mAttributeName, mObject.mAttribute_mHasSetter, mObject.mAttribute_mHasGetter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_typedPropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeTypeProxy" ":" ;
  mObject.mAttribute_mAttributeTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasSetter" ":" ;
  mObject.mAttribute_mHasSetter.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasGetter" ":" ;
  mObject.mAttribute_mHasGetter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_typedPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typedPropertyList * operand = (cCollectionElement_typedPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typedPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList::GALGAS_typedPropertyList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList::GALGAS_typedPropertyList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_bool & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_typedPropertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                          const GALGAS_lstring & in_mAttributeName,
                                                          const GALGAS_bool & in_mHasSetter,
                                                          const GALGAS_bool & in_mHasGetter
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_typedPropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_typedPropertyList (in_mAttributeTypeProxy,
                                                       in_mAttributeName,
                                                       in_mHasSetter,
                                                       in_mHasGetter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_bool & inOperand2,
                                                    const GALGAS_bool & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typedPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_bool inOperand2,
                                                       const GALGAS_bool inOperand3,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typedPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       GALGAS_bool & outOperand3,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
      outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
      outOperand1 = p->mObject.mAttribute_mAttributeName ;
      outOperand2 = p->mObject.mAttribute_mHasSetter ;
      outOperand3 = p->mObject.mAttribute_mHasGetter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_bool & outOperand2,
                                                  GALGAS_bool & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 GALGAS_bool & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_bool & outOperand2,
                                             GALGAS_bool & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            GALGAS_bool & outOperand3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::operator_concat (const GALGAS_typedPropertyList & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::add_operation (const GALGAS_typedPropertyList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::dotAssign_operation (const GALGAS_typedPropertyList inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typedPropertyList::reader_mAttributeTypeProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mAttributeTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedPropertyList::reader_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedPropertyList::reader_mHasSetterAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mHasSetter ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedPropertyList::reader_mHasGetterAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mHasGetter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typedPropertyList::cEnumerator_typedPropertyList (const GALGAS_typedPropertyList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element cEnumerator_typedPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_typedPropertyList::current_mAttributeTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mAttributeTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typedPropertyList::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_typedPropertyList::current_mHasSetter (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mHasSetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_typedPropertyList::current_mHasGetter (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mHasGetter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typedPropertyList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedPropertyList ("typedPropertyList",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typedPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typedPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedPropertyList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  const GALGAS_typedPropertyList * p = (const GALGAS_typedPropertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum::GALGAS_predefinedTypeKindEnum (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_uint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_uint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_sint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_sint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_char (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_char ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_double (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_double ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_string (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_string ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_stringset (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_stringset ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bool (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_bool ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_binaryset (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_binaryset ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_function (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_function ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_location (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_location ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_type (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_type ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_object (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_object ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_data (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_data ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_filewrapper (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_filewrapper ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_application (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_application ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bigint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_bigint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_timer (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_timer ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_predefinedTypeKindEnum [20] = {
  "(not built)",
  "predefined_uint",
  "predefined_uint64",
  "predefined_sint",
  "predefined_sint64",
  "predefined_char",
  "predefined_double",
  "predefined_string",
  "predefined_stringset",
  "predefined_bool",
  "predefined_binaryset",
  "predefined_function",
  "predefined_location",
  "predefined_type",
  "predefined_object",
  "predefined_data",
  "predefined_filewrapper",
  "predefined_application",
  "predefined_bigint",
  "predefined_timer"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_char == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_double == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_string == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_stringset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_stringset == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_bool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bool == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_binaryset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_binaryset == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_function (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_location (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_location == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_type (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_type == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_object (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_object == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_data (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_data == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_filewrapper (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_filewrapper == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_application (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_application == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bigint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_timer (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_timer == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_predefinedTypeKindEnum::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @predefinedTypeKindEnum: " << gEnumNameArrayFor_predefinedTypeKindEnum [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_predefinedTypeKindEnum::objectCompare (const GALGAS_predefinedTypeKindEnum & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @predefinedTypeKindEnum type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeKindEnum ("predefinedTypeKindEnum",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_predefinedTypeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeKindEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_predefinedTypeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeKindEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  const GALGAS_predefinedTypeKindEnum * p = (const GALGAS_predefinedTypeKindEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypeKindEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeKindEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum::GALGAS_typeKindEnum (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_classType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_classType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_enumType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_enumType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_listType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_sortedListType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_sortedListType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_mapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_mapType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_uniqueMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_uniqueMapType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_mapProxyType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_mapProxyType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_listMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listMapType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_structType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_structType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_graphType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_graphType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_externType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_externType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_arrayType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_arrayType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_predefinedType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_predefinedType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_typeKindEnum [14] = {
  "(not built)",
  "classType",
  "enumType",
  "listType",
  "sortedListType",
  "mapType",
  "uniqueMapType",
  "mapProxyType",
  "listMapType",
  "structType",
  "graphType",
  "externType",
  "arrayType",
  "predefinedType"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isSortedListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sortedListType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isUniqueMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uniqueMapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isMapProxyType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapProxyType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isListMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listMapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isStructType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isGraphType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_graphType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isExternType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_externType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isPredefinedType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefinedType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindEnum::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @typeKindEnum: " << gEnumNameArrayFor_typeKindEnum [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeKindEnum::objectCompare (const GALGAS_typeKindEnum & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @typeKindEnum type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindEnum ("typeKindEnum",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  const GALGAS_typeKindEnum * p = (const GALGAS_typeKindEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKindEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_attributeMap::cMapElement_attributeMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mAttributeType (in_mAttributeType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_attributeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAttributeType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_attributeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_attributeMap (mAttribute_lkey, mAttribute_mAttributeType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_attributeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeType" ":" ;
  mAttribute_mAttributeType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_attributeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_attributeMap * operand = (cMapElement_attributeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeType.objectCompare (operand->mAttribute_mAttributeType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap::GALGAS_attributeMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap::GALGAS_attributeMap (const GALGAS_attributeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap & GALGAS_attributeMap::operator = (const GALGAS_attributeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_attributeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::constructor_mapWithMapToOverride (const GALGAS_attributeMap & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_attributeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::reader_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_attributeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_attributeMap * p = NULL ;
  macroMyNew (p, cMapElement_attributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@attributeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::modifier_insertKey (GALGAS_lstring inKey,
                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_attributeMap * p = NULL ;
  macroMyNew (p, cMapElement_attributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' attribute has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_attributeMap_searchKey = "the '%K' attribute is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::method_searchKey (GALGAS_lstring inKey,
                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_attributeMap_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_attributeMap) ;
    outArgument0 = p->mAttribute_mAttributeType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_attributeMap::reader_mAttributeTypeForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_attributeMap) ;
    result = p->mAttribute_mAttributeType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::modifier_setMAttributeTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_attributeMap * p = (cMapElement_attributeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_attributeMap) ;
    p->mAttribute_mAttributeType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_attributeMap * GALGAS_attributeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_attributeMap * result = (cMapElement_attributeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_attributeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_attributeMap::cEnumerator_attributeMap (const GALGAS_attributeMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element cEnumerator_attributeMap::current (LOCATION_ARGS) const {
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_attributeMap) ;
  return GALGAS_attributeMap_2D_element (p->mAttribute_lkey, p->mAttribute_mAttributeType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_attributeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_attributeMap::current_mAttributeType (LOCATION_ARGS) const {
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_attributeMap) ;
  return p->mAttribute_mAttributeType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @attributeMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeMap ("attributeMap",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_attributeMap result ;
  const GALGAS_attributeMap * p = (const GALGAS_attributeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind::GALGAS_headerKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::constructor_noHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_noHeader ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::constructor_oneHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_oneHeader ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::constructor_twoHeaders (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_twoHeaders ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_headerKind [4] = {
  "(not built)",
  "noHeader",
  "oneHeader",
  "twoHeaders"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::reader_isNoHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noHeader == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::reader_isOneHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oneHeader == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::reader_isTwoHeaders (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_twoHeaders == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @headerKind: " << gEnumNameArrayFor_headerKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_headerKind::objectCompare (const GALGAS_headerKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @headerKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerKind ("headerKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_headerKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_headerKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  const GALGAS_headerKind * p = (const GALGAS_headerKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_headerKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantIndexMap::cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mIndex,
                                                            const GALGAS_unifiedTypeMapProxyList & in_mAssociatedTypeList
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex),
mAttribute_mAssociatedTypeList (in_mAssociatedTypeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_constantIndexMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mAssociatedTypeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_constantIndexMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constantIndexMap (mAttribute_lkey, mAttribute_mIndex, mAttribute_mAssociatedTypeList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_constantIndexMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedTypeList" ":" ;
  mAttribute_mAssociatedTypeList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_constantIndexMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantIndexMap * operand = (cMapElement_constantIndexMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedTypeList.objectCompare (operand->mAttribute_mAssociatedTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap::GALGAS_constantIndexMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap::GALGAS_constantIndexMap (const GALGAS_constantIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap & GALGAS_constantIndexMap::operator = (const GALGAS_constantIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_mapWithMapToOverride (const GALGAS_constantIndexMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::reader_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_constantIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & inArgument0,
                                                   const GALGAS_unifiedTypeMapProxyList & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::modifier_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_uint inArgument0,
                                                  GALGAS_unifiedTypeMapProxyList inArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_constantIndexMap_searchKey = "the '%K' constant is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_unifiedTypeMapProxyList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_constantIndexMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    outArgument0 = p->mAttribute_mIndex ;
    outArgument1 = p->mAttribute_mAssociatedTypeList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constantIndexMap::reader_mIndexForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_constantIndexMap::reader_mAssociatedTypeListForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_unifiedTypeMapProxyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mAttribute_mAssociatedTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::modifier_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::modifier_setMAssociatedTypeListForKey (GALGAS_unifiedTypeMapProxyList inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mAttribute_mAssociatedTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantIndexMap * GALGAS_constantIndexMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * result = (cMapElement_constantIndexMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantIndexMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constantIndexMap::cEnumerator_constantIndexMap (const GALGAS_constantIndexMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element cEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return GALGAS_constantIndexMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex, p->mAttribute_mAssociatedTypeList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList cEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mAttribute_mAssociatedTypeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @constantIndexMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantIndexMap ("constantIndexMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantIndexMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  const GALGAS_constantIndexMap * p = (const GALGAS_constantIndexMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_bool & in_mIsConcrete,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mSuperType,
                                                        const GALGAS_typeKindEnum & in_mTypeKindEnum,
                                                        const GALGAS_bool & in_mSupportCollectionValue,
                                                        const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                        const GALGAS_attributeMap & in_mAttributeMap,
                                                        const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                                        const GALGAS_constructorMap & in_mConstructorMap,
                                                        const GALGAS_getterMap & in_mReaderMap,
                                                        const GALGAS_setterMap & in_mModifierMap,
                                                        const GALGAS_instanceMethodMap & in_mInstanceMethodMap,
                                                        const GALGAS_classMethodMap & in_mClassMethodMap,
                                                        const GALGAS_enumerationDescriptorList & in_mEnumerationDescriptor,
                                                        const GALGAS_stringlist & in_mEnumeratorVariants,
                                                        const GALGAS_uint & in_mHandledOperatorFlags,
                                                        const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                                        const GALGAS_constantIndexMap & in_mEnumConstantMap,
                                                        const GALGAS_enumConstantList & in_mEnumConstantList,
                                                        const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                                        const GALGAS_mapSearchMethodListAST & in_mMapProxySearchConstructorList,
                                                        const GALGAS_bool & in_mGenerateHeaderInSeparateFile,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeForEnumeratedElement,
                                                        const GALGAS_string & in_mDefaultConstructorName,
                                                        const GALGAS_string & in_mHeaderFileName,
                                                        const GALGAS_headerKind & in_mHeaderKind
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIsPredefined (in_mIsPredefined),
mAttribute_mIsConcrete (in_mIsConcrete),
mAttribute_mSuperType (in_mSuperType),
mAttribute_mTypeKindEnum (in_mTypeKindEnum),
mAttribute_mSupportCollectionValue (in_mSupportCollectionValue),
mAttribute_mAllTypedAttributeList (in_mAllTypedAttributeList),
mAttribute_mAttributeMap (in_mAttributeMap),
mAttribute_mCurrentTypedAttributeList (in_mCurrentTypedAttributeList),
mAttribute_mConstructorMap (in_mConstructorMap),
mAttribute_mReaderMap (in_mReaderMap),
mAttribute_mModifierMap (in_mModifierMap),
mAttribute_mInstanceMethodMap (in_mInstanceMethodMap),
mAttribute_mClassMethodMap (in_mClassMethodMap),
mAttribute_mEnumerationDescriptor (in_mEnumerationDescriptor),
mAttribute_mEnumeratorVariants (in_mEnumeratorVariants),
mAttribute_mHandledOperatorFlags (in_mHandledOperatorFlags),
mAttribute_mAddAssignOperatorArguments (in_mAddAssignOperatorArguments),
mAttribute_mEnumConstantMap (in_mEnumConstantMap),
mAttribute_mEnumConstantList (in_mEnumConstantList),
mAttribute_mMapSearchMethodList (in_mMapSearchMethodList),
mAttribute_mMapProxySearchConstructorList (in_mMapProxySearchConstructorList),
mAttribute_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile),
mAttribute_mTypeForEnumeratedElement (in_mTypeForEnumeratedElement),
mAttribute_mDefaultConstructorName (in_mDefaultConstructorName),
mAttribute_mHeaderFileName (in_mHeaderFileName),
mAttribute_mHeaderKind (in_mHeaderKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPredefined.isValid () && mAttribute_mIsConcrete.isValid () && mAttribute_mSuperType.isValid () && mAttribute_mTypeKindEnum.isValid () && mAttribute_mSupportCollectionValue.isValid () && mAttribute_mAllTypedAttributeList.isValid () && mAttribute_mAttributeMap.isValid () && mAttribute_mCurrentTypedAttributeList.isValid () && mAttribute_mConstructorMap.isValid () && mAttribute_mReaderMap.isValid () && mAttribute_mModifierMap.isValid () && mAttribute_mInstanceMethodMap.isValid () && mAttribute_mClassMethodMap.isValid () && mAttribute_mEnumerationDescriptor.isValid () && mAttribute_mEnumeratorVariants.isValid () && mAttribute_mHandledOperatorFlags.isValid () && mAttribute_mAddAssignOperatorArguments.isValid () && mAttribute_mEnumConstantMap.isValid () && mAttribute_mEnumConstantList.isValid () && mAttribute_mMapSearchMethodList.isValid () && mAttribute_mMapProxySearchConstructorList.isValid () && mAttribute_mGenerateHeaderInSeparateFile.isValid () && mAttribute_mTypeForEnumeratedElement.isValid () && mAttribute_mDefaultConstructorName.isValid () && mAttribute_mHeaderFileName.isValid () && mAttribute_mHeaderKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mAttribute_lkey, mAttribute_mIsPredefined, mAttribute_mIsConcrete, mAttribute_mSuperType, mAttribute_mTypeKindEnum, mAttribute_mSupportCollectionValue, mAttribute_mAllTypedAttributeList, mAttribute_mAttributeMap, mAttribute_mCurrentTypedAttributeList, mAttribute_mConstructorMap, mAttribute_mReaderMap, mAttribute_mModifierMap, mAttribute_mInstanceMethodMap, mAttribute_mClassMethodMap, mAttribute_mEnumerationDescriptor, mAttribute_mEnumeratorVariants, mAttribute_mHandledOperatorFlags, mAttribute_mAddAssignOperatorArguments, mAttribute_mEnumConstantMap, mAttribute_mEnumConstantList, mAttribute_mMapSearchMethodList, mAttribute_mMapProxySearchConstructorList, mAttribute_mGenerateHeaderInSeparateFile, mAttribute_mTypeForEnumeratedElement, mAttribute_mDefaultConstructorName, mAttribute_mHeaderFileName, mAttribute_mHeaderKind COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPredefined" ":" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConcrete" ":" ;
  mAttribute_mIsConcrete.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSuperType" ":" ;
  mAttribute_mSuperType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeKindEnum" ":" ;
  mAttribute_mTypeKindEnum.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSupportCollectionValue" ":" ;
  mAttribute_mSupportCollectionValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllTypedAttributeList" ":" ;
  mAttribute_mAllTypedAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeMap" ":" ;
  mAttribute_mAttributeMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCurrentTypedAttributeList" ":" ;
  mAttribute_mCurrentTypedAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstructorMap" ":" ;
  mAttribute_mConstructorMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReaderMap" ":" ;
  mAttribute_mReaderMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModifierMap" ":" ;
  mAttribute_mModifierMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstanceMethodMap" ":" ;
  mAttribute_mInstanceMethodMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassMethodMap" ":" ;
  mAttribute_mClassMethodMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumerationDescriptor" ":" ;
  mAttribute_mEnumerationDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratorVariants" ":" ;
  mAttribute_mEnumeratorVariants.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandledOperatorFlags" ":" ;
  mAttribute_mHandledOperatorFlags.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddAssignOperatorArguments" ":" ;
  mAttribute_mAddAssignOperatorArguments.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantMap" ":" ;
  mAttribute_mEnumConstantMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantList" ":" ;
  mAttribute_mEnumConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapSearchMethodList" ":" ;
  mAttribute_mMapSearchMethodList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapProxySearchConstructorList" ":" ;
  mAttribute_mMapProxySearchConstructorList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGenerateHeaderInSeparateFile" ":" ;
  mAttribute_mGenerateHeaderInSeparateFile.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeForEnumeratedElement" ":" ;
  mAttribute_mTypeForEnumeratedElement.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultConstructorName" ":" ;
  mAttribute_mDefaultConstructorName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderFileName" ":" ;
  mAttribute_mHeaderFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderKind" ":" ;
  mAttribute_mHeaderKind.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (operand->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsConcrete.objectCompare (operand->mAttribute_mIsConcrete) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSuperType.objectCompare (operand->mAttribute_mSuperType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeKindEnum.objectCompare (operand->mAttribute_mTypeKindEnum) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSupportCollectionValue.objectCompare (operand->mAttribute_mSupportCollectionValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAllTypedAttributeList.objectCompare (operand->mAttribute_mAllTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeMap.objectCompare (operand->mAttribute_mAttributeMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCurrentTypedAttributeList.objectCompare (operand->mAttribute_mCurrentTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstructorMap.objectCompare (operand->mAttribute_mConstructorMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReaderMap.objectCompare (operand->mAttribute_mReaderMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mModifierMap.objectCompare (operand->mAttribute_mModifierMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstanceMethodMap.objectCompare (operand->mAttribute_mInstanceMethodMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mClassMethodMap.objectCompare (operand->mAttribute_mClassMethodMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumerationDescriptor.objectCompare (operand->mAttribute_mEnumerationDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratorVariants.objectCompare (operand->mAttribute_mEnumeratorVariants) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHandledOperatorFlags.objectCompare (operand->mAttribute_mHandledOperatorFlags) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAddAssignOperatorArguments.objectCompare (operand->mAttribute_mAddAssignOperatorArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumConstantMap.objectCompare (operand->mAttribute_mEnumConstantMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumConstantList.objectCompare (operand->mAttribute_mEnumConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapSearchMethodList.objectCompare (operand->mAttribute_mMapSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapProxySearchConstructorList.objectCompare (operand->mAttribute_mMapProxySearchConstructorList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGenerateHeaderInSeparateFile.objectCompare (operand->mAttribute_mGenerateHeaderInSeparateFile) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeForEnumeratedElement.objectCompare (operand->mAttribute_mTypeForEnumeratedElement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefaultConstructorName.objectCompare (operand->mAttribute_mDefaultConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHeaderFileName.objectCompare (operand->mAttribute_mHeaderFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHeaderKind.objectCompare (operand->mAttribute_mHeaderKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                    *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton action names                                                 *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                           *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_bool inArgument0,
                                                GALGAS_bool inArgument1,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument2,
                                                GALGAS_typeKindEnum inArgument3,
                                                GALGAS_bool inArgument4,
                                                GALGAS_typedPropertyList inArgument5,
                                                GALGAS_attributeMap inArgument6,
                                                GALGAS_typedPropertyList inArgument7,
                                                GALGAS_constructorMap inArgument8,
                                                GALGAS_getterMap inArgument9,
                                                GALGAS_setterMap inArgument10,
                                                GALGAS_instanceMethodMap inArgument11,
                                                GALGAS_classMethodMap inArgument12,
                                                GALGAS_enumerationDescriptorList inArgument13,
                                                GALGAS_stringlist inArgument14,
                                                GALGAS_uint inArgument15,
                                                GALGAS_functionSignature inArgument16,
                                                GALGAS_constantIndexMap inArgument17,
                                                GALGAS_enumConstantList inArgument18,
                                                GALGAS_mapSearchMethodListAST inArgument19,
                                                GALGAS_mapSearchMethodListAST inArgument20,
                                                GALGAS_bool inArgument21,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument22,
                                                GALGAS_string inArgument23,
                                                GALGAS_string inArgument24,
                                                GALGAS_headerKind inArgument25,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10, inArgument11, inArgument12, inArgument13, inArgument14, inArgument15, inArgument16, inArgument17, inArgument18, inArgument19, inArgument20, inArgument21, inArgument22, inArgument23, inArgument24, inArgument25 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '@%K' type has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        0,
                        NULL,
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "the '@%K' type is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_bool & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              GALGAS_typeKindEnum & outArgument3,
                                              GALGAS_bool & outArgument4,
                                              GALGAS_typedPropertyList & outArgument5,
                                              GALGAS_attributeMap & outArgument6,
                                              GALGAS_typedPropertyList & outArgument7,
                                              GALGAS_constructorMap & outArgument8,
                                              GALGAS_getterMap & outArgument9,
                                              GALGAS_setterMap & outArgument10,
                                              GALGAS_instanceMethodMap & outArgument11,
                                              GALGAS_classMethodMap & outArgument12,
                                              GALGAS_enumerationDescriptorList & outArgument13,
                                              GALGAS_stringlist & outArgument14,
                                              GALGAS_uint & outArgument15,
                                              GALGAS_functionSignature & outArgument16,
                                              GALGAS_constantIndexMap & outArgument17,
                                              GALGAS_enumConstantList & outArgument18,
                                              GALGAS_mapSearchMethodListAST & outArgument19,
                                              GALGAS_mapSearchMethodListAST & outArgument20,
                                              GALGAS_bool & outArgument21,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument22,
                                              GALGAS_string & outArgument23,
                                              GALGAS_string & outArgument24,
                                              GALGAS_headerKind & outArgument25,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
    outArgument10.drop () ;
    outArgument11.drop () ;
    outArgument12.drop () ;
    outArgument13.drop () ;
    outArgument14.drop () ;
    outArgument15.drop () ;
    outArgument16.drop () ;
    outArgument17.drop () ;
    outArgument18.drop () ;
    outArgument19.drop () ;
    outArgument20.drop () ;
    outArgument21.drop () ;
    outArgument22.drop () ;
    outArgument23.drop () ;
    outArgument24.drop () ;
    outArgument25.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mAttribute_mIsPredefined ;
    outArgument1 = p->mAttribute_mIsConcrete ;
    outArgument2 = p->mAttribute_mSuperType ;
    outArgument3 = p->mAttribute_mTypeKindEnum ;
    outArgument4 = p->mAttribute_mSupportCollectionValue ;
    outArgument5 = p->mAttribute_mAllTypedAttributeList ;
    outArgument6 = p->mAttribute_mAttributeMap ;
    outArgument7 = p->mAttribute_mCurrentTypedAttributeList ;
    outArgument8 = p->mAttribute_mConstructorMap ;
    outArgument9 = p->mAttribute_mReaderMap ;
    outArgument10 = p->mAttribute_mModifierMap ;
    outArgument11 = p->mAttribute_mInstanceMethodMap ;
    outArgument12 = p->mAttribute_mClassMethodMap ;
    outArgument13 = p->mAttribute_mEnumerationDescriptor ;
    outArgument14 = p->mAttribute_mEnumeratorVariants ;
    outArgument15 = p->mAttribute_mHandledOperatorFlags ;
    outArgument16 = p->mAttribute_mAddAssignOperatorArguments ;
    outArgument17 = p->mAttribute_mEnumConstantMap ;
    outArgument18 = p->mAttribute_mEnumConstantList ;
    outArgument19 = p->mAttribute_mMapSearchMethodList ;
    outArgument20 = p->mAttribute_mMapProxySearchConstructorList ;
    outArgument21 = p->mAttribute_mGenerateHeaderInSeparateFile ;
    outArgument22 = p->mAttribute_mTypeForEnumeratedElement ;
    outArgument23 = p->mAttribute_mDefaultConstructorName ;
    outArgument24 = p->mAttribute_mHeaderFileName ;
    outArgument25 = p->mAttribute_mHeaderKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::reader_mIsPredefinedForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mIsPredefined ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::reader_mIsConcreteForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mIsConcrete ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap::reader_mSuperTypeForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mSuperType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_unifiedTypeMap::reader_mTypeKindEnumForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typeKindEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeKindEnum ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::reader_mSupportCollectionValueForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mSupportCollectionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_unifiedTypeMap::reader_mAllTypedAttributeListForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typedPropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mAllTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_unifiedTypeMap::reader_mAttributeMapForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_attributeMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mAttributeMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_unifiedTypeMap::reader_mCurrentTypedAttributeListForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typedPropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mCurrentTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_unifiedTypeMap::reader_mConstructorMapForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_constructorMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mConstructorMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_unifiedTypeMap::reader_mReaderMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_getterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mReaderMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_unifiedTypeMap::reader_mModifierMapForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_setterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mModifierMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_unifiedTypeMap::reader_mInstanceMethodMapForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_instanceMethodMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mInstanceMethodMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_unifiedTypeMap::reader_mClassMethodMapForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_classMethodMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mClassMethodMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_unifiedTypeMap::reader_mEnumerationDescriptorForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_enumerationDescriptorList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumerationDescriptor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_unifiedTypeMap::reader_mEnumeratorVariantsForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumeratorVariants ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_unifiedTypeMap::reader_mHandledOperatorFlagsForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mHandledOperatorFlags ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_unifiedTypeMap::reader_mAddAssignOperatorArgumentsForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mAddAssignOperatorArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_unifiedTypeMap::reader_mEnumConstantMapForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_constantIndexMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumConstantMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_unifiedTypeMap::reader_mEnumConstantListForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_enumConstantList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumConstantList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap::reader_mMapSearchMethodListForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mMapSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap::reader_mMapProxySearchConstructorListForKey (const GALGAS_string & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mMapProxySearchConstructorList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::reader_mGenerateHeaderInSeparateFileForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mGenerateHeaderInSeparateFile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap::reader_mTypeForEnumeratedElementForKey (const GALGAS_string & inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeForEnumeratedElement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMap::reader_mDefaultConstructorNameForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mDefaultConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMap::reader_mHeaderFileNameForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mHeaderFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_unifiedTypeMap::reader_mHeaderKindForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_headerKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mHeaderKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMIsPredefinedForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mIsPredefined = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMIsConcreteForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mIsConcrete = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMSuperTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mSuperType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMTypeKindEnumForKey (GALGAS_typeKindEnum inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mTypeKindEnum = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMSupportCollectionValueForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mSupportCollectionValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMAllTypedAttributeListForKey (GALGAS_typedPropertyList inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mAllTypedAttributeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMAttributeMapForKey (GALGAS_attributeMap inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mAttributeMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMCurrentTypedAttributeListForKey (GALGAS_typedPropertyList inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mCurrentTypedAttributeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMConstructorMapForKey (GALGAS_constructorMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mConstructorMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMReaderMapForKey (GALGAS_getterMap inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mReaderMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMModifierMapForKey (GALGAS_setterMap inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mModifierMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMInstanceMethodMapForKey (GALGAS_instanceMethodMap inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mInstanceMethodMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMClassMethodMapForKey (GALGAS_classMethodMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mClassMethodMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMEnumerationDescriptorForKey (GALGAS_enumerationDescriptorList inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumerationDescriptor = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMEnumeratorVariantsForKey (GALGAS_stringlist inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumeratorVariants = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMHandledOperatorFlagsForKey (GALGAS_uint inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mHandledOperatorFlags = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMAddAssignOperatorArgumentsForKey (GALGAS_functionSignature inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mAddAssignOperatorArguments = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMEnumConstantMapForKey (GALGAS_constantIndexMap inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumConstantMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMEnumConstantListForKey (GALGAS_enumConstantList inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumConstantList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMMapSearchMethodListForKey (GALGAS_mapSearchMethodListAST inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mMapSearchMethodList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMMapProxySearchConstructorListForKey (GALGAS_mapSearchMethodListAST inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mMapProxySearchConstructorList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMGenerateHeaderInSeparateFileForKey (GALGAS_bool inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mGenerateHeaderInSeparateFile = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMTypeForEnumeratedElementForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mTypeForEnumeratedElement = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMDefaultConstructorNameForKey (GALGAS_string inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mDefaultConstructorName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMHeaderFileNameForKey (GALGAS_string inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mHeaderFileName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMHeaderKindForKey (GALGAS_headerKind inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mHeaderKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mIsPredefined (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mIsPredefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mIsConcrete (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mIsConcrete ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMap::current_mSuperType (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mSuperType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum cEnumerator_unifiedTypeMap::current_mTypeKindEnum (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mTypeKindEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mSupportCollectionValue (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mSupportCollectionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cEnumerator_unifiedTypeMap::current_mAllTypedAttributeList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mAllTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap cEnumerator_unifiedTypeMap::current_mAttributeMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mAttributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cEnumerator_unifiedTypeMap::current_mCurrentTypedAttributeList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mCurrentTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap cEnumerator_unifiedTypeMap::current_mConstructorMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mConstructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap cEnumerator_unifiedTypeMap::current_mReaderMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mReaderMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap cEnumerator_unifiedTypeMap::current_mModifierMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mModifierMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap cEnumerator_unifiedTypeMap::current_mInstanceMethodMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mInstanceMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap cEnumerator_unifiedTypeMap::current_mClassMethodMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mClassMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList cEnumerator_unifiedTypeMap::current_mEnumerationDescriptor (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumerationDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_unifiedTypeMap::current_mEnumeratorVariants (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumeratorVariants ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_unifiedTypeMap::current_mHandledOperatorFlags (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mHandledOperatorFlags ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_unifiedTypeMap::current_mAddAssignOperatorArguments (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mAddAssignOperatorArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap cEnumerator_unifiedTypeMap::current_mEnumConstantMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList cEnumerator_unifiedTypeMap::current_mEnumConstantList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cEnumerator_unifiedTypeMap::current_mMapSearchMethodList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mMapSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cEnumerator_unifiedTypeMap::current_mMapProxySearchConstructorList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mMapProxySearchConstructorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mGenerateHeaderInSeparateFile (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mGenerateHeaderInSeparateFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMap::current_mTypeForEnumeratedElement (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mTypeForEnumeratedElement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_unifiedTypeMap::current_mDefaultConstructorName (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mDefaultConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_unifiedTypeMap::current_mHeaderFileName (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mHeaderFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind cEnumerator_unifiedTypeMap::current_mHeaderKind (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mHeaderKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

