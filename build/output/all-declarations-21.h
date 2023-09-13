#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR templateGrammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                              C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'factor_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_factor_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_factor_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                          C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_element_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GALGAS_lstringlist & ioArgument0,
                                                          C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                       C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (GALGAS_templateExpressionListAST & outArgument0,
                                                                C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'primary_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_primary_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_primary_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                           C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_factor_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_factor_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_relation_5F_factor_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                                      C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_term_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_term_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_relation_5F_term_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_term_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'simple_expression_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_expression_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_expression_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                                        C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
  public: virtual void nt_switch_5F_case_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_switch_5F_case_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GALGAS_lstringlist & outArgument0,
                                           GALGAS_switchExtractedValuesListAST & outArgument1,
                                           C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_instruction_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_template_5F_instruction_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_instruction_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                    C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (GALGAS_templateInstructionListAST & outArgument0,
                                                                  C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_templateInstructionListAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_templateInstructionListAST & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (C_Compiler * inCompiler,
                                       const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                 const C_String & inSourceFilePath) ;

//------------------------------------- 'term_tpl' non terminal
//--- 'parse' label
  public: virtual void nt_term_5F_tpl_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- indexing
  public: virtual void nt_term_5F_tpl_indexing (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_5F_tpl_ (GALGAS_templateExpressionAST & outArgument0,
                                        C_Lexique_galgasTemplateScanner * inCompiler) ;

  public: virtual int32_t select_templateSyntax_0 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_1 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_2 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_3 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_4 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_5 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_6 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_7 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_8 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_9 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_10 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_11 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_12 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_13 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_14 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_15 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_16 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_17 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_18 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_19 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_20 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_21 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_22 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_23 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_24 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_25 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_26 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_27 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_28 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_29 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_30 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_31 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_32 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_33 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_34 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_35 (C_Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_36 (C_Lexique_galgasTemplateScanner *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionComponentForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionComponentForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionComponentForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_optionComponentForGeneration (const class cPtr_optionComponentForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsPredefined (void) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_commandLineOptionMap readProperty_mBoolOptionMap (void) const ;

  public: class GALGAS_commandLineOptionMap readProperty_mUIntOptionMap (void) const ;

  public: class GALGAS_commandLineOptionMap readProperty_mStringOptionMap (void) const ;

  public: class GALGAS_commandLineOptionMap readProperty_mStringListOptionMap (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionComponentForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_commandLineOptionMap & inOperand4,
                                                                            const class GALGAS_commandLineOptionMap & inOperand5,
                                                                            const class GALGAS_commandLineOptionMap & inOperand6,
                                                                            const class GALGAS_commandLineOptionMap & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionComponentForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionComponentForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionComponentForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_optionComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GALGAS_bool getter_isPredefined (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GALGAS_string inProductDirectory,
           class GALGAS_stringset & ioAllProductFileSet,
           class GALGAS_stringlist & ioCocoaProductFileList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_commandLineOptionMap mProperty_mBoolOptionMap ;
  public: GALGAS_commandLineOptionMap mProperty_mUIntOptionMap ;
  public: GALGAS_commandLineOptionMap mProperty_mStringOptionMap ;
  public: GALGAS_commandLineOptionMap mProperty_mStringListOptionMap ;

//--- Constructor
  public: cPtr_optionComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                             const GALGAS_string & in_mImplementationCppFileName,
                                             const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_string & in_mOptionComponentName,
                                             const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                             const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                             const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                             const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionComponentForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionComponentForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionComponentForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionComponentForGeneration_2D_weak (const class GALGAS_optionComponentForGeneration & inSource) ;

  public: GALGAS_optionComponentForGeneration_2D_weak & operator = (const class GALGAS_optionComponentForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionComponentForGeneration bang_optionComponentForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionComponentForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionComponentForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionComponentForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayTypeForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_arrayTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_arrayTypeForGeneration (const class cPtr_arrayTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mElementTypeEntry (void) const ;

  public: class GALGAS_uint readProperty_mDimension (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                      const class GALGAS_uint & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_arrayTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_arrayTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mElementTypeEntry ;
  public: GALGAS_uint mProperty_mDimension ;

//--- Constructor
  public: cPtr_arrayTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                       const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                       const GALGAS_uint & in_mDimension
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayTypeForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_arrayTypeForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_arrayTypeForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_arrayTypeForGeneration_2D_weak (const class GALGAS_arrayTypeForGeneration & inSource) ;

  public: GALGAS_arrayTypeForGeneration_2D_weak & operator = (const class GALGAS_arrayTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_arrayTypeForGeneration bang_arrayTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_arrayTypeForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertDeclaredLocalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (class GALGAS_localVarManager & ioObject,
                                                  const class GALGAS_lstring constin_inVarName,
                                                  const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                  const class GALGAS_string constin_inCppName,
                                                  const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRule'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const class GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                  const class GALGAS_string constin_inSyntaxCompnentName,
                                  class GALGAS_string & io_ioGeneratedCode,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performProjectCreation (const class GALGAS_string constinArgument0,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_projectCreation (const class GALGAS_string constinArgument0,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall (const class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                        const class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                        const class GALGAS_location constinArgument2,
                                                        class GALGAS_semanticExpressionForGeneration & ioArgument3,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator (const class GALGAS_bool constinArgument0,
                                  const class GALGAS_string constinArgument1,
                                  const class GALGAS_location constinArgument2,
                                  class GALGAS_semanticExpressionForGeneration & ioArgument3,
                                  class GALGAS_semanticExpressionForGeneration & ioArgument4,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_optionNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_functionNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis (const class GALGAS_lstring constinArgument0,
                                              class GALGAS_usefulEntitiesGraph & ioArgument1,
                                              const class GALGAS_templateAnalysisContext constinArgument2,
                                              class GALGAS_unifiedTypeMap & ioArgument3,
                                              const class GALGAS_templateInstructionListAST constinArgument4,
                                              class GALGAS_templateInstructionListForGeneration & ioArgument5,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction (const class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                       class GALGAS_string & ioArgument1,
                                                       class GALGAS_stringset & ioArgument2,
                                                       class GALGAS_uint & ioArgument3,
                                                       class GALGAS_stringset & ioArgument4,
                                                       class GALGAS_bool & ioArgument5,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

