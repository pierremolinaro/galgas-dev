#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_templateInstructionStringAST * ptr (void) const { return (const cPtr_templateInstructionStringAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionStringAST (const cPtr_templateInstructionStringAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringAST constructor_new (const class GALGAS_string & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTemplateString (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTemplateString (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionStringAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringAST : public cPtr_templateInstructionAST {
//--- Attributes
  public: GALGAS_string mProperty_mTemplateString ;

//--- Constructor
  public: cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mTemplateString (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTemplateString (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_templateInstructionStringForGeneration * ptr (void) const { return (const cPtr_templateInstructionStringForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionStringForGeneration (const cPtr_templateInstructionStringForGeneration * inSourcePtr) ;

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
  public: VIRTUAL_IN_DEBUG void setter_setMTemplateString (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTemplateString (LOCATION_ARGS) const ;


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
//--- Attributes
  public: GALGAS_string mProperty_mTemplateString ;

//--- Constructor
  public: cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mTemplateString (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTemplateString (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

