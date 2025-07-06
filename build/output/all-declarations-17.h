#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4DeclarationsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_DeclarationsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_acces_5F_control_ (class GGS_AccessControlAST & outArgument0,
                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                         class GGS_externTypeConstructorList & ioArgument1,
                                                         class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GGS_string & outArgument0,
                                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GGS_string & outArgument0,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS_externTypeGetterList & ioArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS_externTypeMethodList & ioArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS_externTypeSetterList & ioArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GGS_lstringlist & outArgument0,
                                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                        class GGS_filewrapperTemplateListAST & outArgument1,
                                                        class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GGS_lstringlist & outArgument0,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_formalInputParameterListAST & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_formalParameterListAST & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GGS_insertSetterListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                     class GGS_galgasDeclarationAST & ioArgument1,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       class GGS_propertyInCollectionListAST & ioArgument1,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subscript_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subscript_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subscript_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_semanticInstructionListAST & outArgument1,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_galgasDeclarationAST & ioArgument0,
                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument0,
                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_filewrapperTemplateListAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 GGS_propertyInCollectionListAST & ioArgument1,
                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i6_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 GGS_propertyInCollectionListAST & ioArgument1,
                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i7_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_type_5F_definition_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                            GGS_lstring & outArgument1,
                                                                            Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_type_5F_definition_i8_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_type_5F_definition_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                      GGS_lstring & outArgument1,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i9_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i10_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i11_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i12_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i13_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i14_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i15_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i16_ (GGS_string & outArgument0,
                                                                                              Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i16_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i17_ (GGS_string & outArgument0,
                                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i17_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i17_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_externTypeConstructorList & ioArgument1,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i18_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i18_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS_externTypeGetterList & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i19_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i19_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS_externTypeSetterList & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i20_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i20_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS_externTypeMethodList & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i21_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i21_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i22_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i22_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i23_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i23_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i24_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i24_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i25_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i25_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i26_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i26_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i26_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i27_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i27_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i27_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i28_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i28_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i28_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i29_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i29_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i29_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i30_ (GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i30_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i30_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i31_ (GGS_insertSetterListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i31_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i31_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i32_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i32_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_ (GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i34_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i34_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i35_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i35_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i36_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i36_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i36_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i37_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i37_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i38_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i38_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i38_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i39_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i39_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i39_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i40_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i40_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i41_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i42_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i42_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i43_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i44_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i44_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i45_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i46_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i47_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i48_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i48_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i48_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i49_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i49_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i49_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i50_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i50_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i50_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i51_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i51_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i51_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i52_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i52_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i52_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i53_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i53_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i53_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i54_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i54_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i54_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i55_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i55_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i55_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_acces_5F_control_i56_ (GGS_AccessControlAST & outArgument0,
                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_acces_5F_control_i56_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_acces_5F_control_i56_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_23 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_24 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_25 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_26 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_27 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_28 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_29 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_30 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_31 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_32 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_33 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_34 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_35 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_36 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_37 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_38 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_39 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_40 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_41 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_42 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_43 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_44 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_45 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_46 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_47 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_48 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_49 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_50 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_51 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_52 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_53 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_54 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_55 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_56 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_57 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_58 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_59 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_60 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_61 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_62 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_63 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_64 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_65 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_66 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_67 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_68 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_69 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_70 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_71 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_72 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4LexiqueComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_LexiqueComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_LexiqueComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_ (class GGS_lexicalAttributeListAST & ioArgument0,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_ (class GGS_lexicalRuleListAST & ioArgument0,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_ (class GGS_lexicalExpressionAST & outArgument0,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_ (class GGS_lexicalExpressionAST & outArgument0,
                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_ (class GGS_lexicalRuleListAST & ioArgument0,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_ (class GGS_indexingListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_ (class GGS_lexicalInstructionListAST & ioArgument0,
                                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_ (class GGS_lexicalListDeclarationListAST & ioArgument0,
                                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_ (class GGS_lexicalListEntryListAST & ioArgument0,
                                                        class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_ (class GGS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_ (class GGS_lexicalInstructionAST & outArgument0,
                                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_ (class GGS_lexicalExpressionAST & outArgument0,
                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_ (class GGS_lexicalWhileBranchListAST & ioArgument0,
                                                         class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_ (class GGS_lexicalStyleListAST & ioArgument0,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_ (class GGS_templateDelimitorListAST & ioArgument0,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_ (class GGS_templateReplacementListAST & ioArgument0,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_ (class GGS_terminalDeclarationListAST & ioArgument0,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GGS_indexingListAST & ioArgument0,
                                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GGS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                               Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GGS_lexicalRuleListAST & ioArgument0,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GGS_lexicalRuleListAST & ioArgument0,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GGS_lexicalWhileBranchListAST & ioArgument0,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_ (GGS_lexicalExpressionAST & outArgument0,
                                                                              Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GGS_lexicalListDeclarationListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GGS_lexicalListEntryListAST & ioArgument0,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_ (GGS_lexicalAttributeListAST & ioArgument0,
                                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GGS_terminalDeclarationListAST & ioArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_ (GGS_lexicalStyleListAST & ioArgument0,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i22_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i22_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_ (GGS_templateDelimitorListAST & ioArgument0,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_ (GGS_templateReplacementListAST & ioArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_ (GGS_lexicalInstructionAST & outArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_ (GGS_lexicalInstructionAST & outArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_23 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_24 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_25 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_26 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4OptionComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_OptionComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_OptionComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__ (class GGS_commandLineOptionListAST & ioArgument0,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4GuiComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_GuiComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_GuiComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_ (class GGS_guiSimpleAttributeListAST & ioArgument0,
                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (class GGS_withLexiqueListAST & ioArgument0,
                                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (class GGS_lstringlist & ioArgument0,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument0,
                                                                                               Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument0,
                                                                                              Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument0,
                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4SyntaxComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_SyntaxComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_SyntaxComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_actualInputParameterListAST & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                    class GGS_actualParameterListAST & outArgument1,
                                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxInstructionList & outArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_formalParameterListAST & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                          class GGS_nonterminalDeclarationListAST & ioArgument1,
                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       class GGS_semanticInstructionAST & outArgument1,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_syntaxInstructionAST & outArgument1,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxInstructionList & outArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxRuleListAST & ioArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       const class GGS_lstring constinArgument1,
                                                       class GGS_syntaxRuleLabelListAST & ioArgument2,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_ (class GGS__32_lstringlist & outArgument0,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_nonterminalDeclarationListAST & ioArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    const GGS_lstring constinArgument1,
                                                                                    GGS_syntaxRuleLabelListAST & ioArgument2,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxRuleListAST & ioArgument1,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxInstructionList & outArgument1,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GGS__32_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   GGS_syntaxInstructionAST & outArgument1,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   GGS_syntaxInstructionAST & outArgument1,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                           GGS_syntaxInstructionList & outArgument1,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                           GGS_syntaxInstructionList & outArgument1,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   GGS_syntaxInstructionAST & outArgument1,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   GGS_syntaxInstructionAST & outArgument1,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4GrammarComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_GrammarComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_GrammarComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                   const class GGS_lstring constinArgument1,
                                                                   class GGS_nonTerminalLabelListAST & ioArgument2,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class GGS_formalParameterListAST & ioArgument2,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                 const GGS_lstring constinArgument1,
                                                                                                 GGS_nonTerminalLabelListAST & ioArgument2,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_lstring & outArgument1,
                                                                                          GGS_formalParameterListAST & ioArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GrammarComponentSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ProgramDeclarations' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_ProgramDeclarations {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ProgramDeclarations (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_semanticInstructionListAST & outArgument1,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ProgramDeclarations_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ProgramDeclarations_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ProgramDeclarations_2 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerCompositionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_headerCompositionMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_headerCompositionMap
//--------------------------------------------------------------------------------------------------

class MapFor_headerCompositionMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_headerCompositionMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerCompositionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_headerCompositionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerCompositionMap (const MapFor_headerCompositionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerCompositionMap & operator = (const MapFor_headerCompositionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_headerCompositionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_headerCompositionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_headerCompositionMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_headerCompositionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_headerCompositionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_headerCompositionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_headerCompositionMap final {

//--- Constructor
  public: DownEnumerator_headerCompositionMap (const class GGS_headerCompositionMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_stringset current_mInclusion (LOCATION_ARGS) const ;

  public: class GGS_string current_mHeaderString (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_headerCompositionMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_headerCompositionMap (const DownEnumerator_headerCompositionMap &) = delete ;
  private: DownEnumerator_headerCompositionMap & operator = (const DownEnumerator_headerCompositionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_headerCompositionMap final {
  public: UpEnumerator_headerCompositionMap (const class GGS_headerCompositionMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mInclusion (LOCATION_ARGS) const ;
  public: class GGS_string current_mHeaderString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_headerCompositionMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_headerCompositionMap (const UpEnumerator_headerCompositionMap &) = delete ;
  private: UpEnumerator_headerCompositionMap & operator = (const UpEnumerator_headerCompositionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_headerCompositionMap > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_headerCompositionMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_headerCompositionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_headerCompositionMap (const GGS_headerCompositionMap & inSource) ;
  public: GGS_headerCompositionMap & operator = (const GGS_headerCompositionMap & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_headerCompositionMap (const GGS_headerCompositionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_headerCompositionMap & operator = (const GGS_headerCompositionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_headerCompositionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_headerCompositionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_headerCompositionMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_headerCompositionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_headerCompositionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_headerCompositionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerCompositionMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerCompositionMap extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerCompositionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_headerCompositionMap class_func_mapWithMapToOverride (const class GGS_headerCompositionMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_stringset constinArgument1,
                                                  class GGS_string constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHeaderStringForKey (class GGS_string constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInclusionForKey (class GGS_stringset constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_stringset & outArgument1,
                                                  class GGS_string & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mHeaderStringForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_mInclusionForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_headerCompositionMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_headerCompositionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_headerCompositionMap ;
  friend class DownEnumerator_headerCompositionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerCompositionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_stringset mProperty_mInclusion ;
  public: inline GGS_stringset readProperty_mInclusion (void) const {
    return mProperty_mInclusion ;
  }

  public: GGS_string mProperty_mHeaderString ;
  public: inline GGS_string readProperty_mHeaderString (void) const {
    return mProperty_mHeaderString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_headerCompositionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInclusion (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInclusion = inValue ;
  }

  public: inline void setter_setMHeaderString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_headerCompositionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_stringset & in_mInclusion,
                                               const GGS_string & in_mHeaderString) ;

//--------------------------------- Copy constructor
  public: GGS_headerCompositionMap_2E_element (const GGS_headerCompositionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_headerCompositionMap_2E_element & operator = (const GGS_headerCompositionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerCompositionMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_stringset & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerCompositionMap_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerCompositionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_stringset & inOperand1,
                                                                           const class GGS_string & inOperand2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: headerCompositionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_headerCompositionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_headerCompositionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_headerCompositionMap_2E_element_3F_ (const GGS_headerCompositionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_headerCompositionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_headerCompositionMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerCompositionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerRepartitionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_headerRepartitionMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_headerRepartitionMap
//--------------------------------------------------------------------------------------------------

class MapFor_headerRepartitionMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_headerRepartitionMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerRepartitionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_headerRepartitionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerRepartitionMap (const MapFor_headerRepartitionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_headerRepartitionMap & operator = (const MapFor_headerRepartitionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_headerRepartitionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_headerRepartitionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_headerRepartitionMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_headerRepartitionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_headerRepartitionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_headerRepartitionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_headerRepartitionMap final {

//--- Constructor
  public: DownEnumerator_headerRepartitionMap (const class GGS_headerRepartitionMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mHeaderFileName (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_headerRepartitionMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_headerRepartitionMap (const DownEnumerator_headerRepartitionMap &) = delete ;
  private: DownEnumerator_headerRepartitionMap & operator = (const DownEnumerator_headerRepartitionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_headerRepartitionMap final {
  public: UpEnumerator_headerRepartitionMap (const class GGS_headerRepartitionMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mHeaderFileName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_headerRepartitionMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_headerRepartitionMap (const UpEnumerator_headerRepartitionMap &) = delete ;
  private: UpEnumerator_headerRepartitionMap & operator = (const UpEnumerator_headerRepartitionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_headerRepartitionMap > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_headerRepartitionMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_headerRepartitionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_headerRepartitionMap (const GGS_headerRepartitionMap & inSource) ;
  public: GGS_headerRepartitionMap & operator = (const GGS_headerRepartitionMap & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_headerRepartitionMap (const GGS_headerRepartitionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_headerRepartitionMap & operator = (const GGS_headerRepartitionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_headerRepartitionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_headerRepartitionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_headerRepartitionMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_headerRepartitionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_headerRepartitionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_headerRepartitionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerRepartitionMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerRepartitionMap extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerRepartitionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_headerRepartitionMap class_func_mapWithMapToOverride (const class GGS_headerRepartitionMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHeaderFileNameForKey (class GGS_string constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mHeaderFileNameForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_headerRepartitionMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_headerRepartitionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_headerRepartitionMap ;
  friend class DownEnumerator_headerRepartitionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerRepartitionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mHeaderFileName ;
  public: inline GGS_string readProperty_mHeaderFileName (void) const {
    return mProperty_mHeaderFileName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_headerRepartitionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMHeaderFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_headerRepartitionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_string & in_mHeaderFileName) ;

//--------------------------------- Copy constructor
  public: GGS_headerRepartitionMap_2E_element (const GGS_headerRepartitionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_headerRepartitionMap_2E_element & operator = (const GGS_headerRepartitionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerRepartitionMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerRepartitionMap_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerRepartitionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: headerRepartitionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_headerRepartitionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_headerRepartitionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_headerRepartitionMap_2E_element_3F_ (const GGS_headerRepartitionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_headerRepartitionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_headerRepartitionMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerRepartitionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @projectQualifiedFeatureMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_projectQualifiedFeatureMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_projectQualifiedFeatureMap
//--------------------------------------------------------------------------------------------------

class MapFor_projectQualifiedFeatureMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_projectQualifiedFeatureMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_projectQualifiedFeatureMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_projectQualifiedFeatureMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_projectQualifiedFeatureMap (const MapFor_projectQualifiedFeatureMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_projectQualifiedFeatureMap & operator = (const MapFor_projectQualifiedFeatureMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_projectQualifiedFeatureMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_projectQualifiedFeatureMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_projectQualifiedFeatureMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_projectQualifiedFeatureMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_projectQualifiedFeatureMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_projectQualifiedFeatureMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_projectQualifiedFeatureMap final {

//--- Constructor
  public: DownEnumerator_projectQualifiedFeatureMap (const class GGS_projectQualifiedFeatureMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_projectQualifiedFeatureMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_projectQualifiedFeatureMap (const DownEnumerator_projectQualifiedFeatureMap &) = delete ;
  private: DownEnumerator_projectQualifiedFeatureMap & operator = (const DownEnumerator_projectQualifiedFeatureMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_projectQualifiedFeatureMap final {
  public: UpEnumerator_projectQualifiedFeatureMap (const class GGS_projectQualifiedFeatureMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_projectQualifiedFeatureMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_projectQualifiedFeatureMap (const UpEnumerator_projectQualifiedFeatureMap &) = delete ;
  private: UpEnumerator_projectQualifiedFeatureMap & operator = (const UpEnumerator_projectQualifiedFeatureMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_projectQualifiedFeatureMap > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_projectQualifiedFeatureMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_projectQualifiedFeatureMap (void) ;

//--------------------------------- Handle copy
  public: GGS_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inSource) ;
  public: GGS_projectQualifiedFeatureMap & operator = (const GGS_projectQualifiedFeatureMap & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_projectQualifiedFeatureMap & operator = (const GGS_projectQualifiedFeatureMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_projectQualifiedFeatureMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_projectQualifiedFeatureMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_projectQualifiedFeatureMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_projectQualifiedFeatureMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_projectQualifiedFeatureMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_projectQualifiedFeatureMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_projectQualifiedFeatureMap init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_projectQualifiedFeatureMap extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_projectQualifiedFeatureMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_projectQualifiedFeatureMap class_func_mapWithMapToOverride (const class GGS_projectQualifiedFeatureMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureValueForKey (class GGS_lstring constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFeatureValueForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_projectQualifiedFeatureMap getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_projectQualifiedFeatureMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_projectQualifiedFeatureMap ;
  friend class DownEnumerator_projectQualifiedFeatureMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @projectQualifiedFeatureMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mFeatureValue ;
  public: inline GGS_lstring readProperty_mFeatureValue (void) const {
    return mProperty_mFeatureValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFeatureValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (const GGS_lstring & in_lkey,
                                                     const GGS_lstring & in_mFeatureValue) ;

//--------------------------------- Copy constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (const GGS_projectQualifiedFeatureMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_projectQualifiedFeatureMap_2E_element & operator = (const GGS_projectQualifiedFeatureMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_projectQualifiedFeatureMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_projectQualifiedFeatureMap_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_projectQualifiedFeatureMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: projectQualifiedFeatureMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_projectQualifiedFeatureMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_projectQualifiedFeatureMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_projectQualifiedFeatureMap_2E_element_3F_ (const GGS_projectQualifiedFeatureMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_projectQualifiedFeatureMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_projectQualifiedFeatureMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_projectQualifiedFeatureMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element_3F_ ;

