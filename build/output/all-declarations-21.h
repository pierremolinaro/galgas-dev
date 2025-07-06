#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_terminalInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_terminalInstructionForGrammarAnalysis_2E_weak (const class GGS_terminalInstructionForGrammarAnalysis & inSource) ;

  public: GGS_terminalInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_terminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_terminalInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_terminalInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_terminalInstructionForGrammarAnalysis bang_terminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_terminalInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_terminalInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis.element displayRuleVertically'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const class GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                            const class GGS_string constin_inSyntaxComponentName,
                                            class GGS_string & io_ioGeneratedCode,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_escapeForTex (const class GGS_string & constinArgument0,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@genericExtensionMethodListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_genericExtensionMethodListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_lstring constin_inValue,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@descendantClassListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_descendantClassListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_unifiedTypeMapEntry constin_inType,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR galgas3ProjectGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_galgas_33_ProjectGrammar : public cParser_galgas_33_ProjectSyntax {
//------------------------------------- 'folderDirectory' non terminal
//--- 'parse' label
  public: virtual void nt_folderDirectory_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_folderDirectory_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_folderDirectory_ (const GGS_string inArgument0,
                                            GGS_lstringlist & ioArgument1,
                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_ (GGS_galgas_33_ProjectComponentAST & outArgument0,
                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_galgas_33_ProjectComponentAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_galgas_33_ProjectComponentAST & outArgument0
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
  public: virtual void nt_project_5F_header_ (GGS_lbigint & outArgument0,
                                              GGS_lbigint & outArgument1,
                                              GGS_lbigint & outArgument2,
                                              GGS_lstring & outArgument3,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

  public: virtual int32_t select_galgas_33_ProjectSyntax_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ProjectSyntax_1 (Lexique_galgasScanner_33_ *) ;
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
  public: virtual void nt_acces_5F_control_ (GGS_AccessControlAST & outArgument0,
                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'actual_input_parameter_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                            GGS_actualInputParameterListAST & outArgument1,
                                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'actual_parameter_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                   GGS_actualParameterListAST & outArgument1,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'branchOfParseWhithInstruction' non terminal
//--- 'parse' label
  public: virtual void nt_branchOfParseWhithInstruction_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_branchOfParseWhithInstruction_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_branchOfParseWhithInstruction_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS_syntaxInstructionList & outArgument1,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'cast_else_or_default' non terminal
//--- 'parse' label
  public: virtual void nt_cast_5F_else_5F_or_5F_default_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_cast_5F_else_5F_or_5F_default_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_cast_5F_else_5F_or_5F_default_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS_semanticInstructionListAST & outArgument1,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'cast_instruction_branch' non terminal
//--- 'parse' label
  public: virtual void nt_cast_5F_instruction_5F_branch_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_cast_5F_instruction_5F_branch_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_cast_5F_instruction_5F_branch_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS_castInstructionBranchListAST & ioArgument1,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'comma_separated_expression_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_comma_5F_separated_5F_expression_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_comma_5F_separated_5F_expression_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_comma_5F_separated_5F_expression_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS_CommaSeparatedExpressionList & outArgument1,
                                                                        Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'expression_and_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_and_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_and_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_and_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                         GGS_semanticExpressionAST & outArgument1,
                                                         Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'expression_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                  GGS_semanticExpressionAST & outArgument1,
                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'expression_or_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_or_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_or_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_or_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                        GGS_semanticExpressionAST & outArgument1,
                                                        Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_constructor_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_constructor_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_constructor_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_constructor_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                 GGS_externTypeConstructorList & ioArgument1,
                                                                 Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_cpp_classdeclaration' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (GGS_string & outArgument0,
                                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_cpp_predeclaration' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (GGS_string & outArgument0,
                                                                Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_getter_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_getter_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_getter_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_getter_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                            GGS_externTypeGetterList & ioArgument1,
                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_method_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_method_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_method_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_method_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                            GGS_externTypeMethodList & ioArgument1,
                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'externtype_setter_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_externtype_5F_setter_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_externtype_5F_setter_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_setter_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                            GGS_externTypeSetterList & ioArgument1,
                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'factor_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_factor_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_factor_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                              GGS_semanticExpressionAST & outArgument1,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'filewrapper_binary_files' non terminal
//--- 'parse' label
  public: virtual void nt_filewrapper_5F_binary_5F_files_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_filewrapper_5F_binary_5F_files_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_binary_5F_files_ (GGS_lstringlist & outArgument0,
                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'filewrapper_templates' non terminal
//--- 'parse' label
  public: virtual void nt_filewrapper_5F_templates_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_filewrapper_5F_templates_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_templates_ (GGS_galgasDeclarationAST & ioArgument0,
                                                     GGS_filewrapperTemplateListAST & outArgument1,
                                                     Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'filewrapper_text_files' non terminal
//--- 'parse' label
  public: virtual void nt_filewrapper_5F_text_5F_files_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_filewrapper_5F_text_5F_files_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_text_5F_files_ (GGS_lstringlist & outArgument0,
                                                         Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_element_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                       GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                            GGS_formalInputParameterListAST & outArgument1,
                                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list_ggs34' non terminal
//--- 'parse' label
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                GGS_formalInputParameterListAST & outArgument1,
                                                                                Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'formal_parameter_list_ggs34' non terminal
//--- 'parse' label
  public: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                       GGS_formalParameterListAST & outArgument1,
                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'function_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_function_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_function_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_function_5F_declaration_5F_ggs_33__ (const GGS_bool inArgument0,
                                                               const GGS_bool inArgument1,
                                                               const GGS_bool inArgument2,
                                                               const GGS_lstring inArgument3,
                                                               GGS_galgasDeclarationAST & ioArgument4,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'grammar_instruction_core' non terminal
//--- 'parse' label
  public: virtual void nt_grammar_5F_instruction_5F_core_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_grammar_5F_instruction_5F_core_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_instruction_5F_core_ (GGS_galgasDeclarationAST & ioArgument0,
                                                           const GGS_location inArgument1,
                                                           const GGS_actualParameterListAST inArgument2,
                                                           const GGS_lstring inArgument3,
                                                           const GGS_lstring inArgument4,
                                                           GGS_semanticInstructionAST & outArgument5,
                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'grammar_instruction_core_obsolete' non terminal
//--- 'parse' label
  public: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                       const GGS_location inArgument1,
                                                                       const GGS_lstring inArgument2,
                                                                       const GGS_lstring inArgument3,
                                                                       GGS_semanticInstructionAST & outArgument4,
                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'grammar_start_symbol_label_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           const GGS_lstring inArgument1,
                                                                           GGS_nonTerminalLabelListAST & ioArgument2,
                                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'gui_attributes' non terminal
//--- 'parse' label
  public: virtual void nt_gui_5F_attributes_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_gui_5F_attributes_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_attributes_ (GGS_guiSimpleAttributeListAST & ioArgument0,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'gui_with_lexique_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (GGS_withLexiqueListAST & ioArgument0,
                                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'gui_with_option_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (GGS_lstringlist & ioArgument0,
                                                                 Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'if_instruction_core' non terminal
//--- 'parse' label
  public: virtual void nt_if_5F_instruction_5F_core_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_if_5F_instruction_5F_core_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_if_5F_instruction_5F_core_ (GGS_galgasDeclarationAST & ioArgument0,
                                                      GGS_semanticInstructionAST & outArgument1,
                                                      Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'insert_or_replace_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'issue_fixit' non terminal
//--- 'parse' label
  public: virtual void nt_issue_5F_fixit_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_issue_5F_fixit_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_issue_5F_fixit_ (GGS_galgasDeclarationAST & ioArgument0,
                                           GGS_fixitListAST & outArgument1,
                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'label_formal_parameter_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_label_5F_formal_5F_parameter_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                    GGS_lstring & outArgument1,
                                                                    GGS_formalParameterListAST & ioArgument2,
                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_attribute_5F_declaration_5F_ggs_33__ (GGS_lexicalAttributeListAST & ioArgument0,
                                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_explicit_5F_rule_5F_ggs_33__ (GGS_lexicalRuleListAST & ioArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_expression_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_expression_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_expression_ (GGS_lexicalExpressionAST & outArgument0,
                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_factor_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_factor_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_factor_ (GGS_lexicalExpressionAST & outArgument0,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_implicit_5F_rule_5F_ggs_33__ (GGS_lexicalRuleListAST & ioArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_indexing_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_indexing_5F_declaration_5F_ggs_33__ (GGS_indexingListAST & ioArgument0,
                                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_instruction_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_instruction_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_instruction_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_list_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_list_5F_declaration_5F_ggs_33__ (GGS_lexicalListDeclarationListAST & ioArgument0,
                                                                      Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_list_5F_entry_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_list_5F_entry_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_list_5F_entry_ (GGS_lexicalListEntryListAST & ioArgument0,
                                                     Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_message_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_message_5F_declaration_5F_ggs_33__ (GGS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                         Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_send_5F_instruction_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_send_5F_instruction_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_send_5F_instruction_ (GGS_lexicalInstructionAST & outArgument0,
                                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
  public: virtual void nt_lexical_5F_term_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_lexical_5F_term_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_term_ (GGS_lexicalExpressionAST & outArgument0,
                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'map_insert_setter_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (GGS_insertSetterListAST & ioArgument0,
                                                                   Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'method_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_method_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_method_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_method_5F_declaration_5F_ggs_33__ (const GGS_lstring inArgument0,
                                                             GGS_galgasDeclarationAST & ioArgument1,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'non_empty_output_expression_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_actualOutputArgumentList & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'nonterminal_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_nonterminal_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_nonterminal_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_nonterminal_5F_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                                       GGS_nonterminalDeclarationListAST & ioArgument1,
                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'option_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_option_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_option_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_option_5F_declaration_5F_ggs_33__ (GGS_commandLineOptionListAST & ioArgument0,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'optional_type_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_type_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_type_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_type_5F_ggs_33__ (GGS_lstring & outArgument0,
                                                        Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'output_expression_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                    GGS_actualOutputArgumentList & outArgument1,
                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'output_expression_list_ggs34' non terminal
//--- 'parse' label
  public: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS_actualOutputArgumentList & outArgument1,
                                                                        Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'poisoned_var_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__ (GGS_lstringlist & outArgument0,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'primary_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_primary_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_primary_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                               GGS_semanticExpressionAST & outArgument1,
                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'property_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_property_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_property_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_property_5F_declaration_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_propertyInCollectionListAST & ioArgument1,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'relation_factor_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_factor_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_relation_5F_factor_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS_semanticExpressionAST & outArgument1,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'remove_setter_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_remove_5F_setter_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_remove_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_remove_5F_setter_5F_declaration_ (GGS_mapAccessorListAST & ioArgument0,
                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
  public: virtual void nt_repeat_5F_while_5F_branch_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_repeat_5F_while_5F_branch_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_repeat_5F_while_5F_branch_ (GGS_lexicalWhileBranchListAST & ioArgument0,
                                                      Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'replace_setter_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_replace_5F_setter_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_replace_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_replace_5F_setter_5F_declaration_ (GGS_mapAccessorListAST & ioArgument0,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'search_method_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_search_5F_method_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_search_5F_method_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_search_5F_method_5F_declaration_ (GGS_mapAccessorListAST & ioArgument0,
                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'search_subscript_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_search_5F_subscript_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_search_5F_subscript_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_search_5F_subscript_5F_declaration_ (GGS_mapAccessorListAST & ioArgument0,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_beginning_with_identifier' non terminal
//--- 'parse' label
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       const GGS_bool inArgument1,
                                                                                       GGS_semanticInstructionAST & outArgument2,
                                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_semantic_5F_instruction_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticInstructionAST & outArgument1,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_inc_dec' non terminal
//--- 'parse' label
  public: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                  const GGS_bool inArgument1,
                                                                  GGS_semanticInstructionAST & outArgument2,
                                                                  Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                       GGS_semanticInstructionListAST & outArgument1,
                                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'simple_expression_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_expression_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_expression_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                            GGS_semanticExpressionAST & outArgument1,
                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'sortedlist_sort_descriptor' non terminal
//--- 'parse' label
  public: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'start_symbol_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                       Lexique_galgasScanner_33_ * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_galgasDeclarationAST & ioArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_galgasDeclarationAST & ioArgument0
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
  public: virtual void nt_style_5F_declaration_5F_ggs_33__ (GGS_lexicalStyleListAST & ioArgument0,
                                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
  public: virtual void nt_switch_5F_case_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_switch_5F_case_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GGS_galgasDeclarationAST & ioArgument0,
                                           GGS__5B_lstring_5D_ & outArgument1,
                                           GGS_switchExtractedValuesListAST & outArgument2,
                                           Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                        Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_instruction_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_instruction_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_instruction_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_instruction_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                             GGS_syntaxInstructionAST & outArgument1,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_instruction_list_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_instruction_5F_list_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     GGS_syntaxInstructionList & outArgument1,
                                                                     Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_rule_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_rule_5F_declaration_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_rule_5F_declaration_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_rule_5F_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS_syntaxRuleListAST & ioArgument1,
                                                          Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'syntax_rule_label' non terminal
//--- 'parse' label
  public: virtual void nt_syntax_5F_rule_5F_label_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_syntax_5F_rule_5F_label_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_rule_5F_label_ (GGS_galgasDeclarationAST & ioArgument0,
                                                    const GGS_lstring inArgument1,
                                                    GGS_syntaxRuleLabelListAST & ioArgument2,
                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'template_delimitor_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_delimitor_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_template_5F_delimitor_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_delimitor_5F_ggs_33__ (GGS_templateDelimitorListAST & ioArgument0,
                                                             Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'template_replacement_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_replacement_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_template_5F_replacement_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_replacement_5F_ggs_33__ (GGS_templateReplacementListAST & ioArgument0,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'term_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_term_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_term_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                            GGS_semanticExpressionAST & outArgument1,
                                            Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'terminal_declaration_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_terminal_5F_declaration_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_terminal_5F_declaration_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_terminal_5F_declaration_5F_ggs_33__ (GGS_terminalDeclarationListAST & ioArgument0,
                                                               Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'terminal_instruction_indexing' non terminal
//--- 'parse' label
  public: virtual void nt_terminal_5F_instruction_5F_indexing_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_terminal_5F_instruction_5F_indexing_ (GGS__32_lstringlist & outArgument0,
                                                                Lexique_galgasScanner_33_ * inCompiler) ;

//------------------------------------- 'type_definition_ggs3' non terminal
//--- 'parse' label
  public: virtual void nt_type_5F_definition_5F_ggs_33__parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_type_5F_definition_5F_ggs_33__indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_type_5F_definition_5F_ggs_33__ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS_lstring & outArgument1,
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

  public: virtual int32_t select_galgas_33_ExpressionSyntax_17 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_18 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_19 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_20 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_21 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_22 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_23 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_24 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ExpressionSyntax_25 (Lexique_galgasScanner_33_ *) ;

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

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_13 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_14 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_15 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_16 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_17 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_18 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_19 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_20 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_21 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_22 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_23 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_24 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_25 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_26 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_27 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_28 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_29 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_30 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_31 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_32 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_33 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_34 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_35 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_36 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ParameterArgumentSyntax_37 (Lexique_galgasScanner_33_ *) ;

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

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_50 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_51 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_52 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_53 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_54 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_55 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_56 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_57 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_58 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_59 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_60 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_61 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_62 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_63 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_64 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_65 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_66 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_67 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_68 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_69 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_70 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_71 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_72 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_73 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_74 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_75 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_76 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_77 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_78 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_79 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_80 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_81 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_82 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_83 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_DeclarationsSyntax_84 (Lexique_galgasScanner_33_ *) ;

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

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_9 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_10 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_11 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_12 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_GrammarComponentSyntax_13 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ProgramDeclarations_0 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ProgramDeclarations_1 (Lexique_galgasScanner_33_ *) ;

  public: virtual int32_t select_galgas_33_ProgramDeclarations_2 (Lexique_galgasScanner_33_ *) ;
} ;

//--------------------------------------------------------------------------------------------------
