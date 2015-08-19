#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Parser class 'semanticsComponent' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_semanticsComponent {
//--- Virtual destructor
  public : virtual ~ cParser_semanticsComponent (void) {}

//--- Non terminal declarations
  protected : virtual void nt_semantic_5F_declaration_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantics_5F_component_5F_start_5F_symbol_ (class GALGAS_semanticsComponentAST & outArgument0,
                                                                          class C_String & ioSyntaxDirectedTranslationResult,
                                                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantics_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                               class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantics_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_semanticsComponent_semantics_5F_component_5F_start_5F_symbol_i0_ (GALGAS_semanticsComponentAST & outArgument0,
                                                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                                                          C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticsComponent_semantics_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                               C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticsComponent_semantics_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_semanticsComponent_0 (C_Lexique_galgas_32_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @semanticsComponentAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticsComponentAST : public acPtr_class {
//--- Attributes
  public : GALGAS_lstring mAttribute_mSemanticsComponentName ;
  public : GALGAS_lstringlist mAttribute_mImportedComponentFileNameList ;
  public : GALGAS_semanticDeclarationListAST mAttribute_mSemanticDeclarationList ;
  public : GALGAS_location mAttribute_mEndOfSourceFile ;

//--- Constructor
  public : cPtr_semanticsComponentAST (const GALGAS_lstring & in_mSemanticsComponentName,
                                       const GALGAS_lstringlist & in_mImportedComponentFileNameList,
                                       const GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                       const GALGAS_location & in_mEndOfSourceFile
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSemanticsComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mImportedComponentFileNameList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticDeclarationListAST reader_mSemanticDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfSourceFile (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Parser class 'semanticDeclarationsSyntax' declaration                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_semanticDeclarationsSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_semanticDeclarationsSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_attribute_5F_declaration_ (class GALGAS_propertyInCollectionListAST & ioArgument0,
                                                         class C_String & ioSyntaxDirectedTranslationResult,
                                                         class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_attribute_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                              class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_attribute_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_insert_5F_method_5F_declaration_ (class GALGAS_insertMethodListAST & ioArgument0,
                                                                class C_String & ioSyntaxDirectedTranslationResult,
                                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_insert_5F_method_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_insert_5F_method_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                class C_String & ioSyntaxDirectedTranslationResult,
                                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                 class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                      class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_semanticDeclarationsSyntax_attribute_5F_declaration_i0_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_attribute_5F_declaration_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_attribute_5F_declaration_i0_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i1_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i1_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i2_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i2_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_insert_5F_method_5F_declaration_i3_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_insert_5F_method_5F_declaration_i3_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                             C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_insert_5F_method_5F_declaration_i3_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i4_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i4_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i4_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i5_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i5_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i5_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i6_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i6_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i6_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i7_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i7_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i7_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i8_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i8_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i8_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i9_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i9_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i9_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i10_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i10_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i10_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i11_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i11_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i11_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i12_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i12_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i12_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i13_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i13_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i13_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i14_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i14_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i14_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i15_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i15_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i15_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i16_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i16_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i16_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i17_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i17_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i17_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i18_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i18_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i18_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i19_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i19_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i19_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i20_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i20_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i20_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i21_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i21_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i21_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i22_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i22_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i22_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i23_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i23_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i23_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i24_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i24_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i24_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i25_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i25_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i25_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i26_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i26_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticDeclarationsSyntax_semantic_5F_declaration_i26_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_semanticDeclarationsSyntax_0 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_1 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_2 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_3 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_4 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_5 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_6 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_7 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_8 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_9 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_10 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_11 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_12 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_13 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_14 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_15 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_16 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_17 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_18 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_19 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_20 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_21 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_22 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_23 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_24 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_25 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_26 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_27 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_28 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_29 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_30 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_31 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_32 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_33 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_34 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_35 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_36 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_37 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_38 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_39 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_40 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_41 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_42 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticDeclarationsSyntax_43 (C_Lexique_galgas_32_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @abstractCategoryMethodAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractCategoryMethodAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_abstractCategoryMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractCategoryMethodAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractCategoryMethodAST * ptr (void) const { return (const cPtr_abstractCategoryMethodAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCategoryMethodAST (const cPtr_abstractCategoryMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCategoryMethodAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_abstractCategoryMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_formalParameterListAST & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCategoryMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mAbstractCategoryMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAbstractCategoryMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCategoryMethodAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCategoryMethodAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @abstractCategoryMethodAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mAbstractCategoryMethodName ;
  public : GALGAS_formalParameterListAST mAttribute_mAbstractCategoryMethodFormalParameterList ;

//--- Constructor
  public : cPtr_abstractCategoryMethodAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractCategoryMethodName,
                                           const GALGAS_formalParameterListAST & in_mAbstractCategoryMethodFormalParameterList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAbstractCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mAbstractCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @abstractCategoryModifierAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractCategoryModifierAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_abstractCategoryModifierAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractCategoryModifierAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractCategoryModifierAST * ptr (void) const { return (const cPtr_abstractCategoryModifierAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCategoryModifierAST (const cPtr_abstractCategoryModifierAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCategoryModifierAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_abstractCategoryModifierAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_formalParameterListAST & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCategoryModifierAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mAbstractCategoryModifierFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAbstractCategoryModifierName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCategoryModifierAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCategoryModifierAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @abstractCategoryModifierAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryModifierAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mAbstractCategoryModifierName ;
  public : GALGAS_formalParameterListAST mAttribute_mAbstractCategoryModifierFormalParameterList ;

//--- Constructor
  public : cPtr_abstractCategoryModifierAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mAbstractCategoryModifierName,
                                             const GALGAS_formalParameterListAST & in_mAbstractCategoryModifierFormalParameterList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAbstractCategoryModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mAbstractCategoryModifierFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @abstractCategoryReaderAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractCategoryReaderAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_abstractCategoryReaderAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractCategoryReaderAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractCategoryReaderAST * ptr (void) const { return (const cPtr_abstractCategoryReaderAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCategoryReaderAST (const cPtr_abstractCategoryReaderAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCategoryReaderAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_abstractCategoryReaderAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                    const class GALGAS_lstring & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCategoryReaderAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST reader_mAbstractCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAbstractCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAbstractCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCategoryReaderAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCategoryReaderAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @abstractCategoryReaderAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryReaderAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mAbstractCategoryReaderName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mAbstractCategoryReaderFormalInputParameterList ;
  public : GALGAS_lstring mAttribute_mAbstractCategoryReaderReturnedTypeName ;

//--- Constructor
  public : cPtr_abstractCategoryReaderAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractCategoryReaderName,
                                           const GALGAS_formalInputParameterListAST & in_mAbstractCategoryReaderFormalInputParameterList,
                                           const GALGAS_lstring & in_mAbstractCategoryReaderReturnedTypeName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAbstractCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST reader_mAbstractCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAbstractCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @arrayDeclarationAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_arrayDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_arrayDeclarationAST * ptr (void) const { return (const cPtr_arrayDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayDeclarationAST (const cPtr_arrayDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_lstring & inOperand2,
                                                              const class GALGAS_luint & inOperand3
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mArrayTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mDimension (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mElementTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @arrayDeclarationAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_arrayDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mArrayTypeName ;
  public : GALGAS_lstring mAttribute_mElementTypeName ;
  public : GALGAS_luint mAttribute_mDimension ;

//--- Constructor
  public : cPtr_arrayDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mArrayTypeName,
                                     const GALGAS_lstring & in_mElementTypeName,
                                     const GALGAS_luint & in_mDimension
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mArrayTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mElementTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mDimension (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @categoryMethodAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryMethodAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_categoryMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryMethodAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_categoryMethodAST * ptr (void) const { return (const cPtr_categoryMethodAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_categoryMethodAST (const cPtr_categoryMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryMethodAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_lstring & inOperand2,
                                                            const class GALGAS_formalParameterListAST & inOperand3,
                                                            const class GALGAS_semanticInstructionListAST & inOperand4,
                                                            const class GALGAS_location & inOperand5
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mCategoryMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mCategoryMethodInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCategoryMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfMethodLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryMethodAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryMethodAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @categoryMethodAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_categoryMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mCategoryMethodName ;
  public : GALGAS_formalParameterListAST mAttribute_mCategoryMethodFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mAttribute_mCategoryMethodInstructionList ;
  public : GALGAS_location mAttribute_mEndOfMethodLocation ;

//--- Constructor
  public : cPtr_categoryMethodAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mCategoryMethodName,
                                   const GALGAS_formalParameterListAST & in_mCategoryMethodFormalParameterList,
                                   const GALGAS_semanticInstructionListAST & in_mCategoryMethodInstructionList,
                                   const GALGAS_location & in_mEndOfMethodLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mCategoryMethodInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfMethodLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @categoryModifierAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryModifierAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_categoryModifierAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryModifierAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_categoryModifierAST * ptr (void) const { return (const cPtr_categoryModifierAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_categoryModifierAST (const cPtr_categoryModifierAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryModifierAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryModifierAST constructor_new (const class GALGAS_bool & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_lstring & inOperand2,
                                                              const class GALGAS_formalParameterListAST & inOperand3,
                                                              const class GALGAS_semanticInstructionListAST & inOperand4,
                                                              const class GALGAS_location & inOperand5
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryModifierAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mCategoryModifierFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mCategoryModifierInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCategoryModifierName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfModifierLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryModifierAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryModifierAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @categoryModifierAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_categoryModifierAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mCategoryModifierName ;
  public : GALGAS_formalParameterListAST mAttribute_mCategoryModifierFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mAttribute_mCategoryModifierInstructionList ;
  public : GALGAS_location mAttribute_mEndOfModifierLocation ;

//--- Constructor
  public : cPtr_categoryModifierAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mTypeName,
                                     const GALGAS_lstring & in_mCategoryModifierName,
                                     const GALGAS_formalParameterListAST & in_mCategoryModifierFormalParameterList,
                                     const GALGAS_semanticInstructionListAST & in_mCategoryModifierInstructionList,
                                     const GALGAS_location & in_mEndOfModifierLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCategoryModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mCategoryModifierFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mCategoryModifierInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfModifierLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @categoryReaderAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryReaderAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_categoryReaderAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryReaderAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_categoryReaderAST * ptr (void) const { return (const cPtr_categoryReaderAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_categoryReaderAST (const cPtr_categoryReaderAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryReaderAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryReaderAST constructor_new (const class GALGAS_bool & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_lstring & inOperand2,
                                                            const class GALGAS_formalInputParameterListAST & inOperand3,
                                                            const class GALGAS_lstring & inOperand4,
                                                            const class GALGAS_lstring & inOperand5,
                                                            const class GALGAS_semanticInstructionListAST & inOperand6,
                                                            const class GALGAS_location & inOperand7
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryReaderAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST reader_mCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mCategoryReaderInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCategoryReaderReturnedVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfReaderLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryReaderAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryReaderAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @categoryReaderAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_categoryReaderAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mCategoryReaderName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mCategoryReaderFormalInputParameterList ;
  public : GALGAS_lstring mAttribute_mCategoryReaderReturnedTypeName ;
  public : GALGAS_lstring mAttribute_mCategoryReaderReturnedVariableName ;
  public : GALGAS_semanticInstructionListAST mAttribute_mCategoryReaderInstructionList ;
  public : GALGAS_location mAttribute_mEndOfReaderLocation ;

//--- Constructor
  public : cPtr_categoryReaderAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mCategoryReaderName,
                                   const GALGAS_formalInputParameterListAST & in_mCategoryReaderFormalInputParameterList,
                                   const GALGAS_lstring & in_mCategoryReaderReturnedTypeName,
                                   const GALGAS_lstring & in_mCategoryReaderReturnedVariableName,
                                   const GALGAS_semanticInstructionListAST & in_mCategoryReaderInstructionList,
                                   const GALGAS_location & in_mEndOfReaderLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST reader_mCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCategoryReaderReturnedVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mCategoryReaderInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfReaderLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @classDeclarationAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_classDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_classDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_classDeclarationAST * ptr (void) const { return (const cPtr_classDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_classDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                              const class GALGAS_bool & inOperand1,
                                                              const class GALGAS_lstring & inOperand2,
                                                              const class GALGAS_lstring & inOperand3,
                                                              const class GALGAS_lstringlist & inOperand4,
                                                              const class GALGAS_propertyInCollectionListAST & inOperand5
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @classDeclarationAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_classDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsAbstract ;
  public : GALGAS_lstring mAttribute_mClassTypeName ;
  public : GALGAS_lstring mAttribute_mSuperClassName ;
  public : GALGAS_lstringlist mAttribute_mClassFeatureList ;
  public : GALGAS_propertyInCollectionListAST mAttribute_mAttributeList ;

//--- Constructor
  public : cPtr_classDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_bool & in_mIsAbstract,
                                     const GALGAS_lstring & in_mClassTypeName,
                                     const GALGAS_lstring & in_mSuperClassName,
                                     const GALGAS_lstringlist & in_mClassFeatureList,
                                     const GALGAS_propertyInCollectionListAST & in_mAttributeList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @enumDeclarationAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_enumDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumDeclarationAST * ptr (void) const { return (const cPtr_enumDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                             const class GALGAS_lstring & inOperand1,
                                                             const class GALGAS_enumConstantList & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantList reader_mConstantList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mEnumTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @enumConstantList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumConstantList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mConstantName,
                                                  const class GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumConstantList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_enumConstantList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS__32_lstringlist & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_enumConstantList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS__32_lstringlist & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantList operator_concat (const GALGAS_enumConstantList & inOperand
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantList add_operation (const GALGAS_enumConstantList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS__32_lstringlist constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS__32_lstringlist & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS__32_lstringlist & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS__32_lstringlist & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS__32_lstringlist & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS__32_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist reader_mAssociatedValueDefinitionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumConstantList ;
 
} ; // End of GALGAS_enumConstantList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumConstantList : public cGenericAbstractEnumerator {
  public : cEnumerator_enumConstantList (const GALGAS_enumConstantList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public : class GALGAS__32_lstringlist current_mAssociatedValueDefinitionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @enumDeclarationAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mEnumTypeName ;
  public : GALGAS_enumConstantList mAttribute_mConstantList ;

//--- Constructor
  public : cPtr_enumDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mEnumTypeName,
                                    const GALGAS_enumConstantList & in_mConstantList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mEnumTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantList reader_mConstantList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @externTypeDeclarationAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_externTypeDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externTypeDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_externTypeDeclarationAST * ptr (void) const { return (const cPtr_externTypeDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externTypeDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_string & inOperand2,
                                                                   const class GALGAS_string & inOperand3,
                                                                   const class GALGAS_externTypeConstructorList & inOperand4,
                                                                   const class GALGAS_externTypeReaderList & inOperand5,
                                                                   const class GALGAS_externTypeModifierList & inOperand6,
                                                                   const class GALGAS_externTypeMethodList & inOperand7
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppClassCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppPreDeclarationCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList reader_mExternTypeConstructorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList reader_mExternTypeMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeModifierList reader_mExternTypeModifierList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mExternTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeReaderList reader_mExternTypeReaderList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @externTypeDeclarationAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_externTypeDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mExternTypeName ;
  public : GALGAS_string mAttribute_mCppPreDeclarationCode ;
  public : GALGAS_string mAttribute_mCppClassCode ;
  public : GALGAS_externTypeConstructorList mAttribute_mExternTypeConstructorList ;
  public : GALGAS_externTypeReaderList mAttribute_mExternTypeReaderList ;
  public : GALGAS_externTypeModifierList mAttribute_mExternTypeModifierList ;
  public : GALGAS_externTypeMethodList mAttribute_mExternTypeMethodList ;

//--- Constructor
  public : cPtr_externTypeDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                          const GALGAS_lstring & in_mExternTypeName,
                                          const GALGAS_string & in_mCppPreDeclarationCode,
                                          const GALGAS_string & in_mCppClassCode,
                                          const GALGAS_externTypeConstructorList & in_mExternTypeConstructorList,
                                          const GALGAS_externTypeReaderList & in_mExternTypeReaderList,
                                          const GALGAS_externTypeModifierList & in_mExternTypeModifierList,
                                          const GALGAS_externTypeMethodList & in_mExternTypeMethodList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mExternTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppPreDeclarationCode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppClassCode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeConstructorList reader_mExternTypeConstructorList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeReaderList reader_mExternTypeReaderList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeModifierList reader_mExternTypeModifierList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeMethodList reader_mExternTypeMethodList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @filewrapperDeclarationAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_filewrapperDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperDeclarationAST * ptr (void) const { return (const cPtr_filewrapperDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_string & inOperand2,
                                                                    const class GALGAS_lstring & inOperand3,
                                                                    const class GALGAS_lstring & inOperand4,
                                                                    const class GALGAS_lstringlist & inOperand5,
                                                                    const class GALGAS_lstringlist & inOperand6,
                                                                    const class GALGAS_filewrapperTemplateListAST & inOperand7
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mFilewrapperBinaryFileExtensionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListAST reader_mFilewrapperTemplateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mFilewrapperTextFileExtensionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSourceFileAbsolutePath (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @filewrapperDeclarationAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsInternal ;
  public : GALGAS_string mAttribute_mSourceFileAbsolutePath ;
  public : GALGAS_lstring mAttribute_mFilewrapperName ;
  public : GALGAS_lstring mAttribute_mFilewrapperPath ;
  public : GALGAS_lstringlist mAttribute_mFilewrapperTextFileExtensionList ;
  public : GALGAS_lstringlist mAttribute_mFilewrapperBinaryFileExtensionList ;
  public : GALGAS_filewrapperTemplateListAST mAttribute_mFilewrapperTemplateList ;

//--- Constructor
  public : cPtr_filewrapperDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_bool & in_mIsInternal,
                                           const GALGAS_string & in_mSourceFileAbsolutePath,
                                           const GALGAS_lstring & in_mFilewrapperName,
                                           const GALGAS_lstring & in_mFilewrapperPath,
                                           const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                           const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                           const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mSourceFileAbsolutePath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFilewrapperPath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mFilewrapperTextFileExtensionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mFilewrapperBinaryFileExtensionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListAST reader_mFilewrapperTemplateList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @graphDeclarationAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_graphDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_graphDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_graphDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_graphDeclarationAST * ptr (void) const { return (const cPtr_graphDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_graphDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_graphDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_lstring & inOperand2,
                                                              const class GALGAS_graphInsertModifierList & inOperand3
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_graphDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAssociatedListTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mGraphTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList reader_mInsertModifierList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @graphDeclarationAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_graphDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mGraphTypeName ;
  public : GALGAS_lstring mAttribute_mAssociatedListTypeName ;
  public : GALGAS_graphInsertModifierList mAttribute_mInsertModifierList ;

//--- Constructor
  public : cPtr_graphDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mGraphTypeName,
                                     const GALGAS_lstring & in_mAssociatedListTypeName,
                                     const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mGraphTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAssociatedListTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_graphInsertModifierList reader_mInsertModifierList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @listDeclarationAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_listDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_listDeclarationAST * ptr (void) const { return (const cPtr_listDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                             const class GALGAS_lstring & inOperand1,
                                                             const class GALGAS_propertyInCollectionListAST & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @listDeclarationAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mListTypeName ;
  public : GALGAS_propertyInCollectionListAST mAttribute_mAttributeList ;

//--- Constructor
  public : cPtr_listDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mListTypeName,
                                    const GALGAS_propertyInCollectionListAST & in_mAttributeList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @listmapDeclarationAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listmapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_listmapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listmapDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_listmapDeclarationAST * ptr (void) const { return (const cPtr_listmapDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_listmapDeclarationAST (const cPtr_listmapDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listmapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listmapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                const class GALGAS_lstring & inOperand1,
                                                                const class GALGAS_lstring & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listmapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAssociatedListTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mListmapTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listmapDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listmapDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @listmapDeclarationAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_listmapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mListmapTypeName ;
  public : GALGAS_lstring mAttribute_mAssociatedListTypeName ;

//--- Constructor
  public : cPtr_listmapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_lstring & in_mListmapTypeName,
                                       const GALGAS_lstring & in_mAssociatedListTypeName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mListmapTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAssociatedListTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @mapDeclarationAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_mapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_mapDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_mapDeclarationAST * ptr (void) const { return (const cPtr_mapDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_lstringlist & inOperand2,
                                                            const class GALGAS_propertyInCollectionListAST & inOperand3,
                                                            const class GALGAS_insertMethodListAST & inOperand4,
                                                            const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                            const class GALGAS_mapRemoveMethodListAST & inOperand6,
                                                            const class GALGAS_insertOrReplaceDeclarationListAST & inOperand7
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_insertOrReplaceDeclarationListAST reader_mInsertOrReplaceDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST reader_mPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST reader_mRemoveMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @mapDeclarationAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_mapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMapTypeName ;
  public : GALGAS_lstringlist mAttribute_mAttributeList ;
  public : GALGAS_propertyInCollectionListAST mAttribute_mPropertyList ;
  public : GALGAS_insertMethodListAST mAttribute_mInsertMethodList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mSearchMethodList ;
  public : GALGAS_mapRemoveMethodListAST mAttribute_mRemoveMethodList ;
  public : GALGAS_insertOrReplaceDeclarationListAST mAttribute_mInsertOrReplaceDeclarationListAST ;

//--- Constructor
  public : cPtr_mapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mMapTypeName,
                                   const GALGAS_lstringlist & in_mAttributeList,
                                   const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                   const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                   const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                   const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                   const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST reader_mPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapRemoveMethodListAST reader_mRemoveMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertOrReplaceDeclarationListAST reader_mInsertOrReplaceDeclarationListAST (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapProxyDeclarationAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapProxyDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_mapProxyDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_mapProxyDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_mapProxyDeclarationAST * ptr (void) const { return (const cPtr_mapProxyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_mapProxyDeclarationAST (const cPtr_mapProxyDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapProxyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapProxyDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapProxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAssociatedMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMapProxyTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapProxyDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapProxyDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @mapProxyDeclarationAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_mapProxyDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMapProxyTypeName ;
  public : GALGAS_lstring mAttribute_mAssociatedMapTypeName ;

//--- Constructor
  public : cPtr_mapProxyDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_lstring & in_mMapProxyTypeName,
                                        const GALGAS_lstring & in_mAssociatedMapTypeName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMapProxyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAssociatedMapTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overridingAbstractCategoryMethodAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingAbstractCategoryMethodAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingAbstractCategoryMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingAbstractCategoryMethodAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingAbstractCategoryMethodAST * ptr (void) const { return (const cPtr_overridingAbstractCategoryMethodAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingAbstractCategoryMethodAST (const cPtr_overridingAbstractCategoryMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingAbstractCategoryMethodAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingAbstractCategoryMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstring & inOperand2,
                                                                              const class GALGAS_formalParameterListAST & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingAbstractCategoryMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mOverridingCategoryMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverridingCategoryMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractCategoryMethodAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @overridingAbstractCategoryMethodAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingAbstractCategoryMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryMethodName ;
  public : GALGAS_formalParameterListAST mAttribute_mOverridingCategoryMethodFormalParameterList ;

//--- Constructor
  public : cPtr_overridingAbstractCategoryMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mOverridingCategoryMethodName,
                                                     const GALGAS_formalParameterListAST & in_mOverridingCategoryMethodFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mOverridingCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @overridingAbstractCategoryModifierAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingAbstractCategoryModifierAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingAbstractCategoryModifierAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingAbstractCategoryModifierAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingAbstractCategoryModifierAST * ptr (void) const { return (const cPtr_overridingAbstractCategoryModifierAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingAbstractCategoryModifierAST (const cPtr_overridingAbstractCategoryModifierAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingAbstractCategoryModifierAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingAbstractCategoryModifierAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_formalParameterListAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingAbstractCategoryModifierAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mOverridingCategoryModifierFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverridingCategoryModifierName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractCategoryModifierAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @overridingAbstractCategoryModifierAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingAbstractCategoryModifierAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryModifierName ;
  public : GALGAS_formalParameterListAST mAttribute_mOverridingCategoryModifierFormalParameterList ;

//--- Constructor
  public : cPtr_overridingAbstractCategoryModifierAST (const GALGAS_bool & in_mIsPredefined,
                                                       const GALGAS_lstring & in_mTypeName,
                                                       const GALGAS_lstring & in_mOverridingCategoryModifierName,
                                                       const GALGAS_formalParameterListAST & in_mOverridingCategoryModifierFormalParameterList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mOverridingCategoryModifierFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overridingAbstractCategoryReaderAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingAbstractCategoryReaderAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingAbstractCategoryReaderAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingAbstractCategoryReaderAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingAbstractCategoryReaderAST * ptr (void) const { return (const cPtr_overridingAbstractCategoryReaderAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingAbstractCategoryReaderAST (const cPtr_overridingAbstractCategoryReaderAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingAbstractCategoryReaderAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingAbstractCategoryReaderAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstring & inOperand2,
                                                                              const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                              const class GALGAS_lstring & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingAbstractCategoryReaderAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST reader_mAbstractCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAbstractCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAbstractCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractCategoryReaderAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @overridingAbstractCategoryReaderAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingAbstractCategoryReaderAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mAbstractCategoryReaderName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mAbstractCategoryReaderFormalInputParameterList ;
  public : GALGAS_lstring mAttribute_mAbstractCategoryReaderReturnedTypeName ;

//--- Constructor
  public : cPtr_overridingAbstractCategoryReaderAST (const GALGAS_bool & in_mIsPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mAbstractCategoryReaderName,
                                                     const GALGAS_formalInputParameterListAST & in_mAbstractCategoryReaderFormalInputParameterList,
                                                     const GALGAS_lstring & in_mAbstractCategoryReaderReturnedTypeName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAbstractCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST reader_mAbstractCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAbstractCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @overridingCategoryMethodAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingCategoryMethodAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingCategoryMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingCategoryMethodAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingCategoryMethodAST * ptr (void) const { return (const cPtr_overridingCategoryMethodAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingCategoryMethodAST (const cPtr_overridingCategoryMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingCategoryMethodAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingCategoryMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_formalParameterListAST & inOperand3,
                                                                      const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                      const class GALGAS_location & inOperand5
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingCategoryMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfMethodLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mOverridingCategoryMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mOverridingCategoryMethodInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverridingCategoryMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingCategoryMethodAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingCategoryMethodAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @overridingCategoryMethodAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingCategoryMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryMethodName ;
  public : GALGAS_formalParameterListAST mAttribute_mOverridingCategoryMethodFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mAttribute_mOverridingCategoryMethodInstructionList ;
  public : GALGAS_location mAttribute_mEndOfMethodLocation ;

//--- Constructor
  public : cPtr_overridingCategoryMethodAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingCategoryMethodName,
                                             const GALGAS_formalParameterListAST & in_mOverridingCategoryMethodFormalParameterList,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingCategoryMethodInstructionList,
                                             const GALGAS_location & in_mEndOfMethodLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mOverridingCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mOverridingCategoryMethodInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfMethodLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @overridingCategoryModifierAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingCategoryModifierAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingCategoryModifierAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingCategoryModifierAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingCategoryModifierAST * ptr (void) const { return (const cPtr_overridingCategoryModifierAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingCategoryModifierAST (const cPtr_overridingCategoryModifierAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingCategoryModifierAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingCategoryModifierAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_formalParameterListAST & inOperand3,
                                                                        const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                        const class GALGAS_location & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingCategoryModifierAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfModifierLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mOverridingCategoryModifierFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mOverridingCategoryModifierInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverridingCategoryModifierName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingCategoryModifierAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingCategoryModifierAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @overridingCategoryModifierAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingCategoryModifierAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryModifierName ;
  public : GALGAS_formalParameterListAST mAttribute_mOverridingCategoryModifierFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mAttribute_mOverridingCategoryModifierInstructionList ;
  public : GALGAS_location mAttribute_mEndOfModifierLocation ;

//--- Constructor
  public : cPtr_overridingCategoryModifierAST (const GALGAS_bool & in_mIsPredefined,
                                               const GALGAS_lstring & in_mTypeName,
                                               const GALGAS_lstring & in_mOverridingCategoryModifierName,
                                               const GALGAS_formalParameterListAST & in_mOverridingCategoryModifierFormalParameterList,
                                               const GALGAS_semanticInstructionListAST & in_mOverridingCategoryModifierInstructionList,
                                               const GALGAS_location & in_mEndOfModifierLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mOverridingCategoryModifierFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mOverridingCategoryModifierInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfModifierLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @overridingCategoryReaderAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingCategoryReaderAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingCategoryReaderAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingCategoryReaderAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingCategoryReaderAST * ptr (void) const { return (const cPtr_overridingCategoryReaderAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingCategoryReaderAST (const cPtr_overridingCategoryReaderAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingCategoryReaderAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingCategoryReaderAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                      const class GALGAS_lstring & inOperand4,
                                                                      const class GALGAS_lstring & inOperand5,
                                                                      const class GALGAS_semanticInstructionListAST & inOperand6,
                                                                      const class GALGAS_location & inOperand7
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingCategoryReaderAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfReaderLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST reader_mOverridingCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mOverridingCategoryReaderInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverridingCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverridingCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverridingCategoryReaderReturnedVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingCategoryReaderAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingCategoryReaderAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @overridingCategoryReaderAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingCategoryReaderAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryReaderName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mOverridingCategoryReaderFormalInputParameterList ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryReaderReturnedTypeName ;
  public : GALGAS_lstring mAttribute_mOverridingCategoryReaderReturnedVariableName ;
  public : GALGAS_semanticInstructionListAST mAttribute_mOverridingCategoryReaderInstructionList ;
  public : GALGAS_location mAttribute_mEndOfReaderLocation ;

//--- Constructor
  public : cPtr_overridingCategoryReaderAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingCategoryReaderName,
                                             const GALGAS_formalInputParameterListAST & in_mOverridingCategoryReaderFormalInputParameterList,
                                             const GALGAS_lstring & in_mOverridingCategoryReaderReturnedTypeName,
                                             const GALGAS_lstring & in_mOverridingCategoryReaderReturnedVariableName,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingCategoryReaderInstructionList,
                                             const GALGAS_location & in_mEndOfReaderLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST reader_mOverridingCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOverridingCategoryReaderReturnedVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mOverridingCategoryReaderInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfReaderLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @sharedMapDeclarationAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sharedMapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_sharedMapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sharedMapDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_sharedMapDeclarationAST * ptr (void) const { return (const cPtr_sharedMapDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sharedMapDeclarationAST (const cPtr_sharedMapDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sharedMapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sharedMapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstringlist & inOperand2,
                                                                  const class GALGAS_propertyInCollectionListAST & inOperand3,
                                                                  const class GALGAS_insertMethodListAST & inOperand4,
                                                                  const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                                  const class GALGAS_mapStateList & inOperand6,
                                                                  const class GALGAS_mapOverrideBlockListAST & inOperand7
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sharedMapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockListAST reader_mMapOverrideBlockListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateList reader_mMapStateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST reader_mPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sharedMapDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapOverrideBlockListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapOverrideBlockListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mapOverrideBlockListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mapOverrideBlockListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOverrideBlockName,
                                                  const class GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_31_AST,
                                                  const class GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_32_AST
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapOverrideBlockListAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapOverrideBlockListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_mapOverrideBlockListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                                            const class GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapOverrideBlockListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                      const class GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockListAST operator_concat (const GALGAS_mapOverrideBlockListAST & inOperand
                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockListAST add_operation (const GALGAS_mapOverrideBlockListAST & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_mapOverrideBlockDescriptorAST constinArgument1,
                                                         class GALGAS_mapOverrideBlockDescriptorAST constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                                    class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                                   class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                                         class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                               class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                              class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapOverrideBlockListAST ;
 
} ; // End of GALGAS_mapOverrideBlockListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapOverrideBlockListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_mapOverrideBlockListAST (const GALGAS_mapOverrideBlockListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOverrideBlockName (LOCATION_ARGS) const ;
  public : class GALGAS_mapOverrideBlockDescriptorAST current_mMapOverrideBlockDescriptor_31_AST (LOCATION_ARGS) const ;
  public : class GALGAS_mapOverrideBlockDescriptorAST current_mMapOverrideBlockDescriptor_32_AST (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapOverrideBlockListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapOverrideBlockListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @mapStateList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mapStateList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mapStateList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mStateName,
                                                  const class GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                  const class GALGAS_lstring & in_mStateMessage,
                                                  const class GALGAS_mapStateTransitionList & in_mTransitionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_mapStateList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_mapAutomatonMessageKind & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_mapStateTransitionList & inOperand3
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapStateList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_mapStateTransitionList & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateList operator_concat (const GALGAS_mapStateList & inOperand
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateList add_operation (const GALGAS_mapStateList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_mapAutomatonMessageKind constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_mapStateTransitionList constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_mapAutomatonMessageKind & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_mapStateTransitionList & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_mapAutomatonMessageKind & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_mapStateTransitionList & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_mapAutomatonMessageKind & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_mapStateTransitionList & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mapAutomatonMessageKind & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_mapStateTransitionList & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mapAutomatonMessageKind & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_mapStateTransitionList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapStateList ;
 
} ; // End of GALGAS_mapStateList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapStateList : public cGenericAbstractEnumerator {
  public : cEnumerator_mapStateList (const GALGAS_mapStateList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mStateName (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mStateMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mStateMessage (LOCATION_ARGS) const ;
  public : class GALGAS_mapStateTransitionList current_mTransitionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapStateList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @sharedMapDeclarationAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sharedMapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMapTypeName ;
  public : GALGAS_lstringlist mAttribute_mAttributeList ;
  public : GALGAS_propertyInCollectionListAST mAttribute_mPropertyList ;
  public : GALGAS_insertMethodListAST mAttribute_mInsertMethodList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mSearchMethodList ;
  public : GALGAS_mapStateList mAttribute_mMapStateList ;
  public : GALGAS_mapOverrideBlockListAST mAttribute_mMapOverrideBlockListAST ;

//--- Constructor
  public : cPtr_sharedMapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_lstring & in_mMapTypeName,
                                         const GALGAS_lstringlist & in_mAttributeList,
                                         const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                         const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                         const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                         const GALGAS_mapStateList & in_mMapStateList,
                                         const GALGAS_mapOverrideBlockListAST & in_mMapOverrideBlockListAST
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST reader_mPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateList reader_mMapStateList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockListAST reader_mMapOverrideBlockListAST (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @sortedListDeclarationAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sortedListDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_sortedListDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sortedListDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_sortedListDeclarationAST * ptr (void) const { return (const cPtr_sortedListDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sortedListDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sortedListDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                   const class GALGAS_sortedListSortDescriptorListAST & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST reader_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST reader_mSortDescriptorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSortedListTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedListDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @sortedListSortDescriptorListAST list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sortedListSortDescriptorListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_sortedListSortDescriptorListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_sortedListSortDescriptorListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSortedAttributeName,
                                                  const class GALGAS_bool & in_mAscending
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sortedListSortDescriptorListAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sortedListSortDescriptorListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_sortedListSortDescriptorListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_bool & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_sortedListSortDescriptorListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_sortedListSortDescriptorListAST operator_concat (const GALGAS_sortedListSortDescriptorListAST & inOperand
                                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_sortedListSortDescriptorListAST add_operation (const GALGAS_sortedListSortDescriptorListAST & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_bool constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_sortedListSortDescriptorListAST ;
 
} ; // End of GALGAS_sortedListSortDescriptorListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_sortedListSortDescriptorListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_sortedListSortDescriptorListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @sortedListDeclarationAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sortedListDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mSortedListTypeName ;
  public : GALGAS_propertyInCollectionListAST mAttribute_mAttributeList ;
  public : GALGAS_sortedListSortDescriptorListAST mAttribute_mSortDescriptorList ;

//--- Constructor
  public : cPtr_sortedListDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                          const GALGAS_lstring & in_mSortedListTypeName,
                                          const GALGAS_propertyInCollectionListAST & in_mAttributeList,
                                          const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSortedListTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST reader_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_sortedListSortDescriptorListAST reader_mSortDescriptorList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @structDeclarationAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_structDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_structDeclarationAST * ptr (void) const { return (const cPtr_structDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                               const class GALGAS_lstring & inOperand1,
                                                               const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                               const class GALGAS_string & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST reader_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumeratedElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStructTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @structDeclarationAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mStructTypeName ;
  public : GALGAS_propertyInCollectionListAST mAttribute_mAttributeList ;
  public : GALGAS_string mAttribute_mEnumeratedElementTypeName ;

//--- Constructor
  public : cPtr_structDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_lstring & in_mStructTypeName,
                                      const GALGAS_propertyInCollectionListAST & in_mAttributeList,
                                      const GALGAS_string & in_mEnumeratedElementTypeName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mStructTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST reader_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mEnumeratedElementTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapAutomatonMessageKind enum                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapAutomatonMessageKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_mapAutomatonMessageKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noMessage,
    kEnum_warningMessage,
    kEnum_errorMessage
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapAutomatonMessageKind extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapAutomatonMessageKind constructor_errorMessage (LOCATION_ARGS) ;

  public : static GALGAS_mapAutomatonMessageKind constructor_noMessage (LOCATION_ARGS) ;

  public : static GALGAS_mapAutomatonMessageKind constructor_warningMessage (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapAutomatonMessageKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNoMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isWarningMessage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapAutomatonMessageKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapAutomatonMessageKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mapOverrideBlockDescriptorAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapOverrideBlockDescriptorAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mapOverrideBlockDescriptorAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mapOverrideBlockDescriptorAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLeftState,
                                                  const class GALGAS_lstring & in_mRightState,
                                                  const class GALGAS_lstring & in_mResultingState,
                                                  const class GALGAS_mapAutomatonMessageKind & in_mMessageKind,
                                                  const class GALGAS_lstring & in_mTransitionMessage
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapOverrideBlockDescriptorAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapOverrideBlockDescriptorAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_mapOverrideBlockDescriptorAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                                  const class GALGAS_lstring & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapOverrideBlockDescriptorAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand3,
                                                      const class GALGAS_lstring & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockDescriptorAST operator_concat (const GALGAS_mapOverrideBlockDescriptorAST & inOperand
                                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockDescriptorAST add_operation (const GALGAS_mapOverrideBlockDescriptorAST & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_mapAutomatonMessageKind constinArgument3,
                                                         class GALGAS_lstring constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_mapAutomatonMessageKind & outArgument3,
                                                    class GALGAS_lstring & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_mapAutomatonMessageKind & outArgument3,
                                                   class GALGAS_lstring & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_mapAutomatonMessageKind & outArgument3,
                                                         class GALGAS_lstring & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_mapAutomatonMessageKind & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_mapAutomatonMessageKind & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockDescriptorAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockDescriptorAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapOverrideBlockDescriptorAST ;
 
} ; // End of GALGAS_mapOverrideBlockDescriptorAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapOverrideBlockDescriptorAST : public cGenericAbstractEnumerator {
  public : cEnumerator_mapOverrideBlockDescriptorAST (const GALGAS_mapOverrideBlockDescriptorAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLeftState (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mRightState (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mResultingState (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTransitionMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapOverrideBlockDescriptorAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapStateTransitionList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateTransitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mapStateTransitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mapStateTransitionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mActionName,
                                                  const class GALGAS_lstring & in_mTargetStateName,
                                                  const class GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                  const class GALGAS_lstring & in_mTransitionMessage
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateTransitionList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateTransitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_mapStateTransitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapStateTransitionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand2,
                                                      const class GALGAS_lstring & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateTransitionList operator_concat (const GALGAS_mapStateTransitionList & inOperand
                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateTransitionList add_operation (const GALGAS_mapStateTransitionList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_mapAutomatonMessageKind constinArgument2,
                                                         class GALGAS_lstring constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                    class GALGAS_lstring & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                         class GALGAS_lstring & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_mapAutomatonMessageKind & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_mapAutomatonMessageKind & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateTransitionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateTransitionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapStateTransitionList ;
 
} ; // End of GALGAS_mapStateTransitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapStateTransitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_mapStateTransitionList (const GALGAS_mapStateTransitionList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mActionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTargetStateName (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mTransitionMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTransitionMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapStateTransitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateTransitionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @functionSignature list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_functionSignature (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_functionSignature (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalSelector,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const class GALGAS_string & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionSignature extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionSignature constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_functionSignature constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                      const class GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_functionSignature inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_functionSignature operator_concat (const GALGAS_functionSignature & inOperand
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_functionSignature add_operation (const GALGAS_functionSignature & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_functionSignature ;
 
} ; // End of GALGAS_functionSignature class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_functionSignature : public cGenericAbstractEnumerator {
  public : cEnumerator_functionSignature (const GALGAS_functionSignature & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @functionSignature_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalSelector ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mFormalArgumentType ;
  public : GALGAS_string mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionSignature_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionSignature_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                       const class GALGAS_string & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mFormalArgumentType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionSignature_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @unifiedTypeMapProxyList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMapProxyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMapProxyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_unifiedTypeMapProxyList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMapProxyList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeMapProxyList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_unifiedTypeMapProxyList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_unifiedTypeMapProxyList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxyList operator_concat (const GALGAS_unifiedTypeMapProxyList & inOperand
                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxyList add_operation (const GALGAS_unifiedTypeMapProxyList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMapProxyList ;
 
} ; // End of GALGAS_unifiedTypeMapProxyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedTypeMapProxyList : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeMapProxyList (const GALGAS_unifiedTypeMapProxyList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_unifiedTypeMapProxyList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapProxyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @unifiedTypeMapProxyList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMapProxyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_unifiedTypeMapProxyList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMapProxyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_unifiedTypeMapProxyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_unifiedTypeMapProxyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMapProxyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeMapProxyList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapProxyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMapProxyList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapProxyList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @unifiedTypeMapProxyAndParameterList list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMapProxyAndParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMapProxyAndParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_unifiedTypeMapProxyAndParameterList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                  const class GALGAS_string & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMapProxyAndParameterList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeMapProxyAndParameterList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_unifiedTypeMapProxyAndParameterList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                        const class GALGAS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_unifiedTypeMapProxyAndParameterList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxyAndParameterList operator_concat (const GALGAS_unifiedTypeMapProxyAndParameterList & inOperand
                                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxyAndParameterList add_operation (const GALGAS_unifiedTypeMapProxyAndParameterList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyAndParameterList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyAndParameterList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMapProxyAndParameterList ;
 
} ; // End of GALGAS_unifiedTypeMapProxyAndParameterList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedTypeMapProxyAndParameterList : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeMapProxyAndParameterList (const GALGAS_unifiedTypeMapProxyAndParameterList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_unifiedTypeMapProxyAndParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndParameterList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @unifiedTypeMapProxyAndParameterList_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMapProxyAndParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mType ;
  public : GALGAS_string mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_unifiedTypeMapProxyAndParameterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMapProxyAndParameterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_unifiedTypeMapProxyAndParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_unifiedTypeMapProxyAndParameterList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                  const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMapProxyAndParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeMapProxyAndParameterList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                         const class GALGAS_string & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapProxyAndParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMapProxyAndParameterList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndParameterList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @constructorMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_constructorMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_constructorMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_constructorMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_constructorMap (const GALGAS_constructorMap & inSource) ;
  public : GALGAS_constructorMap & operator = (const GALGAS_constructorMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_constructorMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_constructorMap constructor_mapWithMapToOverride (const class GALGAS_constructorMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_functionSignature & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_functionSignature constinArgument1,
                                                     class GALGAS_bool constinArgument2,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_functionSignature constinArgument1,
                                                           class GALGAS_bool constinArgument2,
                                                           class GALGAS_unifiedTypeMap_2D_proxy constinArgument3
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMArgumentTypeListForKey (class GALGAS_functionSignature constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMReturnedTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_functionSignature & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_mArgumentTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReturnedTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorMap reader_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_constructorMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_constructorMap ;
 
} ; // End of GALGAS_constructorMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_constructorMap : public cGenericAbstractEnumerator {
  public : cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_functionSignature current_mArgumentTypeList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mReturnedType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_constructorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@constructorMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_constructorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;

//--- Constructor
  public : cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                       const GALGAS_functionSignature & in_mArgumentTypeList,
                                       const GALGAS_bool & in_mHasCompilerArgument,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @constructorMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_functionSignature & in_mArgumentTypeList,
                                             const GALGAS_bool & in_mHasCompilerArgument,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_constructorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_functionSignature & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_mArgumentTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReturnedType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @methodQualifier enum                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodQualifier : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_methodQualifier (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_isAbstract,
    kEnum_isBasic,
    kEnum_isBasicFinal,
    kEnum_isInherited,
    kEnum_isOverriding,
    kEnum_isOverridingAbstract
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_methodQualifier extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_methodQualifier constructor_isAbstract (LOCATION_ARGS) ;

  public : static GALGAS_methodQualifier constructor_isBasic (LOCATION_ARGS) ;

  public : static GALGAS_methodQualifier constructor_isBasicFinal (LOCATION_ARGS) ;

  public : static GALGAS_methodQualifier constructor_isInherited (LOCATION_ARGS) ;

  public : static GALGAS_methodQualifier constructor_isOverriding (LOCATION_ARGS) ;

  public : static GALGAS_methodQualifier constructor_isOverridingAbstract (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodQualifier & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIsAbstract (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIsBasic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIsBasicFinal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIsInherited (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIsOverriding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIsOverridingAbstract (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodQualifier class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodQualifier ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @methodKind enum                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_methodKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_definedAsMember,
    kEnum_definedAsCategory
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_methodKind extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_methodKind constructor_definedAsCategory (LOCATION_ARGS) ;

  public : static GALGAS_methodKind constructor_definedAsMember (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDefinedAsCategory (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDefinedAsMember (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @getterMap map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_getterMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_getterMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_getterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_getterMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_getterMap (const GALGAS_getterMap & inSource) ;
  public : GALGAS_getterMap & operator = (const GALGAS_getterMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getterMap extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_getterMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_getterMap constructor_mapWithMapToOverride (const class GALGAS_getterMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_methodKind & inOperand1,
                                                      const class GALGAS_functionSignature & inOperand2,
                                                      const class GALGAS_location & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                      const class GALGAS_methodQualifier & inOperand6,
                                                      const class GALGAS_string & inOperand7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_methodKind constinArgument1,
                                                     class GALGAS_functionSignature constinArgument2,
                                                     class GALGAS_location constinArgument3,
                                                     class GALGAS_bool constinArgument4,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument5,
                                                     class GALGAS_methodQualifier constinArgument6,
                                                     class GALGAS_string constinArgument7,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_methodKind constinArgument1,
                                                           class GALGAS_functionSignature constinArgument2,
                                                           class GALGAS_location constinArgument3,
                                                           class GALGAS_bool constinArgument4,
                                                           class GALGAS_unifiedTypeMap_2D_proxy constinArgument5,
                                                           class GALGAS_methodQualifier constinArgument6,
                                                           class GALGAS_string constinArgument7
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMArgumentTypeListForKey (class GALGAS_functionSignature constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDeclarationLocationForKey (class GALGAS_location constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMErrorMessageForKey (class GALGAS_string constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMKindForKey (class GALGAS_methodKind constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMQualifierForKey (class GALGAS_methodQualifier constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMReturnedTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_methodKind & outArgument1,
                                                   class GALGAS_functionSignature & outArgument2,
                                                   class GALGAS_location & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument5,
                                                   class GALGAS_methodQualifier & outArgument6,
                                                   class GALGAS_string & outArgument7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_mArgumentTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mDeclarationLocationForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mErrorMessageForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind reader_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier reader_mQualifierForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReturnedTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_getterMap reader_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_getterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_getterMap ;
 
} ; // End of GALGAS_getterMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_getterMap : public cGenericAbstractEnumerator {
  public : cEnumerator_getterMap (const GALGAS_getterMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_methodKind current_mKind (LOCATION_ARGS) const ;
  public : class GALGAS_functionSignature current_mArgumentTypeList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mReturnedType (LOCATION_ARGS) const ;
  public : class GALGAS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_getterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@getterMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_getterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;

//--- Constructor
  public : cMapElement_getterMap (const GALGAS_lstring & inKey,
                                  const GALGAS_methodKind & in_mKind,
                                  const GALGAS_functionSignature & in_mArgumentTypeList,
                                  const GALGAS_location & in_mDeclarationLocation,
                                  const GALGAS_bool & in_mHasCompilerArgument,
                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType,
                                  const GALGAS_methodQualifier & in_mQualifier,
                                  const GALGAS_string & in_mErrorMessage
                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @getterMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_getterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_functionSignature mAttribute_mArgumentTypeList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnedType ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_getterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_getterMap_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_methodKind & in_mKind,
                                        const GALGAS_functionSignature & in_mArgumentTypeList,
                                        const GALGAS_location & in_mDeclarationLocation,
                                        const GALGAS_bool & in_mHasCompilerArgument,
                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnedType,
                                        const GALGAS_methodQualifier & in_mQualifier,
                                        const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_getterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_methodKind & inOperand1,
                                                               const class GALGAS_functionSignature & inOperand2,
                                                               const class GALGAS_location & inOperand3,
                                                               const class GALGAS_bool & inOperand4,
                                                               const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                               const class GALGAS_methodQualifier & inOperand6,
                                                               const class GALGAS_string & inOperand7
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_mArgumentTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mDeclarationLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier reader_mQualifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReturnedType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @formalParameterSignature list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalParameterSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_formalParameterSignature (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_formalParameterSignature (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalSelector,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_string & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalParameterSignature extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formalParameterSignature constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_formalParameterSignature constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                             const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                             const class GALGAS_string & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_formalParameterSignature inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                      const class GALGAS_string & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterSignature operator_concat (const GALGAS_formalParameterSignature & inOperand
                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterSignature add_operation (const GALGAS_formalParameterSignature & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                         class GALGAS_formalArgumentPassingModeAST constinArgument2,
                                                         class GALGAS_string constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                    class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                         class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                                         class GALGAS_string & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST reader_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formalParameterSignature ;
 
} ; // End of GALGAS_formalParameterSignature class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_formalParameterSignature : public cGenericAbstractEnumerator {
  public : cEnumerator_formalParameterSignature (const GALGAS_formalParameterSignature & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formalParameterSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @formalParameterSignature_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalParameterSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalSelector ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mFormalArgumentType ;
  public : GALGAS_formalArgumentPassingModeAST mAttribute_mFormalArgumentPassingMode ;
  public : GALGAS_string mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_formalParameterSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                       const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                       const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalParameterSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formalParameterSignature_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                              const class GALGAS_string & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formalParameterSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST reader_mFormalArgumentPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mFormalArgumentType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formalParameterSignature_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @setterMap map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_setterMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_setterMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_setterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_setterMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_setterMap (const GALGAS_setterMap & inSource) ;
  public : GALGAS_setterMap & operator = (const GALGAS_setterMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_setterMap extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_setterMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_setterMap constructor_mapWithMapToOverride (const class GALGAS_setterMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_methodKind & inOperand1,
                                                      const class GALGAS_formalParameterSignature & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_methodQualifier & inOperand4,
                                                      const class GALGAS_string & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_methodKind constinArgument1,
                                                     class GALGAS_formalParameterSignature constinArgument2,
                                                     class GALGAS_bool constinArgument3,
                                                     class GALGAS_methodQualifier constinArgument4,
                                                     class GALGAS_string constinArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_methodKind constinArgument1,
                                                           class GALGAS_formalParameterSignature constinArgument2,
                                                           class GALGAS_bool constinArgument3,
                                                           class GALGAS_methodQualifier constinArgument4,
                                                           class GALGAS_string constinArgument5
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMErrorMessageForKey (class GALGAS_string constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMKindForKey (class GALGAS_methodKind constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMParameterListForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMQualifierForKey (class GALGAS_methodQualifier constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_methodKind & outArgument1,
                                                   class GALGAS_formalParameterSignature & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   class GALGAS_methodQualifier & outArgument4,
                                                   class GALGAS_string & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mErrorMessageForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind reader_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier reader_mQualifierForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_setterMap reader_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_setterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_setterMap ;
 
} ; // End of GALGAS_setterMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_setterMap : public cGenericAbstractEnumerator {
  public : cEnumerator_setterMap (const GALGAS_setterMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_methodKind current_mKind (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterSignature current_mParameterList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : class GALGAS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_setterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@setterMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_setterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;

//--- Constructor
  public : cMapElement_setterMap (const GALGAS_lstring & inKey,
                                  const GALGAS_methodKind & in_mKind,
                                  const GALGAS_formalParameterSignature & in_mParameterList,
                                  const GALGAS_bool & in_mHasCompilerArgument,
                                  const GALGAS_methodQualifier & in_mQualifier,
                                  const GALGAS_string & in_mErrorMessage
                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @setterMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_setterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_setterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_setterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_setterMap_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_methodKind & in_mKind,
                                        const GALGAS_formalParameterSignature & in_mParameterList,
                                        const GALGAS_bool & in_mHasCompilerArgument,
                                        const GALGAS_methodQualifier & in_mQualifier,
                                        const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_setterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_setterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_methodKind & inOperand1,
                                                               const class GALGAS_formalParameterSignature & inOperand2,
                                                               const class GALGAS_bool & inOperand3,
                                                               const class GALGAS_methodQualifier & inOperand4,
                                                               const class GALGAS_string & inOperand5
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_setterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier reader_mQualifier (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @instanceMethodMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_instanceMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_instanceMethodMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_instanceMethodMap_searchInheritedKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instanceMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_instanceMethodMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_instanceMethodMap (const GALGAS_instanceMethodMap & inSource) ;
  public : GALGAS_instanceMethodMap & operator = (const GALGAS_instanceMethodMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instanceMethodMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_instanceMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_instanceMethodMap constructor_mapWithMapToOverride (const class GALGAS_instanceMethodMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_methodKind & inOperand1,
                                                      const class GALGAS_formalParameterSignature & inOperand2,
                                                      const class GALGAS_location & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_methodQualifier & inOperand5,
                                                      const class GALGAS_string & inOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_methodKind constinArgument1,
                                                     class GALGAS_formalParameterSignature constinArgument2,
                                                     class GALGAS_location constinArgument3,
                                                     class GALGAS_bool constinArgument4,
                                                     class GALGAS_methodQualifier constinArgument5,
                                                     class GALGAS_string constinArgument6,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDeclarationLocationForKey (class GALGAS_location constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMErrorMessageForKey (class GALGAS_string constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMKindForKey (class GALGAS_methodKind constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMParameterListForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMQualifierForKey (class GALGAS_methodQualifier constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchInheritedKey (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_methodKind & outArgument1,
                                                            class GALGAS_formalParameterSignature & outArgument2,
                                                            class GALGAS_location & outArgument3,
                                                            class GALGAS_bool & outArgument4,
                                                            class GALGAS_methodQualifier & outArgument5,
                                                            class GALGAS_string & outArgument6,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_methodKind & outArgument1,
                                                   class GALGAS_formalParameterSignature & outArgument2,
                                                   class GALGAS_location & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_methodQualifier & outArgument5,
                                                   class GALGAS_string & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mDeclarationLocationForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mErrorMessageForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind reader_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier reader_mQualifierForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instanceMethodMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_instanceMethodMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_instanceMethodMap ;
 
} ; // End of GALGAS_instanceMethodMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_instanceMethodMap : public cGenericAbstractEnumerator {
  public : cEnumerator_instanceMethodMap (const GALGAS_instanceMethodMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_methodKind current_mKind (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterSignature current_mParameterList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : class GALGAS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_instanceMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@instanceMethodMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_instanceMethodMap : public cMapElement {
//--- Map attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;

//--- Constructor
  public : cMapElement_instanceMethodMap (const GALGAS_lstring & inKey,
                                          const GALGAS_methodKind & in_mKind,
                                          const GALGAS_formalParameterSignature & in_mParameterList,
                                          const GALGAS_location & in_mDeclarationLocation,
                                          const GALGAS_bool & in_mHasCompilerArgument,
                                          const GALGAS_methodQualifier & in_mQualifier,
                                          const GALGAS_string & in_mErrorMessage
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @instanceMethodMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instanceMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_methodQualifier mAttribute_mQualifier ;
  public : GALGAS_string mAttribute_mErrorMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_instanceMethodMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_instanceMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_instanceMethodMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_methodKind & in_mKind,
                                                const GALGAS_formalParameterSignature & in_mParameterList,
                                                const GALGAS_location & in_mDeclarationLocation,
                                                const GALGAS_bool & in_mHasCompilerArgument,
                                                const GALGAS_methodQualifier & in_mQualifier,
                                                const GALGAS_string & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instanceMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_instanceMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_methodKind & inOperand1,
                                                                       const class GALGAS_formalParameterSignature & inOperand2,
                                                                       const class GALGAS_location & inOperand3,
                                                                       const class GALGAS_bool & inOperand4,
                                                                       const class GALGAS_methodQualifier & inOperand5,
                                                                       const class GALGAS_string & inOperand6
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instanceMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mDeclarationLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodQualifier reader_mQualifier (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instanceMethodMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @classMethodMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_classMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_classMethodMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_classMethodMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_classMethodMap (const GALGAS_classMethodMap & inSource) ;
  public : GALGAS_classMethodMap & operator = (const GALGAS_classMethodMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classMethodMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_classMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_classMethodMap constructor_mapWithMapToOverride (const class GALGAS_classMethodMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterSignature & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_formalParameterSignature constinArgument1,
                                                     class GALGAS_bool constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_formalParameterSignature constinArgument1,
                                                           class GALGAS_bool constinArgument2
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHasCompilerArgumentForKey (class GALGAS_bool constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMParameterListForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_formalParameterSignature & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgumentForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classMethodMap reader_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_classMethodMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_classMethodMap ;
 
} ; // End of GALGAS_classMethodMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_classMethodMap : public cGenericAbstractEnumerator {
  public : cEnumerator_classMethodMap (const GALGAS_classMethodMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterSignature current_mParameterList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_classMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@classMethodMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_classMethodMap : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cMapElement_classMethodMap (const GALGAS_lstring & inKey,
                                       const GALGAS_formalParameterSignature & in_mParameterList,
                                       const GALGAS_bool & in_mHasCompilerArgument
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @classMethodMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_formalParameterSignature mAttribute_mParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_classMethodMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_classMethodMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_classMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_classMethodMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_formalParameterSignature & in_mParameterList,
                                             const GALGAS_bool & in_mHasCompilerArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_classMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_formalParameterSignature & inOperand1,
                                                                    const class GALGAS_bool & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mParameterList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classMethodMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @enumerationDescriptorList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationDescriptorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumerationDescriptorList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumerationDescriptorList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                  const class GALGAS_string & in_mEnumerationName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationDescriptorList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumerationDescriptorList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_enumerationDescriptorList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                              const class GALGAS_string & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_enumerationDescriptorList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumerationDescriptorList operator_concat (const GALGAS_enumerationDescriptorList & inOperand
                                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumerationDescriptorList add_operation (const GALGAS_enumerationDescriptorList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mEnumeratedTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumerationNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationDescriptorList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationDescriptorList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumerationDescriptorList ;
 
} ; // End of GALGAS_enumerationDescriptorList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumerationDescriptorList : public cGenericAbstractEnumerator {
  public : cEnumerator_enumerationDescriptorList (const GALGAS_enumerationDescriptorList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mEnumeratedType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mEnumerationName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumerationDescriptorList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @enumerationDescriptorList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mEnumeratedType ;
  public : GALGAS_string mAttribute_mEnumerationName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationDescriptorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumerationDescriptorList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumerationDescriptorList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                        const GALGAS_string & in_mEnumerationName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationDescriptorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumerationDescriptorList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationDescriptorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mEnumeratedType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumerationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDescriptorList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typedPropertyList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typedPropertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_typedPropertyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_typedPropertyList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                  const class GALGAS_lstring & in_mAttributeName,
                                                  const class GALGAS_bool & in_mHasSetter,
                                                  const class GALGAS_bool & in_mHasGetter
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typedPropertyList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typedPropertyList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_typedPropertyList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_bool & inOperand2,
                                                                      const class GALGAS_bool & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_typedPropertyList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_bool & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList operator_concat (const GALGAS_typedPropertyList & inOperand
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList add_operation (const GALGAS_typedPropertyList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_bool constinArgument2,
                                                         class GALGAS_bool constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_bool & outArgument2,
                                                    class GALGAS_bool & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_bool & outArgument2,
                                                         class GALGAS_bool & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasGetterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasSetterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_typedPropertyList ;
 
} ; // End of GALGAS_typedPropertyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_typedPropertyList : public cGenericAbstractEnumerator {
  public : cEnumerator_typedPropertyList (const GALGAS_typedPropertyList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mAttributeTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasSetter (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasGetter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_typedPropertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedPropertyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @typedPropertyList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typedPropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeTypeProxy ;
  public : GALGAS_lstring mAttribute_mAttributeName ;
  public : GALGAS_bool mAttribute_mHasSetter ;
  public : GALGAS_bool mAttribute_mHasGetter ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typedPropertyList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_typedPropertyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_typedPropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_typedPropertyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                const GALGAS_lstring & in_mAttributeName,
                                                const GALGAS_bool & in_mHasSetter,
                                                const GALGAS_bool & in_mHasGetter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typedPropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typedPropertyList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_bool & inOperand2,
                                                                       const class GALGAS_bool & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typedPropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasGetter (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasSetter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typedPropertyList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedPropertyList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @predefinedTypeKindEnum enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_predefinedTypeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_predefinedTypeKindEnum (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_predefined_5F_uint,
    kEnum_predefined_5F_uint_36__34_,
    kEnum_predefined_5F_sint,
    kEnum_predefined_5F_sint_36__34_,
    kEnum_predefined_5F_char,
    kEnum_predefined_5F_double,
    kEnum_predefined_5F_string,
    kEnum_predefined_5F_stringset,
    kEnum_predefined_5F_bool,
    kEnum_predefined_5F_binaryset,
    kEnum_predefined_5F_function,
    kEnum_predefined_5F_location,
    kEnum_predefined_5F_type,
    kEnum_predefined_5F_object,
    kEnum_predefined_5F_data,
    kEnum_predefined_5F_filewrapper,
    kEnum_predefined_5F_application,
    kEnum_predefined_5F_bitstring
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_predefinedTypeKindEnum extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_application (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_binaryset (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_bitstring (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_bool (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_char (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_data (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_double (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_filewrapper (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_function (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_location (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_object (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_sint (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_sint_36__34_ (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_string (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_stringset (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_type (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_uint (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_predefinedTypeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_application (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_binaryset (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_bitstring (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_bool (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_char (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_data (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_double (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_filewrapper (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_function (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_location (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_object (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_sint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_sint_36__34_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_string (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_stringset (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_type (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_uint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefined_5F_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypeKindEnum class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeKindEnum ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @typeKindEnum enum                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_typeKindEnum (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_classType,
    kEnum_enumType,
    kEnum_listType,
    kEnum_sortedListType,
    kEnum_mapType,
    kEnum_uniqueMapType,
    kEnum_mapProxyType,
    kEnum_listMapType,
    kEnum_structType,
    kEnum_graphType,
    kEnum_externType,
    kEnum_arrayType,
    kEnum_predefinedType
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeKindEnum extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeKindEnum constructor_arrayType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_classType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_enumType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_externType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_graphType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_listMapType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_listType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_mapProxyType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_mapType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_predefinedType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_sortedListType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_structType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_uniqueMapType (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isArrayType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isClassType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isEnumType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isExternType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isGraphType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isListMapType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isListType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMapProxyType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMapType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefinedType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSortedListType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isStructType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isUniqueMapType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKindEnum class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @attributeMap map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_attributeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_attributeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_attributeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_attributeMap (const GALGAS_attributeMap & inSource) ;
  public : GALGAS_attributeMap & operator = (const GALGAS_attributeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeMap extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_attributeMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_attributeMap constructor_mapWithMapToOverride (const class GALGAS_attributeMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMAttributeTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_attributeMap reader_overriddenMap (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_attributeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_attributeMap ;
 
} ; // End of GALGAS_attributeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_attributeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_attributeMap (const GALGAS_attributeMap & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mAttributeType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_attributeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@attributeMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_attributeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeType ;

//--- Constructor
  public : cMapElement_attributeMap (const GALGAS_lstring & inKey,
                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType
                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @attributeMap_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_attributeMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_attributeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_attributeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_attributeMap_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_attributeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_attributeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @headerKind enum                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_headerKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_headerKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noHeader,
    kEnum_oneHeader,
    kEnum_twoHeaders
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_headerKind extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_headerKind constructor_noHeader (LOCATION_ARGS) ;

  public : static GALGAS_headerKind constructor_oneHeader (LOCATION_ARGS) ;

  public : static GALGAS_headerKind constructor_twoHeaders (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_headerKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNoHeader (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isOneHeader (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isTwoHeaders (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_headerKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @constantIndexMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_constantIndexMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_constantIndexMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constantIndexMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_constantIndexMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_constantIndexMap (const GALGAS_constantIndexMap & inSource) ;
  public : GALGAS_constantIndexMap & operator = (const GALGAS_constantIndexMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constantIndexMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_constantIndexMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_constantIndexMap constructor_mapWithMapToOverride (const class GALGAS_constantIndexMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_unifiedTypeMapProxyList & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     class GALGAS_unifiedTypeMapProxyList constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMAssociatedTypeListForKey (class GALGAS_unifiedTypeMapProxyList constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_unifiedTypeMapProxyList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList reader_mAssociatedTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantIndexMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_constantIndexMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_constantIndexMap ;
 
} ; // End of GALGAS_constantIndexMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_constantIndexMap : public cGenericAbstractEnumerator {
  public : cEnumerator_constantIndexMap (const GALGAS_constantIndexMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMapProxyList current_mAssociatedTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_constantIndexMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@constantIndexMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_constantIndexMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mAssociatedTypeList ;

//--- Constructor
  public : cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                         const GALGAS_uint & in_mIndex,
                                         const GALGAS_unifiedTypeMapProxyList & in_mAssociatedTypeList
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @constantIndexMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constantIndexMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mAssociatedTypeList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constantIndexMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_constantIndexMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_constantIndexMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constantIndexMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_uint & in_mIndex,
                                               const GALGAS_unifiedTypeMapProxyList & in_mAssociatedTypeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constantIndexMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_constantIndexMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_uint & inOperand1,
                                                                      const class GALGAS_unifiedTypeMapProxyList & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constantIndexMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList reader_mAssociatedTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantIndexMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeMap unique map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedTypeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public : GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_bool constinArgument1,
                                                     class GALGAS_bool constinArgument2,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                                     class GALGAS_typeKindEnum constinArgument4,
                                                     class GALGAS_bool constinArgument5,
                                                     class GALGAS_typedPropertyList constinArgument6,
                                                     class GALGAS_attributeMap constinArgument7,
                                                     class GALGAS_typedPropertyList constinArgument8,
                                                     class GALGAS_constructorMap constinArgument9,
                                                     class GALGAS_getterMap constinArgument10,
                                                     class GALGAS_setterMap constinArgument11,
                                                     class GALGAS_instanceMethodMap constinArgument12,
                                                     class GALGAS_classMethodMap constinArgument13,
                                                     class GALGAS_enumerationDescriptorList constinArgument14,
                                                     class GALGAS_stringlist constinArgument15,
                                                     class GALGAS_uint constinArgument16,
                                                     class GALGAS_functionSignature constinArgument17,
                                                     class GALGAS_constantIndexMap constinArgument18,
                                                     class GALGAS_enumConstantList constinArgument19,
                                                     class GALGAS_mapSearchMethodListAST constinArgument20,
                                                     class GALGAS_mapSearchMethodListAST constinArgument21,
                                                     class GALGAS_bool constinArgument22,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument23,
                                                     class GALGAS_string constinArgument24,
                                                     class GALGAS_string constinArgument25,
                                                     class GALGAS_headerKind constinArgument26,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMAddAssignOperatorArgumentsForKey (class GALGAS_functionSignature constinArgument0,
                                                                                class GALGAS_string constinArgument1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMAllTypedAttributeListForKey (class GALGAS_typedPropertyList constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMAttributeMapForKey (class GALGAS_attributeMap constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMClassMethodMapForKey (class GALGAS_classMethodMap constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMConstructorMapForKey (class GALGAS_constructorMap constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMCurrentTypedAttributeListForKey (class GALGAS_typedPropertyList constinArgument0,
                                                                               class GALGAS_string constinArgument1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDefaultConstructorNameForKey (class GALGAS_string constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMEnumConstantListForKey (class GALGAS_enumConstantList constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMEnumConstantMapForKey (class GALGAS_constantIndexMap constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMEnumerationDescriptorForKey (class GALGAS_enumerationDescriptorList constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMEnumeratorVariantsForKey (class GALGAS_stringlist constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMGenerateHeaderInSeparateFileForKey (class GALGAS_bool constinArgument0,
                                                                                  class GALGAS_string constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHandledOperatorFlagsForKey (class GALGAS_uint constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHeaderFileNameForKey (class GALGAS_string constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHeaderKindForKey (class GALGAS_headerKind constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMInstanceMethodMapForKey (class GALGAS_instanceMethodMap constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsConcreteForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsPredefinedForKey (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMMapProxySearchConstructorListForKey (class GALGAS_mapSearchMethodListAST constinArgument0,
                                                                                   class GALGAS_string constinArgument1,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMMapSearchMethodListForKey (class GALGAS_mapSearchMethodListAST constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMModifierMapForKey (class GALGAS_setterMap constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMReaderMapForKey (class GALGAS_getterMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMSuperTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMSupportCollectionValueForKey (class GALGAS_bool constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTypeForEnumeratedElementForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                              class GALGAS_string constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTypeKindEnumForKey (class GALGAS_typeKindEnum constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                   class GALGAS_typeKindEnum & outArgument4,
                                                   class GALGAS_bool & outArgument5,
                                                   class GALGAS_typedPropertyList & outArgument6,
                                                   class GALGAS_attributeMap & outArgument7,
                                                   class GALGAS_typedPropertyList & outArgument8,
                                                   class GALGAS_constructorMap & outArgument9,
                                                   class GALGAS_getterMap & outArgument10,
                                                   class GALGAS_setterMap & outArgument11,
                                                   class GALGAS_instanceMethodMap & outArgument12,
                                                   class GALGAS_classMethodMap & outArgument13,
                                                   class GALGAS_enumerationDescriptorList & outArgument14,
                                                   class GALGAS_stringlist & outArgument15,
                                                   class GALGAS_uint & outArgument16,
                                                   class GALGAS_functionSignature & outArgument17,
                                                   class GALGAS_constantIndexMap & outArgument18,
                                                   class GALGAS_enumConstantList & outArgument19,
                                                   class GALGAS_mapSearchMethodListAST & outArgument20,
                                                   class GALGAS_mapSearchMethodListAST & outArgument21,
                                                   class GALGAS_bool & outArgument22,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument23,
                                                   class GALGAS_string & outArgument24,
                                                   class GALGAS_string & outArgument25,
                                                   class GALGAS_headerKind & outArgument26,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_mAddAssignOperatorArgumentsForKey (const class GALGAS_string & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mAllTypedAttributeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_attributeMap reader_mAttributeMapForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classMethodMap reader_mClassMethodMapForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorMap reader_mConstructorMapForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mCurrentTypedAttributeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDefaultConstructorNameForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantList reader_mEnumConstantListForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantIndexMap reader_mEnumConstantMapForKey (const class GALGAS_string & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationDescriptorList reader_mEnumerationDescriptorForKey (const class GALGAS_string & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mEnumeratorVariantsForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mGenerateHeaderInSeparateFileForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mHandledOperatorFlagsForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mHeaderFileNameForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_headerKind reader_mHeaderKindForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instanceMethodMap reader_mInstanceMethodMapForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsConcreteForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsPredefinedForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mMapProxySearchConstructorListForKey (const class GALGAS_string & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mMapSearchMethodListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_setterMap reader_mModifierMapForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_getterMap reader_mReaderMapForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mSuperTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mSupportCollectionValueForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTypeForEnumeratedElementForKey (const class GALGAS_string & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKindEnum reader_mTypeKindEnumForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPredefined (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsConcrete (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mSuperType (LOCATION_ARGS) const ;
  public : class GALGAS_typeKindEnum current_mTypeKindEnum (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mSupportCollectionValue (LOCATION_ARGS) const ;
  public : class GALGAS_typedPropertyList current_mAllTypedAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_attributeMap current_mAttributeMap (LOCATION_ARGS) const ;
  public : class GALGAS_typedPropertyList current_mCurrentTypedAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_constructorMap current_mConstructorMap (LOCATION_ARGS) const ;
  public : class GALGAS_getterMap current_mReaderMap (LOCATION_ARGS) const ;
  public : class GALGAS_setterMap current_mModifierMap (LOCATION_ARGS) const ;
  public : class GALGAS_instanceMethodMap current_mInstanceMethodMap (LOCATION_ARGS) const ;
  public : class GALGAS_classMethodMap current_mClassMethodMap (LOCATION_ARGS) const ;
  public : class GALGAS_enumerationDescriptorList current_mEnumerationDescriptor (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mEnumeratorVariants (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mHandledOperatorFlags (LOCATION_ARGS) const ;
  public : class GALGAS_functionSignature current_mAddAssignOperatorArguments (LOCATION_ARGS) const ;
  public : class GALGAS_constantIndexMap current_mEnumConstantMap (LOCATION_ARGS) const ;
  public : class GALGAS_enumConstantList current_mEnumConstantList (LOCATION_ARGS) const ;
  public : class GALGAS_mapSearchMethodListAST current_mMapSearchMethodList (LOCATION_ARGS) const ;
  public : class GALGAS_mapSearchMethodListAST current_mMapProxySearchConstructorList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mGenerateHeaderInSeparateFile (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mTypeForEnumeratedElement (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mDefaultConstructorName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mHeaderFileName (LOCATION_ARGS) const ;
  public : class GALGAS_headerKind current_mHeaderKind (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@unifiedTypeMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_bool mAttribute_mIsConcrete ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSuperType ;
  public : GALGAS_typeKindEnum mAttribute_mTypeKindEnum ;
  public : GALGAS_bool mAttribute_mSupportCollectionValue ;
  public : GALGAS_typedPropertyList mAttribute_mAllTypedAttributeList ;
  public : GALGAS_attributeMap mAttribute_mAttributeMap ;
  public : GALGAS_typedPropertyList mAttribute_mCurrentTypedAttributeList ;
  public : GALGAS_constructorMap mAttribute_mConstructorMap ;
  public : GALGAS_getterMap mAttribute_mReaderMap ;
  public : GALGAS_setterMap mAttribute_mModifierMap ;
  public : GALGAS_instanceMethodMap mAttribute_mInstanceMethodMap ;
  public : GALGAS_classMethodMap mAttribute_mClassMethodMap ;
  public : GALGAS_enumerationDescriptorList mAttribute_mEnumerationDescriptor ;
  public : GALGAS_stringlist mAttribute_mEnumeratorVariants ;
  public : GALGAS_uint mAttribute_mHandledOperatorFlags ;
  public : GALGAS_functionSignature mAttribute_mAddAssignOperatorArguments ;
  public : GALGAS_constantIndexMap mAttribute_mEnumConstantMap ;
  public : GALGAS_enumConstantList mAttribute_mEnumConstantList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mMapSearchMethodList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mMapProxySearchConstructorList ;
  public : GALGAS_bool mAttribute_mGenerateHeaderInSeparateFile ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTypeForEnumeratedElement ;
  public : GALGAS_string mAttribute_mDefaultConstructorName ;
  public : GALGAS_string mAttribute_mHeaderFileName ;
  public : GALGAS_headerKind mAttribute_mHeaderKind ;

//--- Constructor
  public : cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
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
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumConstantList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mConstantName ;
  public : GALGAS__32_lstringlist mAttribute_mAssociatedValueDefinitionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumConstantList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumConstantList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumConstantList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumConstantList_2D_element (const GALGAS_lstring & in_mConstantName,
                                               const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumConstantList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS__32_lstringlist & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist reader_mAssociatedValueDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mConstantName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @grammarLabelMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_grammarLabelMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_grammarLabelMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarLabelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_grammarLabelMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_grammarLabelMap (const GALGAS_grammarLabelMap & inSource) ;
  public : GALGAS_grammarLabelMap & operator = (const GALGAS_grammarLabelMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarLabelMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarLabelMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_grammarLabelMap constructor_mapWithMapToOverride (const class GALGAS_grammarLabelMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterSignature & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_formalParameterSignature constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMLabelSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_formalParameterSignature & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mLabelSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_grammarLabelMap reader_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_grammarLabelMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_grammarLabelMap ;
 
} ; // End of GALGAS_grammarLabelMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_grammarLabelMap : public cGenericAbstractEnumerator {
  public : cEnumerator_grammarLabelMap (const GALGAS_grammarLabelMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterSignature current_mLabelSignature (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_grammarLabelMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@grammarLabelMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_grammarLabelMap : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterSignature mAttribute_mLabelSignature ;

//--- Constructor
  public : cMapElement_grammarLabelMap (const GALGAS_lstring & inKey,
                                        const GALGAS_formalParameterSignature & in_mLabelSignature
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @grammarLabelMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarLabelMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_formalParameterSignature mAttribute_mLabelSignature ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarLabelMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_grammarLabelMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_grammarLabelMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_grammarLabelMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_formalParameterSignature & in_mLabelSignature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarLabelMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarLabelMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_formalParameterSignature & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarLabelMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mLabelSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarLabelMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @grammarMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_grammarMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_grammarMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_grammarMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_grammarMap (const GALGAS_grammarMap & inSource) ;
  public : GALGAS_grammarMap & operator = (const GALGAS_grammarMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_grammarMap constructor_mapWithMapToOverride (const class GALGAS_grammarMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_grammarLabelMap & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertGrammar (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_grammarLabelMap constinArgument1,
                                                         class GALGAS_bool constinArgument2,
                                                         class GALGAS_bool constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHasIndexingForKey (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHasTranslateFeatureForKey (class GALGAS_bool constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMLabelMapForKey (class GALGAS_grammarLabelMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_grammarLabelMap & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasIndexingForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasTranslateFeatureForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_grammarLabelMap reader_mLabelMapForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_grammarMap reader_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_grammarMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_grammarMap ;
 
} ; // End of GALGAS_grammarMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_grammarMap : public cGenericAbstractEnumerator {
  public : cEnumerator_grammarMap (const GALGAS_grammarMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_grammarLabelMap current_mLabelMap (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasIndexing (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_grammarMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@grammarMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_grammarMap : public cMapElement {
//--- Map attributes
  public : GALGAS_grammarLabelMap mAttribute_mLabelMap ;
  public : GALGAS_bool mAttribute_mHasIndexing ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;

//--- Constructor
  public : cMapElement_grammarMap (const GALGAS_lstring & inKey,
                                   const GALGAS_grammarLabelMap & in_mLabelMap,
                                   const GALGAS_bool & in_mHasIndexing,
                                   const GALGAS_bool & in_mHasTranslateFeature
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @grammarMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_grammarLabelMap mAttribute_mLabelMap ;
  public : GALGAS_bool mAttribute_mHasIndexing ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_grammarMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_grammarMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_grammarMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_grammarLabelMap & in_mLabelMap,
                                         const GALGAS_bool & in_mHasIndexing,
                                         const GALGAS_bool & in_mHasTranslateFeature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_grammarLabelMap & inOperand1,
                                                                const class GALGAS_bool & inOperand2,
                                                                const class GALGAS_bool & inOperand3
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasIndexing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_grammarLabelMap reader_mLabelMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @routineMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_routineMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_routineMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_routineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_routineMap (const GALGAS_routineMap & inSource) ;
  public : GALGAS_routineMap & operator = (const GALGAS_routineMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_routineMap constructor_mapWithMapToOverride (const class GALGAS_routineMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterSignature & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_formalParameterSignature constinArgument1,
                                                     class GALGAS_bool constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsInternalForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRoutineSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_formalParameterSignature & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternalForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mRoutineSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineMap reader_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_routineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineMap ;
 
} ; // End of GALGAS_routineMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_routineMap : public cGenericAbstractEnumerator {
  public : cEnumerator_routineMap (const GALGAS_routineMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterSignature current_mRoutineSignature (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsInternal (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@routineMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_routineMap : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterSignature mAttribute_mRoutineSignature ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cMapElement_routineMap (const GALGAS_lstring & inKey,
                                   const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                   const GALGAS_bool & in_mIsInternal
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @routineMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_formalParameterSignature mAttribute_mRoutineSignature ;
  public : GALGAS_bool mAttribute_mIsInternal ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_routineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                         const GALGAS_bool & in_mIsInternal) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_formalParameterSignature & inOperand1,
                                                                const class GALGAS_bool & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mRoutineSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @functionMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_functionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_functionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_functionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_functionMap (const GALGAS_functionMap & inSource) ;
  public : GALGAS_functionMap & operator = (const GALGAS_functionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_functionMap constructor_mapWithMapToOverride (const class GALGAS_functionMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_functionSignature & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_functionSignature constinArgument1,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                     class GALGAS_bool constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFunctionSignatureForKey (class GALGAS_functionSignature constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsInternalForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMResultTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_functionSignature & outArgument1,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_mFunctionSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternalForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionMap reader_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_functionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_functionMap ;
 
} ; // End of GALGAS_functionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_functionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_functionSignature current_mFunctionSignature (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mResultType (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsInternal (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@functionMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_functionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_functionSignature mAttribute_mFunctionSignature ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cMapElement_functionMap (const GALGAS_lstring & inKey,
                                    const GALGAS_functionSignature & in_mFunctionSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                    const GALGAS_bool & in_mIsInternal
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @functionMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_functionSignature mAttribute_mFunctionSignature ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_bool mAttribute_mIsInternal ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_functionSignature & in_mFunctionSignature,
                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                          const GALGAS_bool & in_mIsInternal) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_functionSignature & inOperand1,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                 const class GALGAS_bool & inOperand3
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_mFunctionSignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @wrapperFileMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperFileMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_wrapperFileMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperFileMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_wrapperFileMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_wrapperFileMap (const GALGAS_wrapperFileMap & inSource) ;
  public : GALGAS_wrapperFileMap & operator = (const GALGAS_wrapperFileMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperFileMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_wrapperFileMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_wrapperFileMap constructor_mapWithMapToOverride (const class GALGAS_wrapperFileMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      const class GALGAS_uint & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_string constinArgument1,
                                                     class GALGAS_bool constinArgument2,
                                                     class GALGAS_uint constinArgument3,
                                                     class GALGAS_uint constinArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMAbsoluteFilePathForKey (class GALGAS_string constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsTextFileForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMWrapperDirectoryIndexForKey (class GALGAS_uint constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMWrapperFileIndexForKey (class GALGAS_uint constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   class GALGAS_uint & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAbsoluteFilePathForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTextFileForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mWrapperDirectoryIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mWrapperFileIndexForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap reader_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_wrapperFileMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_wrapperFileMap ;
 
} ; // End of GALGAS_wrapperFileMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_wrapperFileMap : public cGenericAbstractEnumerator {
  public : cEnumerator_wrapperFileMap (const GALGAS_wrapperFileMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mAbsoluteFilePath (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsTextFile (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mWrapperFileIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_wrapperFileMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@wrapperFileMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperFileMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mAbsoluteFilePath ;
  public : GALGAS_bool mAttribute_mIsTextFile ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;
  public : GALGAS_uint mAttribute_mWrapperFileIndex ;

//--- Constructor
  public : cMapElement_wrapperFileMap (const GALGAS_lstring & inKey,
                                       const GALGAS_string & in_mAbsoluteFilePath,
                                       const GALGAS_bool & in_mIsTextFile,
                                       const GALGAS_uint & in_mWrapperDirectoryIndex,
                                       const GALGAS_uint & in_mWrapperFileIndex
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @wrapperFileMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperFileMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_string mAttribute_mAbsoluteFilePath ;
  public : GALGAS_bool mAttribute_mIsTextFile ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;
  public : GALGAS_uint mAttribute_mWrapperFileIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_wrapperFileMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_wrapperFileMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_wrapperFileMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_wrapperFileMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_string & in_mAbsoluteFilePath,
                                             const GALGAS_bool & in_mIsTextFile,
                                             const GALGAS_uint & in_mWrapperDirectoryIndex,
                                             const GALGAS_uint & in_mWrapperFileIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperFileMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_wrapperFileMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    const class GALGAS_uint & inOperand3,
                                                                    const class GALGAS_uint & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_wrapperFileMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAbsoluteFilePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTextFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mWrapperDirectoryIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mWrapperFileIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_wrapperFileMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @wrapperDirectoryMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperDirectoryMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperDirectoryMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_wrapperDirectoryMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inSource) ;
  public : GALGAS_wrapperDirectoryMap & operator = (const GALGAS_wrapperDirectoryMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperDirectoryMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_wrapperDirectoryMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_wrapperDirectoryMap constructor_mapWithMapToOverride (const class GALGAS_wrapperDirectoryMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_wrapperFileMap & inOperand1,
                                                      const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_wrapperFileMap constinArgument1,
                                                     class GALGAS_wrapperDirectoryMap constinArgument2,
                                                     class GALGAS_uint constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDirectoryMapForKey (class GALGAS_wrapperDirectoryMap constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRegularFileMapForKey (class GALGAS_wrapperFileMap constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMWrapperDirectoryIndexForKey (class GALGAS_uint constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_wrapperFileMap & outArgument1,
                                                   class GALGAS_wrapperDirectoryMap & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap reader_mDirectoryMapForKey (const class GALGAS_string & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap reader_mRegularFileMapForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mWrapperDirectoryIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_wrapperDirectoryMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_wrapperDirectoryMap ;
 
} ; // End of GALGAS_wrapperDirectoryMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_wrapperDirectoryMap : public cGenericAbstractEnumerator {
  public : cEnumerator_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_wrapperFileMap current_mRegularFileMap (LOCATION_ARGS) const ;
  public : class GALGAS_wrapperDirectoryMap current_mDirectoryMap (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_wrapperDirectoryMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@wrapperDirectoryMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperDirectoryMap : public cMapElement {
//--- Map attributes
  public : GALGAS_wrapperFileMap mAttribute_mRegularFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mDirectoryMap ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;

//--- Constructor
  public : cMapElement_wrapperDirectoryMap (const GALGAS_lstring & inKey,
                                            const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                            const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                            const GALGAS_uint & in_mWrapperDirectoryIndex
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @wrapperDirectoryMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperDirectoryMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_wrapperFileMap mAttribute_mRegularFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mDirectoryMap ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_wrapperDirectoryMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_wrapperDirectoryMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                                  const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                                  const GALGAS_uint & in_mWrapperDirectoryIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperDirectoryMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_wrapperDirectoryMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_wrapperFileMap & inOperand1,
                                                                         const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                                         const class GALGAS_uint & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_wrapperDirectoryMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap reader_mDirectoryMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap reader_mRegularFileMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mWrapperDirectoryIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_wrapperDirectoryMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @filewrapperTemplateMap map                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperTemplateMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inSource) ;
  public : GALGAS_filewrapperTemplateMap & operator = (const GALGAS_filewrapperTemplateMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperTemplateMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_filewrapperTemplateMap constructor_mapWithMapToOverride (const class GALGAS_filewrapperTemplateMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_functionSignature & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_functionSignature constinArgument1,
                                                     class GALGAS_lstring constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFilewrapperTemplatePathForKey (class GALGAS_lstring constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTemplateSignatureForKey (class GALGAS_functionSignature constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_functionSignature & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperTemplatePathForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_mTemplateSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_filewrapperTemplateMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_filewrapperTemplateMap ;
 
} ; // End of GALGAS_filewrapperTemplateMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_filewrapperTemplateMap : public cGenericAbstractEnumerator {
  public : cEnumerator_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_functionSignature current_mTemplateSignature (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_filewrapperTemplateMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@filewrapperTemplateMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperTemplateMap : public cMapElement {
//--- Map attributes
  public : GALGAS_functionSignature mAttribute_mTemplateSignature ;
  public : GALGAS_lstring mAttribute_mFilewrapperTemplatePath ;

//--- Constructor
  public : cMapElement_filewrapperTemplateMap (const GALGAS_lstring & inKey,
                                               const GALGAS_functionSignature & in_mTemplateSignature,
                                               const GALGAS_lstring & in_mFilewrapperTemplatePath
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @filewrapperTemplateMap_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_functionSignature mAttribute_mTemplateSignature ;
  public : GALGAS_lstring mAttribute_mFilewrapperTemplatePath ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperTemplateMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_filewrapperTemplateMap_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_functionSignature & in_mTemplateSignature,
                                                     const GALGAS_lstring & in_mFilewrapperTemplatePath) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperTemplateMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_functionSignature & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperTemplatePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature reader_mTemplateSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @filewrapperMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_filewrapperMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_filewrapperMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_filewrapperMap (const GALGAS_filewrapperMap & inSource) ;
  public : GALGAS_filewrapperMap & operator = (const GALGAS_filewrapperMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_filewrapperMap constructor_mapWithMapToOverride (const class GALGAS_filewrapperMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_wrapperFileMap & inOperand3,
                                                      const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                      const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                      const class GALGAS_bool & inOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lstring constinArgument1,
                                                     class GALGAS_lstringlist constinArgument2,
                                                     class GALGAS_wrapperFileMap constinArgument3,
                                                     class GALGAS_wrapperDirectoryMap constinArgument4,
                                                     class GALGAS_filewrapperTemplateMap constinArgument5,
                                                     class GALGAS_bool constinArgument6,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFilewrapperDirectoryMapForKey (class GALGAS_wrapperDirectoryMap constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFilewrapperExtensionListForKey (class GALGAS_lstringlist constinArgument0,
                                                                              class GALGAS_string constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFilewrapperFileMapForKey (class GALGAS_wrapperFileMap constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFilewrapperPathForKey (class GALGAS_lstring constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFilewrapperTemplateMapForKey (class GALGAS_filewrapperTemplateMap constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsInternalForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstringlist & outArgument2,
                                                   class GALGAS_wrapperFileMap & outArgument3,
                                                   class GALGAS_wrapperDirectoryMap & outArgument4,
                                                   class GALGAS_filewrapperTemplateMap & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap reader_mFilewrapperDirectoryMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mFilewrapperExtensionListForKey (const class GALGAS_string & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap reader_mFilewrapperFileMapForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperPathForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap reader_mFilewrapperTemplateMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternalForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperMap reader_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_filewrapperMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_filewrapperMap ;
 
} ; // End of GALGAS_filewrapperMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_filewrapperMap : public cGenericAbstractEnumerator {
  public : cEnumerator_filewrapperMap (const GALGAS_filewrapperMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFilewrapperPath (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFilewrapperExtensionList (LOCATION_ARGS) const ;
  public : class GALGAS_wrapperFileMap current_mFilewrapperFileMap (LOCATION_ARGS) const ;
  public : class GALGAS_wrapperDirectoryMap current_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;
  public : class GALGAS_filewrapperTemplateMap current_mFilewrapperTemplateMap (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsInternal (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_filewrapperMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@filewrapperMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mFilewrapperPath ;
  public : GALGAS_lstringlist mAttribute_mFilewrapperExtensionList ;
  public : GALGAS_wrapperFileMap mAttribute_mFilewrapperFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mFilewrapperDirectoryMap ;
  public : GALGAS_filewrapperTemplateMap mAttribute_mFilewrapperTemplateMap ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cMapElement_filewrapperMap (const GALGAS_lstring & inKey,
                                       const GALGAS_lstring & in_mFilewrapperPath,
                                       const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                       const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                       const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                       const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                       const GALGAS_bool & in_mIsInternal
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @filewrapperMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mFilewrapperPath ;
  public : GALGAS_lstringlist mAttribute_mFilewrapperExtensionList ;
  public : GALGAS_wrapperFileMap mAttribute_mFilewrapperFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mFilewrapperDirectoryMap ;
  public : GALGAS_filewrapperTemplateMap mAttribute_mFilewrapperTemplateMap ;
  public : GALGAS_bool mAttribute_mIsInternal ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_filewrapperMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_lstring & in_mFilewrapperPath,
                                             const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                             const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                             const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                             const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                             const GALGAS_bool & in_mIsInternal) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstringlist & inOperand2,
                                                                    const class GALGAS_wrapperFileMap & inOperand3,
                                                                    const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                                    const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                                    const class GALGAS_bool & inOperand6
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap reader_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mFilewrapperExtensionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap reader_mFilewrapperFileMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap reader_mFilewrapperTemplateMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @optionComponentMapForSemanticAnalysis map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionComponentMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionComponentMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_optionComponentMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) ;
  public : GALGAS_optionComponentMapForSemanticAnalysis & operator = (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionComponentMapForSemanticAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_optionComponentMapForSemanticAnalysis constructor_mapWithMapToOverride (const class GALGAS_optionComponentMapForSemanticAnalysis & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_commandLineOptionMap & inOperand2,
                                                      const class GALGAS_commandLineOptionMap & inOperand3,
                                                      const class GALGAS_commandLineOptionMap & inOperand4,
                                                      const class GALGAS_commandLineOptionMap & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_bool constinArgument1,
                                                     class GALGAS_commandLineOptionMap constinArgument2,
                                                     class GALGAS_commandLineOptionMap constinArgument3,
                                                     class GALGAS_commandLineOptionMap constinArgument4,
                                                     class GALGAS_commandLineOptionMap constinArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMBoolOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsPredefinedForKey (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMStringListOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMStringOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMUIntOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_commandLineOptionMap & outArgument2,
                                                   class GALGAS_commandLineOptionMap & outArgument3,
                                                   class GALGAS_commandLineOptionMap & outArgument4,
                                                   class GALGAS_commandLineOptionMap & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mBoolOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsPredefinedForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mStringListOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mStringOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mUIntOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForSemanticAnalysis reader_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_optionComponentMapForSemanticAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_optionComponentMapForSemanticAnalysis ;
 
} ; // End of GALGAS_optionComponentMapForSemanticAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_optionComponentMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPredefined (LOCATION_ARGS) const ;
  public : class GALGAS_commandLineOptionMap current_mBoolOptionMap (LOCATION_ARGS) const ;
  public : class GALGAS_commandLineOptionMap current_mUIntOptionMap (LOCATION_ARGS) const ;
  public : class GALGAS_commandLineOptionMap current_mStringOptionMap (LOCATION_ARGS) const ;
  public : class GALGAS_commandLineOptionMap current_mStringListOptionMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_optionComponentMapForSemanticAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@optionComponentMapForSemanticAnalysis' map                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionComponentMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_commandLineOptionMap mAttribute_mBoolOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mUIntOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringListOptionMap ;

//--- Constructor
  public : cMapElement_optionComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                              const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                              const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                              const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                              const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @optionComponentMapForSemanticAnalysis_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionComponentMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_commandLineOptionMap mAttribute_mBoolOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mUIntOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringListOptionMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionComponentMapForSemanticAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_optionComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                    const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                    const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                    const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                    const GALGAS_commandLineOptionMap & in_mStringListOptionMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionComponentMapForSemanticAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_bool & inOperand1,
                                                                                           const class GALGAS_commandLineOptionMap & inOperand2,
                                                                                           const class GALGAS_commandLineOptionMap & inOperand3,
                                                                                           const class GALGAS_commandLineOptionMap & inOperand4,
                                                                                           const class GALGAS_commandLineOptionMap & inOperand5
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mBoolOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mStringListOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mStringOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mUIntOptionMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentMapForSemanticAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @optionMapForSemanticAnalysis map                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_optionMapForSemanticAnalysis_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_optionMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_optionMapForSemanticAnalysis (const GALGAS_optionMapForSemanticAnalysis & inSource) ;
  public : GALGAS_optionMapForSemanticAnalysis & operator = (const GALGAS_optionMapForSemanticAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionMapForSemanticAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_optionMapForSemanticAnalysis constructor_mapWithMapToOverride (const class GALGAS_optionMapForSemanticAnalysis & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_char & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      const class GALGAS_string & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                     class GALGAS_char constinArgument2,
                                                     class GALGAS_string constinArgument3,
                                                     class GALGAS_string constinArgument4,
                                                     class GALGAS_string constinArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMCommentForKey (class GALGAS_string constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDefaultValueForKey (class GALGAS_string constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMOptionCharForKey (class GALGAS_char constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMOptionStringForKey (class GALGAS_string constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMOptionTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_char & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   class GALGAS_string & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCommentForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDefaultValueForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char reader_mOptionCharForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionStringForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mOptionTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionMapForSemanticAnalysis reader_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_optionMapForSemanticAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_optionMapForSemanticAnalysis ;
 
} ; // End of GALGAS_optionMapForSemanticAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_optionMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_optionMapForSemanticAnalysis (const GALGAS_optionMapForSemanticAnalysis & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mOptionType (LOCATION_ARGS) const ;
  public : class GALGAS_char current_mOptionChar (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOptionString (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mComment (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_optionMapForSemanticAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@optionMapForSemanticAnalysis' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mOptionType ;
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_string mAttribute_mDefaultValue ;

//--- Constructor
  public : cMapElement_optionMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mOptionType,
                                                     const GALGAS_char & in_mOptionChar,
                                                     const GALGAS_string & in_mOptionString,
                                                     const GALGAS_string & in_mComment,
                                                     const GALGAS_string & in_mDefaultValue
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @optionMapForSemanticAnalysis_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mOptionType ;
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_string mAttribute_mDefaultValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionMapForSemanticAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_optionMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_optionMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_optionMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mOptionType,
                                                           const GALGAS_char & in_mOptionChar,
                                                           const GALGAS_string & in_mOptionString,
                                                           const GALGAS_string & in_mComment,
                                                           const GALGAS_string & in_mDefaultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionMapForSemanticAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                  const class GALGAS_char & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_string & inOperand4,
                                                                                  const class GALGAS_string & inOperand5
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionMapForSemanticAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char reader_mOptionChar (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mOptionType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionMapForSemanticAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lexiqueComponentMapForSemanticAnalysis map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexiqueComponentMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueComponentMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) ;
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis & operator = (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis constructor_mapWithMapToOverride (const class GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_terminalMap & inOperand1,
                                                      const class GALGAS_indexingListAST & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_terminalMap constinArgument1,
                                                     class GALGAS_indexingListAST constinArgument2,
                                                     class GALGAS_lstring constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIndexingDirectoryForKey (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIndexingListASTForKey (class GALGAS_indexingListAST constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTerminalMapForKey (class GALGAS_terminalMap constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_terminalMap & outArgument1,
                                                   class GALGAS_indexingListAST & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mIndexingDirectoryForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST reader_mIndexingListASTForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap reader_mTerminalMapForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentMapForSemanticAnalysis reader_overriddenMap (C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexiqueComponentMapForSemanticAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                    const GALGAS_string & inKey
                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexiqueComponentMapForSemanticAnalysis ;
 
} ; // End of GALGAS_lexiqueComponentMapForSemanticAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexiqueComponentMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_terminalMap current_mTerminalMap (LOCATION_ARGS) const ;
  public : class GALGAS_indexingListAST current_mIndexingListAST (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mIndexingDirectory (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@lexiqueComponentMapForSemanticAnalysis' map                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexiqueComponentMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_terminalMap mAttribute_mTerminalMap ;
  public : GALGAS_indexingListAST mAttribute_mIndexingListAST ;
  public : GALGAS_lstring mAttribute_mIndexingDirectory ;

//--- Constructor
  public : cMapElement_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                               const GALGAS_terminalMap & in_mTerminalMap,
                                                               const GALGAS_indexingListAST & in_mIndexingListAST,
                                                               const GALGAS_lstring & in_mIndexingDirectory
                                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @lexiqueComponentMapForSemanticAnalysis_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_terminalMap mAttribute_mTerminalMap ;
  public : GALGAS_indexingListAST mAttribute_mIndexingListAST ;
  public : GALGAS_lstring mAttribute_mIndexingDirectory ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                     const GALGAS_terminalMap & in_mTerminalMap,
                                                                     const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                     const GALGAS_lstring & in_mIndexingDirectory) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_terminalMap & inOperand1,
                                                                                            const class GALGAS_indexingListAST & inOperand2,
                                                                                            const class GALGAS_lstring & inOperand3
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mIndexingDirectory (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST reader_mIndexingListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap reader_mTerminalMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ;

#endif
