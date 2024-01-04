#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_terminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_terminalInstructionForGrammarAnalysis (const class cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTerminalSymbolName (void) const ;

  public: class GALGAS_uint readProperty_mTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_terminalInstructionForGrammarAnalysis class_func_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_uint & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_terminalInstructionForGrammarAnalysis bang_terminalInstructionForGrammarAnalysis_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_terminalInstructionForGrammarAnalysis_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRuleVertically'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const class GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                            const class GALGAS_string constin_inSyntaxComponentName,
                                            class GALGAS_string & io_ioGeneratedCode,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_escapeForTex (const class GALGAS_string & constinArgument0,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR galgas3ProjectGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_galgas_33_ProjectGrammar : public cParser_galgas_33_ProjectSyntax {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'project_header' non terminal
//--- 'parse' label
  public: virtual void nt_project_5F_header_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_project_5F_header_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_header_ (GALGAS_lbigint & outArgument0,
                                              GALGAS_lbigint & outArgument1,
                                              GALGAS_lbigint & outArgument2,
                                              GALGAS_lstring & outArgument3,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

  public: virtual int32_t select_galgas_33_ProjectSyntax_0 (Lexique_galgasScanner_33_ *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//  GRAMMAR galgas3Grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_galgas_33_Grammar : public cParser_galgas_33_ExpressionSyntax,
                                   public cParser_galgas_33_ParameterArgumentSyntax,
                                   public cParser_galgas_33_InstructionsSyntax,
                                   public cParser_galgas_33_DeclarationsSyntax,
                                   public cParser_galgas_33_LexiqueComponentSyntax,
                                   public cParser_galgas_33_OptionComponentSyntax,
                                   public cParser_galgas_33_GuiComponentSyntax,
                                   public cParser_galgas_33_SyntaxComponentSyntax,
                                   public cParser_galgas_33_GrammarComponentSyntax,
                                   public cParser_galgas_33_ProgramDeclarations {
//------------------------------------- 'acces_control' non terminal
//--- 'parse' label
  public: virtual void nt_acces_5F_control_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_acces_5F_control_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_acces_5F_control_ (GALGAS_AccessControlAST & outArgument0,
                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'actual_input_parameter_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'actual_parameter_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (GALGAS_actualParameterListAST & outArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'branchOfParseWhithInstruction' non terminal
//--- 'parse' label
  public: virtual void nt_branchOfParseWhithInstruction_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_branchOfParseWhithInstruction_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_branchOfParseWhithInstruction_ (GALGAS_syntaxInstructionList & outArgument0,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'cast_else_or_default' non terminal
//--- 'parse' label
  public: virtual void nt_cast_5F_else_5F_or_5F_default_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_cast_5F_else_5F_or_5F_default_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_cast_5F_else_5F_or_5F_default_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'cast_instruction_branch' non terminal
//--- 'parse' label
  public: virtual void nt_cast_5F_instruction_5F_branch_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_cast_5F_instruction_5F_branch_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_cast_5F_instruction_5F_branch_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'collection_value_element' non terminal
//--- 'parse' label
  public: virtual void nt_collection_5F_value_5F_element_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_collection_5F_value_5F_element_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_collection_5F_value_5F_element_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_ggs_33__ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'expression_and_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_and_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_and_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_and_5F_ggs_33__ (GALGAS_semanticExpressionAST & outArgument0,
                                                         Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'expression_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_ggs_33__ (GALGAS_semanticExpressionAST & outArgument0,
                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'expression_or_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_or_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_or_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_or_5F_ggs_33__ (GALGAS_semanticExpressionAST & outArgument0,
                                                        Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_constructor' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_constructor_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_constructor_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_constructor_ (GALGAS_externTypeConstructorList & ioArgument0,
                                                      Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_cpp_classdeclaration' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (GALGAS_string & outArgument0,
                                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_cpp_predeclaration' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (GALGAS_string & outArgument0,
                                                                Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_getter' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_getter_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_getter_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_getter_ (GALGAS_externTypeGetterList & ioArgument0,
                                                 Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_method' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_method_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_method_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_method_ (GALGAS_externTypeMethodList & ioArgument0,
                                                 Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_setter' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_setter_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_setter_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_setter_ (GALGAS_externTypeSetterList & ioArgument0,
                                                 Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'factor_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_factor_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_factor_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_5F_ggs_33__ (GALGAS_semanticExpressionAST & outArgument0,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'filewrapper_binary_files' non terminal
//--- 'parse' label
  public: virtual void nt_filewrapper_5F_binary_5F_files_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_filewrapper_5F_binary_5F_files_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_binary_5F_files_ (GALGAS_lstringlist & outArgument0,
                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'filewrapper_templates' non terminal
//--- 'parse' label
  public: virtual void nt_filewrapper_5F_templates_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_filewrapper_5F_templates_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_templates_ (GALGAS_filewrapperTemplateListAST & outArgument0,
                                                     Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'filewrapper_text_files' non terminal
//--- 'parse' label
  public: virtual void nt_filewrapper_5F_text_5F_files_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_filewrapper_5F_text_5F_files_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_text_5F_files_ (GALGAS_lstringlist & outArgument0,
                                                         Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_element_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'formal_parameter_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__ (GALGAS_formalParameterListAST & outArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'grammar_instruction_core' non terminal
//--- 'parse' label
  public: virtual void nt_grammar_5F_instruction_5F_core_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_grammar_5F_instruction_5F_core_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_instruction_5F_core_ (const GALGAS_location inArgument0,
                                                           const GALGAS_actualParameterListAST inArgument1,
                                                           const GALGAS_lstring inArgument2,
                                                           const GALGAS_lstring inArgument3,
                                                           GALGAS_semanticInstructionAST & outArgument4,
                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'grammar_instruction_core_obsolete' non terminal
//--- 'parse' label
  public: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_ (const GALGAS_location inArgument0,
                                                                       const GALGAS_lstring inArgument1,
                                                                       const GALGAS_lstring inArgument2,
                                                                       GALGAS_semanticInstructionAST & outArgument3,
                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'grammar_start_symbol_label_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (const GALGAS_lstring inArgument0,
                                                                           GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'gui_attributes' non terminal
//--- 'parse' label
  public: virtual void nt_gui_5F_attributes_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_gui_5F_attributes_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_attributes_ (GALGAS_guiSimpleAttributeListAST & ioArgument0,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'gui_with_lexique_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (GALGAS_withLexiqueListAST & ioArgument0,
                                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'gui_with_option_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                                 Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'if_expression_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_if_5F_expression_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_if_5F_expression_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_if_5F_expression_5F_ggs_33__ (GALGAS_ifExpressionList & outArgument0,
                                                        Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'if_instruction_core' non terminal
//--- 'parse' label
  public: virtual void nt_if_5F_instruction_5F_core_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_if_5F_instruction_5F_core_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_if_5F_instruction_5F_core_ (GALGAS_semanticInstructionAST & outArgument0,
                                                      Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'insert_or_replace_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'issue_fixit' non terminal
//--- 'parse' label
  public: virtual void nt_issue_5F_fixit_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_issue_5F_fixit_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_issue_5F_fixit_ (GALGAS_fixitListAST & outArgument0,
                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'label_formal_parameter_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__ (GALGAS_lstring & outArgument0,
                                                                    GALGAS_formalParameterListAST & ioArgument1,
                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_expression_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_expression_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_expression_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_factor_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_factor_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_factor_ (GALGAS_lexicalExpressionAST & outArgument0,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_indexing_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (GALGAS_indexingListAST & ioArgument0,
                                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_instruction_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_instruction_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_instruction_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_list_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                      Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_list_5F_entry_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_list_5F_entry_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_list_5F_entry_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                     Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_message_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                         Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_send_5F_instruction_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_send_5F_instruction_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_send_5F_instruction_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_term_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_term_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_term_ (GALGAS_lexicalExpressionAST & outArgument0,
                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'map_insert_setter_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'method_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_method_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_method_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_method_5F_declaration_5F_ggs_33__ (const GALGAS_lstring inArgument0,
                                                             GALGAS_galgasDeclarationAST & ioArgument1,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'non_empty_output_expression_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'nonterminal_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_nonterminal_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_nonterminal_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_nonterminal_5F_declaration_ (GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'option_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_option_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_option_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_option_5F_declaration_5F_ggs_33__ (GALGAS_commandLineOptionListAST & ioArgument0,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'optional_type' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_type_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_type_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_type_ (GALGAS_lstring & outArgument0,
                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'output_expression_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'poisoned_var_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__ (GALGAS_lstringlist & outArgument0,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'primary_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_primary_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_primary_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_ggs_33__ (GALGAS_semanticExpressionAST & outArgument0,
                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'property_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_property_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_property_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_property_5F_declaration_5F_ggs_33__ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'relation_factor_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_factor_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_relation_5F_factor_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_5F_ggs_33__ (GALGAS_semanticExpressionAST & outArgument0,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'remove_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_remove_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_remove_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_remove_5F_declaration_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
  public: virtual void nt_repeat_5F_while_5F_branch_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_repeat_5F_while_5F_branch_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_repeat_5F_while_5F_branch_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                      Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'search_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_search_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_search_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_search_5F_declaration_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_beginning_with_identifier' non terminal
//--- 'parse' label
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (const GALGAS_bool inArgument0,
                                                                                       GALGAS_semanticInstructionAST & outArgument1,
                                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_semantic_5F_instruction_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_ggs_33__ (GALGAS_semanticInstructionAST & outArgument0,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_inc_dec' non terminal
//--- 'parse' label
  public: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (const GALGAS_bool inArgument0,
                                                                  GALGAS_semanticInstructionAST & outArgument1,
                                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'simple_expression_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_expression_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_expression_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_5F_ggs_33__ (GALGAS_semanticExpressionAST & outArgument0,
                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'sortedlist_sort_descriptor' non terminal
//--- 'parse' label
  public: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                            Lexique_galgasScanner_33_ * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_galgasDeclarationAST & ioArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_galgasDeclarationAST & ioArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'style_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_style_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_style_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_style_5F_declaration_5F_ggs_33__ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
  public: virtual void nt_switch_5F_case_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_switch_5F_case_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GALGAS_lstringlist & outArgument0,
                                           GALGAS_switchExtractedValuesListAST & outArgument1,
                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                        Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_instruction_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_instruction_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_instruction_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_instruction_5F_ggs_33__ (GALGAS_syntaxInstructionAST & outArgument0,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_instruction_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (GALGAS_syntaxInstructionList & outArgument0,
                                                                     Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_rule_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_rule_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_rule_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_rule_5F_declaration_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                          GALGAS_syntaxRuleListAST & ioArgument1,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_rule_label' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_rule_5F_label_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_rule_5F_label_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_rule_5F_label_ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                    const GALGAS_lstring inArgument1,
                                                    GALGAS_syntaxRuleLabelListAST & ioArgument2,
                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'template_delimitor_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_delimitor_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_template_5F_delimitor_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_delimitor_5F_ggs_33__ (GALGAS_templateDelimitorListAST & ioArgument0,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'template_replacement_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_replacement_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_template_5F_replacement_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_replacement_5F_ggs_33__ (GALGAS_templateReplacementListAST & ioArgument0,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'term_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_term_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_term_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_5F_ggs_33__ (GALGAS_semanticExpressionAST & outArgument0,
                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'terminal_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_terminal_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_terminal_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_terminal_5F_declaration_5F_ggs_33__ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'terminal_instruction_indexing' non terminal
//--- 'parse' label
  public: virtual void nt_terminal_5F_instruction_5F_indexing_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_terminal_5F_instruction_5F_indexing_ (GALGAS__32_lstringlist & outArgument0,
                                                                Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'type_definition_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_type_5F_definition_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_type_5F_definition_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_type_5F_definition_5F_ggs_33__ (GALGAS_galgasDeclarationAST & ioArgument0,
                                                          GALGAS_lstring & outArgument1,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'with_instruction_core' non terminal
//--- 'parse' label
  public: virtual void nt_with_5F_instruction_5F_core_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_with_5F_instruction_5F_core_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_with_5F_instruction_5F_core_ (const GALGAS_location inArgument0,
                                                        const GALGAS_semanticExpressionAST inArgument1,
                                                        const GALGAS_location inArgument2,
                                                        const GALGAS_lstring inArgument3,
                                                        GALGAS_semanticInstructionAST & outArgument4,
                                                        Lexique_galgasScanner_33_ * inCompiler) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_2 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_3 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_4 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_5 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_6 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_7 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_8 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_9 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_10 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_11 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_12 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_13 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_14 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_15 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_16 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_12 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_2 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_3 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_4 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_5 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_6 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_7 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_8 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_9 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_10 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_11 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_12 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_13 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_14 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_15 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_16 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_17 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_18 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_19 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_20 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_21 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_22 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_23 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_24 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_25 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_26 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_27 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_28 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_29 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_30 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_31 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_32 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_33 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_34 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_35 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_36 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_37 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_38 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_39 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_40 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_41 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_42 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_43 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_44 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_45 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_46 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_47 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_48 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_49 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_50 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_51 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_52 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_53 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_54 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_55 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_56 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_57 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_58 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_59 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_60 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_61 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_62 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_63 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_64 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_65 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_66 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_67 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_68 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_69 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_70 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_71 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_72 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_73 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_74 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_75 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_76 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_77 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_78 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_79 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_80 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_81 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_82 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_83 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_InstructionsSyntax_84 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_2 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_3 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_4 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_5 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_6 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_7 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_8 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_9 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_10 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_11 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_12 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_13 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_14 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_15 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_16 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_17 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_18 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_19 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_20 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_21 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_22 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_23 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_24 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_25 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_26 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_27 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_28 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_29 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_30 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_31 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_32 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_33 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_34 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_35 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_36 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_37 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_38 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_39 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_40 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_41 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_42 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_43 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_44 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_45 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_46 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_47 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_48 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_49 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_OptionComponentSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_OptionComponentSyntax_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_OptionComponentSyntax_2 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GuiComponentSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GuiComponentSyntax_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GuiComponentSyntax_2 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GuiComponentSyntax_3 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GuiComponentSyntax_4 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GuiComponentSyntax_5 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GuiComponentSyntax_6 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_2 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_3 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_4 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_5 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_6 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_7 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_8 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_9 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_10 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_11 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_12 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_13 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_14 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_15 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_16 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_17 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_SyntaxComponentSyntax_18 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_2 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_3 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_4 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_5 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_6 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_7 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_8 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ProgramDeclarations_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ProgramDeclarations_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ProgramDeclarations_2 (Lexique_galgasScanner_33_ *) ;
} ;

//--------------------------------------------------------------------------------------------------
