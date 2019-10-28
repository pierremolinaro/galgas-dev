#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-8.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Parser class 'galgas3ProjectSyntax' declaration                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cParser_galgas_33_ProjectSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_ProjectSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_project_5F_component_5F_start_5F_symbol_ (class GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_project_5F_component_5F_start_5F_symbol_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_project_5F_header_ (class GALGAS_luint & outArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  class GALGAS_luint & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_project_5F_header_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_project_5F_header_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GALGAS_luint & outArgument0,
                                                                       GALGAS_luint & outArgument1,
                                                                       GALGAS_luint & outArgument2,
                                                                       GALGAS_lstring & outArgument3,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_ProjectSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ProjectSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @galgas3QualifiedFeatureList list                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_galgas_33_QualifiedFeatureList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_QualifiedFeatureList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFeatureName,
                                                  const class GALGAS_lstring & in_mFeatureValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_QualifiedFeatureList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_QualifiedFeatureList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_galgas_33_QualifiedFeatureList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_QualifiedFeatureList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_QualifiedFeatureList add_operation (const GALGAS_galgas_33_QualifiedFeatureList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_galgas_33_QualifiedFeatureList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFeatureNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFeatureValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_QualifiedFeatureList ;
 
} ; // End of GALGAS_galgas_33_QualifiedFeatureList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_galgas_33_QualifiedFeatureList : public cGenericAbstractEnumerator {
  public : cEnumerator_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFeatureName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_QualifiedFeatureList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @galgas_33_ProjectComponentAST struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_galgas_33_ProjectComponentAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstringlist mProperty_mProjectSourceList ;

  public : GALGAS_luint mProperty_mMajorVersion ;

  public : GALGAS_luint mProperty_mMinorVersion ;

  public : GALGAS_luint mProperty_mRevisionVersion ;

  public : GALGAS_lstringlist mProperty_mGenerationFeatureList ;

  public : GALGAS_galgas_33_QualifiedFeatureList mProperty_mQualifiedFeatureList ;

  public : GALGAS_lstring mProperty_mTargetName ;

  public : GALGAS_location mProperty_mEndOfSourceFile ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_ProjectComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_ProjectComponentAST (const GALGAS_lstringlist & in_mProjectSourceList,
                                                 const GALGAS_luint & in_mMajorVersion,
                                                 const GALGAS_luint & in_mMinorVersion,
                                                 const GALGAS_luint & in_mRevisionVersion,
                                                 const GALGAS_lstringlist & in_mGenerationFeatureList,
                                                 const GALGAS_galgas_33_QualifiedFeatureList & in_mQualifiedFeatureList,
                                                 const GALGAS_lstring & in_mTargetName,
                                                 const GALGAS_location & in_mEndOfSourceFile) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_ProjectComponentAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_ProjectComponentAST constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                              const class GALGAS_luint & inOperand1,
                                                                              const class GALGAS_luint & inOperand2,
                                                                              const class GALGAS_luint & inOperand3,
                                                                              const class GALGAS_lstringlist & inOperand4,
                                                                              const class GALGAS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                              const class GALGAS_lstring & inOperand6,
                                                                              const class GALGAS_location & inOperand7
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_ProjectComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGenerationFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mMajorVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mMinorVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mProjectSourceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_mQualifiedFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRevisionVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_ProjectComponentAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @galgas_33_QualifiedFeatureList_2D_element struct                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_galgas_33_QualifiedFeatureList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mFeatureName ;

  public : GALGAS_lstring mProperty_mFeatureValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_QualifiedFeatureList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_QualifiedFeatureList_2D_element (const GALGAS_lstring & in_mFeatureName,
                                                             const GALGAS_lstring & in_mFeatureValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_QualifiedFeatureList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_QualifiedFeatureList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFeatureName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFeatureValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_QualifiedFeatureList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Parser class 'galgas3ExpressionSyntax' declaration                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cParser_galgas_33_ExpressionSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_ExpressionSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_casted_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_casted_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_casted_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_collection_5F_value_5F_element_ (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_collection_5F_value_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_collection_5F_value_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_type_ (class GALGAS_lstring & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_type_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_type_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_ (class GALGAS_semanticExpressionAST & outArgument0,
                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_ExpressionSyntax_casted_5F_expression_i0_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_casted_5F_expression_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_casted_5F_expression_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_term_i1_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_term_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_term_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_term_i2_ (GALGAS_semanticExpressionAST & outArgument0,
                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_term_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_term_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i4_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i5_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i6_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i12_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_optional_5F_type_i14_ (GALGAS_lstring & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_optional_5F_type_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_optional_5F_type_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i16_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i17_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i18_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i19_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_expression_i22_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_expression_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_expression_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i24_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i25_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i27_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i28_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i29_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i30_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i31_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i32_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i33_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i34_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i35_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i36_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i37_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i38_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i39_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_ExpressionSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @castInExpressionAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_castInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_castInExpressionAST (void) ;

//---
  public : inline const class cPtr_castInExpressionAST * ptr (void) const { return (const cPtr_castInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_castInExpressionAST (const cPtr_castInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_castInExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_castInExpressionAST constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                    const class GALGAS_location & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_castInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @castInExpressionAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_castInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public : GALGAS_location mProperty_mEndOfReceiverExpression ;
  public : GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public : cPtr_castInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                     const GALGAS_location & in_mEndOfReceiverExpression,
                                     const GALGAS_lstring & in_mTypeName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @collectionValueAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_collectionValueAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_collectionValueAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_collectionValueAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_collectionValueAST * ptr (void) const { return (const cPtr_collectionValueAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_collectionValueAST (const cPtr_collectionValueAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_collectionValueAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_collectionValueElementList & inOperand1,
                                                                   const class GALGAS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_collectionValueAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_mElementList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfCollectionValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @collectionValueAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_collectionValueAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_collectionValueElementList mProperty_mElementList ;
  public : GALGAS_location mProperty_mEndOfCollectionValue ;

//--- Constructor
  public : cPtr_collectionValueAST (const GALGAS_lstring & in_mTypeName,
                                    const GALGAS_collectionValueElementList & in_mElementList,
                                    const GALGAS_location & in_mEndOfCollectionValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementList getter_mElementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfCollectionValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @constructorExpressionAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_constructorExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_constructorExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_constructorExpressionAST * ptr (void) const { return (const cPtr_constructorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_constructorExpressionAST (const cPtr_constructorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_actualOutputExpressionList & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @constructorExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_constructorExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mConstructorName ;
  public : GALGAS_actualOutputExpressionList mProperty_mExpressions ;

//--- Constructor
  public : cPtr_constructorExpressionAST (const GALGAS_lstring & in_mTypeName,
                                          const GALGAS_lstring & in_mConstructorName,
                                          const GALGAS_actualOutputExpressionList & in_mExpressions
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstructorName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList getter_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @defaultConstructorExpressionAST class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_defaultConstructorExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_defaultConstructorExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_defaultConstructorExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_defaultConstructorExpressionAST * ptr (void) const { return (const cPtr_defaultConstructorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_defaultConstructorExpressionAST (const cPtr_defaultConstructorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_defaultConstructorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_defaultConstructorExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_defaultConstructorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultConstructorExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @defaultConstructorExpressionAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_defaultConstructorExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public : cPtr_defaultConstructorExpressionAST (const GALGAS_lstring & in_mTypeName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @filewrapperInExpressionAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_filewrapperInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_filewrapperInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperInExpressionAST * ptr (void) const { return (const cPtr_filewrapperInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperInExpressionAST (const cPtr_filewrapperInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperPath (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperInExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @filewrapperInExpressionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_filewrapperInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mFilewrapperName ;
  public : GALGAS_lstring mProperty_mFilewrapperPath ;

//--- Constructor
  public : cPtr_filewrapperInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                            const GALGAS_lstring & in_mFilewrapperPath
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFilewrapperPath (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @filewrapperObjectInstanciationInExpressionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_filewrapperObjectInstanciationInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_filewrapperObjectInstanciationInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperObjectInstanciationInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperObjectInstanciationInExpressionAST * ptr (void) const { return (const cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperObjectInstanciationInExpressionAST (const cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperObjectInstanciationInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperObjectInstanciationInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperObjectInstanciationInExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Pointer class for @filewrapperObjectInstanciationInExpressionAST class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_filewrapperObjectInstanciationInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mFilewrapperName ;

//--- Constructor
  public : cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFilewrapperName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @filewrapperTemplateInExpressionAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_filewrapperTemplateInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_filewrapperTemplateInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperTemplateInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperTemplateInExpressionAST * ptr (void) const { return (const cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperTemplateInExpressionAST (const cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperTemplateInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_actualOutputExpressionList & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplateName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @filewrapperTemplateInExpressionAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_filewrapperTemplateInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mFilewrapperName ;
  public : GALGAS_lstring mProperty_mFilewrapperTemplateName ;
  public : GALGAS_actualOutputExpressionList mProperty_mExpressions ;

//--- Constructor
  public : cPtr_filewrapperTemplateInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                    const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                    const GALGAS_actualOutputExpressionList & in_mExpressions
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList getter_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @functionCallExpressionAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_functionCallExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_functionCallExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionCallExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionCallExpressionAST * ptr (void) const { return (const cPtr_functionCallExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionCallExpressionAST (const cPtr_functionCallExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionCallExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_actualOutputExpressionList & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionCallExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_mExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @functionCallExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_functionCallExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mFunctionName ;
  public : GALGAS_actualOutputExpressionList mProperty_mExpressionList ;

//--- Constructor
  public : cPtr_functionCallExpressionAST (const GALGAS_lstring & in_mFunctionName,
                                           const GALGAS_actualOutputExpressionList & in_mExpressionList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList getter_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @getterCallExpressionAST class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_getterCallExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_getterCallExpressionAST (void) ;

//---
  public : inline const class cPtr_getterCallExpressionAST * ptr (void) const { return (const cPtr_getterCallExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_getterCallExpressionAST (const cPtr_getterCallExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getterCallExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getterCallExpressionAST constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_actualOutputExpressionList & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getterCallExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mReceiver (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterCallExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @getterCallExpressionAST class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_getterCallExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mProperty_mReceiver ;
  public : GALGAS_lstring mProperty_mGetterName ;
  public : GALGAS_actualOutputExpressionList mProperty_mExpressions ;

//--- Constructor
  public : cPtr_getterCallExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiver,
                                         const GALGAS_lstring & in_mGetterName,
                                         const GALGAS_actualOutputExpressionList & in_mExpressions
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mReceiver (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList getter_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @lexiqueIntrospectionExpressionAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_lexiqueIntrospectionExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_lexiqueIntrospectionExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueIntrospectionExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexiqueIntrospectionExpressionAST * ptr (void) const { return (const cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexiqueIntrospectionExpressionAST (const cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueIntrospectionExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_lexiqueIntrospectionExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueGetterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueIntrospectionExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @lexiqueIntrospectionExpressionAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_lexiqueIntrospectionExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mLexiqueComponentName ;
  public : GALGAS_lstring mProperty_mLexiqueGetterName ;

//--- Constructor
  public : cPtr_lexiqueIntrospectionExpressionAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                   const GALGAS_lstring & in_mLexiqueGetterName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLexiqueComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLexiqueGetterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @literalBigIntExpressionAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_literalBigIntExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalBigIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalBigIntExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalBigIntExpressionAST * ptr (void) const { return (const cPtr_literalBigIntExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalBigIntExpressionAST (const cPtr_literalBigIntExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalBigIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalBigIntExpressionAST constructor_new (const class GALGAS_lbigint & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalBigIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalBigIntExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @literalBigIntExpressionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_literalBigIntExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lbigint mProperty_mValue ;

//--- Constructor
  public : cPtr_literalBigIntExpressionAST (const GALGAS_lbigint & in_mValue
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lbigint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @literalCharExpressionAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_literalCharExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalCharExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalCharExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalCharExpressionAST * ptr (void) const { return (const cPtr_literalCharExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalCharExpressionAST (const cPtr_literalCharExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalCharExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalCharExpressionAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalCharExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @literalCharExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_literalCharExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public : cPtr_literalCharExpressionAST (const GALGAS_lchar & in_mCharacter
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lchar getter_mCharacter (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @literalDoubleExpressionAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_literalDoubleExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalDoubleExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalDoubleExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalDoubleExpressionAST * ptr (void) const { return (const cPtr_literalDoubleExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalDoubleExpressionAST (const cPtr_literalDoubleExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalDoubleExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalDoubleExpressionAST constructor_new (const class GALGAS_ldouble & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalDoubleExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @literalDoubleExpressionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_literalDoubleExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_ldouble mProperty_mValue ;

//--- Constructor
  public : cPtr_literalDoubleExpressionAST (const GALGAS_ldouble & in_mValue
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ldouble getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @literalSIntExpressionAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_literalSIntExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalSIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalSIntExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalSIntExpressionAST * ptr (void) const { return (const cPtr_literalSIntExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalSIntExpressionAST (const cPtr_literalSIntExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalSIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalSIntExpressionAST constructor_new (const class GALGAS_lsint & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalSIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lsint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSIntExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @literalSIntExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_literalSIntExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lsint mProperty_mValue ;

//--- Constructor
  public : cPtr_literalSIntExpressionAST (const GALGAS_lsint & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @literalSInt_36__34_ExpressionAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_literalSInt_36__34_ExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalSInt_36__34_ExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalSInt_36__34_ExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalSInt_36__34_ExpressionAST * ptr (void) const { return (const cPtr_literalSInt_36__34_ExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalSInt_36__34_ExpressionAST (const cPtr_literalSInt_36__34_ExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalSInt_36__34_ExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalSInt_36__34_ExpressionAST constructor_new (const class GALGAS_lsint_36__34_ & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lsint_36__34_ getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @literalSInt64ExpressionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_literalSInt_36__34_ExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lsint_36__34_ mProperty_mValue ;

//--- Constructor
  public : cPtr_literalSInt_36__34_ExpressionAST (const GALGAS_lsint_36__34_ & in_mValue
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint_36__34_ getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @literalTypeInExpressionAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_literalTypeInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalTypeInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalTypeInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalTypeInExpressionAST * ptr (void) const { return (const cPtr_literalTypeInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalTypeInExpressionAST (const cPtr_literalTypeInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalTypeInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalTypeInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalTypeInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLiteralTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalTypeInExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @literalTypeInExpressionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_literalTypeInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mLiteralTypeName ;

//--- Constructor
  public : cPtr_literalTypeInExpressionAST (const GALGAS_lstring & in_mLiteralTypeName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLiteralTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @literalUIntExpressionAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_literalUIntExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalUIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalUIntExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalUIntExpressionAST * ptr (void) const { return (const cPtr_literalUIntExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalUIntExpressionAST (const cPtr_literalUIntExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalUIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalUIntExpressionAST constructor_new (const class GALGAS_luint & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalUIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUIntExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @literalUIntExpressionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_literalUIntExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_luint mProperty_mValue ;

//--- Constructor
  public : cPtr_literalUIntExpressionAST (const GALGAS_luint & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @literalUInt_36__34_ExpressionAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_literalUInt_36__34_ExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalUInt_36__34_ExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalUInt_36__34_ExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalUInt_36__34_ExpressionAST * ptr (void) const { return (const cPtr_literalUInt_36__34_ExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalUInt_36__34_ExpressionAST (const cPtr_literalUInt_36__34_ExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalUInt_36__34_ExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalUInt_36__34_ExpressionAST constructor_new (const class GALGAS_luint_36__34_ & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint_36__34_ getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @literalUInt64ExpressionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_literalUInt_36__34_ExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_luint_36__34_ mProperty_mValue ;

//--- Constructor
  public : cPtr_literalUInt_36__34_ExpressionAST (const GALGAS_luint_36__34_ & in_mValue
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint_36__34_ getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @optionExpressionAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_optionExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_optionExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionExpressionAST * ptr (void) const { return (const cPtr_optionExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionExpressionAST (const cPtr_optionExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionEntryName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionGetterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @optionExpressionAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_optionExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mOptionComponentName ;
  public : GALGAS_lstring mProperty_mOptionEntryName ;
  public : GALGAS_lstring mProperty_mOptionGetterName ;

//--- Constructor
  public : cPtr_optionExpressionAST (const GALGAS_lstring & in_mOptionComponentName,
                                     const GALGAS_lstring & in_mOptionEntryName,
                                     const GALGAS_lstring & in_mOptionGetterName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionEntryName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionGetterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @structFieldAccessExpressionAST class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_structFieldAccessExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_structFieldAccessExpressionAST (void) ;

//---
  public : inline const class cPtr_structFieldAccessExpressionAST * ptr (void) const { return (const cPtr_structFieldAccessExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structFieldAccessExpressionAST (const cPtr_structFieldAccessExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structFieldAccessExpressionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_structFieldAccessExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structFieldAccessExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStructFieldName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structFieldAccessExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @structFieldAccessExpressionAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_structFieldAccessExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mProperty_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;
  public : GALGAS_lstring mProperty_mStructFieldName ;

//--- Constructor
  public : cPtr_structFieldAccessExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                const GALGAS_semanticExpressionAST & in_mExpression,
                                                const GALGAS_lstring & in_mStructFieldName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStructFieldName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @testDynamicClassInExpressionAST class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_testDynamicClassInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_testDynamicClassInExpressionAST (void) ;

//---
  public : inline const class cPtr_testDynamicClassInExpressionAST * ptr (void) const { return (const cPtr_testDynamicClassInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_testDynamicClassInExpressionAST (const cPtr_testDynamicClassInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_testDynamicClassInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_testDynamicClassInExpressionAST constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                                const class GALGAS_lstring & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dynamicTypeComparisonKind getter_mTypeComparisonKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testDynamicClassInExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @testDynamicClassInExpressionAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_testDynamicClassInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public : GALGAS_location mProperty_mEndOfReceiverExpression ;
  public : GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public : GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public : cPtr_testDynamicClassInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                 const GALGAS_location & in_mEndOfReceiverExpression,
                                                 const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                 const GALGAS_lstring & in_mTypeName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_dynamicTypeComparisonKind getter_mTypeComparisonKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @varInExpressionAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_varInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_varInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_varInExpressionAST * ptr (void) const { return (const cPtr_varInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInExpressionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @varInExpressionAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_varInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;

//--- Constructor
  public : cPtr_varInExpressionAST (const GALGAS_lstring & in_mVarName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Parser class 'galgas3ParameterArgumentSyntax' declaration                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cParser_galgas_33_ParameterArgumentSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_ParameterArgumentSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @inputActualExistingVariableParameterAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_inputActualExistingVariableParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputActualExistingVariableParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputActualExistingVariableParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputActualExistingVariableParameterAST * ptr (void) const { return (const cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputActualExistingVariableParameterAST (const cPtr_inputActualExistingVariableParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputActualExistingVariableParameterAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputActualExistingVariableParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputActualExistingVariableParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInputActualParameterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualExistingVariableParameterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Pointer class for @inputActualExistingVariableParameterAST class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_inputActualExistingVariableParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualSelector ;
  public : GALGAS_lstring mProperty_mInputActualParameterName ;

//--- Constructor
  public : cPtr_inputActualExistingVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                         const GALGAS_lstring & in_mInputActualParameterName
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mInputActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @inputActualNewConstantParameterAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_inputActualNewConstantParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputActualNewConstantParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputActualNewConstantParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputActualNewConstantParameterAST * ptr (void) const { return (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputActualNewConstantParameterAST (const cPtr_inputActualNewConstantParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputActualNewConstantParameterAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputActualNewConstantParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                   const class GALGAS_bool & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputActualNewConstantParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInputActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInputOptionalActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMarkedAsUnused (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualNewConstantParameterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @inputActualNewConstantParameterAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_inputActualNewConstantParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualSelector ;
  public : GALGAS_lstring mProperty_mInputOptionalActualTypeName ;
  public : GALGAS_lstring mProperty_mInputActualParameterName ;
  public : GALGAS_bool mProperty_mMarkedAsUnused ;

//--- Constructor
  public : cPtr_inputActualNewConstantParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                    const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                    const GALGAS_lstring & in_mInputActualParameterName,
                                                    const GALGAS_bool & in_mMarkedAsUnused
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mInputOptionalActualTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mInputActualParameterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mMarkedAsUnused (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @inputActualNewVariableParameterAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_inputActualNewVariableParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputActualNewVariableParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputActualNewVariableParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputActualNewVariableParameterAST * ptr (void) const { return (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputActualNewVariableParameterAST (const cPtr_inputActualNewVariableParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputActualNewVariableParameterAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputActualNewVariableParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputActualNewVariableParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInputActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInputOptionalActualTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualNewVariableParameterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @inputActualNewVariableParameterAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_inputActualNewVariableParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualSelector ;
  public : GALGAS_lstring mProperty_mInputOptionalActualTypeName ;
  public : GALGAS_lstring mProperty_mInputActualParameterName ;

//--- Constructor
  public : cPtr_inputActualNewVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                    const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                    const GALGAS_lstring & in_mInputActualParameterName
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mInputOptionalActualTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mInputActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @inputSingleJokerActualParameterAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_inputSingleJokerActualParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputSingleJokerActualParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputSingleJokerActualParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputSingleJokerActualParameterAST * ptr (void) const { return (const cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputSingleJokerActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputSingleJokerActualParameterAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputSingleJokerActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputSingleJokerActualParameterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @inputSingleJokerActualParameterAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_inputSingleJokerActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualSelector ;

//--- Constructor
  public : cPtr_inputSingleJokerActualParameterAST (const GALGAS_lstring & in_mActualSelector
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @outputActualParameterAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_outputActualParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_outputActualParameterAST (void) ;

//---
  public : inline const class cPtr_outputActualParameterAST * ptr (void) const { return (const cPtr_outputActualParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputActualParameterAST (const cPtr_outputActualParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outputActualParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_location & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mOutputActualParameterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputActualParameterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @outputActualParameterAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_outputActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualSelector ;
  public : GALGAS_semanticExpressionAST mProperty_mOutputActualParameterExpression ;
  public : GALGAS_location mProperty_mEndOfExpressionLocation ;

//--- Constructor
  public : cPtr_outputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                          const GALGAS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                          const GALGAS_location & in_mEndOfExpressionLocation
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mOutputActualParameterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @outputInputActualParameterAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_outputInputActualParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_outputInputActualParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outputInputActualParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outputInputActualParameterAST * ptr (void) const { return (const cPtr_outputInputActualParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputInputActualParameterAST (const cPtr_outputInputActualParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputInputActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outputInputActualParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstringlist & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputInputActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOutputInputActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputActualParameterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @outputInputActualParameterAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_outputInputActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualSelector ;
  public : GALGAS_lstring mProperty_mOutputInputActualParameterName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;

//--- Constructor
  public : cPtr_outputInputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                               const GALGAS_lstring & in_mOutputInputActualParameterName,
                                               const GALGAS_lstringlist & in_mStructAttributeList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOutputInputActualParameterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @outputInputSingleJokerParameterAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_outputInputSingleJokerParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_outputInputSingleJokerParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outputInputSingleJokerParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outputInputSingleJokerParameterAST * ptr (void) const { return (const cPtr_outputInputSingleJokerParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputInputSingleJokerParameterAST (const cPtr_outputInputSingleJokerParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputInputSingleJokerParameterAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outputInputSingleJokerParameterAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputInputSingleJokerParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputSingleJokerParameterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @outputInputSingleJokerParameterAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_outputInputSingleJokerParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualSelector ;

//--- Constructor
  public : cPtr_outputInputSingleJokerParameterAST (const GALGAS_lstring & in_mActualSelector
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualSelector (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Parser class 'galgas3InstructionsSyntax' declaration                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_InstructionsSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_else_5F_or_5F_default_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_else_5F_or_5F_default_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_instruction_5F_branch_ (class GALGAS_castInstructionBranchListAST & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_instruction_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_casted_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_casted_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_casted_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                               class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                               const class GALGAS_lstring constinArgument1,
                                                               const class GALGAS_lstring constinArgument2,
                                                               class GALGAS_semanticInstructionAST & outArgument3,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_expression_ (class GALGAS_ifExpressionList & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_instruction_5F_core_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_issue_5F_fixit_ (class GALGAS_fixitListAST & outArgument0,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_issue_5F_fixit_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_issue_5F_fixit_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_entry_ (class GALGAS_matchEntryListAST & ioArgument0,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_entry_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_entry_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_instruction_5F_branch_ (class GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_instruction_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_switch_5F_case_ (class GALGAS_lstringlist & outArgument0,
                                               class GALGAS_switchExtractedValuesListAST & outArgument1,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_switch_5F_case_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_switch_5F_case_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_with_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                            const class GALGAS_semanticExpressionAST constinArgument1,
                                                            const class GALGAS_location constinArgument2,
                                                            const class GALGAS_lstring constinArgument3,
                                                            class GALGAS_semanticInstructionAST & outArgument4,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_with_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_with_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument0,
                                                                                         GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument0,
                                                                                         GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i15_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i17_ (GALGAS_fixitListAST & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_ (const GALGAS_location constinArgument0,
                                                                                          const GALGAS_lstring constinArgument1,
                                                                                          const GALGAS_lstring constinArgument2,
                                                                                          GALGAS_semanticInstructionAST & outArgument3,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_ (const GALGAS_location constinArgument0,
                                                                                          const GALGAS_lstring constinArgument1,
                                                                                          const GALGAS_lstring constinArgument2,
                                                                                          GALGAS_semanticInstructionAST & outArgument3,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i31_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_if_5F_expression_i33_ (GALGAS_ifExpressionList & outArgument0,
                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_if_5F_expression_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_if_5F_expression_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i39_ (GALGAS_matchEntryListAST & ioArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i40_ (GALGAS_matchEntryListAST & ioArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i41_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_switch_5F_case_i55_ (GALGAS_lstringlist & outArgument0,
                                                                          GALGAS_switchExtractedValuesListAST & outArgument1,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_switch_5F_case_i55_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_switch_5F_case_i55_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i60_ (const GALGAS_location constinArgument0,
                                                                                       const GALGAS_semanticExpressionAST constinArgument1,
                                                                                       const GALGAS_location constinArgument2,
                                                                                       const GALGAS_lstring constinArgument3,
                                                                                       GALGAS_semanticInstructionAST & outArgument4,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i60_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i60_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i61_ (const GALGAS_location constinArgument0,
                                                                                       const GALGAS_semanticExpressionAST constinArgument1,
                                                                                       const GALGAS_location constinArgument2,
                                                                                       const GALGAS_lstring constinArgument3,
                                                                                       GALGAS_semanticInstructionAST & outArgument4,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i61_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i61_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_InstructionsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_43 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_44 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_45 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_46 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_47 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_48 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_49 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_50 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_51 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_52 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_53 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_54 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_55 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_56 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_57 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_58 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_59 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_60 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_61 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_62 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_63 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_64 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_65 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_66 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_67 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_68 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_69 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_70 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_71 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_72 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_73 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @assignmentInstructionAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_assignmentInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_assignmentInstructionAST (void) ;

//---
  public : inline const class cPtr_assignmentInstructionAST * ptr (void) const { return (const cPtr_assignmentInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstringlist & inOperand2,
                                                                         const class GALGAS_semanticExpressionAST & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @assignmentInstructionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_assignmentInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetVariableName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_lstring & in_mTargetVariableName,
                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                          const GALGAS_semanticExpressionAST & in_mSourceExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @divEqualExpressionInstructionAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_divEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_divEqualExpressionInstructionAST (void) ;

//---
  public : inline const class cPtr_divEqualExpressionInstructionAST * ptr (void) const { return (const cPtr_divEqualExpressionInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_divEqualExpressionInstructionAST (const cPtr_divEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_divEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_divEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstringlist & inOperand2,
                                                                                 const class GALGAS_semanticExpressionAST & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_divEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divEqualExpressionInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @divEqualExpressionInstructionAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_divEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_divEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mReceiverName,
                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                  const GALGAS_semanticExpressionAST & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @enumeratedCollectionImplicitVarInExpAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_enumeratedCollectionImplicitVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--- Constructor
  public : GALGAS_enumeratedCollectionImplicitVarInExpAST (void) ;

//---
  public : inline const class cPtr_enumeratedCollectionImplicitVarInExpAST * ptr (void) const { return (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumeratedCollectionImplicitVarInExpAST (const cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumeratedCollectionImplicitVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumeratedCollectionImplicitVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                        const class GALGAS_location & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfEnumerationExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mEnumeratedExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPrefix (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionImplicitVarInExpAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Pointer class for @enumeratedCollectionImplicitVarInExpAST class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_enumeratedCollectionImplicitVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mPrefix ;
  public : GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public : GALGAS_location mProperty_mEndOfEnumerationExpression ;

//--- Constructor
  public : cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                         const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                         const GALGAS_location & in_mEndOfEnumerationExpression
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPrefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mEnumeratedExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfEnumerationExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @enumeratedCollectionVarInExpAST class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_enumeratedCollectionVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--- Constructor
  public : GALGAS_enumeratedCollectionVarInExpAST (void) ;

//---
  public : inline const class cPtr_enumeratedCollectionVarInExpAST * ptr (void) const { return (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumeratedCollectionVarInExpAST (const cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumeratedCollectionVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumeratedCollectionVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_semanticExpressionAST & inOperand2,
                                                                                const class GALGAS_location & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfEnumerationExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mEnumeratedExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumerationOptionalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumerationVariable (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionVarInExpAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @enumeratedCollectionVarInExpAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_enumeratedCollectionVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mEnumerationOptionalTypeName ;
  public : GALGAS_lstring mProperty_mEnumerationVariable ;
  public : GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public : GALGAS_location mProperty_mEndOfEnumerationExpression ;

//--- Constructor
  public : cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                 const GALGAS_lstring & in_mEnumerationVariable,
                                                 const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                 const GALGAS_location & in_mEndOfEnumerationExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEnumerationOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEnumerationVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mEnumeratedExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfEnumerationExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @externFunctionDeclarationAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_externFunctionDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_externFunctionDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externFunctionDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_externFunctionDeclarationAST * ptr (void) const { return (const cPtr_externFunctionDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externFunctionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externFunctionDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                             const class GALGAS_lstring & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @externFunctionDeclarationAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_externFunctionDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mFunctionName ;
  public : GALGAS_formalInputParameterListAST mProperty_mFormalArgumentList ;
  public : GALGAS_lstring mProperty_mResultTypeName ;

//--- Constructor
  public : cPtr_externFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_lstring & in_mFunctionName,
                                              const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                              const GALGAS_lstring & in_mResultTypeName
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @externRoutineDeclarationAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_externRoutineDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_externRoutineDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externRoutineDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_externRoutineDeclarationAST * ptr (void) const { return (const cPtr_externRoutineDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_externRoutineDeclarationAST (const cPtr_externRoutineDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externRoutineDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externRoutineDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_formalParameterListAST & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externRoutineDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externRoutineDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @externRoutineDeclarationAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_externRoutineDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsInternal ;
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_formalParameterListAST mProperty_mFormalArgumentList ;

//--- Constructor
  public : cPtr_externRoutineDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_bool & in_mIsInternal,
                                             const GALGAS_lstring & in_mRoutineName,
                                             const GALGAS_formalParameterListAST & in_mFormalArgumentList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @forInstructionAST class                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_forInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_forInstructionAST (void) ;

//---
  public : inline const class cPtr_forInstructionAST * ptr (void) const { return (const cPtr_forInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_semanticExpressionAST & inOperand3,
                                                                  const class GALGAS_location & inOperand4,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                  const class GALGAS_location & inOperand6,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                  const class GALGAS_location & inOperand8,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                  const class GALGAS_location & inOperand10,
                                                                  const class GALGAS_semanticInstructionListAST & inOperand11,
                                                                  const class GALGAS_location & inOperand12,
                                                                  const class GALGAS_location & inOperand13
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mAfterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mBeforeInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mBetweenInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_after_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_before_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_between_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_foreach_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_while_5F_expression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListAST getter_mEnumeratedObjectList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mWhileExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @forInstructionAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_forInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_forInstructionEnumeratedObjectListAST mProperty_mEnumeratedObjectList ;
  public : GALGAS_lstring mProperty_mIndexVariableName ;
  public : GALGAS_semanticExpressionAST mProperty_mWhileExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_while_5F_expression ;
  public : GALGAS_semanticInstructionListAST mProperty_mBeforeInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_before_5F_branch ;
  public : GALGAS_semanticInstructionListAST mProperty_mBetweenInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_between_5F_branch ;
  public : GALGAS_semanticInstructionListAST mProperty_mDoInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_do_5F_branch ;
  public : GALGAS_semanticInstructionListAST mProperty_mAfterInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_after_5F_branch ;
  public : GALGAS_location mProperty_mEndOf_5F_foreach_5F_instruction ;

//--- Constructor
  public : cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                   const GALGAS_lstring & in_mIndexVariableName,
                                   const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                   const GALGAS_location & in_mEndOf_5F_while_5F_expression,
                                   const GALGAS_semanticInstructionListAST & in_mBeforeInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_before_5F_branch,
                                   const GALGAS_semanticInstructionListAST & in_mBetweenInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_between_5F_branch,
                                   const GALGAS_semanticInstructionListAST & in_mDoInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_do_5F_branch,
                                   const GALGAS_semanticInstructionListAST & in_mAfterInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_after_5F_branch,
                                   const GALGAS_location & in_mEndOf_5F_foreach_5F_instruction
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_forInstructionEnumeratedObjectListAST getter_mEnumeratedObjectList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIndexVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_while_5F_expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mBeforeInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_before_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mBetweenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_between_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_do_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mAfterInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_after_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_foreach_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @functionDeclarationAST class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_functionDeclarationAST : public GALGAS_externFunctionDeclarationAST {
//--- Constructor
  public : GALGAS_functionDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionDeclarationAST * ptr (void) const { return (const cPtr_functionDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                       const class GALGAS_lstring & inOperand3,
                                                                       const class GALGAS_lstring & inOperand4,
                                                                       const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                       const class GALGAS_location & inOperand6,
                                                                       const class GALGAS_bool & inOperand7,
                                                                       const class GALGAS_bool & inOperand8
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUsefull (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @functionDeclarationAST class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_functionDeclarationAST : public cPtr_externFunctionDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mResultVariableName ;
  public : GALGAS_semanticInstructionListAST mProperty_mFunctionInstructionList ;
  public : GALGAS_location mProperty_mEndOfFunctionInstructionList ;
  public : GALGAS_bool mProperty_mIsInternal ;
  public : GALGAS_bool mProperty_mIsUsefull ;

//--- Constructor
  public : cPtr_functionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_lstring & in_mFunctionName,
                                        const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                        const GALGAS_lstring & in_mResultTypeName,
                                        const GALGAS_lstring & in_mResultVariableName,
                                        const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                        const GALGAS_location & in_mEndOfFunctionInstructionList,
                                        const GALGAS_bool & in_mIsInternal,
                                        const GALGAS_bool & in_mIsUsefull
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mResultVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsUsefull (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @grammarInFileInstructionAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_grammarInFileInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_grammarInFileInstructionAST (void) ;

//---
  public : inline const class cPtr_grammarInFileInstructionAST * ptr (void) const { return (const cPtr_grammarInFileInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInFileInstructionAST (const cPtr_grammarInFileInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInFileInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_grammarInFileInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_semanticExpressionAST & inOperand3,
                                                                            const class GALGAS_location & inOperand4,
                                                                            const class GALGAS_actualParameterListAST & inOperand5,
                                                                            const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInFileInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGrammarComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInFileInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @grammarInFileInstructionAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_grammarInFileInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mGrammarComponentName ;
  public : GALGAS_lstring mProperty_mLabelName ;
  public : GALGAS_semanticExpressionAST mProperty_mSourceExpression ;
  public : GALGAS_location mProperty_mEndOfSourceExpression ;
  public : GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public : cPtr_grammarInFileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mGrammarComponentName,
                                             const GALGAS_lstring & in_mLabelName,
                                             const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                             const GALGAS_location & in_mEndOfSourceExpression,
                                             const GALGAS_actualParameterListAST & in_mActualParameterList,
                                             const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mGrammarComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfSourceExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @grammarInStringInstructionAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_grammarInStringInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_grammarInStringInstructionAST (void) ;

//---
  public : inline const class cPtr_grammarInStringInstructionAST * ptr (void) const { return (const cPtr_grammarInStringInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInStringInstructionAST (const cPtr_grammarInStringInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInStringInstructionAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_grammarInStringInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstring & inOperand2,
                                                                              const class GALGAS_semanticExpressionAST & inOperand3,
                                                                              const class GALGAS_location & inOperand4,
                                                                              const class GALGAS_semanticExpressionAST & inOperand5,
                                                                              const class GALGAS_location & inOperand6,
                                                                              const class GALGAS_actualParameterListAST & inOperand7,
                                                                              const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInStringInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfNameExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGrammarComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mNameExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInStringInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @grammarInStringInstructionAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_grammarInStringInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mGrammarComponentName ;
  public : GALGAS_lstring mProperty_mLabelName ;
  public : GALGAS_semanticExpressionAST mProperty_mSourceExpression ;
  public : GALGAS_location mProperty_mEndOfSourceExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mNameExpression ;
  public : GALGAS_location mProperty_mEndOfNameExpression ;
  public : GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public : cPtr_grammarInStringInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mGrammarComponentName,
                                               const GALGAS_lstring & in_mLabelName,
                                               const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                               const GALGAS_location & in_mEndOfSourceExpression,
                                               const GALGAS_semanticExpressionAST & in_mNameExpression,
                                               const GALGAS_location & in_mEndOfNameExpression,
                                               const GALGAS_actualParameterListAST & in_mActualParameterList,
                                               const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mGrammarComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLabelName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfSourceExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mNameExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfNameExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Constructor
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * ptr (void) const { return (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst extractObject (const GALGAS_object & inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                                 const class GALGAS_lstring & inOperand1
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualParameterTypeName ;
  public : GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                  const GALGAS_lstring & in_mActualParameterName
                                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Constructor
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * ptr (void) const { return (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar extractObject (const GALGAS_object & inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                               const class GALGAS_lstring & inOperand1
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualParameterTypeName ;
  public : GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                const GALGAS_lstring & in_mActualParameterName
                                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            @grammarInstructionSyntaxDirectedTranslationResultInVar class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Constructor
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * ptr (void) const { return (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar constructor_new (const class GALGAS_lstring & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @incDecInstructionAST class                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_incDecInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_incDecInstructionAST (void) ;

//---
  public : inline const class cPtr_incDecInstructionAST * ptr (void) const { return (const cPtr_incDecInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_incDecInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_incDecInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstringlist & inOperand2,
                                                                     const class GALGAS_incDecKind & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_incDecInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @incDecInstructionAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_incDecInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public : cPtr_incDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_lstring & in_mReceiverName,
                                      const GALGAS_lstringlist & in_mStructAttributeList,
                                      const GALGAS_incDecKind & in_mKind
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @incDecNoOVFInstructionAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_incDecNoOVFInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_incDecNoOVFInstructionAST (void) ;

//---
  public : inline const class cPtr_incDecNoOVFInstructionAST * ptr (void) const { return (const cPtr_incDecNoOVFInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_incDecNoOVFInstructionAST (const cPtr_incDecNoOVFInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_incDecNoOVFInstructionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_incDecNoOVFInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstringlist & inOperand2,
                                                                          const class GALGAS_incDecKind & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecNoOVFInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @incDecNoOVFInstructionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_incDecNoOVFInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public : cPtr_incDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_lstring & in_mReceiverName,
                                           const GALGAS_lstringlist & in_mStructAttributeList,
                                           const GALGAS_incDecKind & in_mKind
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @inputParameterDeclaredConstant class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_inputParameterDeclaredConstant : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterDeclaredConstant (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterDeclaredConstant constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterDeclaredConstant * ptr (void) const { return (const cPtr_inputParameterDeclaredConstant *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterDeclaredConstant extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputParameterDeclaredConstant constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterDeclaredConstant & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterDeclaredConstant class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @inputParameterDeclaredConstant class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_inputParameterDeclaredConstant : public cPtr_abstractInputParameter {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualParameterTypeName ;
  public : GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public : cPtr_inputParameterDeclaredConstant (const GALGAS_lstring & in_mActualParameterTypeName,
                                                const GALGAS_lstring & in_mActualParameterName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @inputParameterDeclaredVariable class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_inputParameterDeclaredVariable : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterDeclaredVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterDeclaredVariable constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterDeclaredVariable * ptr (void) const { return (const cPtr_inputParameterDeclaredVariable *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterDeclaredVariable extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputParameterDeclaredVariable constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterDeclaredVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterDeclaredVariable class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @inputParameterDeclaredVariable class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_inputParameterDeclaredVariable : public cPtr_abstractInputParameter {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualParameterTypeName ;
  public : GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public : cPtr_inputParameterDeclaredVariable (const GALGAS_lstring & in_mActualParameterTypeName,
                                                const GALGAS_lstring & in_mActualParameterName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @inputParameterVariable class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_inputParameterVariable : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterVariable constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterVariable * ptr (void) const { return (const cPtr_inputParameterVariable *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterVariable extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputParameterVariable constructor_new (const class GALGAS_lstring & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterVariable class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @inputParameterVariable class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_inputParameterVariable : public cPtr_abstractInputParameter {
//--- Attributes
  public : GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public : cPtr_inputParameterVariable (const GALGAS_lstring & in_mActualParameterName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @localConstantDeclarationWithAssignmentAST class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_localConstantDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localConstantDeclarationWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_localConstantDeclarationWithAssignmentAST * ptr (void) const { return (const cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localConstantDeclarationWithAssignmentAST (const cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localConstantDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_localConstantDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_semanticExpressionAST & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localConstantDeclarationWithAssignmentAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Pointer class for @localConstantDeclarationWithAssignmentAST class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_localConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mVariableName ;
  public : GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_localConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_lstring & in_mVariableName,
                                                           const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @localVariableDeclarationWithAssignmentAST class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_localVariableDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localVariableDeclarationWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_localVariableDeclarationWithAssignmentAST * ptr (void) const { return (const cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableDeclarationWithAssignmentAST (const cPtr_localVariableDeclarationWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_localVariableDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_semanticExpressionAST & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationWithAssignmentAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Pointer class for @localVariableDeclarationWithAssignmentAST class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_localVariableDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mVariableName ;
  public : GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_localVariableDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_lstring & in_mVariableName,
                                                           const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @localVariableOrConstantDeclarationWithAssignmentAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_localVariableOrConstantDeclarationWithAssignmentAST * ptr (void) const { return (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableOrConstantDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_bool & inOperand1,
                                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                                    const class GALGAS_lstring & inOperand3,
                                                                                                    const class GALGAS_semanticExpressionAST & inOperand4
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithAssignmentAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_localVariableOrConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsConstant ;
  public : GALGAS_lstring mProperty_mOptionalTypeName ;
  public : GALGAS_lstring mProperty_mVariableName ;
  public : GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public : cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_bool & in_mIsConstant,
                                                                     const GALGAS_lstring & in_mOptionalTypeName,
                                                                     const GALGAS_lstring & in_mVariableName,
                                                                     const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsConstant (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @methodCallInstructionAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_methodCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_methodCallInstructionAST (void) ;

//---
  public : inline const class cPtr_methodCallInstructionAST * ptr (void) const { return (const cPtr_methodCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_methodCallInstructionAST (const cPtr_methodCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_methodCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_methodCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_actualParameterListAST & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodCallInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @methodCallInstructionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_methodCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public : GALGAS_lstring mProperty_mMethodName ;
  public : GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public : cPtr_methodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                          const GALGAS_lstring & in_mMethodName,
                                          const GALGAS_actualParameterListAST & in_mActualParameterList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @minusEqualExpressionInstructionAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_minusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_minusEqualExpressionInstructionAST (void) ;

//---
  public : inline const class cPtr_minusEqualExpressionInstructionAST * ptr (void) const { return (const cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_minusEqualExpressionInstructionAST (const cPtr_minusEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_minusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_minusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstringlist & inOperand2,
                                                                                   const class GALGAS_semanticExpressionAST & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_minusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_minusEqualExpressionInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @minusEqualExpressionInstructionAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_minusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_minusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstring & in_mReceiverName,
                                                    const GALGAS_lstringlist & in_mStructAttributeList,
                                                    const GALGAS_semanticExpressionAST & in_mExpression
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @mulEqualExpressionInstructionAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_mulEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_mulEqualExpressionInstructionAST (void) ;

//---
  public : inline const class cPtr_mulEqualExpressionInstructionAST * ptr (void) const { return (const cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_mulEqualExpressionInstructionAST (const cPtr_mulEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mulEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_mulEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstringlist & inOperand2,
                                                                                 const class GALGAS_semanticExpressionAST & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mulEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mulEqualExpressionInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @mulEqualExpressionInstructionAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_mulEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_mulEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mReceiverName,
                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                  const GALGAS_semanticExpressionAST & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @onceFunctionDeclarationAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_onceFunctionDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_onceFunctionDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_onceFunctionDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_onceFunctionDeclarationAST * ptr (void) const { return (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_onceFunctionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_onceFunctionDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3,
                                                                           const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                           const class GALGAS_location & inOperand5,
                                                                           const class GALGAS_bool & inOperand6,
                                                                           const class GALGAS_bool & inOperand7
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUsefull (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_onceFunctionDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @onceFunctionDeclarationAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_onceFunctionDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mFunctionName ;
  public : GALGAS_lstring mProperty_mResultTypeName ;
  public : GALGAS_lstring mProperty_mResultVariableName ;
  public : GALGAS_semanticInstructionListAST mProperty_mFunctionInstructionList ;
  public : GALGAS_location mProperty_mEndOfFunctionInstructionList ;
  public : GALGAS_bool mProperty_mIsInternal ;
  public : GALGAS_bool mProperty_mIsUsefull ;

//--- Constructor
  public : cPtr_onceFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_lstring & in_mFunctionName,
                                            const GALGAS_lstring & in_mResultTypeName,
                                            const GALGAS_lstring & in_mResultVariableName,
                                            const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                            const GALGAS_location & in_mEndOfFunctionInstructionList,
                                            const GALGAS_bool & in_mIsInternal,
                                            const GALGAS_bool & in_mIsUsefull
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mResultVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsUsefull (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @plusEqualElementsInstructionAST class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_plusEqualElementsInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_plusEqualElementsInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_plusEqualElementsInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_plusEqualElementsInstructionAST * ptr (void) const { return (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_plusEqualElementsInstructionAST (const cPtr_plusEqualElementsInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_plusEqualElementsInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_plusEqualElementsInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstringlist & inOperand2,
                                                                                const class GALGAS_actualOutputExpressionList & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_plusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualElementsInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @plusEqualElementsInstructionAST class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_plusEqualElementsInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_actualOutputExpressionList mProperty_mExpressions ;

//--- Constructor
  public : cPtr_plusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mReceiverName,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_actualOutputExpressionList & in_mExpressions
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList getter_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @plusEqualExpressionInstructionAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_plusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_plusEqualExpressionInstructionAST (void) ;

//---
  public : inline const class cPtr_plusEqualExpressionInstructionAST * ptr (void) const { return (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_plusEqualExpressionInstructionAST (const cPtr_plusEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_plusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_plusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstringlist & inOperand2,
                                                                                  const class GALGAS_semanticExpressionAST & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_plusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualExpressionInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @plusEqualExpressionInstructionAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_plusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_plusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_lstring & in_mReceiverName,
                                                   const GALGAS_lstringlist & in_mStructAttributeList,
                                                   const GALGAS_semanticExpressionAST & in_mExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @procCallInstructionAST class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_procCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_procCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_procCallInstructionAST * ptr (void) const { return (const cPtr_procCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_actualParameterListAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @procCallInstructionAST class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_procCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public : cPtr_procCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                        const GALGAS_lstring & in_mRoutineName,
                                        const GALGAS_actualParameterListAST & in_mActualParameterList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @procDeclarationAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_procDeclarationAST : public GALGAS_externRoutineDeclarationAST {
//--- Constructor
  public : GALGAS_procDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_procDeclarationAST * ptr (void) const { return (const cPtr_procDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_procDeclarationAST (const cPtr_procDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_bool & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_formalParameterListAST & inOperand3,
                                                                   const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                   const class GALGAS_location & inOperand5
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mRoutineInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @procDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_procDeclarationAST : public cPtr_externRoutineDeclarationAST {
//--- Attributes
  public : GALGAS_semanticInstructionListAST mProperty_mRoutineInstructionList ;
  public : GALGAS_location mProperty_mEndOfRoutineInstructionList ;

//--- Constructor
  public : cPtr_procDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_bool & in_mIsInternal,
                                    const GALGAS_lstring & in_mRoutineName,
                                    const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                    const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                    const GALGAS_location & in_mEndOfRoutineInstructionList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mRoutineInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfRoutineInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @readAccessWithInstructionAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_readAccessWithInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_readAccessWithInstructionAST (void) ;

//---
  public : inline const class cPtr_readAccessWithInstructionAST * ptr (void) const { return (const cPtr_readAccessWithInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_readAccessWithInstructionAST (const cPtr_readAccessWithInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_readAccessWithInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_readAccessWithInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_semanticExpressionAST & inOperand2,
                                                                             const class GALGAS_location & inOperand3,
                                                                             const class GALGAS_semanticExpressionAST & inOperand4,
                                                                             const class GALGAS_location & inOperand5,
                                                                             const class GALGAS_lstring & inOperand6,
                                                                             const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                             const class GALGAS_location & inOperand8,
                                                                             const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                             const class GALGAS_location & inOperand10
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_readAccessWithInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mDoBranchInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mElseBranchInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfKeyExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mKeyExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPrefix (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readAccessWithInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @readAccessWithInstructionAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_readAccessWithInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mPrefix ;
  public : GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public : GALGAS_location mProperty_mEndOfReceiverExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mKeyExpression ;
  public : GALGAS_location mProperty_mEndOfKeyExpression ;
  public : GALGAS_lstring mProperty_mSearchMethodNameForErrorSignaling ;
  public : GALGAS_semanticInstructionListAST mProperty_mDoBranchInstructions ;
  public : GALGAS_location mProperty_mEndOf_5F_do_5F_instructions ;
  public : GALGAS_semanticInstructionListAST mProperty_mElseBranchInstructions ;
  public : GALGAS_location mProperty_mEndOf_5F_else_5F_instructions ;

//--- Constructor
  public : cPtr_readAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mPrefix,
                                              const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                              const GALGAS_location & in_mEndOfReceiverExpression,
                                              const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                              const GALGAS_location & in_mEndOfKeyExpression,
                                              const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                              const GALGAS_semanticInstructionListAST & in_mDoBranchInstructions,
                                              const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                              const GALGAS_semanticInstructionListAST & in_mElseBranchInstructions,
                                              const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPrefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mDoBranchInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mElseBranchInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @readWriteAccessWithInstructionAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_readWriteAccessWithInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_readWriteAccessWithInstructionAST (void) ;

//---
  public : inline const class cPtr_readWriteAccessWithInstructionAST * ptr (void) const { return (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_readWriteAccessWithInstructionAST (const cPtr_readWriteAccessWithInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_readWriteAccessWithInstructionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_readWriteAccessWithInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                                  const class GALGAS_location & inOperand4,
                                                                                  const class GALGAS_semanticExpressionAST & inOperand5,
                                                                                  const class GALGAS_location & inOperand6,
                                                                                  const class GALGAS_lstring & inOperand7,
                                                                                  const class GALGAS_semanticInstructionListAST & inOperand8,
                                                                                  const class GALGAS_location & inOperand9,
                                                                                  const class GALGAS_semanticInstructionListAST & inOperand10,
                                                                                  const class GALGAS_location & inOperand11
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_readWriteAccessWithInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfKeyExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFieldList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mKeyExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPrefix (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_m_5F_do_5F_Instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_m_5F_else_5F_Instructions (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteAccessWithInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @readWriteAccessWithInstructionAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_readWriteAccessWithInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mPrefix ;
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_lstringlist mProperty_mFieldList ;
  public : GALGAS_location mProperty_mEndOfReceiverExpression ;
  public : GALGAS_semanticExpressionAST mProperty_mKeyExpression ;
  public : GALGAS_location mProperty_mEndOfKeyExpression ;
  public : GALGAS_lstring mProperty_mSearchMethodNameForErrorSignaling ;
  public : GALGAS_semanticInstructionListAST mProperty_m_5F_do_5F_Instructions ;
  public : GALGAS_location mProperty_mEndOf_5F_do_5F_instructions ;
  public : GALGAS_semanticInstructionListAST mProperty_m_5F_else_5F_Instructions ;
  public : GALGAS_location mProperty_mEndOf_5F_else_5F_instructions ;

//--- Constructor
  public : cPtr_readWriteAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_lstring & in_mPrefix,
                                                   const GALGAS_lstring & in_mReceiverName,
                                                   const GALGAS_lstringlist & in_mFieldList,
                                                   const GALGAS_location & in_mEndOfReceiverExpression,
                                                   const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                   const GALGAS_location & in_mEndOfKeyExpression,
                                                   const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                   const GALGAS_semanticInstructionListAST & in_m_5F_do_5F_Instructions,
                                                   const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                   const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_Instructions,
                                                   const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPrefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mFieldList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST getter_mKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_m_5F_do_5F_Instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_m_5F_else_5F_Instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @selfSetterCallInstructionAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_selfSetterCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_selfSetterCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selfSetterCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selfSetterCallInstructionAST * ptr (void) const { return (const cPtr_selfSetterCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfSetterCallInstructionAST (const cPtr_selfSetterCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfSetterCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selfSetterCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_actualParameterListAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @selfSetterCallInstructionAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_selfSetterCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mSetterName ;
  public : GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public : cPtr_selfSetterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mSetterName,
                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @setterCallInstructionAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_setterCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_setterCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_setterCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_setterCallInstructionAST * ptr (void) const { return (const cPtr_setterCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_setterCallInstructionAST (const cPtr_setterCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_setterCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_setterCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstringlist & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_lstring & inOperand4,
                                                                         const class GALGAS_actualParameterListAST & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_setterCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mReceiverStructAttributes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameForCasting (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @setterCallInstructionAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_setterCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_lstringlist mProperty_mReceiverStructAttributes ;
  public : GALGAS_lstring mProperty_mTypeNameForCasting ;
  public : GALGAS_lstring mProperty_mSetterName ;
  public : GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public : cPtr_setterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_lstring & in_mReceiverName,
                                          const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                          const GALGAS_lstring & in_mTypeNameForCasting,
                                          const GALGAS_lstring & in_mSetterName,
                                          const GALGAS_actualParameterListAST & in_mActualParameterList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mReceiverStructAttributes (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeNameForCasting (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @typeMethodCallInstructionAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typeMethodCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_typeMethodCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeMethodCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeMethodCallInstructionAST * ptr (void) const { return (const cPtr_typeMethodCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeMethodCallInstructionAST (const cPtr_typeMethodCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeMethodCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeMethodCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_actualParameterListAST & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @typeMethodCallInstructionAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_typeMethodCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mMethodName ;
  public : GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public : cPtr_typeMethodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTypeName,
                                              const GALGAS_lstring & in_mMethodName,
                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST getter_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @undefinedLocalConstantDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_undefinedLocalConstantDeclarationAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_undefinedLocalConstantDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_undefinedLocalConstantDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_undefinedLocalConstantDeclarationAST * ptr (void) const { return (const cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_undefinedLocalConstantDeclarationAST (const cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_undefinedLocalConstantDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_undefinedLocalConstantDeclarationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @undefinedLocalConstantDeclarationAST class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_undefinedLocalConstantDeclarationAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mConstantTypeName ;
  public : GALGAS_lstring mProperty_mConstantName ;

//--- Constructor
  public : cPtr_undefinedLocalConstantDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mConstantTypeName,
                                                      const GALGAS_lstring & in_mConstantName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Parser class 'galgas3DeclarationsSyntax' declaration                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_DeclarationsSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                               class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_constructor_ (class GALGAS_externTypeConstructorList & ioArgument0,
                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_constructor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_constructor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GALGAS_string & outArgument0,
                                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GALGAS_string & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_getter_ (class GALGAS_externTypeGetterList & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_getter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_getter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_method_ (class GALGAS_externTypeMethodList & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_method_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_method_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_setter_ (class GALGAS_externTypeSetterList & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_setter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_externtype_5F_setter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_filewrapper_5F_binary_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_filewrapper_5F_binary_5F_files_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_filewrapper_5F_binary_5F_files_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_filewrapper_5F_templates_ (class GALGAS_filewrapperTemplateListAST & outArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_filewrapper_5F_templates_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_filewrapper_5F_templates_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_filewrapper_5F_text_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_filewrapper_5F_text_5F_files_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_filewrapper_5F_text_5F_files_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GALGAS_insertMethodListAST & ioArgument0,
                                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_property_5F_declaration_ (class GALGAS_propertyInCollectionListAST & ioArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_property_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_property_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_remove_5F_declaration_ (class GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_remove_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_remove_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_search_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_search_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_search_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_attribute_ (class GALGAS_sharedMapAttributeListAST & ioArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_attribute_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_attribute_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_override_ (class GALGAS_mapOverrideBlockListAST & ioArgument0,
                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_override_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_override_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_state_5F_list_ (class GALGAS_mapStateList & ioArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_state_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_state_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_state_5F_transition_ (class GALGAS_mapStateTransitionList & ioArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_state_5F_transition_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_shared_5F_map_5F_state_5F_transition_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_ (const GALGAS_bool constinArgument0,
                                                                                         GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GALGAS_lstringlist & outArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GALGAS_lstringlist & outArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GALGAS_filewrapperTemplateListAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i6_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i7_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i8_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_ (GALGAS_string & outArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_ (GALGAS_string & outArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i13_ (GALGAS_externTypeConstructorList & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i14_ (GALGAS_externTypeGetterList & ioArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i15_ (GALGAS_externTypeSetterList & ioArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i16_ (GALGAS_externTypeMethodList & ioArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i17_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i22_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i23_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i26_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i27_ (GALGAS_mapOverrideBlockListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_override_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i28_ (GALGAS_sharedMapAttributeListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_attribute_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i29_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i30_ (GALGAS_mapStateList & ioArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_list_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i31_ (GALGAS_mapStateTransitionList & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_state_5F_transition_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i32_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i34_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i35_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i36_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i37_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i38_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i39_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i40_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i41_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i42_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i42_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i42_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i43_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i43_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i43_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i44_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i44_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i44_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i45_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i45_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i45_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i46_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i46_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i46_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_43 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_44 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_45 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_46 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_47 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_48 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_49 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_50 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_51 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_52 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_53 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @abstractExtensionGetterAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_abstractExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_abstractExtensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractExtensionGetterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractExtensionGetterAST * ptr (void) const { return (const cPtr_abstractExtensionGetterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractExtensionGetterAST (const cPtr_abstractExtensionGetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_abstractExtensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                           const class GALGAS_lstring & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mAbstractExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionGetterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @abstractExtensionGetterAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_abstractExtensionGetterAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mAbstractExtensionGetterName ;
  public : GALGAS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public : GALGAS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;

//--- Constructor
  public : cPtr_abstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                            const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                            const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAbstractExtensionGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST getter_mAbstractExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAbstractExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @abstractExtensionMethodAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_abstractExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_abstractExtensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractExtensionMethodAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractExtensionMethodAST * ptr (void) const { return (const cPtr_abstractExtensionMethodAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractExtensionMethodAST (const cPtr_abstractExtensionMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_abstractExtensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_formalParameterListAST & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mAbstractExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionMethodAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @abstractExtensionMethodAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_abstractExtensionMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mAbstractExtensionMethodName ;
  public : GALGAS_formalParameterListAST mProperty_mAbstractExtensionMethodFormalParameterList ;

//--- Constructor
  public : cPtr_abstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                            const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAbstractExtensionMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST getter_mAbstractExtensionMethodFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @abstractExtensionSetterAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_abstractExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_abstractExtensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractExtensionSetterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractExtensionSetterAST * ptr (void) const { return (const cPtr_abstractExtensionSetterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractExtensionSetterAST (const cPtr_abstractExtensionSetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_abstractExtensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_formalParameterListAST & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mAbstractExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionSetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionSetterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @abstractExtensionSetterAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_abstractExtensionSetterAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mAbstractExtensionSetterName ;
  public : GALGAS_formalParameterListAST mProperty_mAbstractExtensionSetterFormalParameterList ;

//--- Constructor
  public : cPtr_abstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                            const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAbstractExtensionSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST getter_mAbstractExtensionSetterFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @arrayDeclarationAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_arrayDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArrayTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mDimension (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mElementTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @arrayDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_arrayDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mArrayTypeName ;
  public : GALGAS_lstring mProperty_mElementTypeName ;
  public : GALGAS_luint mProperty_mDimension ;

//--- Constructor
  public : cPtr_arrayDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mArrayTypeName,
                                     const GALGAS_lstring & in_mElementTypeName,
                                     const GALGAS_luint & in_mDimension
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mArrayTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mElementTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mDimension (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @boolsetDeclarationAST class                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_boolsetDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_boolsetDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_boolsetDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_boolsetDeclarationAST * ptr (void) const { return (const cPtr_boolsetDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_boolsetDeclarationAST (const cPtr_boolsetDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boolsetDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_boolsetDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstringlist & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boolsetDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBoolsetTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFlagList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolsetDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @boolsetDeclarationAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_boolsetDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mBoolsetTypeName ;
  public : GALGAS_lstringlist mProperty_mFlagList ;

//--- Constructor
  public : cPtr_boolsetDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_lstring & in_mBoolsetTypeName,
                                       const GALGAS_lstringlist & in_mFlagList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mBoolsetTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mFlagList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @classDeclarationAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_classDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    const class GALGAS_lstring & inOperand3,
                                                                    const class GALGAS_lstring & inOperand4,
                                                                    const class GALGAS_lstringlist & inOperand5,
                                                                    const class GALGAS_propertyInCollectionListAST & inOperand6
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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @classDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_classDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsAbstract ;
  public : GALGAS_bool mProperty_mIsShared ;
  public : GALGAS_lstring mProperty_mClassTypeName ;
  public : GALGAS_lstring mProperty_mSuperClassName ;
  public : GALGAS_lstringlist mProperty_mClassFeatureList ;
  public : GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public : cPtr_classDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_bool & in_mIsAbstract,
                                     const GALGAS_bool & in_mIsShared,
                                     const GALGAS_lstring & in_mClassTypeName,
                                     const GALGAS_lstring & in_mSuperClassName,
                                     const GALGAS_lstringlist & in_mClassFeatureList,
                                     const GALGAS_propertyInCollectionListAST & in_mPropertyList
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @dictDeclarationAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_dictDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_dictDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_dictDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_dictDeclarationAST * ptr (void) const { return (const cPtr_dictDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_dictDeclarationAST (const cPtr_dictDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dictDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_dictDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                   const class GALGAS_propertyInCollectionListAST & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dictDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDictTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mKeyTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dictDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @dictDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_dictDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mDictTypeName ;
  public : GALGAS_lstring mProperty_mKeyTypeName ;
  public : GALGAS_lstringlist mProperty_mAttributeList ;
  public : GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public : cPtr_dictDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mDictTypeName,
                                    const GALGAS_lstring & in_mKeyTypeName,
                                    const GALGAS_lstringlist & in_mAttributeList,
                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDictTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mKeyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @enumDeclarationAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_enumDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_enumConstantList & inOperand2,
                                                                   const class GALGAS_lstring & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantList getter_mConstantList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDefaultConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @enumDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_enumDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mEnumTypeName ;
  public : GALGAS_enumConstantList mProperty_mConstantList ;
  public : GALGAS_lstring mProperty_mDefaultConstantName ;

//--- Constructor
  public : cPtr_enumDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mEnumTypeName,
                                    const GALGAS_enumConstantList & in_mConstantList,
                                    const GALGAS_lstring & in_mDefaultConstantName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEnumTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantList getter_mConstantList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDefaultConstantName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @extensionGetterAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_extensionGetterAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_extensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionGetterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_extensionGetterAST * ptr (void) const { return (const cPtr_extensionGetterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extensionGetterAST (const cPtr_extensionGetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionGetterAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                   const class GALGAS_lstring & inOperand4,
                                                                   const class GALGAS_lstring & inOperand5,
                                                                   const class GALGAS_semanticInstructionListAST & inOperand6,
                                                                   const class GALGAS_location & inOperand7
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReaderLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mExtensionGetterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionGetterReturnedVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @extensionGetterAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_extensionGetterAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mExtensionGetterName ;
  public : GALGAS_formalInputParameterListAST mProperty_mExtensionGetterFormalInputParameterList ;
  public : GALGAS_lstring mProperty_mExtensionGetterReturnedTypeName ;
  public : GALGAS_lstring mProperty_mExtensionGetterReturnedVariableName ;
  public : GALGAS_semanticInstructionListAST mProperty_mExtensionGetterInstructionList ;
  public : GALGAS_location mProperty_mEndOfReaderLocation ;

//--- Constructor
  public : cPtr_extensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mTypeName,
                                    const GALGAS_lstring & in_mExtensionGetterName,
                                    const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                    const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                    const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                    const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                    const GALGAS_location & in_mEndOfReaderLocation
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mExtensionGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST getter_mExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mExtensionGetterReturnedVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mExtensionGetterInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfReaderLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @extensionMethodAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_extensionMethodAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_extensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionMethodAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_extensionMethodAST * ptr (void) const { return (const cPtr_extensionMethodAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extensionMethodAST (const cPtr_extensionMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionMethodAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_formalParameterListAST & inOperand3,
                                                                   const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                   const class GALGAS_location & inOperand5
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfMethodLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mExtensionMethodInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @extensionMethodAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_extensionMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mExtensionMethodName ;
  public : GALGAS_formalParameterListAST mProperty_mExtensionMethodFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mProperty_mExtensionMethodInstructionList ;
  public : GALGAS_location mProperty_mEndOfMethodLocation ;

//--- Constructor
  public : cPtr_extensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mTypeName,
                                    const GALGAS_lstring & in_mExtensionMethodName,
                                    const GALGAS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                    const GALGAS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                    const GALGAS_location & in_mEndOfMethodLocation
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mExtensionMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST getter_mExtensionMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mExtensionMethodInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfMethodLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @extensionSetterAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_extensionSetterAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_extensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionSetterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_extensionSetterAST * ptr (void) const { return (const cPtr_extensionSetterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extensionSetterAST (const cPtr_extensionSetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionSetterAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_formalParameterListAST & inOperand3,
                                                                   const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                   const class GALGAS_location & inOperand5
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSetterDeclarationLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mExtensionSetterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtensionSetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionSetterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @extensionSetterAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_extensionSetterAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mExtensionSetterName ;
  public : GALGAS_formalParameterListAST mProperty_mExtensionSetterFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mProperty_mExtensionSetterInstructionList ;
  public : GALGAS_location mProperty_mEndOfSetterDeclarationLocation ;

//--- Constructor
  public : cPtr_extensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mTypeName,
                                    const GALGAS_lstring & in_mExtensionSetterName,
                                    const GALGAS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                    const GALGAS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                    const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mExtensionSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST getter_mExtensionSetterFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mExtensionSetterInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfSetterDeclarationLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @externTypeDeclarationAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_externTypeDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_string & inOperand3,
                                                                         const class GALGAS_externTypeConstructorList & inOperand4,
                                                                         const class GALGAS_externTypeGetterList & inOperand5,
                                                                         const class GALGAS_externTypeSetterList & inOperand6,
                                                                         const class GALGAS_externTypeMethodList & inOperand7
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppClassCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppPreDeclarationCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_mExternTypeConstructorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_mExternTypeGetterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList getter_mExternTypeMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_mExternTypeSetterList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @externTypeDeclarationAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_externTypeDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mExternTypeName ;
  public : GALGAS_string mProperty_mCppPreDeclarationCode ;
  public : GALGAS_string mProperty_mCppClassCode ;
  public : GALGAS_externTypeConstructorList mProperty_mExternTypeConstructorList ;
  public : GALGAS_externTypeGetterList mProperty_mExternTypeGetterList ;
  public : GALGAS_externTypeSetterList mProperty_mExternTypeSetterList ;
  public : GALGAS_externTypeMethodList mProperty_mExternTypeMethodList ;

//--- Constructor
  public : cPtr_externTypeDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                          const GALGAS_lstring & in_mExternTypeName,
                                          const GALGAS_string & in_mCppPreDeclarationCode,
                                          const GALGAS_string & in_mCppClassCode,
                                          const GALGAS_externTypeConstructorList & in_mExternTypeConstructorList,
                                          const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                          const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                          const GALGAS_externTypeMethodList & in_mExternTypeMethodList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mExternTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCppPreDeclarationCode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCppClassCode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeConstructorList getter_mExternTypeConstructorList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeGetterList getter_mExternTypeGetterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeSetterList getter_mExternTypeSetterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeMethodList getter_mExternTypeMethodList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @filewrapperDeclarationAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_filewrapperDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilewrapperBinaryFileExtensionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListAST getter_mFilewrapperTemplateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilewrapperTextFileExtensionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceFileAbsolutePath (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @filewrapperDeclarationAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_filewrapperDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsInternal ;
  public : GALGAS_string mProperty_mSourceFileAbsolutePath ;
  public : GALGAS_lstring mProperty_mFilewrapperName ;
  public : GALGAS_lstring mProperty_mFilewrapperPath ;
  public : GALGAS_lstringlist mProperty_mFilewrapperTextFileExtensionList ;
  public : GALGAS_lstringlist mProperty_mFilewrapperBinaryFileExtensionList ;
  public : GALGAS_filewrapperTemplateListAST mProperty_mFilewrapperTemplateList ;

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
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSourceFileAbsolutePath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFilewrapperPath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mFilewrapperTextFileExtensionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mFilewrapperBinaryFileExtensionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListAST getter_mFilewrapperTemplateList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @graphDeclarationAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_graphDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAssociatedListTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGraphTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList getter_mInsertModifierList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @graphDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_graphDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mGraphTypeName ;
  public : GALGAS_lstring mProperty_mAssociatedListTypeName ;
  public : GALGAS_graphInsertModifierList mProperty_mInsertModifierList ;

//--- Constructor
  public : cPtr_graphDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mGraphTypeName,
                                     const GALGAS_lstring & in_mAssociatedListTypeName,
                                     const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mGraphTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAssociatedListTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_graphInsertModifierList getter_mInsertModifierList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @listDeclarationAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_listDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @listDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mListTypeName ;
  public : GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;

//--- Constructor
  public : cPtr_listDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mListTypeName,
                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @listmapDeclarationAST class                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_listmapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listmapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAssociatedListTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mListmapTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listmapDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listmapDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @listmapDeclarationAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_listmapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mListmapTypeName ;
  public : GALGAS_lstring mProperty_mAssociatedListTypeName ;

//--- Constructor
  public : cPtr_listmapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_lstring & in_mListmapTypeName,
                                       const GALGAS_lstring & in_mAssociatedListTypeName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mListmapTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAssociatedListTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @localVariableDeclarationAST class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_localVariableDeclarationAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localVariableDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localVariableDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_localVariableDeclarationAST * ptr (void) const { return (const cPtr_localVariableDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableDeclarationAST (const cPtr_localVariableDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_localVariableDeclarationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_bool & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUndefinedConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @localVariableDeclarationAST class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_localVariableDeclarationAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mVariableName ;
  public : GALGAS_bool mProperty_mIsUndefinedConstant ;

//--- Constructor
  public : cPtr_localVariableDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mVariableName,
                                             const GALGAS_bool & in_mIsUndefinedConstant
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsUndefinedConstant (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @mapDeclarationAST class                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_mapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_insertOrReplaceDeclarationListAST getter_mInsertOrReplaceDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST getter_mRemoveMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @mapDeclarationAST class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_mapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mMapTypeName ;
  public : GALGAS_lstringlist mProperty_mAttributeList ;
  public : GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public : GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public : GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public : GALGAS_mapRemoveMethodListAST mProperty_mRemoveMethodList ;
  public : GALGAS_insertOrReplaceDeclarationListAST mProperty_mInsertOrReplaceDeclarationListAST ;

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
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMapTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapRemoveMethodListAST getter_mRemoveMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertOrReplaceDeclarationListAST getter_mInsertOrReplaceDeclarationListAST (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @mapProxyDeclarationAST class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_mapProxyDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_lstring & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapProxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAssociatedMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMapProxyTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapProxyDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapProxyDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @mapProxyDeclarationAST class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_mapProxyDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mMapProxyTypeName ;
  public : GALGAS_lstring mProperty_mAssociatedMapTypeName ;

//--- Constructor
  public : cPtr_mapProxyDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_lstring & in_mMapProxyTypeName,
                                        const GALGAS_lstring & in_mAssociatedMapTypeName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMapProxyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAssociatedMapTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @overridingAbstractExtensionGetterAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_overridingAbstractExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingAbstractExtensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingAbstractExtensionGetterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingAbstractExtensionGetterAST * ptr (void) const { return (const cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingAbstractExtensionGetterAST (const cPtr_overridingAbstractExtensionGetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingAbstractExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_overridingAbstractExtensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                                     const class GALGAS_lstring & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mAbstractExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAbstractExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionGetterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @overridingAbstractExtensionGetterAST class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_overridingAbstractExtensionGetterAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mAbstractExtensionGetterName ;
  public : GALGAS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public : GALGAS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;

//--- Constructor
  public : cPtr_overridingAbstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                      const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                      const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAbstractExtensionGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST getter_mAbstractExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAbstractExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @overridingAbstractExtensionMethodAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_overridingAbstractExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingAbstractExtensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingAbstractExtensionMethodAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingAbstractExtensionMethodAST * ptr (void) const { return (const cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingAbstractExtensionMethodAST (const cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingAbstractExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_overridingAbstractExtensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_formalParameterListAST & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mOverridingExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionMethodAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @overridingAbstractExtensionMethodAST class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_overridingAbstractExtensionMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mOverridingExtensionMethodName ;
  public : GALGAS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;

//--- Constructor
  public : cPtr_overridingAbstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOverridingExtensionMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST getter_mOverridingExtensionMethodFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @overridingAbstractExtensionSetterAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_overridingAbstractExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingAbstractExtensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingAbstractExtensionSetterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingAbstractExtensionSetterAST * ptr (void) const { return (const cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingAbstractExtensionSetterAST (const cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingAbstractExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_overridingAbstractExtensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_formalParameterListAST & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mOverridingExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionSetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionSetterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @overridingAbstractExtensionSetterAST class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_overridingAbstractExtensionSetterAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mOverridingExtensionSetterName ;
  public : GALGAS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;

//--- Constructor
  public : cPtr_overridingAbstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOverridingExtensionSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST getter_mOverridingExtensionSetterFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @overridingExtensionGetterAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_overridingExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingExtensionGetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingExtensionGetterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingExtensionGetterAST * ptr (void) const { return (const cPtr_overridingExtensionGetterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingExtensionGetterAST (const cPtr_overridingExtensionGetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_overridingExtensionGetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                             const class GALGAS_lstring & inOperand4,
                                                                             const class GALGAS_lstring & inOperand5,
                                                                             const class GALGAS_semanticInstructionListAST & inOperand6,
                                                                             const class GALGAS_location & inOperand7
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfReaderLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mOverridingExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mOverridingExtensionGetterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionGetterReturnedVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionGetterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @overridingExtensionGetterAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_overridingExtensionGetterAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mOverridingExtensionGetterName ;
  public : GALGAS_formalInputParameterListAST mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  public : GALGAS_lstring mProperty_mOverridingExtensionGetterReturnedTypeName ;
  public : GALGAS_lstring mProperty_mOverridingExtensionGetterReturnedVariableName ;
  public : GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionGetterInstructionList ;
  public : GALGAS_location mProperty_mEndOfReaderLocation ;

//--- Constructor
  public : cPtr_overridingExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_lstring & in_mTypeName,
                                              const GALGAS_lstring & in_mOverridingExtensionGetterName,
                                              const GALGAS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                              const GALGAS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                              const GALGAS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                              const GALGAS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                              const GALGAS_location & in_mEndOfReaderLocation
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOverridingExtensionGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST getter_mOverridingExtensionGetterFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOverridingExtensionGetterReturnedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOverridingExtensionGetterReturnedVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mOverridingExtensionGetterInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfReaderLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @overridingExtensionMethodAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_overridingExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingExtensionMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingExtensionMethodAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingExtensionMethodAST * ptr (void) const { return (const cPtr_overridingExtensionMethodAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingExtensionMethodAST (const cPtr_overridingExtensionMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_overridingExtensionMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_formalParameterListAST & inOperand3,
                                                                             const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                             const class GALGAS_location & inOperand5
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfMethodLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mOverridingExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mOverridingExtensionMethodInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionMethodAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @overridingExtensionMethodAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_overridingExtensionMethodAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mOverridingExtensionMethodName ;
  public : GALGAS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionMethodInstructionList ;
  public : GALGAS_location mProperty_mEndOfMethodLocation ;

//--- Constructor
  public : cPtr_overridingExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_lstring & in_mTypeName,
                                              const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                              const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                              const GALGAS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                              const GALGAS_location & in_mEndOfMethodLocation
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOverridingExtensionMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST getter_mOverridingExtensionMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mOverridingExtensionMethodInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfMethodLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @overridingExtensionSetterAST class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_overridingExtensionSetterAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingExtensionSetterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingExtensionSetterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingExtensionSetterAST * ptr (void) const { return (const cPtr_overridingExtensionSetterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingExtensionSetterAST (const cPtr_overridingExtensionSetterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingExtensionSetterAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_overridingExtensionSetterAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_formalParameterListAST & inOperand3,
                                                                             const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                             const class GALGAS_location & inOperand5
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfSetterDeclarationLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mOverridingExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mOverridingExtensionSetterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOverridingExtensionSetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionSetterAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @overridingExtensionSetterAST class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_overridingExtensionSetterAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mOverridingExtensionSetterName ;
  public : GALGAS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;
  public : GALGAS_semanticInstructionListAST mProperty_mOverridingExtensionSetterInstructionList ;
  public : GALGAS_location mProperty_mEndOfSetterDeclarationLocation ;

//--- Constructor
  public : cPtr_overridingExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_lstring & in_mTypeName,
                                              const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                              const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                              const GALGAS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                              const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOverridingExtensionSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST getter_mOverridingExtensionSetterFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST getter_mOverridingExtensionSetterInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfSetterDeclarationLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @sharedMapDeclarationAST class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_sharedMapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : typeComparisonResult objectCompare (const GALGAS_sharedMapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockListAST getter_mMapOverrideBlockListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateList getter_mMapStateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sharedMapAttributeListAST getter_mSharedMapAttributeListAST (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sharedMapDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @sharedMapDeclarationAST class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_sharedMapDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mMapTypeName ;
  public : GALGAS_lstringlist mProperty_mAttributeList ;
  public : GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public : GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public : GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public : GALGAS_mapStateList mProperty_mMapStateList ;
  public : GALGAS_mapOverrideBlockListAST mProperty_mMapOverrideBlockListAST ;
  public : GALGAS_sharedMapAttributeListAST mProperty_mSharedMapAttributeListAST ;

//--- Constructor
  public : cPtr_sharedMapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
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
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMapTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateList getter_mMapStateList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockListAST getter_mMapOverrideBlockListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_sharedMapAttributeListAST getter_mSharedMapAttributeListAST (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @sortedListDeclarationAST class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_sortedListDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST getter_mSortDescriptorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSortedListTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedListDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @sortedListDeclarationAST class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_sortedListDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mSortedListTypeName ;
  public : GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public : GALGAS_sortedListSortDescriptorListAST mProperty_mSortDescriptorList ;

//--- Constructor
  public : cPtr_sortedListDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                          const GALGAS_lstring & in_mSortedListTypeName,
                                          const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                          const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSortedListTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST getter_mPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_sortedListSortDescriptorListAST getter_mSortDescriptorList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @structDeclarationAST class                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_structDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratedElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStructTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_mStructurePropertyList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @structDeclarationAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_structDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mStructTypeName ;
  public : GALGAS_propertyInCollectionListAST mProperty_mStructurePropertyList ;
  public : GALGAS_string mProperty_mEnumeratedElementTypeName ;

//--- Constructor
  public : cPtr_structDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                      const GALGAS_lstring & in_mStructTypeName,
                                      const GALGAS_propertyInCollectionListAST & in_mStructurePropertyList,
                                      const GALGAS_string & in_mEnumeratedElementTypeName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStructTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST getter_mStructurePropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumeratedElementTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

