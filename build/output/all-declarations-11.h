#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3DeclarationsSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_DeclarationsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                              class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_ (class GALGAS_externTypeConstructorList & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GALGAS_string & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GALGAS_string & outArgument0,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_ (class GALGAS_externTypeGetterList & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_ (class GALGAS_externTypeMethodList & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_ (class GALGAS_externTypeSetterList & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GALGAS_filewrapperTemplateListAST & outArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GALGAS_insertMethodListAST & ioArgument0,
                                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_ (class GALGAS_propertyInCollectionListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_ (class GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_attribute_ (class GALGAS_sharedMapAttributeListAST & ioArgument0,
                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_attribute_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_attribute_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_override_ (class GALGAS_mapOverrideBlockListAST & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_override_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_override_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_list_ (class GALGAS_mapStateList & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_transition_ (class GALGAS_mapStateTransitionList & ioArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_transition_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_state_5F_transition_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument0,
                                                                                        GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_ (GALGAS_lstringlist & outArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_ (GALGAS_lstringlist & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i6_ (GALGAS_filewrapperTemplateListAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i7_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i8_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i11_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_ (GALGAS_string & outArgument0,
                                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_ (GALGAS_string & outArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i14_ (GALGAS_externTypeConstructorList & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i15_ (GALGAS_externTypeGetterList & ioArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i16_ (GALGAS_externTypeSetterList & ioArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i17_ (GALGAS_externTypeMethodList & ioArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i22_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i27_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i28_ (GALGAS_mapOverrideBlockListAST & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i29_ (GALGAS_sharedMapAttributeListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i30_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i31_ (GALGAS_mapStateList & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i32_ (GALGAS_mapStateTransitionList & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i33_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i34_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i35_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i36_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i37_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i38_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i39_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i40_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i41_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i42_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i42_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i42_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i43_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i43_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i43_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i44_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i44_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i44_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i45_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i45_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i45_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i46_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i46_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i46_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i47_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i47_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i47_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_43 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_44 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_45 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_46 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_47 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_48 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_49 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_50 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_51 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_52 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_53 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_54 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_55 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionGetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionGetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionGetterAST (const class cPtr_abstractExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionGetterName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionGetterReturnedTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                          const class GALGAS_lstring & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionGetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionGetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionGetterAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;

//--- Constructor
  public: cPtr_abstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                           const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                           const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionMethodAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionMethodAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionMethodAST (const class cPtr_abstractExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mAbstractExtensionMethodFormalParameterList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_formalParameterListAST & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodFormalParameterList (class GALGAS_formalParameterListAST inArgument0
                                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodName (class GALGAS_lstring inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionMethodAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionMethodAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionMethodAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mAbstractExtensionMethodFormalParameterList ;

//--- Constructor
  public: cPtr_abstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                           const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionSetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionSetterAST (const class cPtr_abstractExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mAbstractExtensionSetterFormalParameterList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_formalParameterListAST & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionSetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionSetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionSetterAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mAbstractExtensionSetterFormalParameterList ;

//--- Constructor
  public: cPtr_abstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                           const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_arrayDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_arrayDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_arrayDeclarationAST (const class cPtr_arrayDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mArrayTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mElementTypeName (void) const ;

  public: class GALGAS_luint readProperty_mDimension (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_luint & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_arrayDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mArrayTypeName ;
  public: GALGAS_lstring mProperty_mElementTypeName ;
  public: GALGAS_luint mProperty_mDimension ;

//--- Constructor
  public: cPtr_arrayDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mArrayTypeName,
                                    const GALGAS_lstring & in_mElementTypeName,
                                    const GALGAS_luint & in_mDimension
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boolsetDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolsetDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_boolsetDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_boolsetDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_boolsetDeclarationAST (const class cPtr_boolsetDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mBoolsetTypeName (void) const ;

  public: class GALGAS_lstringlist readProperty_mFlagList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_boolsetDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolsetDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstringlist & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolsetDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolsetDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolsetDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_boolsetDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mBoolsetTypeName ;
  public: GALGAS_lstringlist mProperty_mFlagList ;

//--- Constructor
  public: cPtr_boolsetDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_lstring & in_mBoolsetTypeName,
                                      const GALGAS_lstringlist & in_mFlagList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @classDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_classDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_classDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_classDeclarationAST (const class cPtr_classDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsAbstract (void) const ;

  public: class GALGAS_bool readProperty_mIsReference (void) const ;

  public: class GALGAS_lstring readProperty_mClassTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mSuperClassName (void) const ;

  public: class GALGAS_lstringlist readProperty_mClassFeatureList (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_classDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_bool & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_lstring & inOperand3,
                                                                   const class GALGAS_lstring & inOperand4,
                                                                   const class GALGAS_lstringlist & inOperand5,
                                                                   const class GALGAS_propertyInCollectionListAST & inOperand6
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_classDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @classDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_classDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_bool mProperty_mIsReference ;
  public: GALGAS_lstring mProperty_mClassTypeName ;
  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: GALGAS_lstringlist mProperty_mClassFeatureList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_classDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_bool & in_mIsAbstract,
                                    const GALGAS_bool & in_mIsReference,
                                    const GALGAS_lstring & in_mClassTypeName,
                                    const GALGAS_lstring & in_mSuperClassName,
                                    const GALGAS_lstringlist & in_mClassFeatureList,
                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dictDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dictDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_dictDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dictDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_dictDeclarationAST (const class cPtr_dictDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDictTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mKeyTypeName (void) const ;

  public: class GALGAS_lstringlist readProperty_mAttributeList (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dictDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dictDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                  const class GALGAS_propertyInCollectionListAST & inOperand4
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dictDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dictDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dictDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dictDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mDictTypeName ;
  public: GALGAS_lstring mProperty_mKeyTypeName ;
  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_dictDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mDictTypeName,
                                   const GALGAS_lstring & in_mKeyTypeName,
                                   const GALGAS_lstringlist & in_mAttributeList,
                                   const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_enumDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_enumDeclarationAST (const class cPtr_enumDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mEnumTypeName (void) const ;

  public: class GALGAS_enumConstantList readProperty_mConstantList (void) const ;

  public: class GALGAS_lstring readProperty_mDefaultConstantName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_enumConstantList & inOperand2,
                                                                  const class GALGAS_lstring & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mEnumTypeName ;
  public: GALGAS_enumConstantList mProperty_mConstantList ;
  public: GALGAS_lstring mProperty_mDefaultConstantName ;

//--- Constructor
  public: cPtr_enumDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mEnumTypeName,
                                   const GALGAS_enumConstantList & in_mConstantList,
                                   const GALGAS_lstring & in_mDefaultConstantName
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionGetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extensionGetterAST (const class cPtr_extensionGetterAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionGetterName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mExtensionGetterFormalInputParameterList (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionGetterReturnedTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionGetterReturnedVariableName (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mExtensionGetterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfReaderLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_lstring & inOperand3,
                                                                  const class GALGAS_formalInputParameterListAST & inOperand4,
                                                                  const class GALGAS_lstring & inOperand5,
                                                                  const class GALGAS_lstring & inOperand6,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                  const class GALGAS_location & inOperand8
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionGetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extensionGetterAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mExtensionGetterReturnedTypeName ;
  public: GALGAS_lstring mProperty_mExtensionGetterReturnedVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mExtensionGetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfReaderLocation ;

//--- Constructor
  public: cPtr_extensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mExtensionGetterName,
                                   const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                   const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                   const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                   const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                   const GALGAS_location & in_mEndOfReaderLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionMethodAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extensionMethodAST (const class cPtr_extensionMethodAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mExtensionMethodInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfMethodLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_lstring & inOperand3,
                                                                  const class GALGAS_formalParameterListAST & inOperand4,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                  const class GALGAS_location & inOperand6
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionMethodAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extensionMethodAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mExtensionMethodFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mExtensionMethodInstructionList ;
  public: GALGAS_location mProperty_mEndOfMethodLocation ;

//--- Constructor
  public: cPtr_extensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mExtensionMethodName,
                                   const GALGAS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                   const GALGAS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                   const GALGAS_location & in_mEndOfMethodLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionSetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extensionSetterAST (const class cPtr_extensionSetterAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mExtensionSetterFormalParameterList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mExtensionSetterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfSetterDeclarationLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_lstring & inOperand3,
                                                                  const class GALGAS_formalParameterListAST & inOperand4,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                  const class GALGAS_location & inOperand6
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionSetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionSetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extensionSetterAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mExtensionSetterFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mExtensionSetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfSetterDeclarationLocation ;

//--- Constructor
  public: cPtr_extensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                   const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_lstring & in_mExtensionSetterName,
                                   const GALGAS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                   const GALGAS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                   const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_externTypeDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externTypeDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_externTypeDeclarationAST (const class cPtr_externTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mExternTypeName (void) const ;

  public: class GALGAS_string readProperty_mCppPreDeclarationCode (void) const ;

  public: class GALGAS_string readProperty_mCppClassCode (void) const ;

  public: class GALGAS_externTypeConstructorList readProperty_mExternTypeConstructorList (void) const ;

  public: class GALGAS_externTypeGetterList readProperty_mExternTypeGetterList (void) const ;

  public: class GALGAS_externTypeSetterList readProperty_mExternTypeSetterList (void) const ;

  public: class GALGAS_externTypeMethodList readProperty_mExternTypeMethodList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        const class GALGAS_externTypeConstructorList & inOperand4,
                                                                        const class GALGAS_externTypeGetterList & inOperand5,
                                                                        const class GALGAS_externTypeSetterList & inOperand6,
                                                                        const class GALGAS_externTypeMethodList & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externTypeDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_externTypeDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mExternTypeName ;
  public: GALGAS_string mProperty_mCppPreDeclarationCode ;
  public: GALGAS_string mProperty_mCppClassCode ;
  public: GALGAS_externTypeConstructorList mProperty_mExternTypeConstructorList ;
  public: GALGAS_externTypeGetterList mProperty_mExternTypeGetterList ;
  public: GALGAS_externTypeSetterList mProperty_mExternTypeSetterList ;
  public: GALGAS_externTypeMethodList mProperty_mExternTypeMethodList ;

//--- Constructor
  public: cPtr_externTypeDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_lstring & in_mExternTypeName,
                                         const GALGAS_string & in_mCppPreDeclarationCode,
                                         const GALGAS_string & in_mCppClassCode,
                                         const GALGAS_externTypeConstructorList & in_mExternTypeConstructorList,
                                         const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                         const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                         const GALGAS_externTypeMethodList & in_mExternTypeMethodList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperDeclarationAST (const class cPtr_filewrapperDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsInternal (void) const ;

  public: class GALGAS_string readProperty_mSourceFileAbsolutePath (void) const ;

  public: class GALGAS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_lstring readProperty_mFilewrapperPath (void) const ;

  public: class GALGAS_lstringlist readProperty_mFilewrapperTextFileExtensionList (void) const ;

  public: class GALGAS_lstringlist readProperty_mFilewrapperBinaryFileExtensionList (void) const ;

  public: class GALGAS_filewrapperTemplateListAST readProperty_mFilewrapperTemplateList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_lstring & inOperand4,
                                                                         const class GALGAS_lstringlist & inOperand5,
                                                                         const class GALGAS_lstringlist & inOperand6,
                                                                         const class GALGAS_filewrapperTemplateListAST & inOperand7
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperBinaryFileExtensionList (class GALGAS_lstringlist inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperPath (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateList (class GALGAS_filewrapperTemplateListAST inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTextFileExtensionList (class GALGAS_lstringlist inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternal (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileAbsolutePath (class GALGAS_string inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mIsInternal ;
  public: GALGAS_string mProperty_mSourceFileAbsolutePath ;
  public: GALGAS_lstring mProperty_mFilewrapperName ;
  public: GALGAS_lstring mProperty_mFilewrapperPath ;
  public: GALGAS_lstringlist mProperty_mFilewrapperTextFileExtensionList ;
  public: GALGAS_lstringlist mProperty_mFilewrapperBinaryFileExtensionList ;
  public: GALGAS_filewrapperTemplateListAST mProperty_mFilewrapperTemplateList ;

//--- Constructor
  public: cPtr_filewrapperDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                          const GALGAS_bool & in_mIsInternal,
                                          const GALGAS_string & in_mSourceFileAbsolutePath,
                                          const GALGAS_lstring & in_mFilewrapperName,
                                          const GALGAS_lstring & in_mFilewrapperPath,
                                          const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                          const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                          const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @graphDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_graphDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_graphDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_graphDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_graphDeclarationAST (const class cPtr_graphDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mGraphTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAssociatedListTypeName (void) const ;

  public: class GALGAS_graphInsertModifierList readProperty_mInsertModifierList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_graphDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_graphDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_graphInsertModifierList & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_graphDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListTypeName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGraphTypeName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertModifierList (class GALGAS_graphInsertModifierList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @graphDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_graphDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mGraphTypeName ;
  public: GALGAS_lstring mProperty_mAssociatedListTypeName ;
  public: GALGAS_graphInsertModifierList mProperty_mInsertModifierList ;

//--- Constructor
  public: cPtr_graphDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mGraphTypeName,
                                    const GALGAS_lstring & in_mAssociatedListTypeName,
                                    const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @listDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_listDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_listDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_listDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_listDeclarationAST (const class cPtr_listDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mListTypeName (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_listDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_propertyInCollectionListAST & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mListTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_listDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_lstring & in_mListTypeName,
                                   const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @listmapDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_listmapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_listmapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_listmapDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_listmapDeclarationAST (const class cPtr_listmapDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mListmapTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAssociatedListTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_listmapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listmapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listmapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listmapDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listmapDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listmapDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_listmapDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mListmapTypeName ;
  public: GALGAS_lstring mProperty_mAssociatedListTypeName ;

//--- Constructor
  public: cPtr_listmapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_lstring & in_mListmapTypeName,
                                      const GALGAS_lstring & in_mAssociatedListTypeName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableDeclarationAST (const class cPtr_localVariableDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mVariableName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mVariableName ;

//--- Constructor
  public: cPtr_localVariableDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_lstring & in_mVariableName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mapDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_mapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mapDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_mapDeclarationAST (const class cPtr_mapDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mMapTypeName (void) const ;

  public: class GALGAS_lstringlist readProperty_mAttributeList (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GALGAS_insertMethodListAST readProperty_mInsertMethodList (void) const ;

  public: class GALGAS_mapSearchMethodListAST readProperty_mSearchMethodList (void) const ;

  public: class GALGAS_mapRemoveMethodListAST readProperty_mRemoveMethodList (void) const ;

  public: class GALGAS_insertOrReplaceDeclarationListAST readProperty_mInsertOrReplaceDeclarationListAST (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_lstringlist & inOperand2,
                                                                 const class GALGAS_propertyInCollectionListAST & inOperand3,
                                                                 const class GALGAS_insertMethodListAST & inOperand4,
                                                                 const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                                 const class GALGAS_mapRemoveMethodListAST & inOperand6,
                                                                 const class GALGAS_insertOrReplaceDeclarationListAST & inOperand7
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeList (class GALGAS_lstringlist inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodList (class GALGAS_insertMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertOrReplaceDeclarationListAST (class GALGAS_insertOrReplaceDeclarationListAST inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapTypeName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyList (class GALGAS_propertyInCollectionListAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRemoveMethodList (class GALGAS_mapRemoveMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (class GALGAS_mapSearchMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mapDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_mapDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mMapTypeName ;
  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public: GALGAS_mapRemoveMethodListAST mProperty_mRemoveMethodList ;
  public: GALGAS_insertOrReplaceDeclarationListAST mProperty_mInsertOrReplaceDeclarationListAST ;

//--- Constructor
  public: cPtr_mapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                  const GALGAS_lstring & in_mMapTypeName,
                                  const GALGAS_lstringlist & in_mAttributeList,
                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                  const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                  const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                  const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                  const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mapEntryDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapEntryDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_mapEntryDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mapEntryDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_mapEntryDeclarationAST (const class cPtr_mapEntryDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mMapEntryTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAssociatedMapTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mapEntryDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapEntryDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapEntryDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapEntryDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapEntryDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mapEntryDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_mapEntryDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mMapEntryTypeName ;
  public: GALGAS_lstring mProperty_mAssociatedMapTypeName ;

//--- Constructor
  public: cPtr_mapEntryDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_lstring & in_mMapEntryTypeName,
                                       const GALGAS_lstring & in_mAssociatedMapTypeName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionGetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingAbstractExtensionGetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingAbstractExtensionGetterAST (const class cPtr_overridingAbstractExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionGetterName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionGetterReturnedTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingAbstractExtensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                                    const class GALGAS_lstring & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionGetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionGetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionGetterAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                     const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                     const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionMethodAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingAbstractExtensionMethodAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingAbstractExtensionMethodAST (const class cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mOverridingExtensionMethodFormalParameterList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingAbstractExtensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_formalParameterListAST & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOverridingExtensionMethodFormalParameterList (class GALGAS_formalParameterListAST inArgument0
                                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOverridingExtensionMethodName (class GALGAS_lstring inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionMethodAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionMethodAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionMethodAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                     const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionSetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingAbstractExtensionSetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingAbstractExtensionSetterAST (const class cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mOverridingExtensionSetterFormalParameterList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingAbstractExtensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_formalParameterListAST & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionSetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionSetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionSetterAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                     const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionGetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionGetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionGetterAST (const class cPtr_overridingExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionGetterName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mOverridingExtensionGetterFormalInputParameterList (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionGetterReturnedTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionGetterReturnedVariableName (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mOverridingExtensionGetterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfReaderLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3,
                                                                            const class GALGAS_formalInputParameterListAST & inOperand4,
                                                                            const class GALGAS_lstring & inOperand5,
                                                                            const class GALGAS_lstring & inOperand6,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                            const class GALGAS_location & inOperand8
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionGetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionGetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionGetterAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mOverridingExtensionGetterReturnedTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionGetterReturnedVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionGetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfReaderLocation ;

//--- Constructor
  public: cPtr_overridingExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionGetterName,
                                             const GALGAS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                             const GALGAS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                             const GALGAS_location & in_mEndOfReaderLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionMethodAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionMethodAST (const class cPtr_overridingExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mOverridingExtensionMethodFormalParameterList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mOverridingExtensionMethodInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfMethodLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3,
                                                                            const class GALGAS_formalParameterListAST & inOperand4,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                            const class GALGAS_location & inOperand6
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionMethodAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionMethodAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionMethodAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionMethodInstructionList ;
  public: GALGAS_location mProperty_mEndOfMethodLocation ;

//--- Constructor
  public: cPtr_overridingExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                             const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                             const GALGAS_location & in_mEndOfMethodLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionSetterAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionSetterAST (const class cPtr_overridingExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mOverridingExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mOverridingExtensionSetterFormalParameterList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mOverridingExtensionSetterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfSetterDeclarationLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3,
                                                                            const class GALGAS_formalParameterListAST & inOperand4,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                            const class GALGAS_location & inOperand6
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionSetterAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionSetterAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionSetterAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GALGAS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;
  public: GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionSetterInstructionList ;
  public: GALGAS_location mProperty_mEndOfSetterDeclarationLocation ;

//--- Constructor
  public: cPtr_overridingExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                             const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                             const GALGAS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                             const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sharedMapDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sharedMapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_sharedMapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sharedMapDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_sharedMapDeclarationAST (const class cPtr_sharedMapDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mMapTypeName (void) const ;

  public: class GALGAS_lstringlist readProperty_mAttributeList (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GALGAS_insertMethodListAST readProperty_mInsertMethodList (void) const ;

  public: class GALGAS_mapSearchMethodListAST readProperty_mSearchMethodList (void) const ;

  public: class GALGAS_mapStateList readProperty_mMapStateList (void) const ;

  public: class GALGAS_mapOverrideBlockListAST readProperty_mMapOverrideBlockListAST (void) const ;

  public: class GALGAS_sharedMapAttributeListAST readProperty_mSharedMapAttributeListAST (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sharedMapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sharedMapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_lstringlist & inOperand2,
                                                                       const class GALGAS_propertyInCollectionListAST & inOperand3,
                                                                       const class GALGAS_insertMethodListAST & inOperand4,
                                                                       const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                                       const class GALGAS_mapStateList & inOperand6,
                                                                       const class GALGAS_mapOverrideBlockListAST & inOperand7,
                                                                       const class GALGAS_sharedMapAttributeListAST & inOperand8
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sharedMapDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAttributeList (class GALGAS_lstringlist inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodList (class GALGAS_insertMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapOverrideBlockListAST (class GALGAS_mapOverrideBlockListAST inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapStateList (class GALGAS_mapStateList inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapTypeName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyList (class GALGAS_propertyInCollectionListAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (class GALGAS_mapSearchMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSharedMapAttributeListAST (class GALGAS_sharedMapAttributeListAST inArgument0
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sharedMapDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sharedMapDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sharedMapDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mMapTypeName ;
  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public: GALGAS_mapStateList mProperty_mMapStateList ;
  public: GALGAS_mapOverrideBlockListAST mProperty_mMapOverrideBlockListAST ;
  public: GALGAS_sharedMapAttributeListAST mProperty_mSharedMapAttributeListAST ;

//--- Constructor
  public: cPtr_sharedMapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_lstring & in_mMapTypeName,
                                        const GALGAS_lstringlist & in_mAttributeList,
                                        const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                        const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                        const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                        const GALGAS_mapStateList & in_mMapStateList,
                                        const GALGAS_mapOverrideBlockListAST & in_mMapOverrideBlockListAST,
                                        const GALGAS_sharedMapAttributeListAST & in_mSharedMapAttributeListAST
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sortedListDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_sortedListDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sortedListDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_sortedListDeclarationAST (const class cPtr_sortedListDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mSortedListTypeName (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GALGAS_sortedListSortDescriptorListAST readProperty_mSortDescriptorList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sortedListDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                        const class GALGAS_sortedListSortDescriptorListAST & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedListDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sortedListDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sortedListDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mSortedListTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_sortedListSortDescriptorListAST mProperty_mSortDescriptorList ;

//--- Constructor
  public: cPtr_sortedListDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_lstring & in_mSortedListTypeName,
                                         const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                         const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_structDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_structDeclarationAST (const class cPtr_structDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mStructTypeName (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mStructurePropertyList (void) const ;

  public: class GALGAS_string readProperty_mEnumeratedElementTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                    const class GALGAS_string & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_structDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mStructTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mStructurePropertyList ;
  public: GALGAS_string mProperty_mEnumeratedElementTypeName ;

//--- Constructor
  public: cPtr_structDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mStructTypeName,
                                     const GALGAS_propertyInCollectionListAST & in_mStructurePropertyList,
                                     const GALGAS_string & in_mEnumeratedElementTypeName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @weakReferenceDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_weakReferenceDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_weakReferenceDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_weakReferenceDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_weakReferenceDeclarationAST (const class cPtr_weakReferenceDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mClassTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mWeakReferenceTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mSuperWeakReferenceTypeName (void) const ;

  public: class GALGAS_lstringlist readProperty_mClassFeatureList (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_weakReferenceDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_weakReferenceDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3,
                                                                           const class GALGAS_lstringlist & inOperand4,
                                                                           const class GALGAS_propertyInCollectionListAST & inOperand5
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_weakReferenceDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_weakReferenceDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @weakReferenceDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_weakReferenceDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mClassTypeName ;
  public: GALGAS_lstring mProperty_mWeakReferenceTypeName ;
  public: GALGAS_lstring mProperty_mSuperWeakReferenceTypeName ;
  public: GALGAS_lstringlist mProperty_mClassFeatureList ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_weakReferenceDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_lstring & in_mClassTypeName,
                                            const GALGAS_lstring & in_mWeakReferenceTypeName,
                                            const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                            const GALGAS_lstringlist & in_mClassFeatureList,
                                            const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_weakSuffix (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3LexiqueComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_LexiqueComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_LexiqueComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_function_5F_declaration_ (class GALGAS_externFunctionListAST & ioArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_function_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_function_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_routine_5F_declaration_ (class GALGAS_externRoutineListAST & ioArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_routine_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_routine_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_ (class GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_declaration_ (class GALGAS_lexicalFunctionListAST & ioArgument0,
                                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_expression_ (class GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_factor_ (class GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_term_ (class GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_ (class GALGAS_indexingListAST & ioArgument0,
                                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_ (class GALGAS_lexicalInstructionListAST & ioArgument0,
                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_ (class GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_ (class GALGAS_lexicalListEntryListAST & ioArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_ (class GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_ (class GALGAS_lexicalInstructionAST & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_ (class GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_ (class GALGAS_lexicalStyleListAST & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_ (class GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_ (class GALGAS_templateReplacementListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_ (class GALGAS_terminalDeclarationListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GALGAS_indexingListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_ (GALGAS_externRoutineListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_ (GALGAS_externFunctionListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_ (GALGAS_lexicalFunctionListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalAttributeInputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalAttributeInputArgumentAST (const class cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAttributeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeInputArgumentAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalAttributeInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalAttributeInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;

//--- Constructor
  public: cPtr_lexicalAttributeInputArgumentAST (const GALGAS_lstring & in_mAttributeName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeInputOutputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeInputOutputArgumentAST : public GALGAS_abstractLexicalRoutineActualArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeInputOutputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalAttributeInputOutputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalAttributeInputOutputArgumentAST (const class cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mAttributeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeInputOutputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeInputOutputArgumentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeInputOutputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalAttributeInputOutputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalAttributeInputOutputArgumentAST : public cPtr_abstractLexicalRoutineActualArgumentAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;

//--- Constructor
  public: cPtr_lexicalAttributeInputOutputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                       const GALGAS_lstring & in_mAttributeName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterInputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterInputArgumentAST (const class cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterInputArgumentAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_lexicalCharacterInputArgumentAST (const GALGAS_lchar & in_mCharacter
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterIntervalMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterIntervalMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterIntervalMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterIntervalMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterIntervalMatchAST (const class cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mLowerBound (void) const ;

  public: class GALGAS_lchar readProperty_mUpperBound (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterIntervalMatchAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterIntervalMatchAST constructor_new (const class GALGAS_lchar & inOperand0,
                                                                                const class GALGAS_lchar & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterIntervalMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterIntervalMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterIntervalMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lchar mProperty_mLowerBound ;
  public: GALGAS_lchar mProperty_mUpperBound ;

//--- Constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                 const GALGAS_lchar & in_mUpperBound
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterMatchAST (const class cPtr_lexicalCharacterMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterMatchAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterMatchAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterSetMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterSetMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterSetMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterSetMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterSetMatchAST (const class cPtr_lexicalCharacterSetMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mCharacterSetName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterSetMatchAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterSetMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterSetMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterSetMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mCharacterSetName ;

//--- Constructor
  public: cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalDropInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalDropInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalDropInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalDropInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalDropInstructionAST (const class cPtr_lexicalDropInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTerminalName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalDropInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalDropInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalDropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalDropInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalDropInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalDropInstructionAST : public cPtr_lexicalInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTerminalName ;

//--- Constructor
  public: cPtr_lexicalDropInstructionAST (const GALGAS_lstring & in_mTerminalName
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalErrorByDefaultAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalErrorByDefaultAST : public GALGAS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalErrorByDefaultAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalErrorByDefaultAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalErrorByDefaultAST (const class cPtr_lexicalErrorByDefaultAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDefaultErrorMessageName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalErrorByDefaultAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalErrorByDefaultAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalErrorByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalErrorByDefaultAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalErrorByDefaultAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalErrorByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mDefaultErrorMessageName ;

//--- Constructor
  public: cPtr_lexicalErrorByDefaultAST (const GALGAS_lstring & in_mDefaultErrorMessageName
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalErrorInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalErrorInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalErrorInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalErrorInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalErrorInstructionAST (const class cPtr_lexicalErrorInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mErrorMessageName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalErrorInstructionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalErrorInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalErrorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalErrorInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalErrorInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalErrorInstructionAST : public cPtr_lexicalInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mErrorMessageName ;

//--- Constructor
  public: cPtr_lexicalErrorInstructionAST (const GALGAS_lstring & in_mErrorMessageName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCallAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCallAST : public GALGAS_lexicalFunctionExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCallAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionCallAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionCallAST (const class cPtr_lexicalFunctionCallAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mCalledFunctionName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCallAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCallAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionCallAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionCallAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionCallAST : public cPtr_lexicalFunctionExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mCalledFunctionName ;

//--- Constructor
  public: cPtr_lexicalFunctionCallAST (const GALGAS_lstring & in_mCalledFunctionName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCharacterIntervalMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCharacterIntervalMatchAST : public GALGAS_lexicalFunctionExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCharacterIntervalMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionCharacterIntervalMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionCharacterIntervalMatchAST (const class cPtr_lexicalFunctionCharacterIntervalMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mLowerBound (void) const ;

  public: class GALGAS_lchar readProperty_mUpperBound (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCharacterIntervalMatchAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCharacterIntervalMatchAST constructor_new (const class GALGAS_lchar & inOperand0,
                                                                                        const class GALGAS_lchar & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionCharacterIntervalMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionCharacterIntervalMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionCharacterIntervalMatchAST : public cPtr_lexicalFunctionExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lchar mProperty_mLowerBound ;
  public: GALGAS_lchar mProperty_mUpperBound ;

//--- Constructor
  public: cPtr_lexicalFunctionCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                         const GALGAS_lchar & in_mUpperBound
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCharacterMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCharacterMatchAST : public GALGAS_lexicalFunctionExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCharacterMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionCharacterMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionCharacterMatchAST (const class cPtr_lexicalFunctionCharacterMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCharacterMatchAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCharacterMatchAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionCharacterMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionCharacterMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionCharacterMatchAST : public cPtr_lexicalFunctionExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_lexicalFunctionCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionInputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionInputArgumentAST (const class cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFunctionName (void) const ;

  public: class GALGAS_lexicalFunctionCallActualArgumentListAST readProperty_mFunctionActualArgumentList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionInputArgumentAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_lexicalFunctionCallActualArgumentListAST mProperty_mFunctionActualArgumentList ;

//--- Constructor
  public: cPtr_lexicalFunctionInputArgumentAST (const GALGAS_lstring & in_mFunctionName,
                                                const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalImplicitRuleAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalImplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalImplicitRuleAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalImplicitRuleAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalImplicitRuleAST (const class cPtr_lexicalImplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mListName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalImplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalImplicitRuleAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalImplicitRuleAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalImplicitRuleAST : public cPtr_abstractLexicalRuleAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mListName ;

//--- Constructor
  public: cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRewindInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRewindInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRewindInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalRewindInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalRewindInstructionAST (const class cPtr_lexicalRewindInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLexicalTagName (void) const ;

  public: class GALGAS_lstring readProperty_mTerminalName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRewindInstructionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRewindInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRewindInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRewindInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalRewindInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalRewindInstructionAST : public cPtr_lexicalInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mLexicalTagName ;
  public: GALGAS_lstring mProperty_mTerminalName ;

//--- Constructor
  public: cPtr_lexicalRewindInstructionAST (const GALGAS_lstring & in_mLexicalTagName,
                                            const GALGAS_lstring & in_mTerminalName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalRoutineInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalRoutineInstructionAST (const class cPtr_lexicalRoutineInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRoutineName (void) const ;

  public: class GALGAS_lexicalRoutineCallActualArgumentListAST readProperty_mActualArgumentList (void) const ;

  public: class GALGAS_lstringlist readProperty_mErrorMessageList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand1,
                                                                            const class GALGAS_lstringlist & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalRoutineInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalRoutineInstructionAST : public cPtr_lexicalInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_lexicalRoutineCallActualArgumentListAST mProperty_mActualArgumentList ;
  public: GALGAS_lstringlist mProperty_mErrorMessageList ;

//--- Constructor
  public: cPtr_lexicalRoutineInstructionAST (const GALGAS_lstring & in_mRoutineName,
                                             const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                             const GALGAS_lstringlist & in_mErrorMessageList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendTerminalByDefaultAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendTerminalByDefaultAST : public GALGAS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSendTerminalByDefaultAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalSendTerminalByDefaultAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalSendTerminalByDefaultAST (const class cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDefaultSentTerminal (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendTerminalByDefaultAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendTerminalByDefaultAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSendTerminalByDefaultAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalSendTerminalByDefaultAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalSendTerminalByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mDefaultSentTerminal ;

//--- Constructor
  public: cPtr_lexicalSendTerminalByDefaultAST (const GALGAS_lstring & in_mDefaultSentTerminal
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSimpleSendInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSimpleSendInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSimpleSendInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalSimpleSendInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalSimpleSendInstructionAST (const class cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mSentTerminal (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSimpleSendInstructionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSimpleSendInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSimpleSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSimpleSendInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalSimpleSendInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalSimpleSendInstructionAST : public cPtr_lexicalInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mSentTerminal ;

//--- Constructor
  public: cPtr_lexicalSimpleSendInstructionAST (const GALGAS_lstring & in_mSentTerminal
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalStringMatchAST (const class cPtr_lexicalStringMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mString (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringMatchAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalStringMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalStringMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mString ;

//--- Constructor
  public: cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringNotMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringNotMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringNotMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringNotMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalStringNotMatchAST (const class cPtr_lexicalStringNotMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mString (void) const ;

  public: class GALGAS_lstring readProperty_mErrorMessage (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringNotMatchAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringNotMatchAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringNotMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalStringNotMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalStringNotMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mString ;
  public: GALGAS_lstring mProperty_mErrorMessage ;

//--- Constructor
  public: cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                         const GALGAS_lstring & in_mErrorMessage
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalTagInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTagInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalTagInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalTagInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalTagInstructionAST (const class cPtr_lexicalTagInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLexicalTagName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTagInstructionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTagInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalTagInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTagInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalTagInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalTagInstructionAST : public cPtr_lexicalInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mLexicalTagName ;

//--- Constructor
  public: cPtr_lexicalTagInstructionAST (const GALGAS_lstring & in_mLexicalTagName
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalUnsignedInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalUnsignedInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalUnsignedInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalUnsignedInputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalUnsignedInputArgumentAST (const class cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mUnsigned (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalUnsignedInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalUnsignedInputArgumentAST constructor_new (const class GALGAS_luint & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalUnsignedInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalUnsignedInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalUnsignedInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_luint mProperty_mUnsigned ;

//--- Constructor
  public: cPtr_lexicalUnsignedInputArgumentAST (const GALGAS_luint & in_mUnsigned
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalWarningInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalWarningInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalWarningInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalWarningInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalWarningInstructionAST (const class cPtr_lexicalWarningInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mWarningMessageName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalWarningInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalWarningInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalWarningInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalWarningInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalWarningInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalWarningInstructionAST : public cPtr_lexicalInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mWarningMessageName ;

//--- Constructor
  public: cPtr_lexicalWarningInstructionAST (const GALGAS_lstring & in_mWarningMessageName
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueComponentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueComponentAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueComponentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexiqueComponentAST (const class cPtr_lexiqueComponentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GALGAS_bool readProperty_mIsTemplate (void) const ;

  public: class GALGAS_metamodelTemplateDelimitorListAST readProperty_mTemplateDelimitorList (void) const ;

  public: class GALGAS_templateReplacementListAST readProperty_mTemplateReplacementList (void) const ;

  public: class GALGAS_lexicalAttributeListAST readProperty_mLexicalAttributeList (void) const ;

  public: class GALGAS_lexicalStyleListAST readProperty_mLexicalStyleList (void) const ;

  public: class GALGAS_terminalDeclarationListAST readProperty_mTerminalDeclarationList (void) const ;

  public: class GALGAS_lexicalMessageDeclarationListAST readProperty_mLexicalMessageDeclarationList (void) const ;

  public: class GALGAS_lexicalListDeclarationListAST readProperty_mLexicalListDeclarationList (void) const ;

  public: class GALGAS_lexicalRuleListAST readProperty_mLexicalRuleList (void) const ;

  public: class GALGAS_externRoutineListAST readProperty_mExternRoutineList (void) const ;

  public: class GALGAS_externFunctionListAST readProperty_mExternFunctionList (void) const ;

  public: class GALGAS_indexingListAST readProperty_mIndexingListAST (void) const ;

  public: class GALGAS_lstring readProperty_mIndexingDirectory (void) const ;

  public: class GALGAS_lexicalFunctionListAST readProperty_mLexicalFunctionListAST (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueComponentAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueComponentAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_metamodelTemplateDelimitorListAST & inOperand3,
                                                                   const class GALGAS_templateReplacementListAST & inOperand4,
                                                                   const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                                   const class GALGAS_lexicalStyleListAST & inOperand6,
                                                                   const class GALGAS_terminalDeclarationListAST & inOperand7,
                                                                   const class GALGAS_lexicalMessageDeclarationListAST & inOperand8,
                                                                   const class GALGAS_lexicalListDeclarationListAST & inOperand9,
                                                                   const class GALGAS_lexicalRuleListAST & inOperand10,
                                                                   const class GALGAS_externRoutineListAST & inOperand11,
                                                                   const class GALGAS_externFunctionListAST & inOperand12,
                                                                   const class GALGAS_indexingListAST & inOperand13,
                                                                   const class GALGAS_lstring & inOperand14,
                                                                   const class GALGAS_lexicalFunctionListAST & inOperand15
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueComponentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexiqueComponentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexiqueComponentAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mLexiqueComponentName ;
  public: GALGAS_bool mProperty_mIsTemplate ;
  public: GALGAS_metamodelTemplateDelimitorListAST mProperty_mTemplateDelimitorList ;
  public: GALGAS_templateReplacementListAST mProperty_mTemplateReplacementList ;
  public: GALGAS_lexicalAttributeListAST mProperty_mLexicalAttributeList ;
  public: GALGAS_lexicalStyleListAST mProperty_mLexicalStyleList ;
  public: GALGAS_terminalDeclarationListAST mProperty_mTerminalDeclarationList ;
  public: GALGAS_lexicalMessageDeclarationListAST mProperty_mLexicalMessageDeclarationList ;
  public: GALGAS_lexicalListDeclarationListAST mProperty_mLexicalListDeclarationList ;
  public: GALGAS_lexicalRuleListAST mProperty_mLexicalRuleList ;
  public: GALGAS_externRoutineListAST mProperty_mExternRoutineList ;
  public: GALGAS_externFunctionListAST mProperty_mExternFunctionList ;
  public: GALGAS_indexingListAST mProperty_mIndexingListAST ;
  public: GALGAS_lstring mProperty_mIndexingDirectory ;
  public: GALGAS_lexicalFunctionListAST mProperty_mLexicalFunctionListAST ;

//--- Constructor
  public: cPtr_lexiqueComponentAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mLexiqueComponentName,
                                    const GALGAS_bool & in_mIsTemplate,
                                    const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                    const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                    const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                    const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                    const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                    const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                    const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                    const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                    const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                    const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                    const GALGAS_indexingListAST & in_mIndexingListAST,
                                    const GALGAS_lstring & in_mIndexingDirectory,
                                    const GALGAS_lexicalFunctionListAST & in_mLexicalFunctionListAST
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3OptionComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_OptionComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_OptionComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_ (class GALGAS_commandLineOptionListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_OptionComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_ (GALGAS_commandLineOptionListAST & ioArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionComponentDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_optionComponentDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionComponentDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_optionComponentDeclarationAST (const class cPtr_optionComponentDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_commandLineOptionListAST readProperty_mOptions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionComponentDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_commandLineOptionListAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionComponentDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptions (class GALGAS_commandLineOptionListAST inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionComponentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_optionComponentDeclarationAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mOptionComponentName ;
  public: GALGAS_commandLineOptionListAST mProperty_mOptions ;

//--- Constructor
  public: cPtr_optionComponentDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_lstring & in_mOptionComponentName,
                                              const GALGAS_commandLineOptionListAST & in_mOptions
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3GuiComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_GuiComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_GuiComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_ (class GALGAS_guiSimpleAttributeListAST & ioArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (class GALGAS_withLexiqueListAST & ioArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (class GALGAS_lstringlist & ioArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_GuiComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GALGAS_withLexiqueListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GALGAS_lstringlist & ioArgument0,
                                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GALGAS_guiSimpleAttributeListAST & ioArgument0,
                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3SyntaxComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_SyntaxComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_SyntaxComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_ (class GALGAS_syntaxInstructionList & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_branchOfParseWhithInstruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_ (class GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_ (class GALGAS_syntaxInstructionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_ (class GALGAS_syntaxInstructionList & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_ (class GALGAS_syntaxRuleListAST & ioArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_ (const class GALGAS_lstring constinArgument0,
                                                       class GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_ (class GALGAS__32_lstringlist & outArgument0,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (const GALGAS_lstring constinArgument0,
                                                                                    GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GALGAS_syntaxRuleListAST & ioArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GALGAS__32_lstringlist & outArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalCallInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonterminalCallInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalCallInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_nonterminalCallInstruction (const class cPtr_nonterminalCallInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mNonterminalName (void) const ;

  public: class GALGAS_lstring readProperty_mLabelName (void) const ;

  public: class GALGAS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalCallInstruction extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalCallInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_actualParameterListAST & inOperand3,
                                                                          const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalCallInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalCallInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @nonterminalCallInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_nonterminalCallInstruction : public cPtr_syntaxInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mNonterminalName ;
  public: GALGAS_lstring mProperty_mLabelName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public: cPtr_nonterminalCallInstruction (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_lstring & in_mNonterminalName,
                                           const GALGAS_lstring & in_mLabelName,
                                           const GALGAS_actualParameterListAST & in_mActualParameterList,
                                           const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_terminalCheckInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_terminalCheckInstruction (const class cPtr_terminalCheckInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTerminalName (void) const ;

  public: class GALGAS_actualInputParameterListAST readProperty_mActualInputParameterList (void) const ;

  public: class GALGAS__32_lstringlist readProperty_mIndexingKeyList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckInstruction extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalCheckInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_actualInputParameterListAST & inOperand2,
                                                                        const class GALGAS__32_lstringlist & inOperand3,
                                                                        const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                        const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalCheckInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @terminalCheckInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_terminalCheckInstruction : public cPtr_syntaxInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTerminalName ;
  public: GALGAS_actualInputParameterListAST mProperty_mActualInputParameterList ;
  public: GALGAS__32_lstringlist mProperty_mIndexingKeyList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public: cPtr_terminalCheckInstruction (const GALGAS_location & in_mInstructionLocation,
                                         const GALGAS_lstring & in_mTerminalName,
                                         const GALGAS_actualInputParameterListAST & in_mActualInputParameterList,
                                         const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                         const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                         const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3GrammarComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_GrammarComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_GrammarComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_ (class GALGAS_lstring & outArgument0,
                                                            class GALGAS_formalParameterListAST & ioArgument1,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (const GALGAS_lstring constinArgument0,
                                                                                                 GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GALGAS_lstring & outArgument0,
                                                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_GrammarComponentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_GrammarComponentAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_GrammarComponentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_GrammarComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_galgas_33_GrammarComponentAST (const class cPtr_galgas_33_GrammarComponentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lbool readProperty_mHasIndexing (void) const ;

  public: class GALGAS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mGrammarClass (void) const ;

  public: class GALGAS_lstringlist readProperty_mSyntaxComponents (void) const ;

  public: class GALGAS_lstring readProperty_mStartSymbolName (void) const ;

  public: class GALGAS_nonTerminalLabelListAST readProperty_mStartSymbolLabelList (void) const ;

  public: class GALGAS_lstringlist readProperty_mUnusedNonterminalList (void) const ;

  public: class GALGAS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_GrammarComponentAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_GrammarComponentAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_lbool & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_lstring & inOperand3,
                                                                             const class GALGAS_lstringlist & inOperand4,
                                                                             const class GALGAS_lstring & inOperand5,
                                                                             const class GALGAS_nonTerminalLabelListAST & inOperand6,
                                                                             const class GALGAS_lstringlist & inOperand7,
                                                                             const class GALGAS_bool & inOperand8
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_GrammarComponentAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMGrammarClass (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGrammarComponentName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasIndexing (class GALGAS_lbool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeature (class GALGAS_bool inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartSymbolLabelList (class GALGAS_nonTerminalLabelListAST inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartSymbolName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponents (class GALGAS_lstringlist inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUnusedNonterminalList (class GALGAS_lstringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_GrammarComponentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @galgas3GrammarComponentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_galgas_33_GrammarComponentAST : public cPtr_semanticDeclarationAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lbool mProperty_mHasIndexing ;
  public: GALGAS_lstring mProperty_mGrammarComponentName ;
  public: GALGAS_lstring mProperty_mGrammarClass ;
  public: GALGAS_lstringlist mProperty_mSyntaxComponents ;
  public: GALGAS_lstring mProperty_mStartSymbolName ;
  public: GALGAS_nonTerminalLabelListAST mProperty_mStartSymbolLabelList ;
  public: GALGAS_lstringlist mProperty_mUnusedNonterminalList ;
  public: GALGAS_bool mProperty_mHasTranslateFeature ;

//--- Constructor
  public: cPtr_galgas_33_GrammarComponentAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_lbool & in_mHasIndexing,
                                              const GALGAS_lstring & in_mGrammarComponentName,
                                              const GALGAS_lstring & in_mGrammarClass,
                                              const GALGAS_lstringlist & in_mSyntaxComponents,
                                              const GALGAS_lstring & in_mStartSymbolName,
                                              const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                              const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                              const GALGAS_bool & in_mHasTranslateFeature
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ProgramDeclarations' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_ProgramDeclarations {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ProgramDeclarations (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ProgramDeclarations_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ProgramDeclarations_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProgramDeclarations_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProgramDeclarations_2 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ExpressionSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_ExpressionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ExpressionSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_collection_5F_value_5F_element_ (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_collection_5F_value_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_collection_5F_value_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_ (class GALGAS_lstring & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_primary_ (class GALGAS_semanticExpressionAST & outArgument0,
                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_primary_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_primary_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i2_ (GALGAS_semanticExpressionAST & outArgument0,
                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument0,
                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i4_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i6_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i12_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i16_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i17_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_term_i18_ (GALGAS_semanticExpressionAST & outArgument0,
                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_term_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_term_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_i19_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_optional_5F_type_i25_ (GALGAS_lstring & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_optional_5F_type_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_optional_5F_type_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i28_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i29_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i30_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i31_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i32_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_collection_5F_value_5F_element_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i33_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i34_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i35_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i36_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i37_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i38_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i39_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i40_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ExpressionSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ParameterArgumentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_34_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ParameterArgumentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (class GALGAS_actualParameterListAST & outArgument0,
                                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

