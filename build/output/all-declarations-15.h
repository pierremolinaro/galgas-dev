#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------
//  GRAMMAR galgas4ProjectGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_galgas_34_ProjectGrammar : public cParser_galgas_34_ProjectSyntax {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_ (const GGS_lstring inArgument0,
                                                                    GGS_galgas_33_ProjectComponentAST & outArgument1,
                                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  const GGS_lstring inArgument0,
                                                  GGS_galgas_33_ProjectComponentAST & outArgument1
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    const GGS_lstring inArgument0,
                                                    GGS_galgas_33_ProjectComponentAST & outArgument1
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
 /*  public: virtual void nt_project_5F_header_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_project_5F_header_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_header_ (GGS_lbigint & outArgument0,
                                              GGS_lbigint & outArgument1,
                                              GGS_lbigint & outArgument2,
                                              GGS_lstring & outArgument3,
                                              Lexique_galgasScanner_34_ * inCompiler) ;

  public: virtual int32_t select_galgas_34_ProjectSyntax_0 (Lexique_galgasScanner_34_ *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@genericExtensionMethodListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_genericExtensionMethodListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_lstring constin_inValue,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@descendantClassListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_descendantClassListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_unifiedTypeMapEntry constin_inType,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@actualParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateActualParameter (class cPtr_actualParameterForGeneration * inObject,
                                                  class GGS_stringset & io_ioInclusionSet,
                                                  class GGS_uint & io_ioTemporaryVariableIndex,
                                                  class GGS_string & io_ioImplementation,
                                                  class GGS__5B_string_5D_ & io_ioJokerParametersToReleaseList,
                                                  class GGS__5B_string_5D_ & io_ioOutputVariableList,
                                                  class GGS_stringset & io__5F_ioUnusedVariableCppNameSet,
                                                  class GGS_string & out_outCppName,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@actualParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generatePoisonedVariables (class cPtr_actualParameterForGeneration * inObject,
                                                    class GGS_string & io_ioImplementation,
                                                    class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionPrototypeDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionPrototypeDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionPrototypeDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionPrototypeDeclarationForGeneration_2E_weak (const class GGS_functionPrototypeDeclarationForGeneration & inSource) ;

  public: GGS_functionPrototypeDeclarationForGeneration_2E_weak & operator = (const class GGS_functionPrototypeDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_functionPrototypeDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_functionPrototypeDeclarationForGeneration bang_functionPrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_functionPrototypeDeclarationForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_functionPrototypeDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionPrototypeDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionImplementationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionImplementationForGeneration_2E_weak : public GGS_functionPrototypeDeclarationForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionImplementationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionImplementationForGeneration_2E_weak (const class GGS_functionImplementationForGeneration & inSource) ;

  public: GGS_functionImplementationForGeneration_2E_weak & operator = (const class GGS_functionImplementationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_functionImplementationForGeneration_2E_weak init_nil (void) {
    GGS_functionImplementationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_functionImplementationForGeneration bang_functionImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_functionImplementationForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_functionImplementationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionImplementationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @onceFunctionDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_onceFunctionDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_onceFunctionDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_onceFunctionDeclarationForGeneration_2E_weak (const class GGS_onceFunctionDeclarationForGeneration & inSource) ;

  public: GGS_onceFunctionDeclarationForGeneration_2E_weak & operator = (const class GGS_onceFunctionDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_onceFunctionDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_onceFunctionDeclarationForGeneration bang_onceFunctionDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_onceFunctionDeclarationForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_onceFunctionDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_onceFunctionDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperDeclarationForGeneration_2E_weak (const class GGS_filewrapperDeclarationForGeneration & inSource) ;

  public: GGS_filewrapperDeclarationForGeneration_2E_weak & operator = (const class GGS_filewrapperDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_filewrapperDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperDeclarationForGeneration bang_filewrapperDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperDeclarationForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programComponentForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_programComponentForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_programComponentForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_programComponentForGeneration_2E_weak (const class GGS_programComponentForGeneration & inSource) ;

  public: GGS_programComponentForGeneration_2E_weak & operator = (const class GGS_programComponentForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_programComponentForGeneration_2E_weak init_nil (void) {
    GGS_programComponentForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_programComponentForGeneration bang_programComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_programComponentForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_programComponentForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_programComponentForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_logInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_logInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_logInstructionAST_2E_weak (const class GGS_logInstructionAST & inSource) ;

  public: GGS_logInstructionAST_2E_weak & operator = (const class GGS_logInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_logInstructionAST_2E_weak init_nil (void) {
    GGS_logInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_logInstructionAST bang_logInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_logInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_logInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarForGeneration_2E_weak (const class GGS_grammarForGeneration & inSource) ;

  public: GGS_grammarForGeneration_2E_weak & operator = (const class GGS_grammarForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarForGeneration_2E_weak init_nil (void) {
    GGS_grammarForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarForGeneration bang_grammarForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_grammarForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@productionRuleListForGrammarAnalysis.element displayRule'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const class GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                  const class GGS_string constin_inSyntaxComponentName,
                                  class GGS_string & io_ioGeneratedCode,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR galgas4Grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_galgas_34_Grammar : public cParser_galgas_34_ExpressionSyntax,
                                   public cParser_galgas_34_ParameterArgumentSyntax,
                                   public cParser_galgas_34_InstructionsSyntax,
                                   public cParser_galgas_34_DeclarationsSyntax,
                                   public cParser_galgas_34_LexiqueComponentSyntax,
                                   public cParser_galgas_34_OptionComponentSyntax,
                                   public cParser_galgas_34_GuiComponentSyntax,
                                   public cParser_galgas_34_SyntaxComponentSyntax,
                                   public cParser_galgas_34_GrammarComponentSyntax,
                                   public cParser_galgas_34_ProgramDeclarations {
//------------------------------------- 'acces_control' non terminal
//--- 'parse' label
 /*  public: virtual void nt_acces_5F_control_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_acces_5F_control_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_acces_5F_control_ (GGS_AccessControlAST & outArgument0,
                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'actual_input_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                 GGS__5B_actualInputParameterAST_5D_ & outArgument1,
                                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'actual_parameter' non terminal
//--- 'parse' label
 /*  public: virtual void nt_actual_5F_parameter_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_actual_5F_parameter_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_parameter_ (GGS_galgasDeclarationAST & ioArgument0,
                                                GGS_actualParameterListAST & ioArgument1,
                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'actual_parameter_list_with_parenthesis' non terminal
//--- 'parse' label
 /*  public: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS_actualParameterListAST & outArgument1,
                                                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'comma_separated_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_comma_5F_separated_5F_expression_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_comma_5F_separated_5F_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_comma_5F_separated_5F_expression_ (GGS_galgasDeclarationAST & ioArgument0,
                                                             GGS_CommaSeparatedExpressionList & outArgument1,
                                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GGS_galgasDeclarationAST & ioArgument0,
                                       GGS_semanticExpressionAST & outArgument1,
                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'expression_and' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_5F_and_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_5F_and_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_and_ (GGS_galgasDeclarationAST & ioArgument0,
                                              GGS_semanticExpressionAST & outArgument1,
                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'expression_or' non terminal
//--- 'parse' label
 /*  public: virtual void nt_expression_5F_or_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_expression_5F_or_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_or_ (GGS_galgasDeclarationAST & ioArgument0,
                                             GGS_semanticExpressionAST & outArgument1,
                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_constructor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_constructor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_constructor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_constructor_ (GGS_galgasDeclarationAST & ioArgument0,
                                                      GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & ioArgument1,
                                                      Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_cpp_classdeclaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (GGS_string & outArgument0,
                                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_cpp_predeclaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (GGS_string & outArgument0,
                                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_getter' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_getter_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_getter_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_getter_ (GGS_galgasDeclarationAST & ioArgument0,
                                                 GGS__5B_externTypeGetter_5D_ & ioArgument1,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_method' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_method_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_method_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_method_ (GGS_galgasDeclarationAST & ioArgument0,
                                                 GGS__5B_externTypeMethod_5D_ & ioArgument1,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'externtype_setter' non terminal
//--- 'parse' label
 /*  public: virtual void nt_externtype_5F_setter_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_externtype_5F_setter_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_externtype_5F_setter_ (GGS_galgasDeclarationAST & ioArgument0,
                                                 GGS__5B_externTypeSetter_5D_ & ioArgument1,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_factor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_factor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_ (GGS_galgasDeclarationAST & ioArgument0,
                                   GGS_semanticExpressionAST & outArgument1,
                                   Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'filewrapper_binary_files' non terminal
//--- 'parse' label
 /*  public: virtual void nt_filewrapper_5F_binary_5F_files_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_filewrapper_5F_binary_5F_files_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_binary_5F_files_ (GGS__5B_lstring_5D_ & outArgument0,
                                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'filewrapper_templates' non terminal
//--- 'parse' label
 /*  public: virtual void nt_filewrapper_5F_templates_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_filewrapper_5F_templates_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_templates_ (GGS_galgasDeclarationAST & ioArgument0,
                                                     GGS__5B_filewrapperTemplateAST_5D_ & outArgument1,
                                                     Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'filewrapper_text_files' non terminal
//--- 'parse' label
 /*  public: virtual void nt_filewrapper_5F_text_5F_files_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_filewrapper_5F_text_5F_files_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_filewrapper_5F_text_5F_files_ (GGS__5B_lstring_5D_ & outArgument0,
                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_element_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_element_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_element_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & ioArgument1,
                                                          Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
 /*  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                       GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                 GGS__5B_formalInputParameterAST_5D_ & outArgument1,
                                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'formal_parameter_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_formal_5F_parameter_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_formal_5F_parameter_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_formal_5F_parameter_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                        GGS__5B_formalParameterAST_5D_ & outArgument1,
                                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'grammar_instruction_core' non terminal
//--- 'parse' label
 /*  public: virtual void nt_grammar_5F_instruction_5F_core_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_grammar_5F_instruction_5F_core_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_instruction_5F_core_ (GGS_galgasDeclarationAST & ioArgument0,
                                                           const GGS_location inArgument1,
                                                           const GGS_actualParameterListAST inArgument2,
                                                           const GGS_lstring inArgument3,
                                                           const GGS_lstring inArgument4,
                                                           GGS_semanticInstructionAST & outArgument5,
                                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'grammar_start_symbol_label' non terminal
//--- 'parse' label
 /*  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                const GGS_lstring inArgument1,
                                                                GGS__5B_nonTerminalLabelAST_5D_ & ioArgument2,
                                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'gui_attributes' non terminal
//--- 'parse' label
 /*  public: virtual void nt_gui_5F_attributes_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_gui_5F_attributes_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_attributes_ (GGS__5B_guiSimpleAttributeAST_5D_ & ioArgument0,
                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'gui_with_lexique_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (GGS__5B_withLexiqueAST_5D_ & ioArgument0,
                                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'gui_with_option_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (GGS__5B_lstring_5D_ & ioArgument0,
                                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'if_instruction_core' non terminal
//--- 'parse' label
 /*  public: virtual void nt_if_5F_instruction_5F_core_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_if_5F_instruction_5F_core_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_if_5F_instruction_5F_core_ (GGS_galgasDeclarationAST & ioArgument0,
                                                      GGS_semanticInstructionAST & outArgument1,
                                                      Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'insert_or_replace_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (GGS__5B_location_5D_ & ioArgument0,
                                                                   Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'issue_fixit' non terminal
//--- 'parse' label
 /*  public: virtual void nt_issue_5F_fixit_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_issue_5F_fixit_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_issue_5F_fixit_ (GGS_galgasDeclarationAST & ioArgument0,
                                           GGS__5B_fixitElementAST_5D_ & outArgument1,
                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'label_formal_parameter' non terminal
//--- 'parse' label
 /*  public: virtual void nt_label_5F_formal_5F_parameter_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_label_5F_formal_5F_parameter_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_label_5F_formal_5F_parameter_ (GGS_galgasDeclarationAST & ioArgument0,
                                                         GGS_lstring & outArgument1,
                                                         GGS__5B_formalParameterAST_5D_ & ioArgument2,
                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_attribute_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_attribute_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_attribute_5F_declaration_ (GGS__5B_lexicalAttributeAST_5D_ & ioArgument0,
                                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_explicit_5F_rule_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_explicit_5F_rule_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_explicit_5F_rule_ (GGS__5B_abstractLexicalRuleAST_5D_ & ioArgument0,
                                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_expression_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_expression_ (GGS_lexicalExpressionAST & outArgument0,
                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_factor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_factor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_factor_ (GGS_lexicalExpressionAST & outArgument0,
                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_implicit_5F_rule_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_implicit_5F_rule_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_implicit_5F_rule_ (GGS__5B_abstractLexicalRuleAST_5D_ & ioArgument0,
                                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_indexing_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_indexing_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_indexing_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_indexing_5F_declaration_ (GGS__5B_indexingAST_5D_ & ioArgument0,
                                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_instruction_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_instruction_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_instruction_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument0,
                                                   Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_list_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_list_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_list_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_list_5F_declaration_ (GGS__5B_lexicalListDeclarationAST_5D_ & ioArgument0,
                                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_list_5F_entry_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_list_5F_entry_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_list_5F_entry_ (GGS__5B_lexicalListEntryAST_5D_ & ioArgument0,
                                                     Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_message_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_message_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_message_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_message_5F_declaration_ (GGS__5B_lexicalMessageDeclarationAST_5D_ & ioArgument0,
                                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_send_5F_instruction_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_send_5F_instruction_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_send_5F_instruction_ (GGS_lexicalInstructionAST & outArgument0,
                                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
 /*  public: virtual void nt_lexical_5F_term_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_lexical_5F_term_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_lexical_5F_term_ (GGS_lexicalExpressionAST & outArgument0,
                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'map_insert_setter_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (GGS__5B_insertSetterAST_5D_ & ioArgument0,
                                                                   Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'method_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_method_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_method_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_method_5F_declaration_ (const GGS_lstring inArgument0,
                                                  GGS_galgasDeclarationAST & ioArgument1,
                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'non_empty_output_expression_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS_actualOutputArgumentList & outArgument1,
                                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'nonterminal_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_nonterminal_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_nonterminal_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_nonterminal_5F_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                                       GGS__5B_nonterminalDeclarationAST_5D_ & ioArgument1,
                                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'option_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_option_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_option_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_option_5F_declaration_ (GGS__5B_commandLineOptionAST_5D_ & ioArgument0,
                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_output_5F_expression_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_output_5F_expression_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_output_5F_expression_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                         GGS_actualOutputArgumentList & outArgument1,
                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'poisoned_var_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_poisoned_5F_var_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_poisoned_5F_var_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_poisoned_5F_var_5F_list_ (GGS__5B_lstring_5D_ & outArgument0,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_ (GGS_galgasDeclarationAST & ioArgument0,
                                    GGS_semanticExpressionAST & outArgument1,
                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary_beginning_by_dot' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_5F_beginning_5F_by_5F_dot_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_5F_beginning_5F_by_5F_dot_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_beginning_5F_by_5F_dot_ (GGS_galgasDeclarationAST & ioArgument0,
                                                              GGS_semanticExpressionAST & outArgument1,
                                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary_beginning_by_type' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_ (const GGS_lstring inArgument0,
                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                               GGS_semanticExpressionAST & outArgument2,
                                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'primary_beginning_by_type_dot_name' non terminal
//--- 'parse' label
 /*  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (const GGS_lstring inArgument0,
                                                                              const GGS_lstring inArgument1,
                                                                              GGS_galgasDeclarationAST & ioArgument2,
                                                                              GGS_semanticExpressionAST & outArgument3,
                                                                              Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'property_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_property_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_property_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_property_5F_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                                    GGS_propertyInCollectionListAST & ioArgument1,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_relation_5F_factor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_relation_5F_factor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_relation_5F_factor_ (GGS_galgasDeclarationAST & ioArgument0,
                                               GGS_semanticExpressionAST & outArgument1,
                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'remove_setter_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_remove_5F_setter_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_remove_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_remove_5F_setter_5F_declaration_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
 /*  public: virtual void nt_repeat_5F_while_5F_branch_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_repeat_5F_while_5F_branch_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_repeat_5F_while_5F_branch_ (GGS__5B_lexicalWhileBranchAST_5D_ & ioArgument0,
                                                      Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'replace_setter_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_replace_5F_setter_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_replace_5F_setter_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_replace_5F_setter_5F_declaration_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'search_method_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_search_5F_method_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_search_5F_method_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_search_5F_method_5F_declaration_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'search_subscript_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_search_5F_subscript_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_search_5F_subscript_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_search_5F_subscript_5F_declaration_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                               Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'semantic_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_semantic_5F_instruction_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_semantic_5F_instruction_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_ (GGS_galgasDeclarationAST & ioArgument0,
                                                    GGS_semanticInstructionAST & outArgument1,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_beginning_with_identifier' non terminal
//--- 'parse' label
 /*  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       const GGS_bool inArgument1,
                                                                                       GGS_semanticInstructionAST & outArgument2,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'semantic_instruction_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_semantic_5F_instruction_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_semantic_5F_instruction_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_semantic_5F_instruction_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                            GGS__5B_semanticInstructionAST_5D_ & outArgument1,
                                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_expression_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_expression_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_expression_ (GGS_galgasDeclarationAST & ioArgument0,
                                                 GGS_semanticExpressionAST & outArgument1,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'simple_type_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_type_5F_definition_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_type_5F_definition_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_type_5F_definition_ (GGS_galgasDeclarationAST & ioArgument0,
                                                         GGS_lstring & outArgument1,
                                                         Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'simple_type_followed_by_dot_type' non terminal
//--- 'parse' label
 /*  public: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (const GGS_lstring inArgument0,
                                                                            GGS_galgasDeclarationAST & ioArgument1,
                                                                            GGS_semanticExpressionAST & outArgument2,
                                                                            Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'sortedlist_sort_descriptor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (GGS__5B_sortedListSortDescriptorAST_5D_ & ioArgument0,
                                                             Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_start_5F_symbol_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_galgasDeclarationAST & ioArgument0,
                                            Lexique_galgasScanner_34_ * inCompiler) ;

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

//------------------------------------- 'style_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_style_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_style_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_style_5F_declaration_ (GGS__5B_lexicalStyleAST_5D_ & ioArgument0,
                                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
 /*  public: virtual void nt_switch_5F_case_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_switch_5F_case_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_switch_5F_case_ (GGS_galgasDeclarationAST & ioArgument0,
                                           GGS__5B_lstring_5D_ & outArgument1,
                                           GGS__5B_switchExtractedValuesAST_5D_ & outArgument2,
                                           Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                        Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_instruction' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_instruction_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_instruction_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_instruction_ (GGS_galgasDeclarationAST & ioArgument0,
                                                  GGS_syntaxInstructionAST & outArgument1,
                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_instruction_list' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_instruction_5F_list_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_instruction_5F_list_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_instruction_5F_list_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS__5B_syntaxInstructionAST_5D_ & outArgument1,
                                                          Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_rule_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_rule_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_rule_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_rule_5F_declaration_ (GGS_galgasDeclarationAST & ioArgument0,
                                                          GGS__5B_syntaxRuleAST_5D_ & ioArgument1,
                                                          Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'syntax_rule_label' non terminal
//--- 'parse' label
 /*  public: virtual void nt_syntax_5F_rule_5F_label_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_syntax_5F_rule_5F_label_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_syntax_5F_rule_5F_label_ (GGS_galgasDeclarationAST & ioArgument0,
                                                    const GGS_lstring inArgument1,
                                                    GGS__5B_syntaxRuleLabelAST_5D_ & ioArgument2,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'template_delimitor' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_delimitor_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_delimitor_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_delimitor_ (GGS__5B_templateDelimitor_32_AST_5D_ & ioArgument0,
                                                  Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'template_replacement' non terminal
//--- 'parse' label
 /*  public: virtual void nt_template_5F_replacement_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_template_5F_replacement_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_template_5F_replacement_ (GGS__5B_templateReplacementAST_5D_ & ioArgument0,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
 /*  public: virtual void nt_term_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_term_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_ (GGS_galgasDeclarationAST & ioArgument0,
                                 GGS_semanticExpressionAST & outArgument1,
                                 Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'terminal_declaration' non terminal
//--- 'parse' label
 /*  public: virtual void nt_terminal_5F_declaration_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_terminal_5F_declaration_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_terminal_5F_declaration_ (GGS__5B_terminalDeclarationAST_5D_ & ioArgument0,
                                                    Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'terminal_instruction_indexing' non terminal
//--- 'parse' label
 /*  public: virtual void nt_terminal_5F_instruction_5F_indexing_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_terminal_5F_instruction_5F_indexing_ (GGS__5B__32_lstring_5D_ & outArgument0,
                                                                Lexique_galgasScanner_34_ * inCompiler) ;

//------------------------------------- 'type_definition' non terminal
//--- 'parse' label
 /*  public: virtual void nt_type_5F_definition_parse (Lexique_galgasScanner_34_ * inCompiler) ; */

//--- indexing
  public: virtual void nt_type_5F_definition_indexing (Lexique_galgasScanner_34_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_type_5F_definition_ (GGS_galgasDeclarationAST & ioArgument0,
                                               GGS_lstring & outArgument1,
                                               Lexique_galgasScanner_34_ * inCompiler) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_19 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_20 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_21 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_22 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_23 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_24 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ExpressionSyntax_25 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ParameterArgumentSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_19 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_20 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_21 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_22 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_23 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_24 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_25 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_26 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_27 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_28 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_29 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_30 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_31 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_32 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_33 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_34 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_35 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_36 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_37 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_38 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_39 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_40 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_41 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_42 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_43 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_44 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_45 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_46 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_47 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_48 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_49 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_50 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_51 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_52 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_53 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_54 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_55 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_56 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_57 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_58 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_59 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_60 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_61 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_62 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_InstructionsSyntax_63 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_19 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_20 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_21 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_22 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_23 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_24 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_25 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_26 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_27 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_28 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_29 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_30 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_31 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_32 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_33 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_34 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_35 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_36 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_37 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_38 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_39 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_40 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_41 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_42 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_43 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_44 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_45 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_46 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_47 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_48 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_49 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_50 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_51 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_52 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_53 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_54 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_55 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_56 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_57 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_58 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_59 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_60 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_61 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_62 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_63 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_64 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_65 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_66 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_67 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_68 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_69 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_70 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_DeclarationsSyntax_71 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_17 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_18 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_19 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_20 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_21 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_22 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_23 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_24 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_25 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_LexiqueComponentSyntax_26 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_OptionComponentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_OptionComponentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_OptionComponentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GuiComponentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_7 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_8 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_9 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_10 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_11 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_12 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_13 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_14 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_15 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_SyntaxComponentSyntax_16 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_1 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_2 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_3 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_4 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_5 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_GrammarComponentSyntax_6 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ProgramDeclarations_0 (Lexique_galgasScanner_34_ *) ;

  public: virtual int32_t select_galgas_34_ProgramDeclarations_1 (Lexique_galgasScanner_34_ *) ;
} ;

//--------------------------------------------------------------------------------------------------
