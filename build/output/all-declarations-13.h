#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionAST_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticInstructionAST_2E_weak (const class GGS_semanticInstructionAST & inSource) ;

  public: GGS_semanticInstructionAST_2E_weak & operator = (const class GGS_semanticInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticInstructionAST_2E_weak init_nil (void) {
    GGS_semanticInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticInstructionAST bang_semanticInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_semanticInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_logInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_logInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_logInstructionForGeneration (const class cPtr_logInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLogMessage (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mLogExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logInstructionForGeneration init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_semanticExpressionForGeneration & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @logInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_logInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void logInstructionForGeneration_init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_semanticExpressionForGeneration & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLogMessage ;
  public: GGS_semanticExpressionForGeneration mProperty_mLogExpression ;


//--- Default constructor
  public: cPtr_logInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_logInstructionForGeneration (const GGS_lstring & in_mLogMessage,
                                            const GGS_semanticExpressionForGeneration & in_mLogExpression,
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
// Phase 1: @logInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_logInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_logInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_logInstructionForGeneration_2E_weak (const class GGS_logInstructionForGeneration & inSource) ;

  public: GGS_logInstructionForGeneration_2E_weak & operator = (const class GGS_logInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_logInstructionForGeneration_2E_weak init_nil (void) {
    GGS_logInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_logInstructionForGeneration bang_logInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_logInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_logInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superMethodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superMethodCallInstructionAST (const class cPtr_superMethodCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMethodName (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superMethodCallInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_actualParameterListAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superMethodCallInstructionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @superMethodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_superMethodCallInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void superMethodCallInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_actualParameterListAST & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mMethodName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_superMethodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superMethodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mMethodName,
                                              const GGS_actualParameterListAST & in_mActualParameterList,
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
// Phase 1: @superMethodCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superMethodCallInstructionAST_2E_weak (const class GGS_superMethodCallInstructionAST & inSource) ;

  public: GGS_superMethodCallInstructionAST_2E_weak & operator = (const class GGS_superMethodCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superMethodCallInstructionAST_2E_weak init_nil (void) {
    GGS_superMethodCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superMethodCallInstructionAST bang_superMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superMethodCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_superMethodCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superMethodCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxSendInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxSendInstructionAST_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syntaxSendInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syntaxSendInstructionAST_2E_weak (const class GGS_syntaxSendInstructionAST & inSource) ;

  public: GGS_syntaxSendInstructionAST_2E_weak & operator = (const class GGS_syntaxSendInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syntaxSendInstructionAST_2E_weak init_nil (void) {
    GGS_syntaxSendInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syntaxSendInstructionAST bang_syntaxSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syntaxSendInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_syntaxSendInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxSendInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxSendInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxSendInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxSendInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_syntaxSendInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxSendInstructionForGeneration (const class cPtr_syntaxSendInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxSendInstructionForGeneration init_21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxSendInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxSendInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syntaxSendInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxSendInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxSendInstructionForGeneration_init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_syntaxSendInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxSendInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                   const GGS_semanticExpressionForGeneration & in_mExpression,
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
// Phase 1: @syntaxSendInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxSendInstructionForGeneration_2E_weak : public GGS_syntaxInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syntaxSendInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syntaxSendInstructionForGeneration_2E_weak (const class GGS_syntaxSendInstructionForGeneration & inSource) ;

  public: GGS_syntaxSendInstructionForGeneration_2E_weak & operator = (const class GGS_syntaxSendInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syntaxSendInstructionForGeneration_2E_weak init_nil (void) {
    GGS_syntaxSendInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syntaxSendInstructionForGeneration bang_syntaxSendInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syntaxSendInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_syntaxSendInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxSendInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxSendInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @errorInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_errorInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_errorInstructionAST (const class cPtr_errorInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mLocationExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mMessageExpression (void) const ;

  public: class GGS_lstringlist readProperty_mBuiltVariableList (void) const ;

  public: class GGS_fixitListAST readProperty_mFixitListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_errorInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                                   const class GGS_semanticExpressionAST & inOperand2,
                                                                   const class GGS_lstringlist & inOperand3,
                                                                   const class GGS_fixitListAST & inOperand4,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_errorInstructionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @errorInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_errorInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void errorInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_semanticExpressionAST & inOperand1,
                                                             const class GGS_semanticExpressionAST & inOperand2,
                                                             const class GGS_lstringlist & inOperand3,
                                                             const class GGS_fixitListAST & inOperand4,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mLocationExpression ;
  public: GGS_semanticExpressionAST mProperty_mMessageExpression ;
  public: GGS_lstringlist mProperty_mBuiltVariableList ;
  public: GGS_fixitListAST mProperty_mFixitListAST ;


//--- Default constructor
  public: cPtr_errorInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_errorInstructionAST (const GGS_location & in_mInstructionLocation,
                                    const GGS_semanticExpressionAST & in_mLocationExpression,
                                    const GGS_semanticExpressionAST & in_mMessageExpression,
                                    const GGS_lstringlist & in_mBuiltVariableList,
                                    const GGS_fixitListAST & in_mFixitListAST,
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
// Phase 1: @errorInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_errorInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_errorInstructionAST_2E_weak (const class GGS_errorInstructionAST & inSource) ;

  public: GGS_errorInstructionAST_2E_weak & operator = (const class GGS_errorInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_errorInstructionAST_2E_weak init_nil (void) {
    GGS_errorInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_errorInstructionAST bang_errorInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_errorInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_errorInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfDivEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfDivEqualExpressionInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfDivEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfDivEqualExpressionInstructionAST (const class cPtr_selfDivEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfDivEqualExpressionInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_semanticExpressionAST & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfDivEqualExpressionInstructionAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfDivEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfDivEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfDivEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfDivEqualExpressionInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_semanticExpressionAST & inOperand1,
                                                                  Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_selfDivEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfDivEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                     const GGS_semanticExpressionAST & in_mExpression,
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
// Phase 1: @selfDivEqualExpressionInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfDivEqualExpressionInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfDivEqualExpressionInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfDivEqualExpressionInstructionAST_2E_weak (const class GGS_selfDivEqualExpressionInstructionAST & inSource) ;

  public: GGS_selfDivEqualExpressionInstructionAST_2E_weak & operator = (const class GGS_selfDivEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfDivEqualExpressionInstructionAST_2E_weak init_nil (void) {
    GGS_selfDivEqualExpressionInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfDivEqualExpressionInstructionAST bang_selfDivEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfDivEqualExpressionInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_selfDivEqualExpressionInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfDivEqualExpressionInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfDivEqualExpressionInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfPlusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfPlusEqualExpressionInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfPlusEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfPlusEqualExpressionInstructionAST (const class cPtr_selfPlusEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfPlusEqualExpressionInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_semanticExpressionAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfPlusEqualExpressionInstructionAST extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPlusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfPlusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfPlusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfPlusEqualExpressionInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_selfPlusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfPlusEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mExpression,
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
// Phase 1: @selfPlusEqualExpressionInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfPlusEqualExpressionInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfPlusEqualExpressionInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfPlusEqualExpressionInstructionAST_2E_weak (const class GGS_selfPlusEqualExpressionInstructionAST & inSource) ;

  public: GGS_selfPlusEqualExpressionInstructionAST_2E_weak & operator = (const class GGS_selfPlusEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfPlusEqualExpressionInstructionAST_2E_weak init_nil (void) {
    GGS_selfPlusEqualExpressionInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfPlusEqualExpressionInstructionAST bang_selfPlusEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfPlusEqualExpressionInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_selfPlusEqualExpressionInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfPlusEqualExpressionInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPlusEqualExpressionInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfMinusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfMinusEqualExpressionInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfMinusEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfMinusEqualExpressionInstructionAST (const class cPtr_selfMinusEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfMinusEqualExpressionInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfMinusEqualExpressionInstructionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfMinusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfMinusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfMinusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfMinusEqualExpressionInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_selfMinusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfMinusEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                       const GGS_semanticExpressionAST & in_mExpression,
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
// Phase 1: @selfMinusEqualExpressionInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfMinusEqualExpressionInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfMinusEqualExpressionInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfMinusEqualExpressionInstructionAST_2E_weak (const class GGS_selfMinusEqualExpressionInstructionAST & inSource) ;

  public: GGS_selfMinusEqualExpressionInstructionAST_2E_weak & operator = (const class GGS_selfMinusEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfMinusEqualExpressionInstructionAST_2E_weak init_nil (void) {
    GGS_selfMinusEqualExpressionInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfMinusEqualExpressionInstructionAST bang_selfMinusEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfMinusEqualExpressionInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_selfMinusEqualExpressionInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfMinusEqualExpressionInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfMinusEqualExpressionInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfMulEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfMulEqualExpressionInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfMulEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfMulEqualExpressionInstructionAST (const class cPtr_selfMulEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfMulEqualExpressionInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_semanticExpressionAST & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfMulEqualExpressionInstructionAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfMulEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfMulEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfMulEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfMulEqualExpressionInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_semanticExpressionAST & inOperand1,
                                                                  Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_selfMulEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfMulEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                     const GGS_semanticExpressionAST & in_mExpression,
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
// Phase 1: @selfMulEqualExpressionInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfMulEqualExpressionInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfMulEqualExpressionInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfMulEqualExpressionInstructionAST_2E_weak (const class GGS_selfMulEqualExpressionInstructionAST & inSource) ;

  public: GGS_selfMulEqualExpressionInstructionAST_2E_weak & operator = (const class GGS_selfMulEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfMulEqualExpressionInstructionAST_2E_weak init_nil (void) {
    GGS_selfMulEqualExpressionInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfMulEqualExpressionInstructionAST bang_selfMulEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfMulEqualExpressionInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_selfMulEqualExpressionInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfMulEqualExpressionInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfMulEqualExpressionInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfPlusEqualElementsInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfPlusEqualElementsInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfPlusEqualElementsInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfPlusEqualElementsInstructionAST (const class cPtr_selfPlusEqualElementsInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_actualOutputArgumentList readProperty_mExpressions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfPlusEqualElementsInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_actualOutputArgumentList & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfPlusEqualElementsInstructionAST extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPlusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfPlusEqualElementsInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfPlusEqualElementsInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfPlusEqualElementsInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_actualOutputArgumentList & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_actualOutputArgumentList mProperty_mExpressions ;


//--- Default constructor
  public: cPtr_selfPlusEqualElementsInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfPlusEqualElementsInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_actualOutputArgumentList & in_mExpressions,
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
// Phase 1: @selfPlusEqualElementsInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfPlusEqualElementsInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfPlusEqualElementsInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfPlusEqualElementsInstructionAST_2E_weak (const class GGS_selfPlusEqualElementsInstructionAST & inSource) ;

  public: GGS_selfPlusEqualElementsInstructionAST_2E_weak & operator = (const class GGS_selfPlusEqualElementsInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfPlusEqualElementsInstructionAST_2E_weak init_nil (void) {
    GGS_selfPlusEqualElementsInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfPlusEqualElementsInstructionAST bang_selfPlusEqualElementsInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfPlusEqualElementsInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_selfPlusEqualElementsInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfPlusEqualElementsInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPlusEqualElementsInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_procCallInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_procCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_procCallInstructionAST (const class cPtr_procCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procCallInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_actualParameterListAST & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procCallInstructionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @procCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_procCallInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void procCallInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_lstring & inOperand1,
                                                        const class GGS_actualParameterListAST & inOperand2,
                                                        Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_procCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_procCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                       const GGS_lstring & in_mRoutineName,
                                       const GGS_actualParameterListAST & in_mActualParameterList,
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
// Phase 1: @procCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_procCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_procCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_procCallInstructionAST_2E_weak (const class GGS_procCallInstructionAST & inSource) ;

  public: GGS_procCallInstructionAST_2E_weak & operator = (const class GGS_procCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_procCallInstructionAST_2E_weak init_nil (void) {
    GGS_procCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_procCallInstructionAST bang_procCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_procCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_procCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@opAssignmentOperator features' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_typeFeatures extensionGetter_features (const class GGS_opAssignmentOperator & inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @opAssignExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_opAssignExpressionInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_opAssignExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_opAssignExpressionInstructionAST (const class cPtr_opAssignExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_opAssignmentOperator readProperty_mOperator (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_opAssignExpressionInstructionAST init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    const class GGS_lstring & inOperand2,
                                                                                    const class GGS_lstringlist & inOperand3,
                                                                                    const class GGS_opAssignmentOperator & inOperand4,
                                                                                    const class GGS_semanticExpressionAST & inOperand5,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_opAssignExpressionInstructionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_opAssignExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @opAssignExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_opAssignExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void opAssignExpressionInstructionAST_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS_lstringlist & inOperand3,
                                                                              const class GGS_opAssignmentOperator & inOperand4,
                                                                              const class GGS_semanticExpressionAST & inOperand5,
                                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mPrefixedBySelf ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_opAssignmentOperator mProperty_mOperator ;
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_opAssignExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_opAssignExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                 const GGS_bool & in_mPrefixedBySelf,
                                                 const GGS_lstring & in_mReceiverName,
                                                 const GGS_lstringlist & in_mStructAttributeList,
                                                 const GGS_opAssignmentOperator & in_mOperator,
                                                 const GGS_semanticExpressionAST & in_mExpression,
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
// Phase 1: @opAssignExpressionInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_opAssignExpressionInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_opAssignExpressionInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_opAssignExpressionInstructionAST_2E_weak (const class GGS_opAssignExpressionInstructionAST & inSource) ;

  public: GGS_opAssignExpressionInstructionAST_2E_weak & operator = (const class GGS_opAssignExpressionInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_opAssignExpressionInstructionAST_2E_weak init_nil (void) {
    GGS_opAssignExpressionInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_opAssignExpressionInstructionAST bang_opAssignExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_opAssignExpressionInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_opAssignExpressionInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_opAssignExpressionInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_opAssignExpressionInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @plusEqualElementsInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_plusEqualElementsInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_plusEqualElementsInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_plusEqualElementsInstructionAST (const class cPtr_plusEqualElementsInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_actualOutputArgumentList readProperty_mExpressions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_plusEqualElementsInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_bool & inOperand1,
                                                                               const class GGS_lstring & inOperand2,
                                                                               const class GGS_lstringlist & inOperand3,
                                                                               const class GGS_actualOutputArgumentList & inOperand4,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_plusEqualElementsInstructionAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @plusEqualElementsInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_plusEqualElementsInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void plusEqualElementsInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_lstringlist & inOperand3,
                                                                         const class GGS_actualOutputArgumentList & inOperand4,
                                                                         Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mPrefixedBySelf ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_actualOutputArgumentList mProperty_mExpressions ;


//--- Default constructor
  public: cPtr_plusEqualElementsInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_plusEqualElementsInstructionAST (const GGS_location & in_mInstructionLocation,
                                                const GGS_bool & in_mPrefixedBySelf,
                                                const GGS_lstring & in_mReceiverName,
                                                const GGS_lstringlist & in_mStructAttributeList,
                                                const GGS_actualOutputArgumentList & in_mExpressions,
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
// Phase 1: @plusEqualElementsInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_plusEqualElementsInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_plusEqualElementsInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_plusEqualElementsInstructionAST_2E_weak (const class GGS_plusEqualElementsInstructionAST & inSource) ;

  public: GGS_plusEqualElementsInstructionAST_2E_weak & operator = (const class GGS_plusEqualElementsInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_plusEqualElementsInstructionAST_2E_weak init_nil (void) {
    GGS_plusEqualElementsInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_plusEqualElementsInstructionAST bang_plusEqualElementsInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_plusEqualElementsInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_plusEqualElementsInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_plusEqualElementsInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusEqualElementsInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @plusPlusEqualElementInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_plusPlusEqualElementInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_plusPlusEqualElementInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_plusPlusEqualElementInstructionAST (const class cPtr_plusPlusEqualElementInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_plusPlusEqualElementInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_bool & inOperand1,
                                                                                  const class GGS_lstring & inOperand2,
                                                                                  const class GGS_lstringlist & inOperand3,
                                                                                  const class GGS_semanticExpressionAST & inOperand4,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_plusPlusEqualElementInstructionAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusPlusEqualElementInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusPlusEqualElementInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @plusPlusEqualElementInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_plusPlusEqualElementInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void plusPlusEqualElementInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_bool & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_lstringlist & inOperand3,
                                                                            const class GGS_semanticExpressionAST & inOperand4,
                                                                            Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mPrefixedBySelf ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_plusPlusEqualElementInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_plusPlusEqualElementInstructionAST (const GGS_location & in_mInstructionLocation,
                                                   const GGS_bool & in_mPrefixedBySelf,
                                                   const GGS_lstring & in_mReceiverName,
                                                   const GGS_lstringlist & in_mStructAttributeList,
                                                   const GGS_semanticExpressionAST & in_mExpression,
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
// Phase 1: @plusPlusEqualElementInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_plusPlusEqualElementInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_plusPlusEqualElementInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_plusPlusEqualElementInstructionAST_2E_weak (const class GGS_plusPlusEqualElementInstructionAST & inSource) ;

  public: GGS_plusPlusEqualElementInstructionAST_2E_weak & operator = (const class GGS_plusPlusEqualElementInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_plusPlusEqualElementInstructionAST_2E_weak init_nil (void) {
    GGS_plusPlusEqualElementInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_plusPlusEqualElementInstructionAST bang_plusPlusEqualElementInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_plusPlusEqualElementInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_plusPlusEqualElementInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_plusPlusEqualElementInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusPlusEqualElementInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusPlusEqualElementInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @warningInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_warningInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_warningInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_warningInstructionAST (const class cPtr_warningInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mLocationExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mMessageExpression (void) const ;

  public: class GGS_fixitListAST readProperty_mFixitListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_warningInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_semanticExpressionAST & inOperand1,
                                                                 const class GGS_semanticExpressionAST & inOperand2,
                                                                 const class GGS_fixitListAST & inOperand3,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_warningInstructionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_warningInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @warningInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_warningInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void warningInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                           const class GGS_fixitListAST & inOperand3,
                                                           Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mLocationExpression ;
  public: GGS_semanticExpressionAST mProperty_mMessageExpression ;
  public: GGS_fixitListAST mProperty_mFixitListAST ;


//--- Default constructor
  public: cPtr_warningInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_warningInstructionAST (const GGS_location & in_mInstructionLocation,
                                      const GGS_semanticExpressionAST & in_mLocationExpression,
                                      const GGS_semanticExpressionAST & in_mMessageExpression,
                                      const GGS_fixitListAST & in_mFixitListAST,
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
// Phase 1: @warningInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_warningInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_warningInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_warningInstructionAST_2E_weak (const class GGS_warningInstructionAST & inSource) ;

  public: GGS_warningInstructionAST_2E_weak & operator = (const class GGS_warningInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_warningInstructionAST_2E_weak init_nil (void) {
    GGS_warningInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_warningInstructionAST bang_warningInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_warningInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_warningInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_warningInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_warningInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@CommaSeparatedExpressionList enterExpressionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExpressionListInSemanticContext (const class GGS_CommaSeparatedExpressionList inObject,
                                                           class GGS_unifiedTypeMap & io_ioTypeMap,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ifTestListForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInstruction (const class GGS_ifTestListForGeneration inObject,
                                          class GGS_stringset & io_ioInclusionSet,
                                          class GGS_uint & io_ioTemporaryVariableIndex,
                                          class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                          class GGS_string & io_ioGeneratedCode,
                                          class GGS_string & out_outTestVar,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInFileInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInFileInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_grammarInFileInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInFileInstructionAST (const class cPtr_grammarInFileInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GGS_lstring readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GGS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInFileInstructionAST init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_semanticExpressionAST & inOperand3,
                                                                                   const class GGS_location & inOperand4,
                                                                                   const class GGS_actualParameterListAST & inOperand5,
                                                                                   const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInFileInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInFileInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInFileInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInFileInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInFileInstructionAST_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             const class GGS_semanticExpressionAST & inOperand3,
                                                                             const class GGS_location & inOperand4,
                                                                             const class GGS_actualParameterListAST & inOperand5,
                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGrammarComponentName ;
  public: GGS_lstring mProperty_mLabelName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GGS_location mProperty_mEndOfSourceExpression ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;


//--- Default constructor
  public: cPtr_grammarInFileInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInFileInstructionAST (const GGS_location & in_mInstructionLocation,
                                            const GGS_lstring & in_mGrammarComponentName,
                                            const GGS_lstring & in_mLabelName,
                                            const GGS_semanticExpressionAST & in_mSourceExpression,
                                            const GGS_location & in_mEndOfSourceExpression,
                                            const GGS_actualParameterListAST & in_mActualParameterList,
                                            const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
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
// Phase 1: @grammarInFileInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInFileInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInFileInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInFileInstructionAST_2E_weak (const class GGS_grammarInFileInstructionAST & inSource) ;

  public: GGS_grammarInFileInstructionAST_2E_weak & operator = (const class GGS_grammarInFileInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInFileInstructionAST_2E_weak init_nil (void) {
    GGS_grammarInFileInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInFileInstructionAST bang_grammarInFileInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInFileInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_grammarInFileInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInFileInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInFileInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInStringInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInStringInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_grammarInStringInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInStringInstructionAST (const class cPtr_grammarInStringInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GGS_lstring readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GGS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mNameExpression (void) const ;

  public: class GGS_location readProperty_mEndOfNameExpression (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInStringInstructionAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_lstring & inOperand2,
                                                                                             const class GGS_semanticExpressionAST & inOperand3,
                                                                                             const class GGS_location & inOperand4,
                                                                                             const class GGS_semanticExpressionAST & inOperand5,
                                                                                             const class GGS_location & inOperand6,
                                                                                             const class GGS_actualParameterListAST & inOperand7,
                                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInStringInstructionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInStringInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInStringInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInStringInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInStringInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_semanticExpressionAST & inOperand3,
                                                                                       const class GGS_location & inOperand4,
                                                                                       const class GGS_semanticExpressionAST & inOperand5,
                                                                                       const class GGS_location & inOperand6,
                                                                                       const class GGS_actualParameterListAST & inOperand7,
                                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8,
                                                                                       Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGrammarComponentName ;
  public: GGS_lstring mProperty_mLabelName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GGS_location mProperty_mEndOfSourceExpression ;
  public: GGS_semanticExpressionAST mProperty_mNameExpression ;
  public: GGS_location mProperty_mEndOfNameExpression ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;


//--- Default constructor
  public: cPtr_grammarInStringInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInStringInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mGrammarComponentName,
                                              const GGS_lstring & in_mLabelName,
                                              const GGS_semanticExpressionAST & in_mSourceExpression,
                                              const GGS_location & in_mEndOfSourceExpression,
                                              const GGS_semanticExpressionAST & in_mNameExpression,
                                              const GGS_location & in_mEndOfNameExpression,
                                              const GGS_actualParameterListAST & in_mActualParameterList,
                                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
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
// Phase 1: @grammarInStringInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInStringInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInStringInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInStringInstructionAST_2E_weak (const class GGS_grammarInStringInstructionAST & inSource) ;

  public: GGS_grammarInStringInstructionAST_2E_weak & operator = (const class GGS_grammarInStringInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInStringInstructionAST_2E_weak init_nil (void) {
    GGS_grammarInStringInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInStringInstructionAST bang_grammarInStringInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInStringInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_grammarInStringInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInStringInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInStringInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithVariantAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithVariantAST (const class cPtr_loopInstructionWithVariantAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mVariantExpression (void) const ;

  public: class GGS_location readProperty_mEndOfVariantExpression (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mFirstInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfFirstInstructions (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLoopExpression (void) const ;

  public: class GGS_location readProperty_mEndOfLoopExpression (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mSecondInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfSecondInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfLoopInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithVariantAST init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                 const class GGS_semanticExpressionAST & inOperand1,
                                                                                                 const class GGS_location & inOperand2,
                                                                                                 const class GGS_semanticInstructionListAST & inOperand3,
                                                                                                 const class GGS_location & inOperand4,
                                                                                                 const class GGS_semanticExpressionAST & inOperand5,
                                                                                                 const class GGS_location & inOperand6,
                                                                                                 const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                 const class GGS_location & inOperand8,
                                                                                                 const class GGS_location & inOperand9,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithVariantAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithVariantAST class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithVariantAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                                                           const class GGS_location & inOperand2,
                                                                                           const class GGS_semanticInstructionListAST & inOperand3,
                                                                                           const class GGS_location & inOperand4,
                                                                                           const class GGS_semanticExpressionAST & inOperand5,
                                                                                           const class GGS_location & inOperand6,
                                                                                           const class GGS_semanticInstructionListAST & inOperand7,
                                                                                           const class GGS_location & inOperand8,
                                                                                           const class GGS_location & inOperand9,
                                                                                           Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mVariantExpression ;
  public: GGS_location mProperty_mEndOfVariantExpression ;
  public: GGS_semanticInstructionListAST mProperty_mFirstInstructions ;
  public: GGS_location mProperty_mEndOfFirstInstructions ;
  public: GGS_semanticExpressionAST mProperty_mLoopExpression ;
  public: GGS_location mProperty_mEndOfLoopExpression ;
  public: GGS_semanticInstructionListAST mProperty_mSecondInstructions ;
  public: GGS_location mProperty_mEndOfSecondInstructions ;
  public: GGS_location mProperty_mEndOfLoopInstruction ;


//--- Default constructor
  public: cPtr_loopInstructionWithVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithVariantAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionAST & in_mVariantExpression,
                                              const GGS_location & in_mEndOfVariantExpression,
                                              const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                              const GGS_location & in_mEndOfFirstInstructions,
                                              const GGS_semanticExpressionAST & in_mLoopExpression,
                                              const GGS_location & in_mEndOfLoopExpression,
                                              const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                              const GGS_location & in_mEndOfSecondInstructions,
                                              const GGS_location & in_mEndOfLoopInstruction,
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
// Phase 1: @loopInstructionWithVariantAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithVariantAST_2E_weak (const class GGS_loopInstructionWithVariantAST & inSource) ;

  public: GGS_loopInstructionWithVariantAST_2E_weak & operator = (const class GGS_loopInstructionWithVariantAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithVariantAST_2E_weak init_nil (void) {
    GGS_loopInstructionWithVariantAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithVariantAST bang_loopInstructionWithVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithVariantAST unwrappedValue (void) const ;

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
  public: static GGS_loopInstructionWithVariantAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithVariantAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @methodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_methodCallInstructionAST (const class cPtr_methodCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GGS_lstring readProperty_mMethodName (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_methodCallInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_actualParameterListAST & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_methodCallInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @methodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_methodCallInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void methodCallInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_semanticExpressionAST & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_actualParameterListAST & inOperand3,
                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GGS_lstring mProperty_mMethodName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_methodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_methodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_semanticExpressionAST & in_mReceiverExpression,
                                         const GGS_lstring & in_mMethodName,
                                         const GGS_actualParameterListAST & in_mActualParameterList,
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
// Phase 1: @methodCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_methodCallInstructionAST_2E_weak (const class GGS_methodCallInstructionAST & inSource) ;

  public: GGS_methodCallInstructionAST_2E_weak & operator = (const class GGS_methodCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_methodCallInstructionAST_2E_weak init_nil (void) {
    GGS_methodCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_methodCallInstructionAST bang_methodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_methodCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_methodCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_methodCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_ifInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifInstructionAST (const class cPtr_ifInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_CommaSeparatedExpressionList readProperty_mExpressions (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_m_5F_then_5F_instructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_then_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_m_5F_else_5F_instructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_if_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifInstructionAST init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_CommaSeparatedExpressionList & inOperand1,
                                                                    const class GGS_semanticInstructionListAST & inOperand2,
                                                                    const class GGS_location & inOperand3,
                                                                    const class GGS_semanticInstructionListAST & inOperand4,
                                                                    const class GGS_location & inOperand5,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ifInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifInstructionAST_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_CommaSeparatedExpressionList & inOperand1,
                                                              const class GGS_semanticInstructionListAST & inOperand2,
                                                              const class GGS_location & inOperand3,
                                                              const class GGS_semanticInstructionListAST & inOperand4,
                                                              const class GGS_location & inOperand5,
                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_CommaSeparatedExpressionList mProperty_mExpressions ;
  public: GGS_semanticInstructionListAST mProperty_m_5F_then_5F_instructionList ;
  public: GGS_location mProperty_mEndOf_5F_then_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_m_5F_else_5F_instructionList ;
  public: GGS_location mProperty_mEndOf_5F_if_5F_instruction ;


//--- Default constructor
  public: cPtr_ifInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifInstructionAST (const GGS_location & in_mInstructionLocation,
                                 const GGS_CommaSeparatedExpressionList & in_mExpressions,
                                 const GGS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                 const GGS_location & in_mEndOf_5F_then_5F_branch,
                                 const GGS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                 const GGS_location & in_mEndOf_5F_if_5F_instruction,
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
// Phase 1: @ifInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifInstructionAST_2E_weak (const class GGS_ifInstructionAST & inSource) ;

  public: GGS_ifInstructionAST_2E_weak & operator = (const class GGS_ifInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifInstructionAST_2E_weak init_nil (void) {
    GGS_ifInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifInstructionAST bang_ifInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_ifInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_switchInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_switchInstructionAST (const class cPtr_switchInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mSwitchExpression (void) const ;

  public: class GGS_location readProperty_mEndOfSwitchExpression (void) const ;

  public: class GGS_switchBranchesAST readProperty_mBranches (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_switch_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                                    const class GGS_location & inOperand2,
                                                                    const class GGS_switchBranchesAST & inOperand3,
                                                                    const class GGS_location & inOperand4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchInstructionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_switchInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void switchInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_semanticExpressionAST & inOperand1,
                                                              const class GGS_location & inOperand2,
                                                              const class GGS_switchBranchesAST & inOperand3,
                                                              const class GGS_location & inOperand4,
                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mSwitchExpression ;
  public: GGS_location mProperty_mEndOfSwitchExpression ;
  public: GGS_switchBranchesAST mProperty_mBranches ;
  public: GGS_location mProperty_mEndOf_5F_switch_5F_instruction ;


//--- Default constructor
  public: cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_switchInstructionAST (const GGS_location & in_mInstructionLocation,
                                     const GGS_semanticExpressionAST & in_mSwitchExpression,
                                     const GGS_location & in_mEndOfSwitchExpression,
                                     const GGS_switchBranchesAST & in_mBranches,
                                     const GGS_location & in_mEndOf_5F_switch_5F_instruction,
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
// Phase 1: @switchInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_switchInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_switchInstructionAST_2E_weak (const class GGS_switchInstructionAST & inSource) ;

  public: GGS_switchInstructionAST_2E_weak & operator = (const class GGS_switchInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_switchInstructionAST_2E_weak init_nil (void) {
    GGS_switchInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_switchInstructionAST bang_switchInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_switchInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_switchInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionAST (const class cPtr_forInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_forInstructionEnumeratedObjectListAST readProperty_mEnumeratedObjectList (void) const ;

  public: class GGS_lstring readProperty_mIndexVariableName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mWhileExpression (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_while_5F_expression (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mBeforeInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_before_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mBetweenInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_between_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mDoInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_do_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mAfterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_after_5F_branch (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_foreach_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionAST init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                     const class GGS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                     const class GGS_semanticExpressionAST & inOperand3,
                                                                                                     const class GGS_location & inOperand4,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                     const class GGS_location & inOperand6,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                     const class GGS_location & inOperand8,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand9,
                                                                                                     const class GGS_location & inOperand10,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand11,
                                                                                                     const class GGS_location & inOperand12,
                                                                                                     const class GGS_location & inOperand13,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forInstructionAST_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               const class GGS_semanticExpressionAST & inOperand3,
                                                                                               const class GGS_location & inOperand4,
                                                                                               const class GGS_semanticInstructionListAST & inOperand5,
                                                                                               const class GGS_location & inOperand6,
                                                                                               const class GGS_semanticInstructionListAST & inOperand7,
                                                                                               const class GGS_location & inOperand8,
                                                                                               const class GGS_semanticInstructionListAST & inOperand9,
                                                                                               const class GGS_location & inOperand10,
                                                                                               const class GGS_semanticInstructionListAST & inOperand11,
                                                                                               const class GGS_location & inOperand12,
                                                                                               const class GGS_location & inOperand13,
                                                                                               Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_forInstructionEnumeratedObjectListAST mProperty_mEnumeratedObjectList ;
  public: GGS_lstring mProperty_mIndexVariableName ;
  public: GGS_semanticExpressionAST mProperty_mWhileExpression ;
  public: GGS_location mProperty_mEndOf_5F_while_5F_expression ;
  public: GGS_semanticInstructionListAST mProperty_mBeforeInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_before_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_mBetweenInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_between_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_mDoInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_do_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_mAfterInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_after_5F_branch ;
  public: GGS_location mProperty_mEndOf_5F_foreach_5F_instruction ;


//--- Default constructor
  public: cPtr_forInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionAST (const GGS_location & in_mInstructionLocation,
                                  const GGS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                  const GGS_lstring & in_mIndexVariableName,
                                  const GGS_semanticExpressionAST & in_mWhileExpression,
                                  const GGS_location & in_mEndOf_5F_while_5F_expression,
                                  const GGS_semanticInstructionListAST & in_mBeforeInstructionList,
                                  const GGS_location & in_mEndOf_5F_before_5F_branch,
                                  const GGS_semanticInstructionListAST & in_mBetweenInstructionList,
                                  const GGS_location & in_mEndOf_5F_between_5F_branch,
                                  const GGS_semanticInstructionListAST & in_mDoInstructionList,
                                  const GGS_location & in_mEndOf_5F_do_5F_branch,
                                  const GGS_semanticInstructionListAST & in_mAfterInstructionList,
                                  const GGS_location & in_mEndOf_5F_after_5F_branch,
                                  const GGS_location & in_mEndOf_5F_foreach_5F_instruction,
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
// Phase 1: @forInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionAST_2E_weak (const class GGS_forInstructionAST & inSource) ;

  public: GGS_forInstructionAST_2E_weak & operator = (const class GGS_forInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionAST_2E_weak init_nil (void) {
    GGS_forInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionAST bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_forInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;

