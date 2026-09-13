#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeOptionalTypeLName (const class GGS_lstring & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (class cPtr_templateInstructionForGeneration * inObject,
                                                 class GGS_string & io_ioGeneratedCode,
                                                 class GGS_stringset & io_ioInclusionSet,
                                                 class GGS_uint & io_ioTemporaryVariableIndex,
                                                 class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                 class GGS_bool & io_ioUseColumnMarker,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionForeachAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForeachAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForeachAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionForeachAST_2E_weak (const class GGS_templateInstructionForeachAST & inSource) ;

  public: GGS_templateInstructionForeachAST_2E_weak & operator = (const class GGS_templateInstructionForeachAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionForeachAST_2E_weak init_nil (void) {
    GGS_templateInstructionForeachAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionForeachAST bang_templateInstructionForeachAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionForeachAST unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionForeachAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionForeachAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForeachAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionForeachForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForeachForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForeachForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionForeachForGeneration (const class cPtr_templateInstructionForeachForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAscending (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GGS_string readProperty_mEnumeratorCppName (void) const ;

  public: class GGS_templateInstructionListForGeneration readProperty_mBeforeInstructionList (void) const ;

  public: class GGS_templateInstructionListForGeneration readProperty_mDoInstructionList (void) const ;

  public: class GGS_string readProperty_mIndexCppName (void) const ;

  public: class GGS_templateInstructionListForGeneration readProperty_mBetweenInstructionList (void) const ;

  public: class GGS_templateInstructionListForGeneration readProperty_mAfterInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionForeachForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_templateInstructionListForGeneration & inOperand3,
                                                                                                   const class GGS_templateInstructionListForGeneration & inOperand4,
                                                                                                   const class GGS_string & inOperand5,
                                                                                                   const class GGS_templateInstructionListForGeneration & inOperand6,
                                                                                                   const class GGS_templateInstructionListForGeneration & inOperand7,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionForeachForGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForeachForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionForeachForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForeachForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                             const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                             const class GGS_string & inOperand2,
                                                                                             const class GGS_templateInstructionListForGeneration & inOperand3,
                                                                                             const class GGS_templateInstructionListForGeneration & inOperand4,
                                                                                             const class GGS_string & inOperand5,
                                                                                             const class GGS_templateInstructionListForGeneration & inOperand6,
                                                                                             const class GGS_templateInstructionListForGeneration & inOperand7,
                                                                                             Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAscending ;
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GGS_string mProperty_mEnumeratorCppName ;
  public: GGS_templateInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public: GGS_templateInstructionListForGeneration mProperty_mDoInstructionList ;
  public: GGS_string mProperty_mIndexCppName ;
  public: GGS_templateInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public: GGS_templateInstructionListForGeneration mProperty_mAfterInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionForeachForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionForeachForGeneration (const GGS_bool & in_mIsAscending,
                                                        const GGS_semanticExpressionForGeneration & in_mExpression,
                                                        const GGS_string & in_mEnumeratorCppName,
                                                        const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                        const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                        const GGS_string & in_mIndexCppName,
                                                        const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                        const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionForeachForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForeachForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForeachForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionForeachForGeneration_2E_weak (const class GGS_templateInstructionForeachForGeneration & inSource) ;

  public: GGS_templateInstructionForeachForGeneration_2E_weak & operator = (const class GGS_templateInstructionForeachForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionForeachForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionForeachForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionForeachForGeneration bang_templateInstructionForeachForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionForeachForGeneration unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionForeachForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionForeachForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForeachForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateGetterCallInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateGetterCallInExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateGetterCallInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateGetterCallInExpressionAST_2E_weak (const class GGS_templateGetterCallInExpressionAST & inSource) ;

  public: GGS_templateGetterCallInExpressionAST_2E_weak & operator = (const class GGS_templateGetterCallInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateGetterCallInExpressionAST_2E_weak init_nil (void) {
    GGS_templateGetterCallInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateGetterCallInExpressionAST bang_templateGetterCallInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateGetterCallInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateGetterCallInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateGetterCallInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateGetterCallInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR templateGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                              Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'factor_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_element_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GGS_lstringlist & ioArgument0,
                                                          Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS_lstringlist & outArgument0,
                                                                       GGS_location & outArgument1,
                                                                       GGS_templateExpressionAST & outArgument2,
                                                                       Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (GGS_templateExpressionListAST & outArgument0,
                                                                Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'primary_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_factor_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_relation_5F_factor_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_relation_5F_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                      Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_term_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_relation_5F_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_relation_5F_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_term_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'simple_expression_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_expression_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                                        Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
 /*  public: virtual void nt_switch_5F_case_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_switch_5F_case_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GGS__5B_lstring_5D_ & outArgument0,
                                           GGS_switchExtractedValuesListAST & outArgument1,
                                           Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_instruction_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_instruction_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_instruction_ (GGS_templateInstructionListAST & ioArgument0,
                                                    Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (GGS_templateInstructionListAST & outArgument0,
                                                                  Lexique_galgasTemplateScanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_templateInstructionListAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_templateInstructionListAST & outArgument0
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

//------------------------------------- 'term_tpl' non terminal
//--- 'parse' label
 /*  public: virtual void nt_term_5F_tpl_parse (Lexique_galgasTemplateScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_5F_tpl_ (GGS_templateExpressionAST & outArgument0,
                                        Lexique_galgasTemplateScanner * inCompiler) ;

  public: virtual int32_t select_templateSyntax_0 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_1 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_2 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_3 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_4 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_5 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_6 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_7 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_8 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_9 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_10 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_11 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_12 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_13 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_14 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_15 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_16 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_17 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_18 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_19 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_20 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_21 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_22 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_23 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_24 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_25 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_26 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_27 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_28 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_29 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_30 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_31 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_32 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_33 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_34 (Lexique_galgasTemplateScanner *) ;

  public: virtual int32_t select_templateSyntax_35 (Lexique_galgasTemplateScanner *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// Phase 1: @routineImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_routineImplementationForGeneration : public GGS_routinePrototypeDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GGS_routineImplementationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_routineImplementationForGeneration (const class cPtr_routineImplementationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mGenerateStatic (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mRoutineInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineImplementationForGeneration init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                               const class GGS_string & inOperand1,
                                                                                                                                               const class GGS_string & inOperand2,
                                                                                                                                               const class GGS_formalParameterListForGeneration & inOperand3,
                                                                                                                                               const class GGS_bool & inOperand4,
                                                                                                                                               const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineImplementationForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routineImplementationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @routineImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_routineImplementationForGeneration : public cPtr_routinePrototypeDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void routineImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                         const class GGS_string & inOperand1,
                                                                                                                                         const class GGS_string & inOperand2,
                                                                                                                                         const class GGS_formalParameterListForGeneration & inOperand3,
                                                                                                                                         const class GGS_bool & inOperand4,
                                                                                                                                         const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                                                                                         Compiler * inCompiler) ;


//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mGenerateStatic ;
  public: GGS_semanticInstructionListForGeneration mProperty_mRoutineInstructionList ;


//--- Default constructor
  public: cPtr_routineImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_routineImplementationForGeneration (const GGS_bool & in_generateHeader,
                                                   const GGS_string & in_implementationCppFileName,
                                                   const GGS_string & in_routineMangledName,
                                                   const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                   const GGS_bool & in_mGenerateStatic,
                                                   const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineImplementationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_routineImplementationForGeneration_2E_weak : public GGS_routinePrototypeDeclarationForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_routineImplementationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_routineImplementationForGeneration_2E_weak (const class GGS_routineImplementationForGeneration & inSource) ;

  public: GGS_routineImplementationForGeneration_2E_weak & operator = (const class GGS_routineImplementationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_routineImplementationForGeneration_2E_weak init_nil (void) {
    GGS_routineImplementationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_routineImplementationForGeneration bang_routineImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_routineImplementationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_routineImplementationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineImplementationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routineImplementationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classFuncExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_classFuncExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_classFuncExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classFuncExpressionForGeneration (const class cPtr_classFuncExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_classFuncType (void) const ;

  public: class GGS_string readProperty_classFuncName (void) const ;

  public: class GGS_semanticExpressionListForGeneration readProperty_mEffectiveParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS__5B_unifiedTypeMapEntry_5D_ readProperty_requiredTypes (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classFuncExpressionForGeneration init_21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                        const class GGS_location & inOperand1,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                        const class GGS_string & inOperand3,
                                                                                        const class GGS_semanticExpressionListForGeneration & inOperand4,
                                                                                        const class GGS_bool & inOperand5,
                                                                                        const class GGS__5B_unifiedTypeMapEntry_5D_ & inOperand6,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classFuncExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classFuncExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classFuncExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_classFuncExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classFuncExpressionForGeneration_init_21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_location & inOperand1,
                                                                                  const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                  const class GGS_string & inOperand3,
                                                                                  const class GGS_semanticExpressionListForGeneration & inOperand4,
                                                                                  const class GGS_bool & inOperand5,
                                                                                  const class GGS__5B_unifiedTypeMapEntry_5D_ & inOperand6,
                                                                                  Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_classFuncType ;
  public: GGS_string mProperty_classFuncName ;
  public: GGS_semanticExpressionListForGeneration mProperty_mEffectiveParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: GGS__5B_unifiedTypeMapEntry_5D_ mProperty_requiredTypes ;


//--- Default constructor
  public: cPtr_classFuncExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classFuncExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                 const GGS_location & in_mLocation,
                                                 const GGS_unifiedTypeMapEntry & in_classFuncType,
                                                 const GGS_string & in_classFuncName,
                                                 const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                 const GGS_bool & in_mHasCompilerArgument,
                                                 const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classFuncExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_classFuncExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_classFuncExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_classFuncExpressionForGeneration_2E_weak (const class GGS_classFuncExpressionForGeneration & inSource) ;

  public: GGS_classFuncExpressionForGeneration_2E_weak & operator = (const class GGS_classFuncExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_classFuncExpressionForGeneration_2E_weak init_nil (void) {
    GGS_classFuncExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_classFuncExpressionForGeneration bang_classFuncExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_classFuncExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_classFuncExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classFuncExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classFuncExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration_2E_weak ;

