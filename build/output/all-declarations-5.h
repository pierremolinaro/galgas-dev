#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3DeclarationsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_DeclarationsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_acces_5F_control_ (class GGS_AccessControlAST & outArgument0,
                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_externTypeConstructorList & ioArgument1,
                                                                    class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GGS_string & outArgument0,
                                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GGS_string & outArgument0,
                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_externTypeGetterList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_externTypeMethodList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_externTypeSetterList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GGS_lstringlist & outArgument0,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                        class GGS_filewrapperTemplateListAST & outArgument1,
                                                        class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GGS_lstringlist & outArgument0,
                                                            class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                   class GGS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GGS_insertSetterListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__ (const class GGS_lstring constinArgument0,
                                                                class GGS_galgasDeclarationAST & ioArgument1,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                  class GGS_propertyInCollectionListAST & ioArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subscript_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subscript_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument0,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument0,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_filewrapperTemplateListAST & outArgument1,
                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i7_ (const GGS_lstring constinArgument0,
                                                                                          GGS_galgasDeclarationAST & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i9_ (const GGS_lstring constinArgument0,
                                                                                          GGS_galgasDeclarationAST & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i11_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i13_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i14_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i16_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i18_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i20_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i22_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i24_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i26_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i26_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i28_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i30_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i30_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i32_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i33_ (GGS_AccessControlAST & outArgument0,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i33_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i34_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i35_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i35_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i36_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i36_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i37_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i37_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i38_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i38_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i39_ (GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i39_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i39_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i40_ (GGS_insertSetterListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i40_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i40_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i41_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_propertyInCollectionListAST & ioArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_propertyInCollectionListAST & ioArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i47_ (GGS_string & outArgument0,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i47_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i47_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i48_ (GGS_string & outArgument0,
                                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i48_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i48_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i49_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                               GGS_externTypeConstructorList & ioArgument1,
                                                                                               Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i49_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i50_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_externTypeGetterList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i50_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i51_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_externTypeSetterList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i51_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i52_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_externTypeMethodList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i52_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i56_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i57_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i57_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i58_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i58_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i59_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i59_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i59_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i60_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i60_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i60_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i61_ (GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i61_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i61_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i62_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i62_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i63_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i63_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i63_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i64_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i64_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i64_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_38 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_39 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_40 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_41 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_42 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_43 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_44 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_45 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_46 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_47 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_48 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_49 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_50 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_51 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_52 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_53 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_54 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_55 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_56 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_57 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_58 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_59 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_60 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_61 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_62 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_63 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_64 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_65 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_66 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_67 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_68 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_69 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_70 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_71 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_72 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_73 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_74 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_75 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_76 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_77 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_78 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_79 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_80 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_81 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_82 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_83 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [associatedValue] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_associatedValue_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_associatedValue_5D_ (const class GGS__5B_associatedValue_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_associatedValue_5D_ (const DownEnumerator__5B_associatedValue_5D_ &) = delete ;
  private: DownEnumerator__5B_associatedValue_5D_ & operator = (const DownEnumerator__5B_associatedValue_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//--- 
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

//--- Current element access
  public: class GGS_associatedValue current (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_associatedValue> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_associatedValue_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_associatedValue_5D_ (const class GGS__5B_associatedValue_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_associatedValue_5D_ (const UpEnumerator__5B_associatedValue_5D_ &) = delete ;
  private: UpEnumerator__5B_associatedValue_5D_ & operator = (const UpEnumerator__5B_associatedValue_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }
  
//--- 
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GGS_associatedValue current (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_associatedValue> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_associatedValue_5D_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_associatedValue> mSharedArray ;

//--------------------------------- Default constructor
  public: GGS__5B_associatedValue_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_associatedValue_5D_ (const GGS__5B_associatedValue_5D_ & inSource) ;
  public: GGS__5B_associatedValue_5D_ & operator = (const GGS__5B_associatedValue_5D_ & inSource) ;

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_associatedValue_5D_ ;
  friend class DownEnumerator__5B_associatedValue_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_associatedValue_5D_ init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__5B_associatedValue_5D_ extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS__5B_associatedValue_5D_ inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_associatedValue & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS__5B_associatedValue_5D_ add_operation (const GGS__5B_associatedValue_5D_ & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_associatedValue constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_associatedValue constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_associatedValue & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_associatedValue & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_associatedValue & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_associatedValue & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_associatedValue & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_associatedValue readSubscript__3F_ (const class GGS_uint & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_associatedValue_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayTypeDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_arrayTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_arrayTypeDeclarationAST (const class cPtr_arrayTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_arrayTypeName (void) const ;

  public: class GGS_lstring readProperty_elementTypeName (void) const ;

  public: class GGS_bool readProperty_isUsefull (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayTypeDeclarationAST init_21_isPredefined_21__21__21_isUsefull_21_equatable (const class GGS_bool & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_bool & inOperand4,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayTypeDeclarationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @arrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_arrayTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (const class GGS_bool & inOperand0,
                                                                                               const class GGS_lstring & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               const class GGS_bool & inOperand3,
                                                                                               const class GGS_bool & inOperand4,
                                                                                               Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_arrayTypeName ;
  public: GGS_lstring mProperty_elementTypeName ;
  public: GGS_bool mProperty_isUsefull ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_arrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                        const GGS_lstring & in_arrayTypeName,
                                        const GGS_lstring & in_elementTypeName,
                                        const GGS_bool & in_isUsefull,
                                        const GGS_bool & in_equatable,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolsetDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolsetDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_boolsetDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolsetDeclarationAST (const class cPtr_boolsetDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mBoolsetTypeName (void) const ;

  public: class GGS_lstringlist readProperty_mFlagList (void) const ;

  public: class GGS_bool readProperty_isEquatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolsetDeclarationAST init_21_isPredefined_21__21__21_isEquatable (const class GGS_bool & inOperand0,
                                                                                        const class GGS_lstring & inOperand1,
                                                                                        const class GGS_lstringlist & inOperand2,
                                                                                        const class GGS_bool & inOperand3,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolsetDeclarationAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolsetDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolsetDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_boolsetDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolsetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (const class GGS_bool & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstringlist & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mBoolsetTypeName ;
  public: GGS_lstringlist mProperty_mFlagList ;
  public: GGS_bool mProperty_isEquatable ;


//--- Default constructor
  public: cPtr_boolsetDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolsetDeclarationAST (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mBoolsetTypeName,
                                      const GGS_lstringlist & in_mFlagList,
                                      const GGS_bool & in_isEquatable,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_classDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_classDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classDeclarationAST (const class cPtr_classDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_bool readProperty_mIsFinal (void) const ;

  public: class GGS_lstring readProperty_mClassTypeName (void) const ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;

  public: class GGS_bool readProperty_mGenerateInSeparateFile (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_clonable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_lstring & inOperand4,
                                                                                           const class GGS_bool & inOperand5,
                                                                                           const class GGS_propertyInCollectionListAST & inOperand6,
                                                                                           const class GGS_bool & inOperand7,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyInCollectionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyInCollectionListAST final {
  public: DownEnumerator_propertyInCollectionListAST (const class GGS_propertyInCollectionListAST & inList) ;

  public: ~ DownEnumerator_propertyInCollectionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyMutability current_mutability (LOCATION_ARGS) const ;
  public: class GGS_lstring current_typeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS_AccessControlAST current_accessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_hasSelector (LOCATION_ARGS) const ;
  public: class GGS_propertyInCollectionInitializationAST current_initialization (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyInCollectionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyInCollectionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyInCollectionListAST (const DownEnumerator_propertyInCollectionListAST &) = delete ;
  private: DownEnumerator_propertyInCollectionListAST & operator = (const DownEnumerator_propertyInCollectionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyInCollectionListAST final {
  public: UpEnumerator_propertyInCollectionListAST (const class GGS_propertyInCollectionListAST & inList)  ;

  public: ~ UpEnumerator_propertyInCollectionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyMutability current_mutability (LOCATION_ARGS) const ;
  public: class GGS_lstring current_typeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS_AccessControlAST current_accessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_hasSelector (LOCATION_ARGS) const ;
  public: class GGS_propertyInCollectionInitializationAST current_initialization (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyInCollectionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyInCollectionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyInCollectionListAST (const UpEnumerator_propertyInCollectionListAST &) = delete ;
  private: UpEnumerator_propertyInCollectionListAST & operator = (const UpEnumerator_propertyInCollectionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @propertyInCollectionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_propertyInCollectionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_propertyInCollectionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_propertyInCollectionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_propertyInCollectionListAST (void) = default ;

//--- Copy
  public: GGS_propertyInCollectionListAST (const GGS_propertyInCollectionListAST &) = default ;
  public: GGS_propertyInCollectionListAST & operator = (const GGS_propertyInCollectionListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_propertyInCollectionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_propertyInCollectionListAST subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_propertyInCollectionListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_propertyMutability & in_mutability,
                                                 const class GGS_lstring & in_typeName,
                                                 const class GGS_lstring & in_name,
                                                 const class GGS_AccessControlAST & in_accessControl,
                                                 const class GGS_bool & in_hasSelector,
                                                 const class GGS_propertyInCollectionInitializationAST & in_initialization
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyInCollectionListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyInCollectionListAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyInCollectionListAST class_func_listWithValue (const class GGS_propertyMutability & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_AccessControlAST & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 const class GGS_propertyInCollectionInitializationAST & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_propertyInCollectionListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_propertyMutability & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_lstring & inOperand2,
                                                    const class GGS_AccessControlAST & inOperand3,
                                                    const class GGS_bool & inOperand4,
                                                    const class GGS_propertyInCollectionInitializationAST & inOperand5
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_propertyInCollectionListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_propertyInCollectionListAST add_operation (const GGS_propertyInCollectionListAST & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_propertyMutability constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               class GGS_AccessControlAST constinArgument3,
                                               class GGS_bool constinArgument4,
                                               class GGS_propertyInCollectionInitializationAST constinArgument5,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_propertyMutability constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_AccessControlAST constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_propertyInCollectionInitializationAST constinArgument5,
                                                      class GGS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_propertyMutability & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 class GGS_AccessControlAST & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 class GGS_propertyInCollectionInitializationAST & outArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_propertyMutability & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                class GGS_AccessControlAST & outArgument3,
                                                class GGS_bool & outArgument4,
                                                class GGS_propertyInCollectionInitializationAST & outArgument5,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_propertyMutability & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_AccessControlAST & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_propertyInCollectionInitializationAST & outArgument5,
                                                      class GGS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setAccessControlAtIndex (class GGS_AccessControlAST constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setHasSelectorAtIndex (class GGS_bool constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setInitializationAtIndex (class GGS_propertyInCollectionInitializationAST constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMutabilityAtIndex (class GGS_propertyMutability constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNameAtIndex (class GGS_lstring constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_propertyMutability & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              class GGS_AccessControlAST & outArgument3,
                                              class GGS_bool & outArgument4,
                                              class GGS_propertyInCollectionInitializationAST & outArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_propertyMutability & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             class GGS_AccessControlAST & outArgument3,
                                             class GGS_bool & outArgument4,
                                             class GGS_propertyInCollectionInitializationAST & outArgument5,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_AccessControlAST getter_accessControlAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyInCollectionInitializationAST getter_initializationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyMutability getter_mutabilityAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_nameAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyInCollectionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyInCollectionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyInCollectionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_typeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyInCollectionListAST ;
  friend class DownEnumerator_propertyInCollectionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_classDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                     const class GGS_bool & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     const class GGS_lstring & inOperand3,
                                                                                     const class GGS_lstring & inOperand4,
                                                                                     const class GGS_bool & inOperand5,
                                                                                     const class GGS_propertyInCollectionListAST & inOperand6,
                                                                                     const class GGS_bool & inOperand7,
                                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_bool mProperty_mIsFinal ;
  public: GGS_lstring mProperty_mClassTypeName ;
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mGenerateInSeparateFile ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_bool mProperty_clonable ;


//--- Default constructor
  public: cPtr_classDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classDeclarationAST (const GGS_bool & in_isPredefined,
                                    const GGS_bool & in_mIsAbstract,
                                    const GGS_bool & in_mIsFinal,
                                    const GGS_lstring & in_mClassTypeName,
                                    const GGS_lstring & in_mSuperClassName,
                                    const GGS_bool & in_mGenerateInSeparateFile,
                                    const GGS_propertyInCollectionListAST & in_mPropertyList,
                                    const GGS_bool & in_clonable,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dictDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_dictDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_dictDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dictDeclarationAST (const class cPtr_dictDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDictTypeName (void) const ;

  public: class GGS_lstring readProperty_mKeyTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dictDeclarationAST init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_propertyInCollectionListAST & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dictDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dictDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dictDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_dictDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_propertyInCollectionListAST & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDictTypeName ;
  public: GGS_lstring mProperty_mKeyTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_dictDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dictDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_lstring & in_mDictTypeName,
                                   const GGS_lstring & in_mKeyTypeName,
                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                   const GGS_bool & in_equatable,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_enumDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumDeclarationAST (const class cPtr_enumDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_enumTypeName (void) const ;

  public: class GGS_enumConstantList readProperty_mConstantList (void) const ;

  public: class GGS_structComparison readProperty_comparison (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumDeclarationAST init_21_isPredefined_21__21__21_comparison (const class GGS_bool & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    const class GGS_enumConstantList & inOperand2,
                                                                                    const class GGS_structComparison & inOperand3,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//   enum structComparison
//--------------------------------------------------------------------------------------------------

class GGS_structComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_structComparison (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_equatable,
    enum_comparable
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structComparison extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structComparison class_func_comparable (LOCATION_ARGS) ;

  public: static class GGS_structComparison class_func_equatable (LOCATION_ARGS) ;

  public: static class GGS_structComparison class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isComparable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEquatable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structComparison ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumConstantList final {
  public: DownEnumerator_enumConstantList (const class GGS_enumConstantList & inList) ;

  public: ~ DownEnumerator_enumConstantList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS__5B_associatedValue_5D_ current_associatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumConstantList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumConstantList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumConstantList (const DownEnumerator_enumConstantList &) = delete ;
  private: DownEnumerator_enumConstantList & operator = (const DownEnumerator_enumConstantList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumConstantList final {
  public: UpEnumerator_enumConstantList (const class GGS_enumConstantList & inList)  ;

  public: ~ UpEnumerator_enumConstantList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS__5B_associatedValue_5D_ current_associatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumConstantList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumConstantList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumConstantList (const UpEnumerator_enumConstantList &) = delete ;
  private: UpEnumerator_enumConstantList & operator = (const UpEnumerator_enumConstantList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @enumConstantList list
//--------------------------------------------------------------------------------------------------

class GGS_enumConstantList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_enumConstantList_2E_element> mArray ;

//--- Default constructor
  public: GGS_enumConstantList (void) ;

//--- Destructor
  public: virtual ~ GGS_enumConstantList (void) = default ;

//--- Copy
  public: GGS_enumConstantList (const GGS_enumConstantList &) = default ;
  public: GGS_enumConstantList & operator = (const GGS_enumConstantList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_enumConstantList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_enumConstantList subList (const int32_t inStart,
                                         const int32_t inLength,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_enumConstantList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_name,
                                                 const class GGS__5B_associatedValue_5D_ & in_associatedValueTypeList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumConstantList init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumConstantList extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumConstantList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                      const class GGS__5B_associatedValue_5D_ & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_enumConstantList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS__5B_associatedValue_5D_ & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_enumConstantList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_enumConstantList add_operation (const GGS_enumConstantList & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS__5B_associatedValue_5D_ constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS__5B_associatedValue_5D_ constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS__5B_associatedValue_5D_ & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS__5B_associatedValue_5D_ & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS__5B_associatedValue_5D_ & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setAssociatedValueTypeListAtIndex (class GGS__5B_associatedValue_5D_ constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNameAtIndex (class GGS_lstring constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS__5B_associatedValue_5D_ & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS__5B_associatedValue_5D_ & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS__5B_associatedValue_5D_ getter_associatedValueTypeListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_nameAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumConstantList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumConstantList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_enumConstantList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumConstantList ;
  friend class DownEnumerator_enumConstantList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_enumConstantList & inOperand2,
                                                                              const class GGS_structComparison & inOperand3,
                                                                              Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_enumTypeName ;
  public: GGS_enumConstantList mProperty_mConstantList ;
  public: GGS_structComparison mProperty_comparison ;


//--- Default constructor
  public: cPtr_enumDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_lstring & in_enumTypeName,
                                   const GGS_enumConstantList & in_mConstantList,
                                   const GGS_structComparison & in_comparison,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_externTypeDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_externTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_externTypeDeclarationAST (const class cPtr_externTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mExternTypeName (void) const ;

  public: class GGS_string readProperty_mCppPreDeclarationCode (void) const ;

  public: class GGS_string readProperty_mCppClassCode (void) const ;

  public: class GGS_externTypeConstructorList readProperty_externTypeInitializerList (void) const ;

  public: class GGS_externTypeGetterList readProperty_mExternTypeGetterList (void) const ;

  public: class GGS_externTypeSetterList readProperty_mExternTypeSetterList (void) const ;

  public: class GGS_externTypeMethodList readProperty_mExternTypeMethodList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_string & inOperand2,
                                                                                                const class GGS_string & inOperand3,
                                                                                                const class GGS_externTypeConstructorList & inOperand4,
                                                                                                const class GGS_externTypeGetterList & inOperand5,
                                                                                                const class GGS_externTypeSetterList & inOperand6,
                                                                                                const class GGS_externTypeMethodList & inOperand7,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeDeclarationAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeConstructorList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_externTypeConstructorList final {
  public: DownEnumerator_externTypeConstructorList (const class GGS_externTypeConstructorList & inList) ;

  public: ~ DownEnumerator_externTypeConstructorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externTypeConstructorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externTypeConstructorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_externTypeConstructorList (const DownEnumerator_externTypeConstructorList &) = delete ;
  private: DownEnumerator_externTypeConstructorList & operator = (const DownEnumerator_externTypeConstructorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_externTypeConstructorList final {
  public: UpEnumerator_externTypeConstructorList (const class GGS_externTypeConstructorList & inList)  ;

  public: ~ UpEnumerator_externTypeConstructorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externTypeConstructorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externTypeConstructorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_externTypeConstructorList (const UpEnumerator_externTypeConstructorList &) = delete ;
  private: UpEnumerator_externTypeConstructorList & operator = (const UpEnumerator_externTypeConstructorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @externTypeConstructorList list
//--------------------------------------------------------------------------------------------------

class GGS_externTypeConstructorList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_externTypeConstructorList_2E_element> mArray ;

//--- Default constructor
  public: GGS_externTypeConstructorList (void) ;

//--- Destructor
  public: virtual ~ GGS_externTypeConstructorList (void) = default ;

//--- Copy
  public: GGS_externTypeConstructorList (const GGS_externTypeConstructorList &) = default ;
  public: GGS_externTypeConstructorList & operator = (const GGS_externTypeConstructorList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_externTypeConstructorList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_externTypeConstructorList subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_externTypeConstructorList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_typeNameFormalParameterNameList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeConstructorList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeConstructorList extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externTypeConstructorList class_func_listWithValue (const class GGS_typeNameFormalParameterNameList & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_externTypeConstructorList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_typeNameFormalParameterNameList & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_externTypeConstructorList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_externTypeConstructorList add_operation (const GGS_externTypeConstructorList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_typeNameFormalParameterNameList constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_typeNameFormalParameterNameList constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_typeNameFormalParameterNameList & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_typeNameFormalParameterNameList & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_typeNameFormalParameterNameList & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GGS_typeNameFormalParameterNameList constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_typeNameFormalParameterNameList & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_typeNameFormalParameterNameList & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeNameFormalParameterNameList getter_mParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeConstructorList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeConstructorList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeConstructorList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_externTypeConstructorList ;
  friend class DownEnumerator_externTypeConstructorList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeConstructorList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeGetterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_externTypeGetterList final {
  public: DownEnumerator_externTypeGetterList (const class GGS_externTypeGetterList & inList) ;

  public: ~ DownEnumerator_externTypeGetterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mGetterName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public: class GGS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externTypeGetterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externTypeGetterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_externTypeGetterList (const DownEnumerator_externTypeGetterList &) = delete ;
  private: DownEnumerator_externTypeGetterList & operator = (const DownEnumerator_externTypeGetterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_externTypeGetterList final {
  public: UpEnumerator_externTypeGetterList (const class GGS_externTypeGetterList & inList)  ;

  public: ~ UpEnumerator_externTypeGetterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mGetterName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public: class GGS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externTypeGetterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externTypeGetterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_externTypeGetterList (const UpEnumerator_externTypeGetterList &) = delete ;
  private: UpEnumerator_externTypeGetterList & operator = (const UpEnumerator_externTypeGetterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @externTypeGetterList list
//--------------------------------------------------------------------------------------------------

class GGS_externTypeGetterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_externTypeGetterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_externTypeGetterList (void) ;

//--- Destructor
  public: virtual ~ GGS_externTypeGetterList (void) = default ;

//--- Copy
  public: GGS_externTypeGetterList (const GGS_externTypeGetterList &) = default ;
  public: GGS_externTypeGetterList & operator = (const GGS_externTypeGetterList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_externTypeGetterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_externTypeGetterList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_externTypeGetterList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mGetterName,
                                                 const class GGS_lstring & in_mResultTypeName,
                                                 const class GGS_typeNameFormalParameterNameList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeGetterList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeGetterList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externTypeGetterList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_typeNameFormalParameterNameList & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_externTypeGetterList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_typeNameFormalParameterNameList & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_externTypeGetterList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_externTypeGetterList add_operation (const GGS_externTypeGetterList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_typeNameFormalParameterNameList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_typeNameFormalParameterNameList constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_typeNameFormalParameterNameList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_typeNameFormalParameterNameList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_typeNameFormalParameterNameList & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGetterNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GGS_typeNameFormalParameterNameList constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_typeNameFormalParameterNameList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_typeNameFormalParameterNameList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mGetterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeNameFormalParameterNameList getter_mParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mResultTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeGetterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeGetterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeGetterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_externTypeGetterList ;
  friend class DownEnumerator_externTypeGetterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeGetterList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeMethodList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_externTypeMethodList final {
  public: DownEnumerator_externTypeMethodList (const class GGS_externTypeMethodList & inList) ;

  public: ~ DownEnumerator_externTypeMethodList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externTypeMethodList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externTypeMethodList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_externTypeMethodList (const DownEnumerator_externTypeMethodList &) = delete ;
  private: DownEnumerator_externTypeMethodList & operator = (const DownEnumerator_externTypeMethodList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_externTypeMethodList final {
  public: UpEnumerator_externTypeMethodList (const class GGS_externTypeMethodList & inList)  ;

  public: ~ UpEnumerator_externTypeMethodList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externTypeMethodList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externTypeMethodList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_externTypeMethodList (const UpEnumerator_externTypeMethodList &) = delete ;
  private: UpEnumerator_externTypeMethodList & operator = (const UpEnumerator_externTypeMethodList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @externTypeMethodList list
//--------------------------------------------------------------------------------------------------

class GGS_externTypeMethodList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_externTypeMethodList_2E_element> mArray ;

//--- Default constructor
  public: GGS_externTypeMethodList (void) ;

//--- Destructor
  public: virtual ~ GGS_externTypeMethodList (void) = default ;

//--- Copy
  public: GGS_externTypeMethodList (const GGS_externTypeMethodList &) = default ;
  public: GGS_externTypeMethodList & operator = (const GGS_externTypeMethodList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_externTypeMethodList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_externTypeMethodList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_externTypeMethodList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mMethodName,
                                                 const class GGS_formalParameterListAST & in_mFormalParameterList,
                                                 const class GGS_location & in_mDeclarationLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeMethodList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeMethodList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externTypeMethodList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                          const class GGS_formalParameterListAST & inOperand1,
                                                                          const class GGS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_externTypeMethodList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_formalParameterListAST & inOperand1,
                                                    const class GGS_location & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_externTypeMethodList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_externTypeMethodList add_operation (const GGS_externTypeMethodList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_formalParameterListAST constinArgument1,
                                               class GGS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_formalParameterListAST constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_formalParameterListAST & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_formalParameterListAST & outArgument1,
                                                class GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_formalParameterListAST & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationLocationAtIndex (class GGS_location constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListAtIndex (class GGS_formalParameterListAST constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMethodNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_formalParameterListAST & outArgument1,
                                              class GGS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_formalParameterListAST & outArgument1,
                                             class GGS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mDeclarationLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListAST getter_mFormalParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mMethodNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeMethodList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeMethodList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeMethodList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_externTypeMethodList ;
  friend class DownEnumerator_externTypeMethodList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeMethodList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeSetterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_externTypeSetterList final {
  public: DownEnumerator_externTypeSetterList (const class GGS_externTypeSetterList & inList) ;

  public: ~ DownEnumerator_externTypeSetterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSetterName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externTypeSetterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externTypeSetterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_externTypeSetterList (const DownEnumerator_externTypeSetterList &) = delete ;
  private: DownEnumerator_externTypeSetterList & operator = (const DownEnumerator_externTypeSetterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_externTypeSetterList final {
  public: UpEnumerator_externTypeSetterList (const class GGS_externTypeSetterList & inList)  ;

  public: ~ UpEnumerator_externTypeSetterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSetterName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externTypeSetterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externTypeSetterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_externTypeSetterList (const UpEnumerator_externTypeSetterList &) = delete ;
  private: UpEnumerator_externTypeSetterList & operator = (const UpEnumerator_externTypeSetterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @externTypeSetterList list
//--------------------------------------------------------------------------------------------------

class GGS_externTypeSetterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_externTypeSetterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_externTypeSetterList (void) ;

//--- Destructor
  public: virtual ~ GGS_externTypeSetterList (void) = default ;

//--- Copy
  public: GGS_externTypeSetterList (const GGS_externTypeSetterList &) = default ;
  public: GGS_externTypeSetterList & operator = (const GGS_externTypeSetterList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_externTypeSetterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_externTypeSetterList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_externTypeSetterList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSetterName,
                                                 const class GGS_formalParameterListAST & in_mFormalParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeSetterList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeSetterList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externTypeSetterList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                          const class GGS_formalParameterListAST & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_externTypeSetterList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_formalParameterListAST & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_externTypeSetterList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_externTypeSetterList add_operation (const GGS_externTypeSetterList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_formalParameterListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_formalParameterListAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_formalParameterListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_formalParameterListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_formalParameterListAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListAtIndex (class GGS_formalParameterListAST constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSetterNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_formalParameterListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_formalParameterListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListAST getter_mFormalParameterListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSetterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeSetterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeSetterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externTypeSetterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_externTypeSetterList ;
  friend class DownEnumerator_externTypeSetterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeSetterList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @externTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_externTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_string & inOperand2,
                                                                                          const class GGS_string & inOperand3,
                                                                                          const class GGS_externTypeConstructorList & inOperand4,
                                                                                          const class GGS_externTypeGetterList & inOperand5,
                                                                                          const class GGS_externTypeSetterList & inOperand6,
                                                                                          const class GGS_externTypeMethodList & inOperand7,
                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mExternTypeName ;
  public: GGS_string mProperty_mCppPreDeclarationCode ;
  public: GGS_string mProperty_mCppClassCode ;
  public: GGS_externTypeConstructorList mProperty_externTypeInitializerList ;
  public: GGS_externTypeGetterList mProperty_mExternTypeGetterList ;
  public: GGS_externTypeSetterList mProperty_mExternTypeSetterList ;
  public: GGS_externTypeMethodList mProperty_mExternTypeMethodList ;


//--- Default constructor
  public: cPtr_externTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                         const GGS_lstring & in_mExternTypeName,
                                         const GGS_string & in_mCppPreDeclarationCode,
                                         const GGS_string & in_mCppClassCode,
                                         const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                         const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                         const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                         const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_graphDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_graphDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_graphDeclarationAST (const class cPtr_graphDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGraphTypeName (void) const ;

  public: class GGS_lstring readProperty_mAssociatedListTypeName (void) const ;

  public: class GGS_graphInsertModifierList readProperty_mInsertModifierList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphDeclarationAST init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_graphInsertModifierList & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_graphDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphInsertModifierList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_graphInsertModifierList final {
  public: DownEnumerator_graphInsertModifierList (const class GGS_graphInsertModifierList & inList) ;

  public: ~ DownEnumerator_graphInsertModifierList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInsertModifierName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mInsertErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_graphInsertModifierList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_graphInsertModifierList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_graphInsertModifierList (const DownEnumerator_graphInsertModifierList &) = delete ;
  private: DownEnumerator_graphInsertModifierList & operator = (const DownEnumerator_graphInsertModifierList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_graphInsertModifierList final {
  public: UpEnumerator_graphInsertModifierList (const class GGS_graphInsertModifierList & inList)  ;

  public: ~ UpEnumerator_graphInsertModifierList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInsertModifierName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mInsertErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_graphInsertModifierList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_graphInsertModifierList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_graphInsertModifierList (const UpEnumerator_graphInsertModifierList &) = delete ;
  private: UpEnumerator_graphInsertModifierList & operator = (const UpEnumerator_graphInsertModifierList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @graphInsertModifierList list
//--------------------------------------------------------------------------------------------------

class GGS_graphInsertModifierList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_graphInsertModifierList_2E_element> mArray ;

//--- Default constructor
  public: GGS_graphInsertModifierList (void) ;

//--- Destructor
  public: virtual ~ GGS_graphInsertModifierList (void) = default ;

//--- Copy
  public: GGS_graphInsertModifierList (const GGS_graphInsertModifierList &) = default ;
  public: GGS_graphInsertModifierList & operator = (const GGS_graphInsertModifierList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_graphInsertModifierList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_graphInsertModifierList subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_graphInsertModifierList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInsertModifierName,
                                                 const class GGS_lstring & in_mInsertErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphInsertModifierList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphInsertModifierList extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphInsertModifierList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_graphInsertModifierList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_graphInsertModifierList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_graphInsertModifierList add_operation (const GGS_graphInsertModifierList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertModifierNameAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInsertErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInsertModifierNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_graphInsertModifierList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_graphInsertModifierList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_graphInsertModifierList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_graphInsertModifierList ;
  friend class DownEnumerator_graphInsertModifierList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphInsertModifierList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @graphDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_graphDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void graphDeclarationAST_init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_graphInsertModifierList & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGraphTypeName ;
  public: GGS_lstring mProperty_mAssociatedListTypeName ;
  public: GGS_graphInsertModifierList mProperty_mInsertModifierList ;


//--- Default constructor
  public: cPtr_graphDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_graphDeclarationAST (const GGS_bool & in_isPredefined,
                                    const GGS_lstring & in_mGraphTypeName,
                                    const GGS_lstring & in_mAssociatedListTypeName,
                                    const GGS_graphInsertModifierList & in_mInsertModifierList,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_listDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_listDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_listDeclarationAST (const class cPtr_listDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mListTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_usefullList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listDeclarationAST init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GGS_bool & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                  const class GGS_bool & inOperand3,
                                                                                                  const class GGS_bool & inOperand4,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @listDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                            const class GGS_bool & inOperand3,
                                                                                            const class GGS_bool & inOperand4,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mListTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_bool mProperty_usefullList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_listDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_lstring & in_mListTypeName,
                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                   const GGS_bool & in_usefullList,
                                   const GGS_bool & in_equatable,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_mapDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_mapDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_mapDeclarationAST (const class cPtr_mapDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMapTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_insertSetterListAST readProperty_mInsertSetterList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mSearchMethodList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mSearchSubscriptList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mRemoveSetterList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mReplaceSetterList (void) const ;

  public: class GGS_insertOrReplaceDeclarationListAST readProperty_mInsertOrReplaceDeclarationListAST (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                                          const class GGS_lstring & inOperand1,
                                                                                                          const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                          const class GGS_insertSetterListAST & inOperand3,
                                                                                                          const class GGS_mapAccessorListAST & inOperand4,
                                                                                                          const class GGS_mapAccessorListAST & inOperand5,
                                                                                                          const class GGS_mapAccessorListAST & inOperand6,
                                                                                                          const class GGS_mapAccessorListAST & inOperand7,
                                                                                                          const class GGS_insertOrReplaceDeclarationListAST & inOperand8,
                                                                                                          const class GGS_bool & inOperand9,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapDeclarationAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_mapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertOrReplaceDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_insertOrReplaceDeclarationListAST final {
  public: DownEnumerator_insertOrReplaceDeclarationListAST (const class GGS_insertOrReplaceDeclarationListAST & inList) ;

  public: ~ DownEnumerator_insertOrReplaceDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertOrReplaceDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_insertOrReplaceDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_insertOrReplaceDeclarationListAST (const DownEnumerator_insertOrReplaceDeclarationListAST &) = delete ;
  private: DownEnumerator_insertOrReplaceDeclarationListAST & operator = (const DownEnumerator_insertOrReplaceDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_insertOrReplaceDeclarationListAST final {
  public: UpEnumerator_insertOrReplaceDeclarationListAST (const class GGS_insertOrReplaceDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_insertOrReplaceDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertOrReplaceDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_insertOrReplaceDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_insertOrReplaceDeclarationListAST (const UpEnumerator_insertOrReplaceDeclarationListAST &) = delete ;
  private: UpEnumerator_insertOrReplaceDeclarationListAST & operator = (const UpEnumerator_insertOrReplaceDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @insertOrReplaceDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_insertOrReplaceDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_insertOrReplaceDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_insertOrReplaceDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_insertOrReplaceDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST &) = default ;
  public: GGS_insertOrReplaceDeclarationListAST & operator = (const GGS_insertOrReplaceDeclarationListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_insertOrReplaceDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_insertOrReplaceDeclarationListAST subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_insertOrReplaceDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mInsertOrReplaceDeclarationLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertOrReplaceDeclarationListAST init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertOrReplaceDeclarationListAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertOrReplaceDeclarationListAST class_func_listWithValue (const class GGS_location & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_insertOrReplaceDeclarationListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_location & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_insertOrReplaceDeclarationListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_insertOrReplaceDeclarationListAST add_operation (const GGS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertOrReplaceDeclarationLocationAtIndex (class GGS_location constinArgument0,
                                                                                      class GGS_uint constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mInsertOrReplaceDeclarationLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertOrReplaceDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertOrReplaceDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertOrReplaceDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_insertOrReplaceDeclarationListAST ;
  friend class DownEnumerator_insertOrReplaceDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertSetterListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_insertSetterListAST final {
  public: DownEnumerator_insertSetterListAST (const class GGS_insertSetterListAST & inList) ;

  public: ~ DownEnumerator_insertSetterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInsertMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mShadowErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertSetterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_insertSetterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_insertSetterListAST (const DownEnumerator_insertSetterListAST &) = delete ;
  private: DownEnumerator_insertSetterListAST & operator = (const DownEnumerator_insertSetterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_insertSetterListAST final {
  public: UpEnumerator_insertSetterListAST (const class GGS_insertSetterListAST & inList)  ;

  public: ~ UpEnumerator_insertSetterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInsertMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mShadowErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertSetterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_insertSetterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_insertSetterListAST (const UpEnumerator_insertSetterListAST &) = delete ;
  private: UpEnumerator_insertSetterListAST & operator = (const UpEnumerator_insertSetterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @insertSetterListAST list
//--------------------------------------------------------------------------------------------------

class GGS_insertSetterListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_insertSetterListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_insertSetterListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_insertSetterListAST (void) = default ;

//--- Copy
  public: GGS_insertSetterListAST (const GGS_insertSetterListAST &) = default ;
  public: GGS_insertSetterListAST & operator = (const GGS_insertSetterListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_insertSetterListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_insertSetterListAST subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_insertSetterListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInsertMethodName,
                                                 const class GGS_lstring & in_mErrorMessage,
                                                 const class GGS_lstring & in_mShadowErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertSetterListAST init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertSetterListAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertSetterListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstring & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_insertSetterListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_lstring & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_insertSetterListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_insertSetterListAST add_operation (const GGS_insertSetterListAST & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodNameAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMShadowErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInsertMethodNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mShadowErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertSetterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertSetterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertSetterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_insertSetterListAST ;
  friend class DownEnumerator_insertSetterListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertSetterListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapAccessorListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_mapAccessorListAST final {
  public: DownEnumerator_mapAccessorListAST (const class GGS_mapAccessorListAST & inList) ;

  public: ~ DownEnumerator_mapAccessorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapAccessorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_mapAccessorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_mapAccessorListAST (const DownEnumerator_mapAccessorListAST &) = delete ;
  private: DownEnumerator_mapAccessorListAST & operator = (const DownEnumerator_mapAccessorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_mapAccessorListAST final {
  public: UpEnumerator_mapAccessorListAST (const class GGS_mapAccessorListAST & inList)  ;

  public: ~ UpEnumerator_mapAccessorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapAccessorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_mapAccessorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_mapAccessorListAST (const UpEnumerator_mapAccessorListAST &) = delete ;
  private: UpEnumerator_mapAccessorListAST & operator = (const UpEnumerator_mapAccessorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @mapAccessorListAST list
//--------------------------------------------------------------------------------------------------

class GGS_mapAccessorListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_mapAccessorListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_mapAccessorListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_mapAccessorListAST (void) = default ;

//--- Copy
  public: GGS_mapAccessorListAST (const GGS_mapAccessorListAST &) = default ;
  public: GGS_mapAccessorListAST & operator = (const GGS_mapAccessorListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_mapAccessorListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_mapAccessorListAST subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_mapAccessorListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_lstring & in_mErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapAccessorListAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapAccessorListAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapAccessorListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_mapAccessorListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_mapAccessorListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_mapAccessorListAST add_operation (const GGS_mapAccessorListAST & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mapAccessorListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mapAccessorListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mapAccessorListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_mapAccessorListAST ;
  friend class DownEnumerator_mapAccessorListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapAccessorListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @mapDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_mapDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                                    const class GGS_lstring & inOperand1,
                                                                                                    const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                    const class GGS_insertSetterListAST & inOperand3,
                                                                                                    const class GGS_mapAccessorListAST & inOperand4,
                                                                                                    const class GGS_mapAccessorListAST & inOperand5,
                                                                                                    const class GGS_mapAccessorListAST & inOperand6,
                                                                                                    const class GGS_mapAccessorListAST & inOperand7,
                                                                                                    const class GGS_insertOrReplaceDeclarationListAST & inOperand8,
                                                                                                    const class GGS_bool & inOperand9,
                                                                                                    Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mMapTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_insertSetterListAST mProperty_mInsertSetterList ;
  public: GGS_mapAccessorListAST mProperty_mSearchMethodList ;
  public: GGS_mapAccessorListAST mProperty_mSearchSubscriptList ;
  public: GGS_mapAccessorListAST mProperty_mRemoveSetterList ;
  public: GGS_mapAccessorListAST mProperty_mReplaceSetterList ;
  public: GGS_insertOrReplaceDeclarationListAST mProperty_mInsertOrReplaceDeclarationListAST ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_mapDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_mapDeclarationAST (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mMapTypeName,
                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                  const GGS_insertSetterListAST & in_mInsertSetterList,
                                  const GGS_mapAccessorListAST & in_mSearchMethodList,
                                  const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                  const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                  const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                  const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                  const GGS_bool & in_equatable,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedListDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_sortedListDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_sortedListDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sortedListDeclarationAST (const class cPtr_sortedListDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSortedListTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_sortedListSortDescriptorListAST readProperty_mSortDescriptorList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedListDeclarationAST init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                             const class GGS_sortedListSortDescriptorListAST & inOperand3,
                                                                                             const class GGS_bool & inOperand4,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListDeclarationAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedListDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedListSortDescriptorListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_sortedListSortDescriptorListAST final {
  public: DownEnumerator_sortedListSortDescriptorListAST (const class GGS_sortedListSortDescriptorListAST & inList) ;

  public: ~ DownEnumerator_sortedListSortDescriptorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortedListSortDescriptorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sortedListSortDescriptorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sortedListSortDescriptorListAST (const DownEnumerator_sortedListSortDescriptorListAST &) = delete ;
  private: DownEnumerator_sortedListSortDescriptorListAST & operator = (const DownEnumerator_sortedListSortDescriptorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sortedListSortDescriptorListAST final {
  public: UpEnumerator_sortedListSortDescriptorListAST (const class GGS_sortedListSortDescriptorListAST & inList)  ;

  public: ~ UpEnumerator_sortedListSortDescriptorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortedListSortDescriptorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sortedListSortDescriptorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sortedListSortDescriptorListAST (const UpEnumerator_sortedListSortDescriptorListAST &) = delete ;
  private: UpEnumerator_sortedListSortDescriptorListAST & operator = (const UpEnumerator_sortedListSortDescriptorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @sortedListSortDescriptorListAST list
//--------------------------------------------------------------------------------------------------

class GGS_sortedListSortDescriptorListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_sortedListSortDescriptorListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_sortedListSortDescriptorListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_sortedListSortDescriptorListAST (void) = default ;

//--- Copy
  public: GGS_sortedListSortDescriptorListAST (const GGS_sortedListSortDescriptorListAST &) = default ;
  public: GGS_sortedListSortDescriptorListAST & operator = (const GGS_sortedListSortDescriptorListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_sortedListSortDescriptorListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_sortedListSortDescriptorListAST subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_sortedListSortDescriptorListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSortedAttributeName,
                                                 const class GGS_bool & in_mAscending
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedListSortDescriptorListAST init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListSortDescriptorListAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortedListSortDescriptorListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_bool & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_sortedListSortDescriptorListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_bool & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_sortedListSortDescriptorListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_sortedListSortDescriptorListAST add_operation (const GGS_sortedListSortDescriptorListAST & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bool constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAscendingAtIndex (class GGS_bool constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortedAttributeNameAtIndex (class GGS_lstring constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bool & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mAscendingAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSortedAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sortedListSortDescriptorListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sortedListSortDescriptorListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sortedListSortDescriptorListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sortedListSortDescriptorListAST ;
  friend class DownEnumerator_sortedListSortDescriptorListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sortedListDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_sortedListDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                       const class GGS_sortedListSortDescriptorListAST & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSortedListTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_sortedListSortDescriptorListAST mProperty_mSortDescriptorList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_sortedListDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sortedListDeclarationAST (const GGS_bool & in_isPredefined,
                                         const GGS_lstring & in_mSortedListTypeName,
                                         const GGS_propertyInCollectionListAST & in_mPropertyList,
                                         const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                         const GGS_bool & in_equatable,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_structDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_structDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structDeclarationAST (const class cPtr_structDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_structTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mStructurePropertyListAST (void) const ;

  public: class GGS_string readProperty_enumeratedElementTypeName (void) const ;

  public: class GGS_structComparison readProperty_comparison (void) const ;

  public: class GGS_bool readProperty_isUsefullStruct (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structDeclarationAST init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const class GGS_bool & inOperand0,
                                                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                                                      const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                                                      const class GGS_string & inOperand3,
                                                                                                                                      const class GGS_structComparison & inOperand4,
                                                                                                                                      const class GGS_bool & inOperand5,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structDeclarationAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_structDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_lstring & inOperand1,
                                                                                                                                const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                                                const class GGS_string & inOperand3,
                                                                                                                                const class GGS_structComparison & inOperand4,
                                                                                                                                const class GGS_bool & inOperand5,
                                                                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_structTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mStructurePropertyListAST ;
  public: GGS_string mProperty_enumeratedElementTypeName ;
  public: GGS_structComparison mProperty_comparison ;
  public: GGS_bool mProperty_isUsefullStruct ;


//--- Default constructor
  public: cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structDeclarationAST (const GGS_bool & in_isPredefined,
                                     const GGS_lstring & in_structTypeName,
                                     const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                     const GGS_string & in_enumeratedElementTypeName,
                                     const GGS_structComparison & in_comparison,
                                     const GGS_bool & in_isUsefullStruct,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @weakReferenceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_weakReferenceDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_weakReferenceDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_weakReferenceDeclarationAST (const class cPtr_weakReferenceDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mClassTypeName (void) const ;

  public: class GGS_lstring readProperty_mWeakReferenceTypeName (void) const ;

  public: class GGS_lstring readProperty_mSuperWeakReferenceTypeName (void) const ;

  public: class GGS_bool readProperty_mGenerateInSeparateFile (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_weakReferenceDeclarationAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_lstring & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_weakReferenceDeclarationAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_weakReferenceDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @weakReferenceDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_weakReferenceDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_lstring & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mClassTypeName ;
  public: GGS_lstring mProperty_mWeakReferenceTypeName ;
  public: GGS_lstring mProperty_mSuperWeakReferenceTypeName ;
  public: GGS_bool mProperty_mGenerateInSeparateFile ;


//--- Default constructor
  public: cPtr_weakReferenceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_weakReferenceDeclarationAST (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_mClassTypeName,
                                            const GGS_lstring & in_mWeakReferenceTypeName,
                                            const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                            const GGS_bool & in_mGenerateInSeparateFile,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//   enum AccessControlAST
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_AccessControlAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_publicAccess,
    enum_protectedAccess,
    enum_protectedSetAccess,
    enum_privateAccess,
    enum_privateSetAccess,
    enum_fileprivateAccess,
    enum_fileprivateSetAccess
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateAccess (class GGS_location & out_declarationLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateSetAccess (class GGS_location & out_declarationLocation) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControlAST class_func_fileprivateAccess (const class GGS_location & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_fileprivateSetAccess (const class GGS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_privateAccess (LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_privateSetAccess (LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_protectedAccess (LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_protectedSetAccess (LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_publicAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractFileprivateAccess (class GGS_location & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFileprivateSetAccess (class GGS_location & outArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_AccessControlAST_2E_fileprivateAccess_3F_ getter_getFileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ getter_getFileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProtectedAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProtectedSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPublicAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST ;

//--------------------------------------------------------------------------------------------------
//   enum propertyMutability
//--------------------------------------------------------------------------------------------------

class GGS_propertyMutability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertyMutability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_constantProperty,
    enum_mutableProperty,
    enum_weakProperty
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMutability extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMutability class_func_constantProperty (LOCATION_ARGS) ;

  public: static class GGS_propertyMutability class_func_mutableProperty (LOCATION_ARGS) ;

  public: static class GGS_propertyMutability class_func_weakProperty (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isConstantProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMutableProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isWeakProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMutability ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeArrayTypeLName (const class GGS_lstring & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeEmbeddedTypeLName (const class GGS_lstring & constinArgument0,
                                                  const class GGS_lstring & constinArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeWeakTypeLName (const class GGS_lstring & constinArgument0,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeNameFormalParameterNameList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typeNameFormalParameterNameList final {
  public: DownEnumerator_typeNameFormalParameterNameList (const class GGS_typeNameFormalParameterNameList & inList) ;

  public: ~ DownEnumerator_typeNameFormalParameterNameList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalParameterTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalParameterName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeNameFormalParameterNameList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_typeNameFormalParameterNameList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_typeNameFormalParameterNameList (const DownEnumerator_typeNameFormalParameterNameList &) = delete ;
  private: DownEnumerator_typeNameFormalParameterNameList & operator = (const DownEnumerator_typeNameFormalParameterNameList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typeNameFormalParameterNameList final {
  public: UpEnumerator_typeNameFormalParameterNameList (const class GGS_typeNameFormalParameterNameList & inList)  ;

  public: ~ UpEnumerator_typeNameFormalParameterNameList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalParameterTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalParameterName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeNameFormalParameterNameList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_typeNameFormalParameterNameList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_typeNameFormalParameterNameList (const UpEnumerator_typeNameFormalParameterNameList &) = delete ;
  private: UpEnumerator_typeNameFormalParameterNameList & operator = (const UpEnumerator_typeNameFormalParameterNameList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @typeNameFormalParameterNameList list
//--------------------------------------------------------------------------------------------------

class GGS_typeNameFormalParameterNameList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_typeNameFormalParameterNameList_2E_element> mArray ;

//--- Default constructor
  public: GGS_typeNameFormalParameterNameList (void) ;

//--- Destructor
  public: virtual ~ GGS_typeNameFormalParameterNameList (void) = default ;

//--- Copy
  public: GGS_typeNameFormalParameterNameList (const GGS_typeNameFormalParameterNameList &) = default ;
  public: GGS_typeNameFormalParameterNameList & operator = (const GGS_typeNameFormalParameterNameList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_typeNameFormalParameterNameList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_typeNameFormalParameterNameList subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_typeNameFormalParameterNameList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_lstring & in_mFormalParameterTypeName,
                                                 const class GGS_lstring & in_mFormalParameterName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeNameFormalParameterNameList init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeNameFormalParameterNameList extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeNameFormalParameterNameList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_typeNameFormalParameterNameList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_lstring & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_typeNameFormalParameterNameList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_typeNameFormalParameterNameList add_operation (const GGS_typeNameFormalParameterNameList & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterNameAtIndex (class GGS_lstring constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalParameterTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeNameFormalParameterNameList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeNameFormalParameterNameList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeNameFormalParameterNameList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_typeNameFormalParameterNameList ;
  friend class DownEnumerator_typeNameFormalParameterNameList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControlAST checkCompatibilityWithLet'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompatibilityWithLet (const class GGS_AccessControlAST inObject,
                                                const class GGS_location constin_inLocation,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (class GGS_galgasDeclarationAST & ioObject,
                                          class GGS_lstring & out_outOptionalTypeName,
                                          const class GGS_lstring constin_inTypeName,
                                          const class GGS_bool constin_inPredefined,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @associatedValue struct
//--------------------------------------------------------------------------------------------------

class GGS_associatedValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_weakQualifier ;
  public: inline GGS_bool readProperty_weakQualifier (void) const {
    return mProperty_weakQualifier ;
  }

  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_lstring mProperty_valueName ;
  public: inline GGS_lstring readProperty_valueName (void) const {
    return mProperty_valueName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_associatedValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setWeakQualifier (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_weakQualifier = inValue ;
  }

  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setValueName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_valueName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_associatedValue (const GGS_bool & in_weakQualifier,
                               const GGS_lstring & in_typeName,
                               const GGS_lstring & in_valueName) ;

//--------------------------------- Copy constructor
  public: GGS_associatedValue (const GGS_associatedValue & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_associatedValue & operator = (const GGS_associatedValue & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_associatedValue init_21__21__21_ (const class GGS_bool & inOperand0,
                                                       const class GGS_lstring & inOperand1,
                                                       const class GGS_lstring & inOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_associatedValue extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValue ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3LexiqueComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_LexiqueComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_LexiqueComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (class GGS_lexicalAttributeListAST & ioArgument0,
                                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (class GGS_lexicalRuleListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_ (class GGS_lexicalExpressionAST & outArgument0,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_ (class GGS_lexicalExpressionAST & outArgument0,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (class GGS_lexicalRuleListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (class GGS_indexingListAST & ioArgument0,
                                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_ (class GGS_lexicalInstructionListAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (class GGS_lexicalListDeclarationListAST & ioArgument0,
                                                                         class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_ (class GGS_lexicalListEntryListAST & ioArgument0,
                                                        class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (class GGS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                            class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_ (class GGS_lexicalInstructionAST & outArgument0,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_ (class GGS_lexicalExpressionAST & outArgument0,
                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_ (class GGS_lexicalWhileBranchListAST & ioArgument0,
                                                         class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_5F_ggs_33__ (class GGS_lexicalStyleListAST & ioArgument0,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_5F_ggs_33__ (class GGS_templateDelimitorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_5F_ggs_33__ (class GGS_templateReplacementListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_5F_ggs_33__ (class GGS_terminalDeclarationListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_ (GGS_indexingListAST & ioArgument0,
                                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_ (GGS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_ (GGS_lexicalRuleListAST & ioArgument0,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_ (GGS_lexicalRuleListAST & ioArgument0,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_ (GGS_lexicalWhileBranchListAST & ioArgument0,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_ (GGS_lexicalExpressionAST & outArgument0,
                                                                              Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_ (GGS_lexicalListDeclarationListAST & ioArgument0,
                                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_ (GGS_lexicalListEntryListAST & ioArgument0,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_ (GGS_lexicalAttributeListAST & ioArgument0,
                                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_ (GGS_terminalDeclarationListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_ (GGS_lexicalStyleListAST & ioArgument0,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i25_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i25_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i26_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i26_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i31_ (GGS_lexicalInstructionAST & outArgument0,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i31_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_ (GGS_lexicalInstructionAST & outArgument0,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i34_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i35_ (GGS_templateDelimitorListAST & ioArgument0,
                                                                                               Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i36_ (GGS_templateReplacementListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalAttributeInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalAttributeInputArgumentAST (const class cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mAttributeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalAttributeInputArgumentAST init_21_ (const class GGS_lstring & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalAttributeInputArgumentAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalAttributeInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalAttributeInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalAttributeInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalAttributeInputArgumentAST_init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mAttributeName ;


//--- Default constructor
  public: cPtr_lexicalAttributeInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalAttributeInputArgumentAST (const GGS_lstring & in_mAttributeName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterInputArgumentAST (const class cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterInputArgumentAST init_21_ (const class GGS_lchar & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterInputArgumentAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterInputArgumentAST_init_21_ (const class GGS_lchar & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_lexicalCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterInputArgumentAST (const GGS_lchar & in_mCharacter,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterIntervalMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterIntervalMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterIntervalMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterIntervalMatchAST (const class cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mLowerBound (void) const ;

  public: class GGS_lchar readProperty_mUpperBound (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterIntervalMatchAST init_21__21_ (const class GGS_lchar & inOperand0,
                                                                    const class GGS_lchar & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterIntervalMatchAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterIntervalMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterIntervalMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterIntervalMatchAST_init_21__21_ (const class GGS_lchar & inOperand0,
                                                              const class GGS_lchar & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mLowerBound ;
  public: GGS_lchar mProperty_mUpperBound ;


//--- Default constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (const GGS_lchar & in_mLowerBound,
                                                 const GGS_lchar & in_mUpperBound,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterMatchAST (const class cPtr_lexicalCharacterMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterMatchAST init_21_ (const class GGS_lchar & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterMatchAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterMatchAST_init_21_ (const class GGS_lchar & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_lexicalCharacterMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterMatchAST (const GGS_lchar & in_mCharacter,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterSetMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterSetMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterSetMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterSetMatchAST (const class cPtr_lexicalCharacterSetMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mCharacterSetName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterSetMatchAST init_21_ (const class GGS_lstring & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCharacterSetMatchAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterSetMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterSetMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterSetMatchAST_init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mCharacterSetName ;


//--- Default constructor
  public: cPtr_lexicalCharacterSetMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterSetMatchAST (const GGS_lstring & in_mCharacterSetName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCurrentCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCurrentCharacterInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCurrentCharacterInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCurrentCharacterInputArgumentAST (const class cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCurrentCharacterInputArgumentAST init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalCurrentCharacterInputArgumentAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCurrentCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCurrentCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCurrentCharacterInputArgumentAST_init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_lexicalCurrentCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCurrentCharacterInputArgumentAST (const GGS_location & in_mLocation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalErrorByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalErrorByDefaultAST : public GGS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalErrorByDefaultAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalErrorByDefaultAST (const class cPtr_lexicalErrorByDefaultAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDefaultErrorMessageName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalErrorByDefaultAST init_21_ (const class GGS_lstring & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalErrorByDefaultAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalErrorByDefaultAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalErrorByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalErrorByDefaultAST_init_21_ (const class GGS_lstring & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension getter generateDefaultSendCode
  public: virtual class GGS_string getter_generateDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaDefaultSendCode
  public: virtual class GGS_string getter_generateSwiftCocoaDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDefaultErrorMessageName ;


//--- Default constructor
  public: cPtr_lexicalErrorByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalErrorByDefaultAST (const GGS_lstring & in_mDefaultErrorMessageName,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitRuleAST : public GGS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GGS_lexicalExplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalExplicitRuleAST (const class cPtr_lexicalExplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalExpressionAST readProperty_mLexicalRuleExpression (void) const ;

  public: class GGS_lexicalInstructionListAST readProperty_mInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitRuleAST init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                          const class GGS_lexicalInstructionListAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExplicitRuleAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalExplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalExplicitRuleAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalExplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalExplicitRuleAST_init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                    const class GGS_lexicalInstructionListAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension getter generateLexicalRuleCode
  public: virtual class GGS_string getter_generateLexicalRuleCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GGS_string getter_generateSwiftCocoaCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GGS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalExpressionAST mProperty_mLexicalRuleExpression ;
  public: GGS_lexicalInstructionListAST mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_lexicalExplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalExplicitRuleAST (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                       const GGS_lexicalInstructionListAST & in_mInstructionList,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalFunctionInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalFunctionInputArgumentAST (const class cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS_lexicalFunctionCallActualArgumentListAST readProperty_mFunctionActualArgumentList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionInputArgumentAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_lexicalFunctionCallActualArgumentListAST & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionInputArgumentAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalFunctionInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionCallActualArgumentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalFunctionCallActualArgumentListAST final {
  public: DownEnumerator_lexicalFunctionCallActualArgumentListAST (const class GGS_lexicalFunctionCallActualArgumentListAST & inList) ;

  public: ~ DownEnumerator_lexicalFunctionCallActualArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST current_mLexicalActualInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionCallActualArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalFunctionCallActualArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalFunctionCallActualArgumentListAST (const DownEnumerator_lexicalFunctionCallActualArgumentListAST &) = delete ;
  private: DownEnumerator_lexicalFunctionCallActualArgumentListAST & operator = (const DownEnumerator_lexicalFunctionCallActualArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalFunctionCallActualArgumentListAST final {
  public: UpEnumerator_lexicalFunctionCallActualArgumentListAST (const class GGS_lexicalFunctionCallActualArgumentListAST & inList)  ;

  public: ~ UpEnumerator_lexicalFunctionCallActualArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST current_mLexicalActualInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionCallActualArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalFunctionCallActualArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalFunctionCallActualArgumentListAST (const UpEnumerator_lexicalFunctionCallActualArgumentListAST &) = delete ;
  private: UpEnumerator_lexicalFunctionCallActualArgumentListAST & operator = (const UpEnumerator_lexicalFunctionCallActualArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalFunctionCallActualArgumentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionCallActualArgumentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalFunctionCallActualArgumentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalFunctionCallActualArgumentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalFunctionCallActualArgumentListAST (void) = default ;

//--- Copy
  public: GGS_lexicalFunctionCallActualArgumentListAST (const GGS_lexicalFunctionCallActualArgumentListAST &) = default ;
  public: GGS_lexicalFunctionCallActualArgumentListAST & operator = (const GGS_lexicalFunctionCallActualArgumentListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_lexicalFunctionCallActualArgumentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalFunctionCallActualArgumentListAST subList (const int32_t inStart,
                                                                 const int32_t inLength,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalFunctionCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionCallActualArgumentListAST init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionCallActualArgumentListAST extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionCallActualArgumentListAST class_func_listWithValue (const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalFunctionCallActualArgumentListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalFunctionCallActualArgumentListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalFunctionCallActualArgumentListAST add_operation (const GGS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalActualInputArgumentAtIndex (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                                                              class GGS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST getter_mLexicalActualInputArgumentAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionCallActualArgumentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionCallActualArgumentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionCallActualArgumentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalFunctionCallActualArgumentListAST ;
  friend class DownEnumerator_lexicalFunctionCallActualArgumentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalFunctionInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalFunctionInputArgumentAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_lexicalFunctionCallActualArgumentListAST & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS_lexicalFunctionCallActualArgumentListAST mProperty_mFunctionActualArgumentList ;


//--- Default constructor
  public: cPtr_lexicalFunctionInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalFunctionInputArgumentAST (const GGS_lstring & in_mFunctionName,
                                                const GGS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalImplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalImplicitRuleAST : public GGS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GGS_lexicalImplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalImplicitRuleAST (const class cPtr_lexicalImplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mListName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalImplicitRuleAST init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalImplicitRuleAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalImplicitRuleAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalImplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalImplicitRuleAST_init_21_ (const class GGS_lstring & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension getter generateLexicalRuleCode
  public: virtual class GGS_string getter_generateLexicalRuleCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GGS_string getter_generateSwiftCocoaCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GGS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mListName ;


//--- Default constructor
  public: cPtr_lexicalImplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalImplicitRuleAST (const GGS_lstring & in_mListName,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalOrExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalOrExpressionAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalOrExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalOrExpressionAST (const class cPtr_lexicalOrExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalExpressionAST readProperty_mLeftOperand (void) const ;

  public: class GGS_lexicalExpressionAST readProperty_mRightOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalOrExpressionAST init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                          const class GGS_lexicalExpressionAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalOrExpressionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalOrExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalOrExpressionAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalOrExpressionAST_init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                    const class GGS_lexicalExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalExpressionAST mProperty_mLeftOperand ;
  public: GGS_lexicalExpressionAST mProperty_mRightOperand ;


//--- Default constructor
  public: cPtr_lexicalOrExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalOrExpressionAST (const GGS_lexicalExpressionAST & in_mLeftOperand,
                                       const GGS_lexicalExpressionAST & in_mRightOperand,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRewindInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRewindInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalRewindInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalRewindInstructionAST (const class cPtr_lexicalRewindInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLexicalTagName (void) const ;

  public: class GGS_lstring readProperty_mTerminalName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRewindInstructionAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRewindInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRewindInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalRewindInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalRewindInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalRewindInstructionAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_lstring & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLexicalTagName ;
  public: GGS_lstring mProperty_mTerminalName ;


//--- Default constructor
  public: cPtr_lexicalRewindInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalRewindInstructionAST (const GGS_lstring & in_mLexicalTagName,
                                            const GGS_lstring & in_mTerminalName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSendTerminalByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSendTerminalByDefaultAST : public GGS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalSendTerminalByDefaultAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalSendTerminalByDefaultAST (const class cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDefaultSentTerminal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSendTerminalByDefaultAST init_21_ (const class GGS_lstring & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSendTerminalByDefaultAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSendTerminalByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalSendTerminalByDefaultAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalSendTerminalByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalSendTerminalByDefaultAST_init_21_ (const class GGS_lstring & inOperand0,
                                                         Compiler * inCompiler) ;


//--- Extension getter generateDefaultSendCode
  public: virtual class GGS_string getter_generateDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaDefaultSendCode
  public: virtual class GGS_string getter_generateSwiftCocoaDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDefaultSentTerminal ;


//--- Default constructor
  public: cPtr_lexicalSendTerminalByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalSendTerminalByDefaultAST (const GGS_lstring & in_mDefaultSentTerminal,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalStringMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalStringMatchAST (const class cPtr_lexicalStringMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStringMatchAST init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalStringMatchAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalStringMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStringMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalStringMatchAST_init_21_ (const class GGS_lstring & inOperand0,
                                               Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mString ;


//--- Default constructor
  public: cPtr_lexicalStringMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalStringMatchAST (const GGS_lstring & in_mString,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringNotMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringNotMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalStringNotMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalStringNotMatchAST (const class cPtr_lexicalStringNotMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mString (void) const ;

  public: class GGS_lstring readProperty_mErrorMessage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStringNotMatchAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalStringNotMatchAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringNotMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalStringNotMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStringNotMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalStringNotMatchAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                      const class GGS_lstring & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mString ;
  public: GGS_lstring mProperty_mErrorMessage ;


//--- Default constructor
  public: cPtr_lexicalStringNotMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalStringNotMatchAST (const GGS_lstring & in_mString,
                                         const GGS_lstring & in_mErrorMessage,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalUnsignedInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalUnsignedInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalUnsignedInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalUnsignedInputArgumentAST (const class cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbigint readProperty_mUnsigned (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalUnsignedInputArgumentAST init_21_ (const class GGS_lbigint & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalUnsignedInputArgumentAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalUnsignedInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalUnsignedInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalUnsignedInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalUnsignedInputArgumentAST_init_21_ (const class GGS_lbigint & inOperand0,
                                                         Compiler * inCompiler) ;


//--- Extension getter generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbigint mProperty_mUnsigned ;


//--- Default constructor
  public: cPtr_lexicalUnsignedInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalUnsignedInputArgumentAST (const GGS_lbigint & in_mUnsigned,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueComponentAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_lexiqueComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexiqueComponentAST (const class cPtr_lexiqueComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GGS_bool readProperty_mIsTemplate (void) const ;

  public: class GGS_templateDelimitorListAST readProperty_mTemplateDelimitorListAST (void) const ;

  public: class GGS_templateReplacementListAST readProperty_mTemplateReplacementListAST (void) const ;

  public: class GGS_lexicalAttributeListAST readProperty_mLexicalAttributeListAST (void) const ;

  public: class GGS_lexicalStyleListAST readProperty_mLexicalStyleListAST (void) const ;

  public: class GGS_terminalDeclarationListAST readProperty_mTerminalDeclarationListAST (void) const ;

  public: class GGS_lexicalMessageDeclarationListAST readProperty_mLexicalMessageDeclarationListAST (void) const ;

  public: class GGS_lexicalListDeclarationListAST readProperty_mLexicalListDeclarationListAST (void) const ;

  public: class GGS_lexicalRuleListAST readProperty_mLexicalRuleListAST (void) const ;

  public: class GGS_indexingListAST readProperty_mIndexingListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueComponentAST init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                           const class GGS_lstring & inOperand1,
                                                                                                           const class GGS_bool & inOperand2,
                                                                                                           const class GGS_templateDelimitorListAST & inOperand3,
                                                                                                           const class GGS_templateReplacementListAST & inOperand4,
                                                                                                           const class GGS_lexicalAttributeListAST & inOperand5,
                                                                                                           const class GGS_lexicalStyleListAST & inOperand6,
                                                                                                           const class GGS_terminalDeclarationListAST & inOperand7,
                                                                                                           const class GGS_lexicalMessageDeclarationListAST & inOperand8,
                                                                                                           const class GGS_lexicalListDeclarationListAST & inOperand9,
                                                                                                           const class GGS_lexicalRuleListAST & inOperand10,
                                                                                                           const class GGS_indexingListAST & inOperand11,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexiqueComponentAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @indexingListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_indexingListAST final {
  public: DownEnumerator_indexingListAST (const class GGS_indexingListAST & inList) ;

  public: ~ DownEnumerator_indexingListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mIndexName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mIndexComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_indexingListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_indexingListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_indexingListAST (const DownEnumerator_indexingListAST &) = delete ;
  private: DownEnumerator_indexingListAST & operator = (const DownEnumerator_indexingListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_indexingListAST final {
  public: UpEnumerator_indexingListAST (const class GGS_indexingListAST & inList)  ;

  public: ~ UpEnumerator_indexingListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mIndexName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mIndexComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_indexingListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_indexingListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_indexingListAST (const UpEnumerator_indexingListAST &) = delete ;
  private: UpEnumerator_indexingListAST & operator = (const UpEnumerator_indexingListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @indexingListAST list
//--------------------------------------------------------------------------------------------------

class GGS_indexingListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_indexingListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_indexingListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_indexingListAST (void) = default ;

//--- Copy
  public: GGS_indexingListAST (const GGS_indexingListAST &) = default ;
  public: GGS_indexingListAST & operator = (const GGS_indexingListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_indexingListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_indexingListAST subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_indexingListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mIndexName,
                                                 const class GGS_lstring & in_mIndexComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_indexingListAST init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_indexingListAST extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_indexingListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_indexingListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_indexingListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_indexingListAST add_operation (const GGS_indexingListAST & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexCommentAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mIndexCommentAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mIndexNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_indexingListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_indexingListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_indexingListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_indexingListAST ;
  friend class DownEnumerator_indexingListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_indexingListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalAttributeListAST final {
  public: DownEnumerator_lexicalAttributeListAST (const class GGS_lexicalAttributeListAST & inList) ;

  public: ~ DownEnumerator_lexicalAttributeListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalAttributeListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalAttributeListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalAttributeListAST (const DownEnumerator_lexicalAttributeListAST &) = delete ;
  private: DownEnumerator_lexicalAttributeListAST & operator = (const DownEnumerator_lexicalAttributeListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalAttributeListAST final {
  public: UpEnumerator_lexicalAttributeListAST (const class GGS_lexicalAttributeListAST & inList)  ;

  public: ~ UpEnumerator_lexicalAttributeListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalAttributeListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalAttributeListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalAttributeListAST (const UpEnumerator_lexicalAttributeListAST &) = delete ;
  private: UpEnumerator_lexicalAttributeListAST & operator = (const UpEnumerator_lexicalAttributeListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalAttributeListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalAttributeListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalAttributeListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalAttributeListAST (void) = default ;

//--- Copy
  public: GGS_lexicalAttributeListAST (const GGS_lexicalAttributeListAST &) = default ;
  public: GGS_lexicalAttributeListAST & operator = (const GGS_lexicalAttributeListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_lexicalAttributeListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalAttributeListAST subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalAttributeListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mTypeName,
                                                 const class GGS_lstring & in_mName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalAttributeListAST init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalAttributeListAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalAttributeListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalAttributeListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalAttributeListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalAttributeListAST add_operation (const GGS_lexicalAttributeListAST & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalAttributeListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalAttributeListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalAttributeListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalAttributeListAST ;
  friend class DownEnumerator_lexicalAttributeListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalListDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalListDeclarationListAST final {
  public: DownEnumerator_lexicalListDeclarationListAST (const class GGS_lexicalListDeclarationListAST & inList) ;

  public: ~ DownEnumerator_lexicalListDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GGS_lexicalListEntryListAST current_mEntryList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalListDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalListDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalListDeclarationListAST (const DownEnumerator_lexicalListDeclarationListAST &) = delete ;
  private: DownEnumerator_lexicalListDeclarationListAST & operator = (const DownEnumerator_lexicalListDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalListDeclarationListAST final {
  public: UpEnumerator_lexicalListDeclarationListAST (const class GGS_lexicalListDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_lexicalListDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GGS_lexicalListEntryListAST current_mEntryList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalListDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalListDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalListDeclarationListAST (const UpEnumerator_lexicalListDeclarationListAST &) = delete ;
  private: UpEnumerator_lexicalListDeclarationListAST & operator = (const UpEnumerator_lexicalListDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalListDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalListDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalListDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalListDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalListDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_lexicalListDeclarationListAST (const GGS_lexicalListDeclarationListAST &) = default ;
  public: GGS_lexicalListDeclarationListAST & operator = (const GGS_lexicalListDeclarationListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_lexicalListDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalListDeclarationListAST subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalListDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_lstring & in_mStyle,
                                                 const class GGS_lstring & in_mSyntaxErrorMessage,
                                                 const class GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                 const class GGS_lexicalListEntryListAST & in_mEntryList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalListDeclarationListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalListDeclarationListAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalListDeclarationListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_sentLexicalAttributeListAST & inOperand3,
                                                                                   const class GGS_lexicalListEntryListAST & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalListDeclarationListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_lstring & inOperand2,
                                                    const class GGS_sentLexicalAttributeListAST & inOperand3,
                                                    const class GGS_lexicalListEntryListAST & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalListDeclarationListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalListDeclarationListAST add_operation (const GGS_lexicalListDeclarationListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               class GGS_sentLexicalAttributeListAST constinArgument3,
                                               class GGS_lexicalListEntryListAST constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_sentLexicalAttributeListAST constinArgument3,
                                                      class GGS_lexicalListEntryListAST constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 class GGS_sentLexicalAttributeListAST & outArgument3,
                                                 class GGS_lexicalListEntryListAST & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                class GGS_sentLexicalAttributeListAST & outArgument3,
                                                class GGS_lexicalListEntryListAST & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_sentLexicalAttributeListAST & outArgument3,
                                                      class GGS_lexicalListEntryListAST & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntryListAtIndex (class GGS_lexicalListEntryListAST constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListAtIndex (class GGS_sentLexicalAttributeListAST constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              class GGS_sentLexicalAttributeListAST & outArgument3,
                                              class GGS_lexicalListEntryListAST & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             class GGS_sentLexicalAttributeListAST & outArgument3,
                                             class GGS_lexicalListEntryListAST & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalListEntryListAST getter_mEntryListAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sentLexicalAttributeListAST getter_mSentAttributeListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mStyleAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSyntaxErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalListDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalListDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalListDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalListDeclarationListAST ;
  friend class DownEnumerator_lexicalListDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalMessageDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalMessageDeclarationListAST final {
  public: DownEnumerator_lexicalMessageDeclarationListAST (const class GGS_lexicalMessageDeclarationListAST & inList) ;

  public: ~ DownEnumerator_lexicalMessageDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mMessageName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mMessageValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalMessageDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalMessageDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalMessageDeclarationListAST (const DownEnumerator_lexicalMessageDeclarationListAST &) = delete ;
  private: DownEnumerator_lexicalMessageDeclarationListAST & operator = (const DownEnumerator_lexicalMessageDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalMessageDeclarationListAST final {
  public: UpEnumerator_lexicalMessageDeclarationListAST (const class GGS_lexicalMessageDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_lexicalMessageDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mMessageName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mMessageValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalMessageDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalMessageDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalMessageDeclarationListAST (const UpEnumerator_lexicalMessageDeclarationListAST &) = delete ;
  private: UpEnumerator_lexicalMessageDeclarationListAST & operator = (const UpEnumerator_lexicalMessageDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalMessageDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalMessageDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalMessageDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalMessageDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalMessageDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_lexicalMessageDeclarationListAST (const GGS_lexicalMessageDeclarationListAST &) = default ;
  public: GGS_lexicalMessageDeclarationListAST & operator = (const GGS_lexicalMessageDeclarationListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_lexicalMessageDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalMessageDeclarationListAST subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalMessageDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mMessageName,
                                                 const class GGS_lstring & in_mMessageValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalMessageDeclarationListAST init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalMessageDeclarationListAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalMessageDeclarationListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalMessageDeclarationListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalMessageDeclarationListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalMessageDeclarationListAST add_operation (const GGS_lexicalMessageDeclarationListAST & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMessageNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMessageValueAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mMessageNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mMessageValueAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalMessageDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalMessageDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalMessageDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalMessageDeclarationListAST ;
  friend class DownEnumerator_lexicalMessageDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRuleListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalRuleListAST final {
  public: DownEnumerator_lexicalRuleListAST (const class GGS_lexicalRuleListAST & inList) ;

  public: ~ DownEnumerator_lexicalRuleListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractLexicalRuleAST current_mLexicalRule (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRuleListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalRuleListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalRuleListAST (const DownEnumerator_lexicalRuleListAST &) = delete ;
  private: DownEnumerator_lexicalRuleListAST & operator = (const DownEnumerator_lexicalRuleListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalRuleListAST final {
  public: UpEnumerator_lexicalRuleListAST (const class GGS_lexicalRuleListAST & inList)  ;

  public: ~ UpEnumerator_lexicalRuleListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractLexicalRuleAST current_mLexicalRule (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRuleListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalRuleListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalRuleListAST (const UpEnumerator_lexicalRuleListAST &) = delete ;
  private: UpEnumerator_lexicalRuleListAST & operator = (const UpEnumerator_lexicalRuleListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalRuleListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRuleListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalRuleListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalRuleListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalRuleListAST (void) = default ;

//--- Copy
  public: GGS_lexicalRuleListAST (const GGS_lexicalRuleListAST &) = default ;
  public: GGS_lexicalRuleListAST & operator = (const GGS_lexicalRuleListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_lexicalRuleListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalRuleListAST subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalRuleListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractLexicalRuleAST & in_mLexicalRule
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRuleListAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRuleListAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRuleListAST class_func_listWithValue (const class GGS_abstractLexicalRuleAST & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalRuleListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractLexicalRuleAST & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalRuleListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalRuleListAST add_operation (const GGS_lexicalRuleListAST & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractLexicalRuleAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractLexicalRuleAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractLexicalRuleAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractLexicalRuleAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractLexicalRuleAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalRuleAtIndex (class GGS_abstractLexicalRuleAST constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractLexicalRuleAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractLexicalRuleAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractLexicalRuleAST getter_mLexicalRuleAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRuleListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRuleListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRuleListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalRuleListAST ;
  friend class DownEnumerator_lexicalRuleListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRuleListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDelimitorListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateDelimitorListAST final {
  public: DownEnumerator_templateDelimitorListAST (const class GGS_templateDelimitorListAST & inList) ;

  public: ~ DownEnumerator_templateDelimitorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mStartString (LOCATION_ARGS) const ;
  public: class GGS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_mTemplateEndMark (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreserved (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mEndString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateDelimitorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateDelimitorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateDelimitorListAST (const DownEnumerator_templateDelimitorListAST &) = delete ;
  private: DownEnumerator_templateDelimitorListAST & operator = (const DownEnumerator_templateDelimitorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateDelimitorListAST final {
  public: UpEnumerator_templateDelimitorListAST (const class GGS_templateDelimitorListAST & inList)  ;

  public: ~ UpEnumerator_templateDelimitorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mStartString (LOCATION_ARGS) const ;
  public: class GGS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_mTemplateEndMark (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreserved (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mEndString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateDelimitorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateDelimitorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateDelimitorListAST (const UpEnumerator_templateDelimitorListAST &) = delete ;
  private: UpEnumerator_templateDelimitorListAST & operator = (const UpEnumerator_templateDelimitorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @templateDelimitorListAST list
//--------------------------------------------------------------------------------------------------

class GGS_templateDelimitorListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_templateDelimitorListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_templateDelimitorListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_templateDelimitorListAST (void) = default ;

//--- Copy
  public: GGS_templateDelimitorListAST (const GGS_templateDelimitorListAST &) = default ;
  public: GGS_templateDelimitorListAST & operator = (const GGS_templateDelimitorListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_templateDelimitorListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_templateDelimitorListAST subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_templateDelimitorListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mStartString,
                                                 const class GGS_bool & in_nonAtomicSelection,
                                                 const class GGS_bool & in_mTemplateEndMark,
                                                 const class GGS_bool & in_mPreserved,
                                                 const class GGS_lstring & in_mEndString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDelimitorListAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateDelimitorListAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateDelimitorListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              const class GGS_bool & inOperand2,
                                                                              const class GGS_bool & inOperand3,
                                                                              const class GGS_lstring & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_templateDelimitorListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_bool & inOperand1,
                                                    const class GGS_bool & inOperand2,
                                                    const class GGS_bool & inOperand3,
                                                    const class GGS_lstring & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_templateDelimitorListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_templateDelimitorListAST add_operation (const GGS_templateDelimitorListAST & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bool constinArgument1,
                                               class GGS_bool constinArgument2,
                                               class GGS_bool constinArgument3,
                                               class GGS_lstring constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_bool constinArgument3,
                                                      class GGS_lstring constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 class GGS_bool & outArgument3,
                                                 class GGS_lstring & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bool & outArgument1,
                                                class GGS_bool & outArgument2,
                                                class GGS_bool & outArgument3,
                                                class GGS_lstring & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_bool & outArgument3,
                                                      class GGS_lstring & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndStringAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservedAtIndex (class GGS_bool constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartStringAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTemplateEndMarkAtIndex (class GGS_bool constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNonAtomicSelectionAtIndex (class GGS_bool constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              class GGS_bool & outArgument2,
                                              class GGS_bool & outArgument3,
                                              class GGS_lstring & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bool & outArgument1,
                                             class GGS_bool & outArgument2,
                                             class GGS_bool & outArgument3,
                                             class GGS_lstring & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mEndStringAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mPreservedAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mStartStringAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mTemplateEndMarkAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_nonAtomicSelectionAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateDelimitorListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateDelimitorListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateDelimitorListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateDelimitorListAST ;
  friend class DownEnumerator_templateDelimitorListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateReplacementListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateReplacementListAST final {
  public: DownEnumerator_templateReplacementListAST (const class GGS_templateReplacementListAST & inList) ;

  public: ~ DownEnumerator_templateReplacementListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mMatchString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mReplacementString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mReplacementFunction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateReplacementListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateReplacementListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateReplacementListAST (const DownEnumerator_templateReplacementListAST &) = delete ;
  private: DownEnumerator_templateReplacementListAST & operator = (const DownEnumerator_templateReplacementListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateReplacementListAST final {
  public: UpEnumerator_templateReplacementListAST (const class GGS_templateReplacementListAST & inList)  ;

  public: ~ UpEnumerator_templateReplacementListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mMatchString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mReplacementString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mReplacementFunction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateReplacementListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateReplacementListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateReplacementListAST (const UpEnumerator_templateReplacementListAST &) = delete ;
  private: UpEnumerator_templateReplacementListAST & operator = (const UpEnumerator_templateReplacementListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @templateReplacementListAST list
//--------------------------------------------------------------------------------------------------

class GGS_templateReplacementListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_templateReplacementListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_templateReplacementListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_templateReplacementListAST (void) = default ;

//--- Copy
  public: GGS_templateReplacementListAST (const GGS_templateReplacementListAST &) = default ;
  public: GGS_templateReplacementListAST & operator = (const GGS_templateReplacementListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_templateReplacementListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_templateReplacementListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_templateReplacementListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mMatchString,
                                                 const class GGS_lstring & in_mReplacementString,
                                                 const class GGS_lstring & in_mReplacementFunction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateReplacementListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateReplacementListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateReplacementListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_templateReplacementListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_lstring & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_templateReplacementListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_templateReplacementListAST add_operation (const GGS_templateReplacementListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMatchStringAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReplacementFunctionAtIndex (class GGS_lstring constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReplacementStringAtIndex (class GGS_lstring constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mMatchStringAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mReplacementFunctionAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mReplacementStringAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateReplacementListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateReplacementListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateReplacementListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateReplacementListAST ;
  friend class DownEnumerator_templateReplacementListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateReplacementListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_terminalDeclarationListAST final {
  public: DownEnumerator_terminalDeclarationListAST (const class GGS_terminalDeclarationListAST & inList) ;

  public: ~ DownEnumerator_terminalDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GGS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_terminalDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_terminalDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_terminalDeclarationListAST (const DownEnumerator_terminalDeclarationListAST &) = delete ;
  private: DownEnumerator_terminalDeclarationListAST & operator = (const DownEnumerator_terminalDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_terminalDeclarationListAST final {
  public: UpEnumerator_terminalDeclarationListAST (const class GGS_terminalDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_terminalDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GGS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_terminalDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_terminalDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_terminalDeclarationListAST (const UpEnumerator_terminalDeclarationListAST &) = delete ;
  private: UpEnumerator_terminalDeclarationListAST & operator = (const UpEnumerator_terminalDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @terminalDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_terminalDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_terminalDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_terminalDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_terminalDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_terminalDeclarationListAST (const GGS_terminalDeclarationListAST &) = default ;
  public: GGS_terminalDeclarationListAST & operator = (const GGS_terminalDeclarationListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_terminalDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_terminalDeclarationListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_terminalDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                 const class GGS_lstring & in_mSyntaxErrorMessage,
                                                 const class GGS_lstring & in_mStyle,
                                                 const class GGS_bool & in_nonAtomicSelection,
                                                 const class GGS_bool & in_isEndOfTemplateMark
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalDeclarationListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalDeclarationListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalDeclarationListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_sentLexicalAttributeListAST & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_lstring & inOperand3,
                                                                                const class GGS_bool & inOperand4,
                                                                                const class GGS_bool & inOperand5
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_terminalDeclarationListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_sentLexicalAttributeListAST & inOperand1,
                                                    const class GGS_lstring & inOperand2,
                                                    const class GGS_lstring & inOperand3,
                                                    const class GGS_bool & inOperand4,
                                                    const class GGS_bool & inOperand5
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_terminalDeclarationListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_terminalDeclarationListAST add_operation (const GGS_terminalDeclarationListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_sentLexicalAttributeListAST constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               class GGS_lstring constinArgument3,
                                               class GGS_bool constinArgument4,
                                               class GGS_bool constinArgument5,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_sentLexicalAttributeListAST constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_lstring constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_bool constinArgument5,
                                                      class GGS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_sentLexicalAttributeListAST & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 class GGS_bool & outArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_sentLexicalAttributeListAST & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                class GGS_lstring & outArgument3,
                                                class GGS_bool & outArgument4,
                                                class GGS_bool & outArgument5,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_sentLexicalAttributeListAST & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_bool & outArgument5,
                                                      class GGS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsEndOfTemplateMarkAtIndex (class GGS_bool constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListAtIndex (class GGS_sentLexicalAttributeListAST constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNonAtomicSelectionAtIndex (class GGS_bool constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_sentLexicalAttributeListAST & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              class GGS_lstring & outArgument3,
                                              class GGS_bool & outArgument4,
                                              class GGS_bool & outArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_sentLexicalAttributeListAST & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             class GGS_lstring & outArgument3,
                                             class GGS_bool & outArgument4,
                                             class GGS_bool & outArgument5,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEndOfTemplateMarkAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sentLexicalAttributeListAST getter_mSentAttributeListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mStyleAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSyntaxErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_nonAtomicSelectionAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_terminalDeclarationListAST ;
  friend class DownEnumerator_terminalDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexiqueComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexiqueComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_bool & inOperand2,
                                                                                                     const class GGS_templateDelimitorListAST & inOperand3,
                                                                                                     const class GGS_templateReplacementListAST & inOperand4,
                                                                                                     const class GGS_lexicalAttributeListAST & inOperand5,
                                                                                                     const class GGS_lexicalStyleListAST & inOperand6,
                                                                                                     const class GGS_terminalDeclarationListAST & inOperand7,
                                                                                                     const class GGS_lexicalMessageDeclarationListAST & inOperand8,
                                                                                                     const class GGS_lexicalListDeclarationListAST & inOperand9,
                                                                                                     const class GGS_lexicalRuleListAST & inOperand10,
                                                                                                     const class GGS_indexingListAST & inOperand11,
                                                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLexiqueComponentName ;
  public: GGS_bool mProperty_mIsTemplate ;
  public: GGS_templateDelimitorListAST mProperty_mTemplateDelimitorListAST ;
  public: GGS_templateReplacementListAST mProperty_mTemplateReplacementListAST ;
  public: GGS_lexicalAttributeListAST mProperty_mLexicalAttributeListAST ;
  public: GGS_lexicalStyleListAST mProperty_mLexicalStyleListAST ;
  public: GGS_terminalDeclarationListAST mProperty_mTerminalDeclarationListAST ;
  public: GGS_lexicalMessageDeclarationListAST mProperty_mLexicalMessageDeclarationListAST ;
  public: GGS_lexicalListDeclarationListAST mProperty_mLexicalListDeclarationListAST ;
  public: GGS_lexicalRuleListAST mProperty_mLexicalRuleListAST ;
  public: GGS_indexingListAST mProperty_mIndexingListAST ;


//--- Default constructor
  public: cPtr_lexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexiqueComponentAST (const GGS_bool & in_isPredefined,
                                    const GGS_lstring & in_mLexiqueComponentName,
                                    const GGS_bool & in_mIsTemplate,
                                    const GGS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                    const GGS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                    const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                    const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                    const GGS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                    const GGS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                    const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                    const GGS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                    const GGS_indexingListAST & in_mIndexingListAST,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLexiqueComponentAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_templateLexiqueComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLexiqueComponentAST (const class cPtr_templateLexiqueComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GGS_lstring readProperty_mLexiqueSuperComponentName (void) const ;

  public: class GGS_templateDelimitorListAST readProperty_mTemplateDelimitorList (void) const ;

  public: class GGS_templateReplacementListAST readProperty_mTemplateReplacementList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLexiqueComponentAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_templateDelimitorListAST & inOperand3,
                                                                                       const class GGS_templateReplacementListAST & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLexiqueComponentAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLexiqueComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_templateDelimitorListAST & inOperand3,
                                                                                 const class GGS_templateReplacementListAST & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLexiqueComponentName ;
  public: GGS_lstring mProperty_mLexiqueSuperComponentName ;
  public: GGS_templateDelimitorListAST mProperty_mTemplateDelimitorList ;
  public: GGS_templateReplacementListAST mProperty_mTemplateReplacementList ;


//--- Default constructor
  public: cPtr_templateLexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLexiqueComponentAST (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_mLexiqueComponentName,
                                            const GGS_lstring & in_mLexiqueSuperComponentName,
                                            const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                            const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalListEntryListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalListEntryListAST final {
  public: DownEnumerator_lexicalListEntryListAST (const class GGS_lexicalListEntryListAST & inList) ;

  public: ~ DownEnumerator_lexicalListEntryListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mEntrySpelling (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mTerminalSpelling (LOCATION_ARGS) const ;
  public: class GGS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalListEntryListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalListEntryListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalListEntryListAST (const DownEnumerator_lexicalListEntryListAST &) = delete ;
  private: DownEnumerator_lexicalListEntryListAST & operator = (const DownEnumerator_lexicalListEntryListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalListEntryListAST final {
  public: UpEnumerator_lexicalListEntryListAST (const class GGS_lexicalListEntryListAST & inList)  ;

  public: ~ UpEnumerator_lexicalListEntryListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mEntrySpelling (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mTerminalSpelling (LOCATION_ARGS) const ;
  public: class GGS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalListEntryListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalListEntryListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalListEntryListAST (const UpEnumerator_lexicalListEntryListAST &) = delete ;
  private: UpEnumerator_lexicalListEntryListAST & operator = (const UpEnumerator_lexicalListEntryListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalListEntryListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalListEntryListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalListEntryListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalListEntryListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalListEntryListAST (void) = default ;

//--- Copy
  public: GGS_lexicalListEntryListAST (const GGS_lexicalListEntryListAST &) = default ;
  public: GGS_lexicalListEntryListAST & operator = (const GGS_lexicalListEntryListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_lexicalListEntryListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalListEntryListAST subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalListEntryListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mEntrySpelling,
                                                 const class GGS_lstring & in_mTerminalSpelling,
                                                 const class GGS_bool & in_nonAtomicSelection,
                                                 const class GGS_bool & in_isEndOfTemplateMark
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalListEntryListAST init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalListEntryListAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalListEntryListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_bool & inOperand2,
                                                                             const class GGS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalListEntryListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_bool & inOperand2,
                                                    const class GGS_bool & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalListEntryListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalListEntryListAST add_operation (const GGS_lexicalListEntryListAST & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_bool constinArgument2,
                                               class GGS_bool constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_bool constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 class GGS_bool & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_bool & outArgument2,
                                                class GGS_bool & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_bool & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsEndOfTemplateMarkAtIndex (class GGS_bool constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntrySpellingAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalSpellingAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNonAtomicSelectionAtIndex (class GGS_bool constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_bool & outArgument2,
                                              class GGS_bool & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_bool & outArgument2,
                                             class GGS_bool & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEndOfTemplateMarkAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mEntrySpellingAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mTerminalSpellingAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_nonAtomicSelectionAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalListEntryListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalListEntryListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalListEntryListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalListEntryListAST ;
  friend class DownEnumerator_lexicalListEntryListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sentLexicalAttributeListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_sentLexicalAttributeListAST final {
  public: DownEnumerator_sentLexicalAttributeListAST (const class GGS_sentLexicalAttributeListAST & inList) ;

  public: ~ DownEnumerator_sentLexicalAttributeListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sentLexicalAttributeListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sentLexicalAttributeListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sentLexicalAttributeListAST (const DownEnumerator_sentLexicalAttributeListAST &) = delete ;
  private: DownEnumerator_sentLexicalAttributeListAST & operator = (const DownEnumerator_sentLexicalAttributeListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sentLexicalAttributeListAST final {
  public: UpEnumerator_sentLexicalAttributeListAST (const class GGS_sentLexicalAttributeListAST & inList)  ;

  public: ~ UpEnumerator_sentLexicalAttributeListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sentLexicalAttributeListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sentLexicalAttributeListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sentLexicalAttributeListAST (const UpEnumerator_sentLexicalAttributeListAST &) = delete ;
  private: UpEnumerator_sentLexicalAttributeListAST & operator = (const UpEnumerator_sentLexicalAttributeListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @sentLexicalAttributeListAST list
//--------------------------------------------------------------------------------------------------

class GGS_sentLexicalAttributeListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_sentLexicalAttributeListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_sentLexicalAttributeListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_sentLexicalAttributeListAST (void) = default ;

//--- Copy
  public: GGS_sentLexicalAttributeListAST (const GGS_sentLexicalAttributeListAST &) = default ;
  public: GGS_sentLexicalAttributeListAST & operator = (const GGS_sentLexicalAttributeListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_sentLexicalAttributeListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_sentLexicalAttributeListAST subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_sentLexicalAttributeListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_lstring & in_mAttributeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sentLexicalAttributeListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sentLexicalAttributeListAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sentLexicalAttributeListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_sentLexicalAttributeListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_sentLexicalAttributeListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_sentLexicalAttributeListAST add_operation (const GGS_sentLexicalAttributeListAST & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sentLexicalAttributeListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sentLexicalAttributeListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sentLexicalAttributeListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sentLexicalAttributeListAST ;
  friend class DownEnumerator_sentLexicalAttributeListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3OptionComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_OptionComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_OptionComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__ (class GGS_commandLineOptionListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_OptionComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_OptionComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3GuiComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_GuiComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_GuiComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_ (class GGS_guiSimpleAttributeListAST & ioArgument0,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (class GGS_withLexiqueListAST & ioArgument0,
                                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (class GGS_lstringlist & ioArgument0,
                                                                    class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GuiComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument0,
                                                                                               Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument0,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument0,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GuiComponentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3SyntaxComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_SyntaxComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_SyntaxComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_actualInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                      class GGS_actualParameterListAST & outArgument1,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                          class GGS_nonterminalDeclarationListAST & ioArgument1,
                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                  class GGS_semanticInstructionAST & outArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                class GGS_syntaxInstructionAST & outArgument1,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                        class GGS_syntaxInstructionList & outArgument1,
                                                                        class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxRuleListAST & ioArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       const class GGS_lstring constinArgument1,
                                                       class GGS_syntaxRuleLabelListAST & ioArgument2,
                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_ (class GGS__32_lstringlist & outArgument0,
                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_nonterminalDeclarationListAST & ioArgument1,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    const GGS_lstring constinArgument1,
                                                                                    GGS_syntaxRuleLabelListAST & ioArgument2,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxRuleListAST & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_syntaxInstructionList & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_syntaxInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_syntaxInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_syntaxInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_syntaxInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GGS__32_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                              GGS_syntaxInstructionAST & outArgument1,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_SyntaxComponentSyntax_syntax_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_SyntaxComponentSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxSendInstructionAST : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_syntaxSendInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxSendInstructionAST (const class cPtr_syntaxSendInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxSendInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_semanticExpressionAST & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxSendInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syntaxSendInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxSendInstructionAST : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxSendInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_syntaxSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxSendInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_semanticExpressionAST & in_mExpression,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@syntaxExtensions insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_syntaxExtensions & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_lstring constin_inSyntaxComponentName,
                                const class GGS_nonterminalDeclarationListAST constin_inNonterminalDeclarationList,
                                const class GGS_syntaxRuleListAST constin_inRuleList,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3GrammarComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_GrammarComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_GrammarComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                              const class GGS_lstring constinArgument1,
                                                                              class GGS_nonTerminalLabelListAST & ioArgument2,
                                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                       class GGS_lstring & outArgument1,
                                                                       class GGS_formalParameterListAST & ioArgument2,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GrammarComponentSyntax_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                            const GGS_lstring constinArgument1,
                                                                                                            GGS_nonTerminalLabelListAST & ioArgument2,
                                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_lstring & outArgument1,
                                                                                                     GGS_formalParameterListAST & ioArgument2,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_lstring & outArgument1,
                                                                                                     GGS_formalParameterListAST & ioArgument2,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_lstring & outArgument1,
                                                                                                     GGS_formalParameterListAST & ioArgument2,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_lstring & outArgument1,
                                                                                                     GGS_formalParameterListAST & ioArgument2,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_GrammarComponentSyntax_label_5F_formal_5F_parameter_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_GrammarComponentSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ProgramDeclarations' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ProgramDeclarations {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ProgramDeclarations (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ProgramDeclarations_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ProgramDeclarations_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProgramDeclarations_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProgramDeclarations_2 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDelimitorListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateDelimitorListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mStartString ;
  public: inline GGS_lstring readProperty_mStartString (void) const {
    return mProperty_mStartString ;
  }

  public: GGS_bool mProperty_nonAtomicSelection ;
  public: inline GGS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GGS_bool mProperty_mTemplateEndMark ;
  public: inline GGS_bool readProperty_mTemplateEndMark (void) const {
    return mProperty_mTemplateEndMark ;
  }

  public: GGS_bool mProperty_mPreserved ;
  public: inline GGS_bool readProperty_mPreserved (void) const {
    return mProperty_mPreserved ;
  }

  public: GGS_lstring mProperty_mEndString ;
  public: inline GGS_lstring readProperty_mEndString (void) const {
    return mProperty_mEndString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateDelimitorListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartString = inValue ;
  }

  public: inline void setter_setNonAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setMTemplateEndMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateEndMark = inValue ;
  }

  public: inline void setter_setMPreserved (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreserved = inValue ;
  }

  public: inline void setter_setMEndString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateDelimitorListAST_2E_element (const GGS_lstring & in_mStartString,
                                                   const GGS_bool & in_nonAtomicSelection,
                                                   const GGS_bool & in_mTemplateEndMark,
                                                   const GGS_bool & in_mPreserved,
                                                   const GGS_lstring & in_mEndString) ;

//--------------------------------- Copy constructor
  public: GGS_templateDelimitorListAST_2E_element (const GGS_templateDelimitorListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateDelimitorListAST_2E_element & operator = (const GGS_templateDelimitorListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDelimitorListAST_2E_element init_21__21_nonAtomicSelection_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_bool & inOperand1,
                                                                                                     const class GGS_bool & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_lstring & inOperand4,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateDelimitorListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateReplacementListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateReplacementListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mMatchString ;
  public: inline GGS_lstring readProperty_mMatchString (void) const {
    return mProperty_mMatchString ;
  }

  public: GGS_lstring mProperty_mReplacementString ;
  public: inline GGS_lstring readProperty_mReplacementString (void) const {
    return mProperty_mReplacementString ;
  }

  public: GGS_lstring mProperty_mReplacementFunction ;
  public: inline GGS_lstring readProperty_mReplacementFunction (void) const {
    return mProperty_mReplacementFunction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateReplacementListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMatchString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMatchString = inValue ;
  }

  public: inline void setter_setMReplacementString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementString = inValue ;
  }

  public: inline void setter_setMReplacementFunction (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementFunction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateReplacementListAST_2E_element (const GGS_lstring & in_mMatchString,
                                                     const GGS_lstring & in_mReplacementString,
                                                     const GGS_lstring & in_mReplacementFunction) ;

//--------------------------------- Copy constructor
  public: GGS_templateReplacementListAST_2E_element (const GGS_templateReplacementListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateReplacementListAST_2E_element & operator = (const GGS_templateReplacementListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateReplacementListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateReplacementListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateReplacementListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLexiqueComponentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLexiqueComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLexiqueComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLexiqueComponentAST_2E_weak (const class GGS_templateLexiqueComponentAST & inSource) ;

  public: GGS_templateLexiqueComponentAST_2E_weak & operator = (const class GGS_templateLexiqueComponentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLexiqueComponentAST_2E_weak init_nil (void) {
    GGS_templateLexiqueComponentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLexiqueComponentAST bang_templateLexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLexiqueComponentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLexiqueComponentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLexiqueComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLexiqueComponentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapElementClass mProperty_mElement ;
  public: inline GGS_unifiedTypeMapElementClass readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMElement (const GGS_unifiedTypeMapElementClass & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_unifiedTypeMapElementClass & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_unifiedTypeMap_2E_element (const GGS_unifiedTypeMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unifiedTypeMap_2E_element & operator = (const GGS_unifiedTypeMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_unifiedTypeMapElementClass & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unifiedTypeMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unifiedTypeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unifiedTypeMap_2E_element_3F_ (const GGS_unifiedTypeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unifiedTypeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unifiedTypeMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_unifiedTypeMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GGS_unifiedTypeMap & ioObject,
                                          const class GGS_string constin_inKey,
                                          class GGS_unifiedTypeMapEntry & out_outEntry,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeMapEntryOrNullForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryOrNullForLKey (const class GGS_unifiedTypeMap & inObject,
                                                                         const class GGS_lstring & constinArgument0,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GGS_unifiedTypeMap & ioObject,
                                 const class GGS_lstring constin_inTypeName,
                                 const class GGS_unifiedTypeDefinition constin_inTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap typeDefinition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition extensionGetter_typeDefinition (const class GGS_unifiedTypeMap & inObject,
                                                                const class GGS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeDefinition_2E_solved struct
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeDefinition mProperty_definition ;
  public: inline GGS_unifiedTypeDefinition readProperty_definition (void) const {
    return mProperty_definition ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDefinition (const GGS_unifiedTypeDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_definition = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeDefinition_2E_solved (const GGS_unifiedTypeDefinition & in_definition) ;

//--------------------------------- Copy constructor
  public: GGS_typeDefinition_2E_solved (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeDefinition_2E_solved & operator = (const GGS_typeDefinition_2E_solved & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDefinition_2E_solved init_21_ (const class GGS_unifiedTypeDefinition & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDefinition_2E_solved extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeDefinition.solved? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeDefinition_2E_solved mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeDefinition_2E_solved_3F_ (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeDefinition_2E_solved_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeDefinition_2E_solved unwrappedValue (void) const {
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
  public: static GGS_typeDefinition_2E_solved_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typeName (const class GGS_unifiedTypeMapEntry & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry baseType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_baseType (const class GGS_unifiedTypeMapEntry & inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GGS_unifiedTypeMapEntry inObject,
                                            class GGS_stringset & io_ioInclusions,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_programListForGeneration final {
  public: DownEnumerator_programListForGeneration (const class GGS_programListForGeneration & inList) ;

  public: ~ DownEnumerator_programListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_programListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_programListForGeneration (const DownEnumerator_programListForGeneration &) = delete ;
  private: DownEnumerator_programListForGeneration & operator = (const DownEnumerator_programListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_programListForGeneration final {
  public: UpEnumerator_programListForGeneration (const class GGS_programListForGeneration & inList)  ;

  public: ~ UpEnumerator_programListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_programListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_programListForGeneration (const UpEnumerator_programListForGeneration &) = delete ;
  private: UpEnumerator_programListForGeneration & operator = (const UpEnumerator_programListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @programListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_programListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_programListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_programListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_programListForGeneration (void) = default ;

//--- Copy
  public: GGS_programListForGeneration (const GGS_programListForGeneration &) = default ;
  public: GGS_programListForGeneration & operator = (const GGS_programListForGeneration &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_programListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_programListForGeneration subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_programListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programListForGeneration init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programListForGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_programListForGeneration class_func_listWithValue (const class GGS_semanticDeclarationForGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_programListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_semanticDeclarationForGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_programListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_programListForGeneration add_operation (const GGS_programListForGeneration & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticDeclarationForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticDeclarationForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticDeclarationForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticDeclarationForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticDeclarationForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticDeclarationForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationForGeneration getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_programListForGeneration ;
  friend class DownEnumerator_programListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticDeclarationForGeneration (const class cPtr_semanticDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticDeclarationForGeneration_init (Compiler * inCompiler) ;


//--- Extension getter appendPrimitiveTypeDeclaration
  public: virtual class GGS_string getter_appendPrimitiveTypeDeclaration (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter appendTypeGenericImplementation
  public: virtual class GGS_string getter_appendTypeGenericImplementation (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GGS_string arg_inOutputDirectory,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendPrimitiveTypePreDeclaration
  public: virtual void method_appendPrimitiveTypePreDeclaration (class GGS_string & arg_ioHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GGS_string arg_inProductDirectory,
           class GGS_stringset & arg_ioAllProductFileSet,
           class GGS_stringlist & arg_ioSwiftAppProductFileList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_semanticDeclarationForGeneration (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_programListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticDeclarationForGeneration mProperty_mDeclaration ;
  public: inline GGS_semanticDeclarationForGeneration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_programListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GGS_semanticDeclarationForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_programListForGeneration_2E_element (const GGS_semanticDeclarationForGeneration & in_mDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_programListForGeneration_2E_element (const GGS_programListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_programListForGeneration_2E_element & operator = (const GGS_programListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programListForGeneration_2E_element init_21_ (const class GGS_semanticDeclarationForGeneration & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localConstantList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_localConstantList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_bool mProperty_mNoWarningIfUnused ;
  public: inline GGS_bool readProperty_mNoWarningIfUnused (void) const {
    return mProperty_mNoWarningIfUnused ;
  }

  public: GGS_string mProperty_mCppName ;
  public: inline GGS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localConstantList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMNoWarningIfUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNoWarningIfUnused = inValue ;
  }

  public: inline void setter_setMCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localConstantList_2E_element (const GGS_unifiedTypeMapEntry & in_mType,
                                            const GGS_lstring & in_mName,
                                            const GGS_bool & in_mNoWarningIfUnused,
                                            const GGS_string & in_mCppName) ;

//--------------------------------- Copy constructor
  public: GGS_localConstantList_2E_element (const GGS_localConstantList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localConstantList_2E_element & operator = (const GGS_localConstantList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localConstantList_2E_element init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_bool & inOperand2,
                                                                        const class GGS_string & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localConstantList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localInitializedVariableList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_localInitializedVariableList final {
  public: DownEnumerator_localInitializedVariableList (const class GGS_localInitializedVariableList & inList) ;

  public: ~ DownEnumerator_localInitializedVariableList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_localInitializedVariableList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_localInitializedVariableList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_localInitializedVariableList (const DownEnumerator_localInitializedVariableList &) = delete ;
  private: DownEnumerator_localInitializedVariableList & operator = (const DownEnumerator_localInitializedVariableList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_localInitializedVariableList final {
  public: UpEnumerator_localInitializedVariableList (const class GGS_localInitializedVariableList & inList)  ;

  public: ~ UpEnumerator_localInitializedVariableList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_localInitializedVariableList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_localInitializedVariableList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_localInitializedVariableList (const UpEnumerator_localInitializedVariableList &) = delete ;
  private: UpEnumerator_localInitializedVariableList & operator = (const UpEnumerator_localInitializedVariableList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @localInitializedVariableList list
//--------------------------------------------------------------------------------------------------

class GGS_localInitializedVariableList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_localInitializedVariableList_2E_element> mArray ;

//--- Default constructor
  public: GGS_localInitializedVariableList (void) ;

//--- Destructor
  public: virtual ~ GGS_localInitializedVariableList (void) = default ;

//--- Copy
  public: GGS_localInitializedVariableList (const GGS_localInitializedVariableList &) = default ;
  public: GGS_localInitializedVariableList & operator = (const GGS_localInitializedVariableList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_localInitializedVariableList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_localInitializedVariableList subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_localInitializedVariableList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_unifiedTypeMapEntry & in_mType,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_string & in_mCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localInitializedVariableList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localInitializedVariableList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localInitializedVariableList class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_localInitializedVariableList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_localInitializedVariableList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_localInitializedVariableList add_operation (const GGS_localInitializedVariableList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GGS_string constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localInitializedVariableList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localInitializedVariableList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_localInitializedVariableList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_localInitializedVariableList ;
  friend class DownEnumerator_localInitializedVariableList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localInitializedVariableList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localInitializedVariableList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_localInitializedVariableList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_string mProperty_mCppName ;
  public: inline GGS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localInitializedVariableList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localInitializedVariableList_2E_element (const GGS_unifiedTypeMapEntry & in_mType,
                                                       const GGS_lstring & in_mName,
                                                       const GGS_string & in_mCppName) ;

//--------------------------------- Copy constructor
  public: GGS_localInitializedVariableList_2E_element (const GGS_localInitializedVariableList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localInitializedVariableList_2E_element & operator = (const GGS_localInitializedVariableList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localInitializedVariableList_2E_element init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localInitializedVariableList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_correspondingEffectiveParameterString (const class GGS_formalArgumentPassingModeAST & inObject,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const class GGS_analysisContext constin_inAnalysisContext,
                                                       class GGS_unifiedTypeMap & io_ioTypeMap,
                                                       const class GGS_bool constin_inHasTranslateFeature,
                                                       const class GGS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       class GGS_stringlist & io_ioAssignementList,
                                                       class GGS_localVarManager & io_ioVariableMap,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControlAST_2E_fileprivateAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess (const GGS_location & in_declarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControlAST_2E_fileprivateAccess & operator = (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControlAST_2E_fileprivateAccess init_21_ (const class GGS_location & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateAccess extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControlAST.fileprivateAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControlAST_2E_fileprivateAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControlAST_2E_fileprivateAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControlAST_2E_fileprivateAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControlAST_2E_fileprivateAccess unwrappedValue (void) const {
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
  public: static GGS_AccessControlAST_2E_fileprivateAccess_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControlAST_2E_fileprivateSetAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_location & in_declarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControlAST_2E_fileprivateSetAccess & operator = (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess init_21_ (const class GGS_location & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControlAST.fileprivateSetAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControlAST_2E_fileprivateSetAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControlAST_2E_fileprivateSetAccess unwrappedValue (void) const {
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
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@AccessControlAST accessControl' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl extensionGetter_accessControl (const class GGS_AccessControlAST & inObject,
                                                       const class GGS_unifiedTypeMapEntry & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkSetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum selfMutability
//--------------------------------------------------------------------------------------------------

class GGS_selfMutability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_selfMutability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_propertiesAreMutableSelfIsNot,
    enum_selfAndPropertiesAreMutable,
    enum_initializer
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfMutability extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfMutability class_func_initializer (LOCATION_ARGS) ;

  public: static class GGS_selfMutability class_func_none (LOCATION_ARGS) ;

  public: static class GGS_selfMutability class_func_propertiesAreMutableSelfIsNot (LOCATION_ARGS) ;

  public: static class GGS_selfMutability class_func_selfAndPropertiesAreMutable (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfMutability & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInitializer (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPropertiesAreMutableSelfIsNot (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfAndPropertiesAreMutable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMutability ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@location sourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_sourceFile (const class GGS_location & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkGetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST transformInstructionForGrammarAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstructionForGrammarAnalysis (class cPtr_syntaxInstructionAST * inObject,
                                                                 class GGS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                                                 const class GGS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                                                 class GGS_uint & io_ioAddedNonTerminalIndex,
                                                                 class GGS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxInstructionListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxInstructionListForGrammarAnalysis final {
  public: DownEnumerator_syntaxInstructionListForGrammarAnalysis (const class GGS_syntaxInstructionListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_syntaxInstructionListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxInstructionListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syntaxInstructionListForGrammarAnalysis (const DownEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_syntaxInstructionListForGrammarAnalysis & operator = (const DownEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxInstructionListForGrammarAnalysis final {
  public: UpEnumerator_syntaxInstructionListForGrammarAnalysis (const class GGS_syntaxInstructionListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_syntaxInstructionListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxInstructionListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syntaxInstructionListForGrammarAnalysis (const UpEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_syntaxInstructionListForGrammarAnalysis & operator = (const UpEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_syntaxInstructionListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_syntaxInstructionListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis &) = default ;
  public: GGS_syntaxInstructionListForGrammarAnalysis & operator = (const GGS_syntaxInstructionListForGrammarAnalysis &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syntaxInstructionListForGrammarAnalysis subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syntaxInstructionListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionListForGrammarAnalysis init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxInstructionListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxInstructionListForGrammarAnalysis class_func_listWithValue (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_syntaxInstructionListForGrammarAnalysis add_operation (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractSyntaxInstructionForGrammarAnalysis getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxInstructionListForGrammarAnalysis ;
  friend class DownEnumerator_syntaxInstructionListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis final {

  public: DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;

  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis & operator = (const DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis final {
  public: UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis & operator = (const UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_nonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis & operator = (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalSymbolMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalIndexForKey (class GGS_uint constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolParametersMapForKey (class GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument0,
                                                                                 class GGS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
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

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mNonTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalSymbolLabelMapForGrammarAnalysis getter_mNonterminalSymbolParametersMapForKey (const class GGS_string & constinOperand0,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis ;
  friend class DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalSymbolsMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_terminalSymbolsMapForGrammarAnalysis final {

  public: DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const class GGS_terminalSymbolsMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_terminalSymbolsMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const DownEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_terminalSymbolsMapForGrammarAnalysis & operator = (const DownEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_terminalSymbolsMapForGrammarAnalysis final {
  public: UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const class GGS_terminalSymbolsMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_terminalSymbolsMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const UpEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_terminalSymbolsMapForGrammarAnalysis & operator = (const UpEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  public: GGS_terminalSymbolsMapForGrammarAnalysis & operator = (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalSymbolsMapForGrammarAnalysis init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalSymbolsMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalSymbolsMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_terminalSymbolsMapForGrammarAnalysis & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalIndexForKey (class GGS_uint constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalSymbolsMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_terminalSymbolsMapForGrammarAnalysis ;
  friend class DownEnumerator_terminalSymbolsMapForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                            const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                              const class GGS_string constin_inScannerClassName,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateLexicalInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                     const class GGS_string constin_inScannerClassName,
                                                                     const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_lexicalInstructionUsesLoopLocalVariable (const class cPtr_lexicalInstructionAST * inObject,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateLexicalRuleCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                              const class GGS_string constin_inScannerClassName,
                                                              const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyIndexMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyIndexMap final {

  public: DownEnumerator_propertyIndexMap (const class GGS_propertyIndexMap & inMap) ;

  public: ~ DownEnumerator_propertyIndexMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mPropertyTypeIndex (LOCATION_ARGS) const ;

  public: class GGS_propertyIndexMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyIndexMap (const DownEnumerator_propertyIndexMap &) = delete ;
  private: DownEnumerator_propertyIndexMap & operator = (const DownEnumerator_propertyIndexMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyIndexMap final {
  public: UpEnumerator_propertyIndexMap (const class GGS_propertyIndexMap & inMap)  ;

  public: ~ UpEnumerator_propertyIndexMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mPropertyTypeIndex (LOCATION_ARGS) const ;
  public: class GGS_propertyIndexMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyIndexMap (const UpEnumerator_propertyIndexMap &) = delete ;
  private: UpEnumerator_propertyIndexMap & operator = (const UpEnumerator_propertyIndexMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyIndexMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_propertyIndexMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_propertyIndexMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_propertyIndexMap (void) ;

//--- Handle copy
  public: GGS_propertyIndexMap (const GGS_propertyIndexMap & inSource) ;
  public: GGS_propertyIndexMap & operator = (const GGS_propertyIndexMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_propertyIndexMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyIndexMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyIndexMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyIndexMap class_func_mapWithMapToOverride (const class GGS_propertyIndexMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeIndexForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                                    class GGS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_unifiedTypeMapEntry & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mPropertyTypeIndexForKey (const class GGS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyIndexMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_propertyIndexMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyIndexMap ;
  friend class DownEnumerator_propertyIndexMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyIndexMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyIndexMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mPropertyTypeIndex ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mPropertyTypeIndex (void) const {
    return mProperty_mPropertyTypeIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyIndexMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMPropertyTypeIndex (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyIndexMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_unifiedTypeMapEntry & in_mPropertyTypeIndex) ;

//--------------------------------- Copy constructor
  public: GGS_propertyIndexMap_2E_element (const GGS_propertyIndexMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyIndexMap_2E_element & operator = (const GGS_propertyIndexMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyIndexMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_unifiedTypeMapEntry & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyIndexMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyIndexMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyIndexMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyIndexMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyIndexMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyIndexMap_2E_element_3F_ (const GGS_propertyIndexMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyIndexMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyIndexMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_propertyIndexMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element_3F_ ;

