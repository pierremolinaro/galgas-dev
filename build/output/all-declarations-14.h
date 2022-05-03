#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateConstructorAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateConstructorAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateConstructorAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateConstructorAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateConstructorAST_2D_weak (const class GALGAS_templateConstructorAST & inSource) ;

  public: GALGAS_templateConstructorAST_2D_weak & operator = (const class GALGAS_templateConstructorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateConstructorAST bang_templateConstructorAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateConstructorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateConstructorAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateConstructorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateConstructorAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateConstructorAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFileWrapperTemplateCallAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateFileWrapperTemplateCallAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateFileWrapperTemplateCallAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateFileWrapperTemplateCallAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateFileWrapperTemplateCallAST_2D_weak (const class GALGAS_templateFileWrapperTemplateCallAST & inSource) ;

  public: GALGAS_templateFileWrapperTemplateCallAST_2D_weak & operator = (const class GALGAS_templateFileWrapperTemplateCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateFileWrapperTemplateCallAST bang_templateFileWrapperTemplateCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFileWrapperTemplateCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFileWrapperTemplateCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFileWrapperTemplateCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateFileWrapperTemplateCallAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateExtensionTemplateCallAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateExtensionTemplateCallAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateExtensionTemplateCallAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateExtensionTemplateCallAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateExtensionTemplateCallAST_2D_weak (const class GALGAS_templateExtensionTemplateCallAST & inSource) ;

  public: GALGAS_templateExtensionTemplateCallAST_2D_weak & operator = (const class GALGAS_templateExtensionTemplateCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateExtensionTemplateCallAST bang_templateExtensionTemplateCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateExtensionTemplateCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateExtensionTemplateCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateExtensionTemplateCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateExtensionTemplateCallAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralStringExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralStringExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralStringExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateLiteralStringExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralStringExpressionAST_2D_weak (const class GALGAS_templateLiteralStringExpressionAST & inSource) ;

  public: GALGAS_templateLiteralStringExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralStringExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralStringExpressionAST bang_templateLiteralStringExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralStringExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralStringExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralStringExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralStringExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structFieldAccessTemplateExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structFieldAccessTemplateExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structFieldAccessTemplateExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structFieldAccessTemplateExpressionAST_2D_weak (const class GALGAS_structFieldAccessTemplateExpressionAST & inSource) ;

  public: GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & operator = (const class GALGAS_structFieldAccessTemplateExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structFieldAccessTemplateExpressionAST bang_structFieldAccessTemplateExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structFieldAccessTemplateExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structFieldAccessTemplateExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structFieldAccessTemplateExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateOptionAccessAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateOptionAccessAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateOptionAccessAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateOptionAccessAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateOptionAccessAST_2D_weak (const class GALGAS_templateOptionAccessAST & inSource) ;

  public: GALGAS_templateOptionAccessAST_2D_weak & operator = (const class GALGAS_templateOptionAccessAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateOptionAccessAST bang_templateOptionAccessAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateOptionAccessAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateOptionAccessAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateOptionAccessAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateOptionAccessAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateTestDynamicClassAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateTestDynamicClassAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateTestDynamicClassAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateTestDynamicClassAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateTestDynamicClassAST_2D_weak (const class GALGAS_templateTestDynamicClassAST & inSource) ;

  public: GALGAS_templateTestDynamicClassAST_2D_weak & operator = (const class GALGAS_templateTestDynamicClassAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateTestDynamicClassAST bang_templateTestDynamicClassAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateTestDynamicClassAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateTestDynamicClassAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateTestDynamicClassAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateTestDynamicClassAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateFunctionCallAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateFunctionCallAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateFunctionCallAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateFunctionCallAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateFunctionCallAST_2D_weak (const class GALGAS_templateFunctionCallAST & inSource) ;

  public: GALGAS_templateFunctionCallAST_2D_weak & operator = (const class GALGAS_templateFunctionCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateFunctionCallAST bang_templateFunctionCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateFunctionCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateFunctionCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateFunctionCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateFunctionCallAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFunctionCallAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateVarInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateVarInExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateVarInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateVarInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateVarInExpressionAST_2D_weak (const class GALGAS_templateVarInExpressionAST & inSource) ;

  public: GALGAS_templateVarInExpressionAST_2D_weak & operator = (const class GALGAS_templateVarInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateVarInExpressionAST bang_templateVarInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVarInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateVarInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateVarInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateVarInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR templateGrammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public: virtual void nt_expression_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GALGAS_templateExpressionAST & outArgument0,
                                       C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public: virtual void nt_factor_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_ (GALGAS_templateExpressionAST & outArgument0,
                                   C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_element_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GALGAS_lstringlist & ioArgument0,
                                                          C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                       C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
  public: virtual void nt_output_5F_expression_5F_list_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_ (GALGAS_templateExpressionListAST & outArgument0,
                                                         C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public: virtual void nt_primary_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_ (GALGAS_templateExpressionAST & outArgument0,
                                    C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_factor_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_ (GALGAS_templateExpressionAST & outArgument0,
                                               C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_term' non terminal
//--- 'parse' label
  public: virtual void nt_relation_5F_term_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_term_ (GALGAS_templateExpressionAST & outArgument0,
                                             C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_expression_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_ (GALGAS_templateExpressionAST & outArgument0,
                                                 C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
  public: virtual void nt_switch_5F_case_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GALGAS_lstringlist & outArgument0,
                                           GALGAS_switchExtractedValuesListAST & outArgument1,
                                           C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_instruction_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_instruction_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                    C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

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

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public: virtual void nt_term_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_ (GALGAS_templateExpressionAST & outArgument0,
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
// Phase 1: @templateInstructionStringForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionStringForGeneration (const class cPtr_templateInstructionStringForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mTemplateString (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringForGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionStringForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mTemplateString ;

//--- Constructor
  public: cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
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
// Phase 1: @templateInstructionStringForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionStringForGeneration_2D_weak (const class GALGAS_templateInstructionStringForGeneration & inSource) ;

  public: GALGAS_templateInstructionStringForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionStringForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionStringForGeneration bang_templateInstructionStringForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateBlockInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateBlockInstructionForGeneration (const class cPtr_templateBlockInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBlockInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateBlockInstructionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateBlockInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateBlockInstructionForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBlockInstructionList ;

//--- Constructor
  public: cPtr_templateBlockInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
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
// Phase 1: @templateBlockInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateBlockInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateBlockInstructionForGeneration_2D_weak (const class GALGAS_templateBlockInstructionForGeneration & inSource) ;

  public: GALGAS_templateBlockInstructionForGeneration_2D_weak & operator = (const class GALGAS_templateBlockInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateBlockInstructionForGeneration bang_templateBlockInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateBlockInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateGetterCallInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateGetterCallInExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateGetterCallInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateGetterCallInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateGetterCallInExpressionAST_2D_weak (const class GALGAS_templateGetterCallInExpressionAST & inSource) ;

  public: GALGAS_templateGetterCallInExpressionAST_2D_weak & operator = (const class GALGAS_templateGetterCallInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateGetterCallInExpressionAST bang_templateGetterCallInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateGetterCallInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateGetterCallInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateGetterCallInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateGetterCallInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForeachAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionForeachAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionForeachAST_2D_weak (const class GALGAS_templateInstructionForeachAST & inSource) ;

  public: GALGAS_templateInstructionForeachAST_2D_weak & operator = (const class GALGAS_templateInstructionForeachAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionForeachAST bang_templateInstructionForeachAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionForeachAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForeachForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionForeachForGeneration (const class cPtr_templateInstructionForeachForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsAscending (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_string readProperty_mEnumeratorCppName (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBeforeInstructionList (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_string readProperty_mIndexCppName (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBetweenInstructionList (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mAfterInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionForeachForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                       const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                       const class GALGAS_string & inOperand2,
                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand3,
                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand4,
                                                                                       const class GALGAS_string & inOperand5,
                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand6,
                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand7
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionForeachForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForeachForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mIsAscending ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_string mProperty_mEnumeratorCppName ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mDoInstructionList ;
  public: GALGAS_string mProperty_mIndexCppName ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mAfterInstructionList ;

//--- Constructor
  public: cPtr_templateInstructionForeachForGeneration (const GALGAS_bool & in_mIsAscending,
                                                        const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                        const GALGAS_string & in_mEnumeratorCppName,
                                                        const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                        const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                        const GALGAS_string & in_mIndexCppName,
                                                        const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                        const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList
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
// Phase 1: @templateInstructionForeachForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionForeachForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionForeachForGeneration_2D_weak (const class GALGAS_templateInstructionForeachForGeneration & inSource) ;

  public: GALGAS_templateInstructionForeachForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionForeachForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionForeachForGeneration bang_templateInstructionForeachForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionForeachForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionSwitchForGeneration (const class cPtr_templateInstructionSwitchForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mEnumType (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSwitchExpression (void) const ;

  public: class GALGAS_templateInstructionSwitchBranchListForGeneration readProperty_mTemplateInstructionSwitchBranchList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionSwitchForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                      const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                      const class GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionSwitchForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionSwitchForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mEnumType ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSwitchExpression ;
  public: GALGAS_templateInstructionSwitchBranchListForGeneration mProperty_mTemplateInstructionSwitchBranchList ;

//--- Constructor
  public: cPtr_templateInstructionSwitchForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mEnumType,
                                                       const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                       const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
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
// Phase 1: @templateInstructionSwitchForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionSwitchForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionSwitchForGeneration_2D_weak (const class GALGAS_templateInstructionSwitchForGeneration & inSource) ;

  public: GALGAS_templateInstructionSwitchForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionSwitchForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionSwitchForGeneration bang_templateInstructionSwitchForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionSwitchForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration_2D_weak ;

